/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00253A0
 * Callers:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1)
{
  __int64 *ThreadWin32Thread; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  v3 = 0;
  if ( !ThreadWin32Thread )
    return 0LL;
  v4 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !PDEVOBJ::bAllowShareAccess(a1) || !*(_DWORD *)(v4 + 104) && !*(_DWORD *)(v4 + 108) )
    return 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)a1 + 72LL;
  v7 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v7 )
    v5 = *v7;
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 280) + 32LL) == v6 )
    return **(unsigned int **)(W32GetThreadWin32Thread(KeGetCurrentThread(), v8, v9, v10) + 280);
  return v3;
}
