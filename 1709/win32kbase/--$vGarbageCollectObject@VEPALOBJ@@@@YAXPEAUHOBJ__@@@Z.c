/*
 * XREFs of ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA2B8
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00AA480 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004DBC0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C006E5E0 (HmgShareLock.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C006EF24 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

void __fastcall vGarbageCollectObject<EPALOBJ>(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+38h] [rbp-18h]
  struct OBJECT *v7; // [rsp+68h] [rbp+18h] BYREF
  PERESOURCE v8; // [rsp+70h] [rbp+20h] BYREF

  LOBYTE(a2) = 8;
  v2 = a1;
  v3 = HmgShareLock(a1, a2);
  v7 = (struct OBJECT *)v3;
  if ( v3 && *(_DWORD *)(v3 + 8) <= 1u && (*(_WORD *)(v3 + 14) & 0x4000) != 0 )
  {
    v5 = 0LL;
    v6 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)v2 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v6 && (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      v8 = ghsemPalette;
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
      v4 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v7, 1LL, 3LL);
      SEMOBJ::vUnlock(&v8);
      if ( v4 )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  }
  EPALOBJ::~EPALOBJ(&v7);
}
