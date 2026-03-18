/*
 * XREFs of HmgMarkUnXferable @ 0x1C008A750
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgMarkUnXferable(struct HOBJ__ *a1, char a2)
{
  unsigned int v2; // esi
  __int16 v4; // ebx^2
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v4 = WORD1(a1);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v8, a1, 1, 1, 0);
  if ( v9 )
  {
    v5 = v8;
    if ( *(_BYTE *)(v8 + 14) == a2 && *(_WORD *)(v8 + 12) == v4 )
    {
      v6 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
      if ( v6 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        *(_BYTE *)(v5 + 15) &= ~0x20u;
        v2 = 1;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
    if ( v9 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
  }
  return v2;
}
