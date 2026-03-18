/*
 * XREFs of ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x1800779B4
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x18009863C (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x180078184 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x18007843C (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::CDisplay(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  int v9; // ecx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rdx
  __int16 v13; // r8
  _WORD *v14; // rax
  enum DXGI_FORMAT DefaultSRGBFormat; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ecx
  char v20; // al
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  __int64 result; // rax
  _BYTE v26[160]; // [rsp+30h] [rbp-81h] BYREF

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CDisplay::`vftable';
  *(_DWORD *)(a1 + 240) = 0;
  (**(void (__fastcall ***)(__int64))a1)(a1);
  v9 = *(_DWORD *)(a5 + 200) & 2;
  *(_BYTE *)(a1 + 208) = v9 != 0;
  if ( v9 )
    *(_QWORD *)(a1 + 216) = a7;
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a4 + 336);
  *(_DWORD *)(a1 + 232) = *(_DWORD *)(a5 + 120);
  *(_DWORD *)(a1 + 236) = *(_DWORD *)(a5 + 124);
  *(_DWORD *)(a1 + 244) = *(_DWORD *)(a5 + 128);
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(a5 + 104);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a5 + 104);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 24) = a4;
  (**(void (__fastcall ***)(__int64))a4)(a4);
  SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(a1 + 32, *(_QWORD *)a5);
  v10 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)(a1 + 40) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = (_WORD *)(a1 + 136);
  v12 = 32LL;
  *(_BYTE *)(a1 + 304) = (*(_DWORD *)(a5 + 200) & 4) != 0;
  *(_BYTE *)(a1 + 305) = (*(_DWORD *)(a5 + 200) & 8) != 0;
  do
  {
    v13 = *(_WORD *)((char *)v11 + a5 - (a1 + 136) + 204);
    if ( !v13 )
      break;
    *v11++ = v13;
    --v12;
  }
  while ( v12 );
  v14 = v11 - 1;
  if ( v12 )
    v14 = v11;
  *v14 = 0;
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(a4 + 312) + *(_DWORD *)(a4 + 320);
  *(_DWORD *)(a1 + 252) = *(_DWORD *)(a4 + 296);
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a4 + 300);
  *(_DWORD *)(a1 + 260) = *(_DWORD *)(a5 + 140);
  *(_DWORD *)(a1 + 264) = *(_DWORD *)(a5 + 144);
  DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
  v16 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 276) = DefaultSRGBFormat;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 268) = *(_DWORD *)(a5 + 152);
  *(_DWORD *)(a1 + 272) = *(_DWORD *)(a5 + 156);
  *(_DWORD *)(a1 + 292) = *(_DWORD *)(a5 + 160);
  *(_DWORD *)(a1 + 280) = *(_DWORD *)(a5 + 164);
  *(_DWORD *)(a1 + 284) = 0;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  v18 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 308) = v17 != 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 32LL))(v18, v26);
  v19 = 0;
  v20 = v26[88] & 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 309) = v20;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a5 + 140);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a5 + 144);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a5 + 184);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a5 + 168);
  if ( *(int *)(a1 + 72) >= 0 )
    v19 = *(_DWORD *)(a1 + 72);
  v21 = 0;
  if ( *(_DWORD *)(a1 + 104) - *(_DWORD *)(a1 + 96) >= 0 )
    v21 = *(_DWORD *)(a1 + 104) - *(_DWORD *)(a1 + 96);
  if ( v21 != v19 )
    goto LABEL_21;
  v22 = 0;
  if ( *(int *)(a1 + 76) >= 0 )
    v22 = *(_DWORD *)(a1 + 76);
  v23 = 0;
  if ( *(_DWORD *)(a1 + 108) - *(_DWORD *)(a1 + 100) >= 0 )
    v23 = *(_DWORD *)(a1 + 108) - *(_DWORD *)(a1 + 100);
  if ( v23 != v22 )
LABEL_21:
    *(_BYTE *)(a1 + 306) = 1;
  *(_DWORD *)(a1 + 248) = a6;
  *(_BYTE *)(a1 + 296) = (*(_DWORD *)(a5 + 200) & 0x10) != 0;
  v24 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 80LL))(*(_QWORD *)(a1 + 40)) == 0;
  result = a1;
  *(_BYTE *)(a1 + 297) = !v24;
  return result;
}
