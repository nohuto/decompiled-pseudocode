/*
 * XREFs of HvlpSlowFlushListTb @ 0x140159940
 * Callers:
 *     HvlpFlushRangeListTb @ 0x140159DCC (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HvlpCopyFlushVaList @ 0x140159FE4 (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VslFlushSecureAddressSpace @ 0x14022F78C (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1402305B0 (VslSlowFlushSecureRangeList.c)
 */

__int64 __fastcall HvlpSlowFlushListTb(__int64 a1, char a2, char a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // xmm1_8
  __int64 v15; // xmm1_8
  _BYTE v17[24]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+48h] [rbp-70h]
  _BYTE v19[48]; // [rsp+50h] [rbp-68h] BYREF

  v9 = 1;
  v10 = HvlpAcquireHypercallPage(v17, 1LL, v19, 24LL);
  v11 = v10;
  if ( a6 > 0x1FD || (v17[0] & 2) != 0 )
  {
    if ( a3 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v10 = *(_OWORD *)a1;
      *(_QWORD *)(v10 + 16) = v15;
    }
  }
  else
  {
    v12 = (unsigned int)HvlpFlags >> 13;
    LOBYTE(v12) = (HvlpFlags & 0x2000) != 0;
    HvlpCopyFlushVaList(a4, a5, v12, v10 + 24);
    if ( a3 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v11 = *(_OWORD *)a1;
      *(_QWORD *)(v11 + 16) = v13;
      if ( (HvlpFlags & 0x2000) == 0 )
        *(_QWORD *)(v11 + 8) |= 8uLL;
    }
    v9 = 0;
  }
  if ( a2 )
  {
    if ( v9 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(v18, v11, a6, 24LL);
  }
  if ( a3 )
    HvcallCodeVa();
  return HvlpReleaseHypercallPage(v17);
}
