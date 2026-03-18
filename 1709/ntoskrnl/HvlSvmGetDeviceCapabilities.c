/*
 * XREFs of HvlSvmGetDeviceCapabilities @ 0x1401ED780
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmGetDeviceCapabilities(int a1, __int64 a2)
{
  __int64 v4; // rbx
  _DWORD *v5; // r14
  char v6; // cl
  unsigned __int16 v7; // bx
  int v8; // edx
  int v9; // ecx
  PHYSICAL_ADDRESS v11[3]; // [rsp+20h] [rbp-A8h] BYREF
  PHYSICAL_ADDRESS v12[3]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v13[32]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v14[32]; // [rsp+80h] [rbp-48h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = HvlpAcquireHypercallPage(v11, 1, (__int64)v13, 16LL);
  v5 = (_DWORD *)HvlpAcquireHypercallPage(v12, 2, (__int64)v14, 16LL);
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_QWORD *)v4 = 0LL;
  v6 = *(_BYTE *)(v4 + 4) & 0xFD;
  *(_WORD *)v4 = a1;
  *(_BYTE *)(v4 + 4) = v6 | 1;
  *(_WORD *)(v4 + 2) = HIWORD(a1);
  *(_DWORD *)(v4 + 8) = 0;
  v7 = HvcallCodeVa();
  if ( !v7 )
  {
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ *v5) & 1;
    v8 = *(_DWORD *)a2 ^ ((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)*v5) & 2;
    *(_DWORD *)a2 = v8;
    v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)*v5) & 4;
    *(_DWORD *)a2 = v9;
    *(_DWORD *)a2 = *v5 ^ (v9 ^ *v5) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 4) = v5[1];
    *(_DWORD *)(a2 + 8) = v5[2];
  }
  HvlpReleaseHypercallPage((__int64)v11);
  HvlpReleaseHypercallPage((__int64)v12);
  return HvlpHvToNtStatus(v7);
}
