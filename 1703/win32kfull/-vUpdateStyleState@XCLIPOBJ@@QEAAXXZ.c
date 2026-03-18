/*
 * XREFs of ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C02AB11C
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C0129940 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vUpdateStyleState(XCLIPOBJ *this)
{
  __int64 v1; // r8
  _DWORD *v3; // r11
  int v4; // r9d
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r11d
  __int64 v10; // rdx
  _DWORD *v11; // rax
  unsigned int v12; // r9d
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rdx

  v1 = *((_QWORD *)this + 18);
  v3 = *(_DWORD **)(v1 + 16);
  if ( *(_DWORD *)(v1 + 4) - *v3 >= 0 )
    v4 = *(_DWORD *)(v1 + 4) - *v3;
  else
    v4 = *v3 - *(_DWORD *)(v1 + 4);
  v5 = v3[1];
  v6 = *(_DWORD *)(v1 + 8) - v5;
  if ( v6 >= 0 )
    v7 = (unsigned int)v6;
  else
    v7 = (unsigned int)(v5 - *(_DWORD *)(v1 + 8));
  v8 = *(unsigned int *)(v1 + 192);
  v9 = 0;
  v10 = *(unsigned int *)(v1 + 196);
  if ( (_DWORD)v8 == (_DWORD)v10 )
    LOBYTE(v9) = v4 >= (int)v7;
  else
    LOBYTE(v9) = (unsigned __int64)(unsigned int)v4 * v8 >= v7 * v10;
  *(_DWORD *)(v1 + 176) = *(_DWORD *)(v1 + 172);
  v11 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v9 )
  {
    v12 = v11[48];
    v13 = v11[30];
    v14 = v11[28];
  }
  else
  {
    v12 = v11[49];
    v13 = v11[31];
    v14 = v11[29];
  }
  if ( v13 - v14 >= 0 )
    v15 = v13 - v14;
  else
    v15 = v14 - v13;
  v16 = v15 + 1;
  if ( (v16 & 0xFFFF0000) != 0 )
  {
    v20 = *((_QWORD *)this + 18);
    if ( v20 != -176 )
      *(_DWORD *)(v20 + 176) = (*(int *)(v20 + 176) + v12 * (unsigned __int64)v16) % *(unsigned int *)(v20 + 180);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) += v12 * v16;
    v17 = *((_QWORD *)this + 18);
    v18 = *(_DWORD *)(v17 + 176);
    v19 = *(_DWORD *)(v17 + 180);
    if ( v18 >= v19 )
      *(_DWORD *)(v17 + 176) = v18 % v19;
  }
}
