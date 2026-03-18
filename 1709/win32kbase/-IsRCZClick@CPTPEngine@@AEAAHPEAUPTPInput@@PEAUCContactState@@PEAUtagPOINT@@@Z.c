/*
 * XREFs of ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAUtagPOINT@@@Z @ 0x1C0134D94
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0132CA4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::IsRCZClick(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct tagPOINT *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned int v6; // eax
  CPTPEngine *v9; // r11
  unsigned int v10; // r15d
  unsigned __int64 *v11; // r8
  __int64 v12; // rsi
  _DWORD *v13; // r10
  _DWORD *v14; // rcx
  int v15; // r9d
  __int64 v16; // r10
  BOOL v17; // ecx
  unsigned __int64 v18; // rax

  v4 = 0;
  *a4 = 0LL;
  v5 = 0LL;
  v6 = *((_DWORD *)a2 + 12);
  v9 = this;
  if ( v6 )
  {
    v10 = *((_DWORD *)this + 4);
    v11 = (unsigned __int64 *)((char *)a2 + 92);
    v12 = v6;
    do
    {
      v13 = (_DWORD *)((char *)v9 + 296 * (*((_DWORD *)v11 - 9) % v10) + 1192);
      if ( (*v13 & 0x8000000) != 0 && v13[4] >= *((_DWORD *)v9 + 805) )
      {
        v17 = PtInRect((_DWORD *)v9 + 804, *v11) && PtInRect(v14, *(_QWORD *)(v16 + 12));
        if ( (v15 & 1) != 0 )
          v17 = v17 && (v15 & 0x40) == 0 && (v15 & 0x4000000) == 0;
        v18 = *(_QWORD *)(v16 + 72);
        if ( v18 > v5 || v18 == v5 && v17 || (struct CContactState *)v16 == a3 )
        {
          v5 = *(_QWORD *)(v16 + 72);
          v4 = v17;
          *a4 = (struct tagPOINT)*v11;
        }
      }
      v11 += 12;
      --v12;
    }
    while ( v12 );
  }
  return v4;
}
