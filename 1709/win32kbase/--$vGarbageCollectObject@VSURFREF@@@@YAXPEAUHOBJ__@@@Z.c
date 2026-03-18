/*
 * XREFs of ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA3AC
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00AA480 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F43C (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C001F458 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004DBC0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C006E5E0 (HmgShareLock.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

void __fastcall vGarbageCollectObject<SURFREF>(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  struct OBJECT *v6; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = a1;
  v3 = HmgShareLock(a1, a2);
  v6 = (struct OBJECT *)v3;
  if ( v3 && *(_DWORD *)(v3 + 8) <= 1u && (*(_WORD *)(v3 + 14) & 0x4000) != 0 )
  {
    v4 = 0LL;
    v5 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)v2 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v5 && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      if ( (unsigned int)SURFREF::bDeleteSurface(&v6, 3LL) )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  SURFREF::~SURFREF(&v6);
}
