/*
 * XREFs of sub_180101048 @ 0x180101048
 * Callers:
 *     sub_1800ED51C @ 0x1800ED51C (sub_1800ED51C.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

char __fastcall sub_180101048(_DWORD *a1)
{
  int v1; // edi
  char v2; // bl

  v1 = (int)a1;
  v2 = 0;
  if ( sub_18001FC58(a1, "RtlWalkHeap") )
    return sub_18010120C(v1);
  return v2;
}
