/*
 * XREFs of HvlpSlowFlushListTb @ 0x1401EBED8
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1401EBCA8 (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpCopyFlushVaList @ 0x1401EB948 (HvlpCopyFlushVaList.c)
 *     VslFlushSecureAddressSpace @ 0x1401ECF64 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1401EDC10 (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTb(__int64 a1, char a2, unsigned int a3, __int64 *a4, unsigned int a5)
{
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // xmm1_8
  __int16 v13; // ax
  __int64 v14; // xmm1_8
  PHYSICAL_ADDRESS v16[4]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v17; // [rsp+48h] [rbp-60h] BYREF

  v9 = 1;
  v10 = HvlpAcquireHypercallPage(v16, 1, (__int64)&v17, 24LL);
  v11 = v10;
  if ( a5 > 0x1FD || (v16[0].LowPart & 2) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v10 = *(_OWORD *)a1;
    *(_QWORD *)(v10 + 16) = v14;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v10 = *(_OWORD *)a1;
    *(_QWORD *)(v10 + 16) = v12;
    v13 = HvlpFlags;
    if ( (HvlpFlags & 0x2000) == 0 )
    {
      *(_QWORD *)(v11 + 8) |= 8uLL;
      v13 = HvlpFlags;
    }
    HvlpCopyFlushVaList(a3, a4, (v13 & 0x2000) != 0, (__int64 *)(v11 + 24));
    v9 = 0;
  }
  if ( a2 )
  {
    if ( v9 )
      VslFlushSecureAddressSpace();
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VslSlowFlushSecureRangeList)(
        (PHYSICAL_ADDRESS)v16[3].QuadPart,
        v11,
        a5,
        24LL);
  }
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v16);
}
