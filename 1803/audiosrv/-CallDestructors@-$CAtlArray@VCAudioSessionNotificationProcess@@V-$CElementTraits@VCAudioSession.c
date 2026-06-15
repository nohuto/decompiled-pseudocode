/*
 * XREFs of ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800B1A14
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017010 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800984C8 (--1-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800B3360 (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 * Callees:
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800B13AC (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 */

void __fastcall ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::CallDestructors(
        CAudioSessionNotificationProcess *this,
        __int64 a2)
{
  __int64 v2; // rdi

  if ( a2 )
  {
    v2 = a2;
    do
    {
      CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(this);
      this = (CAudioSessionNotificationProcess *)((char *)this + 8);
      --v2;
    }
    while ( v2 );
  }
}
