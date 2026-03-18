/*
 * XREFs of PsQueryThreadStartAddress @ 0x1401268CC
 * Callers:
 *     sub_140826EC0 @ 0x140826EC0 (sub_140826EC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 || !a2 )
    return *(_QWORD *)(a1 + 1680);
  if ( (*(_DWORD *)(a1 + 1752) & 8) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 1552);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( (*(_DWORD *)(a1 + 1752) & 8) != 0 )
    return 0LL;
  return v3;
}
