/*
 * XREFs of ?IsTPRightClick@CPTPEngine@@AEAAHPEAUPTPInput@@HPEAUtagPOINT@@@Z @ 0x1C0136230
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0133988 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::IsTPRightClick(CPTPEngine *this, struct PTPInput *a2, int a3, struct tagPOINT *a4)
{
  CPTPEngine *v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebp
  unsigned __int64 *v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  _DWORD *v13; // rcx
  int v14; // r9d
  unsigned __int64 v15; // r11
  BOOL v16; // ecx
  unsigned __int64 v17; // rax

  *a4 = 0LL;
  v5 = this;
  if ( a3 || (*((_DWORD *)this + 100) & 2) == 0 )
    return 0LL;
  v6 = *((_DWORD *)a2 + 12);
  v7 = 0;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 4);
    v9 = (unsigned __int64 *)((char *)a2 + 92);
    v10 = v6;
    do
    {
      v11 = *((_DWORD *)v9 - 9) % v8;
      v12 = 288 * v11;
      if ( (*((_DWORD *)v5 + 72 * (unsigned int)v11 + 292) & 0x10000000) != 0 )
      {
        v16 = PtInRect((_DWORD *)v5 + 786, *v9) && PtInRect(v13, *(_QWORD *)((char *)v5 + v12 + 1180));
        if ( (v14 & 1) != 0 )
          v16 = v16 && (v14 & 0x40) == 0 && (v14 & 0x8000000) == 0;
        v17 = *(_QWORD *)((char *)v5 + v12 + 1248);
        if ( v17 > v15 || v17 == v15 && v16 )
        {
          v7 = v16;
          *a4 = (struct tagPOINT)*v9;
        }
      }
      v9 += 12;
      --v10;
    }
    while ( v10 );
  }
  return v7;
}
