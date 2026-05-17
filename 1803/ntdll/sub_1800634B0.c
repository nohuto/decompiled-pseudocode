/*
 * XREFs of sub_1800634B0 @ 0x1800634B0
 * Callers:
 *     sub_180063438 @ 0x180063438 (sub_180063438.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800634B0(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a3 )
  {
    v3 = *(_DWORD *)(a2 + 32) & 1;
    if ( v3 )
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *a3 = v3;
  }
  return (*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(a2 + 24);
}
