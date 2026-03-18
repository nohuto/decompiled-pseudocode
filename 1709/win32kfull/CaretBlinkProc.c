/*
 * XREFs of CaretBlinkProc @ 0x1C0081230
 * Callers:
 *     <none>
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00844C0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void __fastcall CaretBlinkProc(struct tagWND *a1)
{
  __int64 v1; // r8
  struct tagWND *v2; // r10
  int v3; // eax
  int v4; // ecx
  bool v5; // zf

  v1 = *(_QWORD *)(gptiCurrent + 408LL);
  v2 = *(struct tagWND **)(v1 + 288);
  if ( a1 == v2 )
  {
    v3 = *(_DWORD *)(v1 + 304);
    if ( v3 > 0 )
      *(_DWORD *)(v1 + 304) = v3 - 1;
    if ( (*(_BYTE *)(v1 + 296) & 3) == 3
      && (*(_DWORD *)(gpsi + 4980LL) == -1 || (*(_DWORD *)(gpsi + 2220LL) & 4) == 0 || !*(_DWORD *)(v1 + 304)) )
    {
      RemoveCaretTimer(v2, (struct tagQ *)v1);
    }
    else
    {
      v4 = *(_DWORD *)(v1 + 296) ^ ((unsigned __int8)*(_DWORD *)(v1 + 296) ^ (unsigned __int8)~(unsigned __int8)*(_DWORD *)(v1 + 296)) & 2;
      v5 = *(_DWORD *)(v1 + 300) == 0;
      *(_DWORD *)(v1 + 296) = v4;
      if ( v5 )
      {
        *(_DWORD *)(v1 + 296) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)~(_BYTE)v4) & 1;
        UT_InvertCaret();
      }
    }
  }
}
