/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0073710
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C5B38 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 * Callees:
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 */

struct tagCLS *__fastcall ClassUnlockWorker(struct tagCLS *a1)
{
  __int64 v1; // rax
  struct tagCLS *i; // rax
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 24);
  v1 = *((_QWORD *)a1 + 8);
  if ( a1 == (struct tagCLS *)v1 )
    return a1;
  --*(_DWORD *)(v1 + 96);
  if ( *((_DWORD *)a1 + 24) )
    return a1;
  for ( i = *(struct tagCLS **)(*((_QWORD *)a1 + 8) + 72LL); i != a1; i = *(struct tagCLS **)i )
    ;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  DestroyClass(CurrentProcessWin32Process);
  return 0LL;
}
