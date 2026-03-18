/*
 * XREFs of HvlSetHpetConfig @ 0x1401ECE60
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSetHpetConfig(__int64 a1, int a2, __int64 a3, char a4, _OWORD *a5)
{
  __int64 v9; // rax
  __int16 v10; // bx
  __int64 result; // rax
  _DWORD *v12; // rbx
  _OWORD *v13; // rdi
  __int16 v14; // ax
  unsigned int v15; // ebx
  PHYSICAL_ADDRESS v16[3]; // [rsp+28h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v17[3]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v18[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v19[2064]; // [rsp+78h] [rbp-90h] BYREF

  while ( 1 )
  {
    v9 = HvlpAcquireHypercallPage(v16, 1, (__int64)v18, 40LL);
    *(_DWORD *)v9 = 6;
    *(_QWORD *)(v9 + 8) = a1;
    *(_DWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = a3;
    *(_BYTE *)(v9 + 32) = a4;
    v10 = HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v16);
    if ( v10 != 11 )
      break;
    result = HvlpDepositPages(0);
    if ( (int)result < 0 )
      goto LABEL_7;
  }
  if ( v10 )
    return 3221225473LL;
  result = 0LL;
LABEL_7:
  if ( (int)result >= 0 )
  {
    v12 = (_DWORD *)HvlpAcquireHypercallPage(v16, 1, (__int64)v18, 8LL);
    v13 = (_OWORD *)HvlpAcquireHypercallPage(v17, 2, (__int64)v19, 1032LL);
    *v12 = 7;
    v14 = HvcallCodeVa();
    if ( !v14 )
      *a5 = *v13;
    v15 = v14 != 0 ? 0xC0000001 : 0;
    HvlpReleaseHypercallPage((__int64)v16);
    HvlpReleaseHypercallPage((__int64)v17);
    return v15;
  }
  return result;
}
