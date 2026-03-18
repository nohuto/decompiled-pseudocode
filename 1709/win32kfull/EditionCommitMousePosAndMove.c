/*
 * XREFs of EditionCommitMousePosAndMove @ 0x1C0052890
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 */

__int64 __fastcall EditionCommitMousePosAndMove(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v12; // rbx
  __int64 v13; // rax

  if ( *(_DWORD *)a4 == 2 )
    v12 = *(_QWORD *)(a4 + 8);
  else
    v12 = 0LL;
  v13 = UpconvertTime(a5);
  return xxxMoveEventAbsolute(*a1, a1[1], a2, v12, a3, v13, a6, a7, a8, a9);
}
