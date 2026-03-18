/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006F230
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006F230 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006F230 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 */

struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, __int64 a3)
{
  char v3; // si
  struct tagWND *v4; // rdi
  struct tagBWL *v5; // rbx
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  int i; // [rsp+30h] [rbp+8h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !a2 )
    return a1;
  v6 = a3 & 0x20;
  for ( i = v6; ; v6 = i )
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( (!v6 || (unsigned int)IsNonImmersiveBand(v4, a2, a3))
      && ((v3 & 0x40) == 0
       || (*((_BYTE *)v4 + 71) & 0x11) != 0x10
       || (*((_BYTE *)v4 + 60) & 0x40) != 0
       || !(unsigned int)IsWindowSubjectToShellWindowBehavior(v4, 127LL))
      && (!v7 || v7 == *((_QWORD *)v4 + 2)) )
    {
      **((_QWORD **)v5 + 1) = *(_QWORD *)v4;
      *((_QWORD *)v5 + 1) += 8LL;
      v8 = *((_QWORD *)v5 + 1);
      if ( v8 == *((_QWORD *)v5 + 2) )
      {
        v10 = v8 - (_QWORD)v5;
        v11 = UserReAllocPool(v5, (unsigned int)v10 + 8LL, (unsigned int)v10 + 72LL, 1819767637LL);
        if ( !v11 )
          return v5;
        v12 = v11 + v10;
        v5 = (struct tagBWL *)v11;
        *(_QWORD *)(v11 + 8) = v12;
        *(_QWORD *)(v11 + 16) = v12 + 64;
      }
    }
    if ( (v3 & 1) != 0 )
    {
      a2 = (struct tagWND *)*((_QWORD *)v4 + 14);
      if ( a2 )
      {
        v5 = InternalBuildHwndList(v5, a2, 3u);
        if ( *((_QWORD *)v5 + 1) >= *((_QWORD *)v5 + 2) )
          break;
      }
    }
    if ( (v3 & 2) == 0 )
      break;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
    if ( !v4 )
      break;
  }
  return v5;
}
