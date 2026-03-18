/*
 * XREFs of ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x1800B7C10
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800B72E4 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::CDisplay(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, int a6, __int64 a7)
{
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rdx
  __int16 v14; // r8
  _WORD *v15; // rax
  __int64 v16; // rcx
  int v17; // ecx
  char v18; // al
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  bool v22; // zf
  __int64 result; // rax
  _BYTE v24[160]; // [rsp+30h] [rbp-81h] BYREF

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CDisplay::`vftable';
  *(_DWORD *)(a1 + 236) = 0;
  (**(void (__fastcall ***)(__int64))a1)(a1);
  *(_DWORD *)(a1 + 208) = 0;
  v9 = (*((unsigned __int8 *)a5 + 200) >> 1) & 1;
  *(_BYTE *)(a1 + 212) = (a5[25] & 2) != 0;
  if ( (_BYTE)v9 )
    *(_QWORD *)(a1 + 216) = a7;
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a4 + 336);
  *(_DWORD *)(a1 + 232) = *((_DWORD *)a5 + 30);
  *(_DWORD *)(a1 + 240) = *((_DWORD *)a5 + 32);
  *(_DWORD *)(a1 + 236) = *((_DWORD *)a5 + 26);
  *(_QWORD *)(a1 + 16) = a5[13];
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 24) = a4;
  (**(void (__fastcall ***)(__int64))a4)(a4);
  v10 = *a5;
  *(_QWORD *)(a1 + 32) = *a5;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = a5[1];
  *(_QWORD *)(a1 + 40) = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = (_WORD *)(a1 + 136);
  v13 = 32LL;
  *(_BYTE *)(a1 + 294) = (a5[25] & 4) != 0;
  *(_BYTE *)(a1 + 295) = (a5[25] & 8) != 0;
  do
  {
    v14 = *(_WORD *)((char *)v12 + (_QWORD)((char *)a5 - a1 + 68));
    if ( !v14 )
      break;
    *v12++ = v14;
    --v13;
  }
  while ( v13 );
  v15 = v12 - 1;
  if ( v13 )
    v15 = v12;
  *v15 = 0;
  v16 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(a4 + 312) + *(_DWORD *)(a4 + 320);
  *(_DWORD *)(a1 + 248) = *(_DWORD *)(a4 + 296);
  *(_DWORD *)(a1 + 252) = *(_DWORD *)(a4 + 300);
  *(_DWORD *)(a1 + 256) = *((_DWORD *)a5 + 35);
  *(_DWORD *)(a1 + 260) = *((_DWORD *)a5 + 36);
  *(_DWORD *)(a1 + 272) = 87;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 264) = *((_DWORD *)a5 + 38);
  *(_DWORD *)(a1 + 268) = *((_DWORD *)a5 + 39);
  *(_DWORD *)(a1 + 288) = *((_DWORD *)a5 + 40);
  *(_DWORD *)(a1 + 276) = *((_DWORD *)a5 + 41);
  *(_DWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 298) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) != 0;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), v24);
  v17 = 0;
  v18 = v24[88] & 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 299) = v18;
  *(_DWORD *)(a1 + 72) = *((_DWORD *)a5 + 35);
  *(_DWORD *)(a1 + 76) = *((_DWORD *)a5 + 36);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a5 + 23);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a5 + 21);
  if ( *(int *)(a1 + 72) >= 0 )
    v17 = *(_DWORD *)(a1 + 72);
  v19 = 0;
  if ( *(_DWORD *)(a1 + 104) - *(_DWORD *)(a1 + 96) >= 0 )
    v19 = *(_DWORD *)(a1 + 104) - *(_DWORD *)(a1 + 96);
  if ( v19 != v17 )
    goto LABEL_22;
  v20 = 0;
  if ( *(int *)(a1 + 76) >= 0 )
    v20 = *(_DWORD *)(a1 + 76);
  v21 = 0;
  if ( *(_DWORD *)(a1 + 108) - *(_DWORD *)(a1 + 100) >= 0 )
    v21 = *(_DWORD *)(a1 + 108) - *(_DWORD *)(a1 + 100);
  if ( v21 != v20 )
LABEL_22:
    *(_BYTE *)(a1 + 296) = 1;
  *(_DWORD *)(a1 + 244) = a6;
  *(_BYTE *)(a1 + 292) = (a5[25] & 0x10) != 0;
  v22 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 80LL))(*(_QWORD *)(a1 + 40)) == 0;
  result = a1;
  *(_BYTE *)(a1 + 293) = !v22;
  return result;
}
