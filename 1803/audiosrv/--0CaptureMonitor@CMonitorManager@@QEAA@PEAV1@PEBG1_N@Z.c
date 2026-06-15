/*
 * XREFs of ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1_N@Z @ 0x1800DDFE8
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800DE4BC (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180030868 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
CMonitorManager::CaptureMonitor *__fastcall CMonitorManager::CaptureMonitor::CaptureMonitor(
        CMonitorManager::CaptureMonitor *this,
        struct CMonitorManager *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        bool a5)
{
  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_BYTE *)this + 12) = 0;
  *((_BYTE *)this + 13) = a5;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 8) = 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (_QWORD *)this + 9,
    (unsigned __int64)a3);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (_QWORD *)this + 10,
    (unsigned __int64)a4);
  return this;
}
