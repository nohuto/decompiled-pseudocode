/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040
 * Callers:
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0024090 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0028E20 (GreGetBounds.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgLockEx @ 0x1C002B600 (HmgLockEx.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C002BE30 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::AcquireEntryLock(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        char a3)
{
  unsigned int v4; // edx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r13

  v4 = *((_DWORD *)this + 514);
  if ( a2 >= v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  v6 = 0LL;
  v7 = ((a2 - v4) >> 16) + 1;
  if ( a2 < v4 )
    v7 = 0LL;
  v8 = *((_QWORD *)this + v7 + 1);
  if ( (_DWORD)v7 )
    a2 += ((1 - (_DWORD)v7) << 16) - v4;
  if ( a2 < *(_DWORD *)(v8 + 20) )
  {
    v10 = 8 * ((unsigned __int64)a2 >> 8);
    v11 = 16LL * (unsigned __int8)a2;
    v12 = v11 + *(_QWORD *)(**(_QWORD **)(v8 + 24) + v10);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12, 0LL);
    if ( a3 || a2 < *(_DWORD *)(v8 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + v10) + v11 + 8) )
    {
      *(_DWORD *)(24LL * a2 + *(_QWORD *)v8 + 8) |= 1u;
      return (struct _ENTRY *)(24LL * a2 + *(_QWORD *)v8);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v12, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return (struct _ENTRY *)v6;
}
