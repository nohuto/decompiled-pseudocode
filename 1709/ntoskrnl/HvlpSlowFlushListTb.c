/*
 * XREFs of HvlpSlowFlushListTb @ 0x140140D44
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1401411D8 (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     HvlpCopyFlushVaList @ 0x1401413A0 (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VslFlushSecureAddressSpace @ 0x1401F1DD4 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1401F2A90 (VslSlowFlushSecureRangeList.c)
 */

__int64 __fastcall HvlpSlowFlushListTb(__int64 a1, char a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // xmm1_8
  __int64 v13; // r8
  __int64 v15; // xmm1_8
  _BYTE v16[24]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+48h] [rbp-60h] BYREF

  v9 = 1;
  v10 = HvlpAcquireHypercallPage(v16, 1LL, &v18);
  v11 = v10;
  if ( a5 > 0x1FD || (v16[0] & 2) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v10 = *(_OWORD *)a1;
    *(_QWORD *)(v10 + 16) = v15;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v10 = *(_OWORD *)a1;
    *(_QWORD *)(v10 + 16) = v12;
    if ( (HvlpFlags & 0x2000) == 0 )
      *(_QWORD *)(v10 + 8) |= 8uLL;
    v13 = (unsigned int)HvlpFlags >> 13;
    LOBYTE(v13) = (HvlpFlags & 0x2000) != 0;
    HvlpCopyFlushVaList(a3, a4, v13, v10 + 24);
    v9 = 0;
  }
  if ( a2 )
  {
    if ( v9 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(v17, v11, a5, 24LL);
  }
  HvcallCodeVa();
  return HvlpReleaseHypercallPage(v16);
}
