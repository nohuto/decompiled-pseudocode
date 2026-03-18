/*
 * XREFs of ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C00EFA4C
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00518E8 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgQueryRemoveAttempted(struct HOBJ__ *a1, int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v4 = 0;
  GreAcquireHmgrSemaphore((int)a1, a2, a3);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v9, a1, 1, 0, 0);
  if ( v10 )
  {
    if ( *(_BYTE *)(v9 + 14) == 1 && *(_WORD *)(v9 + 12) == WORD1(a1) )
      v4 = (*(unsigned __int8 *)(v9 + 15) >> 3) & 1;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
    if ( v10 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
  }
  GreReleaseHmgrSemaphore(v6, v5, v7);
  return v4;
}
