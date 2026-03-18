/*
 * XREFs of ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A09E0
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00A0BE0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C005A1CC (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<EPALOBJ>(unsigned int a1)
{
  __int64 v2; // rax
  int *v3; // rbx
  int v4; // ebx
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  int v6; // [rsp+28h] [rbp-18h]
  int *v7; // [rsp+58h] [rbp+18h] BYREF
  HSEMAPHORE v8; // [rsp+60h] [rbp+20h] BYREF

  v2 = HmgShareLock(a1, 8);
  v7 = (int *)v2;
  v3 = (int *)v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
    {
      v5 = 0LL;
      v6 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
      if ( HANDLELOCK::bValid((HANDLELOCK *)&v5) && (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
        v8 = ghsemPalette;
        EngAcquireSemaphore(ghsemPalette);
        v4 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v7, 1, 3);
        SEMOBJ::vUnlock((PERESOURCE *)&v8);
        if ( v4 )
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
        v3 = v7;
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      }
      if ( v6 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    }
    if ( v3 )
      DEC_SHARE_REF_CNT(v3);
  }
}
