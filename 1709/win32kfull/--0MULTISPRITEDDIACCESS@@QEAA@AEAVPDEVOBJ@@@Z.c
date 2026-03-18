/*
 * XREFs of ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00ECFD8
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00ECC20 (vSpDynamicModeChange.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED06C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

MULTISPRITEDDIACCESS *__fastcall MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS(
        MULTISPRITEDDIACCESS *this,
        struct PDEVOBJ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    v7 = *(_QWORD *)a2 + 72LL;
    *(_QWORD *)this = v7;
    if ( *(_DWORD *)(v7 + 68) )
    {
      v9 = 0LL;
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 72LL) + 8 * v9);
        if ( !*(_DWORD *)(v10 + 168) && (*(_DWORD *)(v10 + 32) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v10 + 72), 1);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *(_DWORD *)(*(_QWORD *)this + 68LL) );
    }
    else if ( !*(_DWORD *)(v7 + 96) && (*(_DWORD *)(*(_QWORD *)a2 + 32LL) & 0x20000) == 0 )
    {
      vSpDirectDriverAccess((struct _SPRITESTATE *)v7, 1);
    }
  }
  return this;
}
