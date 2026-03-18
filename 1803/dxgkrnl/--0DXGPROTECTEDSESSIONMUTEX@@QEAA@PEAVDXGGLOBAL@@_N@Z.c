/*
 * XREFs of ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0033344
 * Callers:
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01A9B70 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C01A9EC0 (-DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkDestroyProtectedSession @ 0x1C01BB5A0 (DxgkDestroyProtectedSession.c)
 *     DxgkQueryProtectedSessionStatus @ 0x1C01BBEE0 (DxgkQueryProtectedSessionStatus.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

DXGPROTECTEDSESSIONMUTEX *__fastcall DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        DXGPROTECTEDSESSIONMUTEX *this,
        struct DXGGLOBAL *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct DXGGLOBAL *)((char *)a2 + 1704), 0);
  DXGAUTOMUTEX::Acquire(this);
  return this;
}
