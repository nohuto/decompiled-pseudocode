/*
 * XREFs of HmgShareLockEx @ 0x1C00A9F70
 * Callers:
 *     HmgShareLock @ 0x1C006E5E0 (HmgShareLock.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00A970C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004DBC0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E060 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0070220 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

struct OBJECT *__fastcall HmgShareLockEx(unsigned int a1, char a2, int a3)
{
  struct OBJECT *EntryObject; // rbx
  __int16 v5; // edi^2
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  EntryObject = 0LL;
  v7 = 0LL;
  v5 = HIWORD(a1);
  v8 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v7, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, a3);
  if ( v8 )
  {
    if ( *(_BYTE *)(v7 + 14) == a2 && *(_WORD *)(v7 + 12) == v5 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v7 & 0xFFFFFF);
      ++*((_DWORD *)EntryObject + 2);
      TrackHmgrReferenceIncrement(
        a2,
        (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)EntryObject);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  return EntryObject;
}
