/*
 * XREFs of ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077AA0
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0077D10 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C002B3A0 (HmgShareLock.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003E880 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<EPALOBJ>(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  int v7; // [rsp+38h] [rbp-18h]
  struct OBJECT *v8; // [rsp+68h] [rbp+18h] BYREF
  struct _ERESOURCE *v9; // [rsp+70h] [rbp+20h] BYREF

  v2 = HmgShareLock(a1, 8);
  v8 = (struct OBJECT *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v6 = 0LL;
    v7 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v7 && (*(_DWORD *)(v6 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
      v9 = (struct _ERESOURCE *)ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      v3 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v8, 1, 3);
      SEMOBJ::vUnlock(&v9, v4, v5);
      if ( v3 )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
  }
  EPALOBJ::~EPALOBJ(&v8);
}
