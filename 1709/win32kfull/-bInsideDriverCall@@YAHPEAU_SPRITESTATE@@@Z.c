/*
 * XREFs of ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00EC874
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EC010 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bInsideDriverCall(struct _SPRITESTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v15 = *(_QWORD *)a1;
  v6 = ThreadWin32Thread;
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15);
  v7 = 0;
  if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
  {
    if ( *(struct _SPRITESTATE **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10) + 280)
                                 + 32LL) == a1 )
      return **(unsigned int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 280);
  }
  else
  {
    return *((unsigned int *)a1 + 24);
  }
  return v7;
}
