/*
 * XREFs of HmgMarkLazyDelete @ 0x1C007B530
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C004DBDC (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C004DC58 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 */

__int64 __fastcall HmgMarkLazyDelete(struct HOBJ__ *a1, char a2, _DWORD *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]

  v8 = 0LL;
  v9 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v8, a1, a2);
  if ( v9 )
  {
    *a3 = 0;
    v4 = HANDLELOCK::ShareCount((HANDLELOCK *)&v8);
    v5 = v8;
    v6 = 1;
    if ( v4 )
    {
      *(_BYTE *)(v8 + 15) |= 2u;
      *a3 = 1;
    }
    *(_QWORD *)(v5 + 16) = 0LL;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
    if ( v9 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
  }
  else
  {
    return 0;
  }
  return v6;
}
