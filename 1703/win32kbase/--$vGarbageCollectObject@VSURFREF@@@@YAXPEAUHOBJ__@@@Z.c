/*
 * XREFs of ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A0AF0
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00A0BE0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009FA3C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall vGarbageCollectObject<SURFREF>(unsigned int a1)
{
  __int64 v2; // rax
  int *v3; // rbx
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int *v6; // [rsp+58h] [rbp+18h] BYREF

  v2 = HmgShareLock(a1, 5);
  v6 = (int *)v2;
  v3 = (int *)v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
    {
      v4 = 0LL;
      v5 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
      if ( HANDLELOCK::bValid((HANDLELOCK *)&v4) && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
        if ( (unsigned int)SURFREF::bDeleteSurface(&v6, 3LL) )
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
        v3 = v6;
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      }
      if ( v5 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    if ( v3 )
      DEC_SHARE_REF_CNT(v3);
  }
}
