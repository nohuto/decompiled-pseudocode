/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x1401F0E2C
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1401F0CD4 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     HvlpCopyFlushVaList @ 0x1401413A0 (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401EF4D0 (HvlpAffinityToHvProcessorSet.c)
 *     VslFlushSecureAddressSpace @ 0x1401F1DD4 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1401F2A90 (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTbEx(
        _QWORD *a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned int a6)
{
  __int64 v6; // rbp
  char v11; // si
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  PHYSICAL_ADDRESS v15[4]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v16[64]; // [rsp+48h] [rbp-70h] BYREF

  LODWORD(v6) = 0;
  v11 = 1;
  v12 = (_QWORD *)HvlpAcquireHypercallPage(v15, 1, (__int64)v16, 32LL);
  v13 = v12;
  if ( (v15[0].LowPart & 2) != 0 )
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
      if ( (HvlpFlags & 0x2000) == 0 )
        v13[1] |= 8uLL;
      HvlpCopyFlushVaList(a4, a5, (HvlpFlags & 0x2000) != 0, (_QWORD *)((char *)v13 + v6));
      v11 = 0;
    }
  }
  if ( a3 )
  {
    if ( v11 )
      VslFlushSecureAddressSpace();
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VslSlowFlushSecureRangeList)(
        (PHYSICAL_ADDRESS)v15[3].QuadPart,
        v13,
        a6,
        (unsigned int)v6);
  }
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v15);
}
