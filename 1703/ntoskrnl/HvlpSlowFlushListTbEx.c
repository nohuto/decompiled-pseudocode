/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x1401EC028
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1401EBD34 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401EA2A0 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpCopyFlushVaList @ 0x1401EB948 (HvlpCopyFlushVaList.c)
 *     VslFlushSecureAddressSpace @ 0x1401ECF64 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1401EDC10 (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTbEx(_QWORD *a1, __int64 a2, char a3, unsigned int a4, __int64 *a5, unsigned int a6)
{
  __int64 v6; // rbp
  char v11; // si
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int16 v14; // cx
  PHYSICAL_ADDRESS v16[4]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v17[64]; // [rsp+48h] [rbp-70h] BYREF

  LODWORD(v6) = 0;
  v11 = 1;
  v12 = (_QWORD *)HvlpAcquireHypercallPage(v16, 1, (__int64)v17, 32LL);
  v13 = v12;
  if ( (v16[0].LowPart & 2) != 0 )
  {
    *v12 = *a1;
    v12[1] = a1[1];
    v12[3] = 0LL;
    v12[2] = 1LL;
  }
  else
  {
    *v12 = *a1;
    v12[1] = a1[1];
    v6 = (unsigned int)HvlpAffinityToHvProcessorSet(a2, v12 + 2, 0xFE0u) + 32;
    if ( v6 + 8 * (unsigned __int64)a6 <= 0x1000 )
    {
      v14 = HvlpFlags;
      if ( (HvlpFlags & 0x2000) == 0 )
      {
        v13[1] |= 8uLL;
        v14 = HvlpFlags;
      }
      HvlpCopyFlushVaList(a4, a5, (v14 & 0x2000) != 0, (_QWORD *)((char *)v13 + v6));
      v11 = 0;
    }
  }
  if ( a3 )
  {
    if ( v11 )
      VslFlushSecureAddressSpace();
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VslSlowFlushSecureRangeList)(
        (PHYSICAL_ADDRESS)v16[3].QuadPart,
        v13,
        a6,
        (unsigned int)v6);
  }
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v16);
}
