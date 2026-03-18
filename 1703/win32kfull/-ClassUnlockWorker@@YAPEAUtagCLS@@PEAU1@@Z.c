/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F9260
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C2E24 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 * Callees:
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 */

struct tagCLS *__fastcall ClassUnlockWorker(struct tagCLS *a1, __int64 a2)
{
  __int64 v2; // rax
  struct tagCLS **v4; // rbx
  struct tagCLS *i; // rax
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 22);
  v2 = *((_QWORD *)a1 + 8);
  if ( a1 == (struct tagCLS *)v2 )
    return a1;
  --*(_DWORD *)(v2 + 88);
  if ( *((_DWORD *)a1 + 22) )
    return a1;
  v4 = (struct tagCLS **)(*((_QWORD *)a1 + 8) + 72LL);
  for ( i = *v4; i != a1; i = *(struct tagCLS **)i )
    v4 = (struct tagCLS **)i;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  DestroyClass(CurrentProcessWin32Process, (_QWORD **)v4);
  return 0LL;
}
