/*
 * XREFs of HvlSetHpetConfig @ 0x14022A690
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSetHpetConfig(__int64 a1, int a2, __int64 a3, char a4, _OWORD *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rax
  __int16 v11; // bx
  __int64 result; // rax
  _DWORD *v13; // rbx
  _OWORD *v14; // rdi
  PHYSICAL_ADDRESS v15[3]; // [rsp+28h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v16[3]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v17[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v18[2064]; // [rsp+78h] [rbp-90h] BYREF

  v9 = 0;
  while ( 1 )
  {
    v10 = HvlpAcquireHypercallPage(v15, 1, (__int64)v17, 40LL);
    *(_DWORD *)v10 = 6;
    *(_QWORD *)(v10 + 8) = a1;
    *(_DWORD *)(v10 + 16) = a2;
    *(_QWORD *)(v10 + 24) = a3;
    *(_BYTE *)(v10 + 32) = a4;
    v11 = HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v15);
    if ( v11 != 11 )
      break;
    result = HvlpDepositPages(0);
    if ( (int)result < 0 )
      goto LABEL_8;
  }
  if ( v11 )
    return 3221225473LL;
  result = 0LL;
LABEL_8:
  if ( (int)result >= 0 )
  {
    v13 = (_DWORD *)HvlpAcquireHypercallPage(v15, 1, (__int64)v17, 8LL);
    v14 = (_OWORD *)HvlpAcquireHypercallPage(v16, 2, (__int64)v18, 1032LL);
    *v13 = 7;
    if ( (unsigned __int16)HvcallCodeVa() )
      v9 = -1073741823;
    else
      *a5 = *v14;
    HvlpReleaseHypercallPage((__int64)v15);
    HvlpReleaseHypercallPage((__int64)v16);
    return v9;
  }
  return result;
}
