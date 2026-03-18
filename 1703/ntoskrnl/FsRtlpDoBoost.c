/*
 * XREFs of FsRtlpDoBoost @ 0x140019E4C
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  bool v5; // bl
  unsigned __int8 v9; // cl
  unsigned int v10; // edx
  __int64 result; // rax
  unsigned __int8 v12; // cl

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1736) & 0xE00u) < 0x400 )
    v5 = (*a4 & 0x20) == 0;
  v9 = *(_BYTE *)(a2 + 195);
  v10 = v9;
  if ( v9 >= 0xFu )
    v10 = 15;
  result = (unsigned __int8)*a3;
  if ( (unsigned int)result <= v10 )
  {
    result = v9;
    if ( v9 >= 0xFu )
      result = 15LL;
  }
  *a3 = result;
  v12 = *(_BYTE *)(a1 + 195);
  if ( v5 || (unsigned __int8)result > v12 )
  {
    if ( (unsigned __int8)result > v12 )
      result = KeSetPriorityBoost(a1, (unsigned __int8)result);
    if ( v5 )
    {
      LOBYTE(a3) = 1;
      PsBoostThreadIoEx(a1, 0LL, a3, a5);
      *(_DWORD *)a4 |= 0x20u;
      return IoBoostThreadIoPriority(a1, (*(_DWORD *)(a2 + 1736) >> 9) & 7, 0LL);
    }
  }
  return result;
}
