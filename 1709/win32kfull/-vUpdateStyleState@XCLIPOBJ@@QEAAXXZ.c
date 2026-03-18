/*
 * XREFs of ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C02A7784
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C012F5CC (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vUpdateStyleState(XCLIPOBJ *this)
{
  __int64 v1; // r10
  _DWORD *v3; // r8
  int v4; // ebx
  int v5; // r11d
  int v6; // ecx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  _DWORD *v11; // rax
  unsigned int v12; // r10d
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r8d
  __int64 v21; // r11

  v1 = *((_QWORD *)this + 18);
  v3 = *(_DWORD **)(v1 + 16);
  v4 = v3[1];
  v5 = *v3 - *(_DWORD *)(v1 + 4);
  if ( *(_DWORD *)(v1 + 4) - *v3 >= 0 )
    v5 = *(_DWORD *)(v1 + 4) - *v3;
  v6 = *(_DWORD *)(v1 + 8) - v4;
  v7 = v4 - *(_DWORD *)(v1 + 8);
  v8 = *(unsigned int *)(v1 + 192);
  if ( v6 >= 0 )
    v7 = v6;
  v9 = *(unsigned int *)(v1 + 196);
  v10 = 0;
  if ( (_DWORD)v8 == (_DWORD)v9 )
    LOBYTE(v10) = v5 >= v7;
  else
    LOBYTE(v10) = (unsigned __int64)(unsigned int)v5 * v8 >= (unsigned __int64)(unsigned int)v7 * v9;
  *(_DWORD *)(v1 + 176) = *(_DWORD *)(v1 + 172);
  v11 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v10 )
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
  v15 = v13 - v14;
  v16 = v14 - v13;
  if ( v15 >= 0 )
    v16 = v15;
  v17 = v16 + 1;
  if ( (v17 & 0xFFFF0000) != 0 )
  {
    v21 = *((_QWORD *)this + 18);
    if ( v21 != -176 )
      *(_DWORD *)(v21 + 176) = (*(int *)(v21 + 176) + v12 * (unsigned __int64)v17) % *(unsigned int *)(v21 + 180);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) += v12 * v17;
    v18 = *((_QWORD *)this + 18);
    v19 = *(_DWORD *)(v18 + 176);
    v20 = *(_DWORD *)(v18 + 180);
    if ( v19 >= v20 )
      *(_DWORD *)(v18 + 176) = v19 % v20;
  }
}
