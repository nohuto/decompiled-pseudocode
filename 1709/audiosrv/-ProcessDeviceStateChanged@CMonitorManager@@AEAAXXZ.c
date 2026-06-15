/*
 * XREFs of ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x1800A62C8
 * Callers:
 *     ?OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A5C20 (-OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x1800A2980 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A29B8 (-FreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEl.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x1800A4390 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800A4648 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMonitorManager::ProcessDeviceStateChanged(CMonitorManager *this)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-20h]
  LPCRITICAL_SECTION v8; // [rsp+38h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp-10h]

  v8 = (LPCRITICAL_SECTION)((char *)this + 16);
  v9 = 0;
  ATL::CCritSecLock::Lock(&v8);
  if ( *((_DWORD *)this + 14) == 1 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
    v7 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( !*((_BYTE *)this + 248) )
    {
      *((_BYTE *)this + 248) = 1;
      while ( *((_QWORD *)this + 27) )
      {
        v2 = (__int64 *)((char *)this + 200);
        v3 = (__int64 *)*((_QWORD *)this + 25);
        if ( !v3 )
          ATL::AtlThrowImpl(-2147467259);
        v4 = v3[2];
        v3[2] = 0LL;
        v5 = *v3;
        *v2 = *v3;
        if ( v5 )
          *(_QWORD *)(v5 + 8) = 0LL;
        else
          *((_QWORD *)this + 26) = 0LL;
        ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::FreeNode(
          (__int64)v2,
          v3);
        LeaveCriticalSection(lpCriticalSection);
        v7 = 0;
        if ( (*(_BYTE *)(v4 + 8) & 0xA) != 0 )
        {
          CMonitorManager::HandleDeviceRemoved(this, *(const unsigned __int16 **)v4);
        }
        else if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
        {
          CMonitorManager::HandleDeviceAdded(this, *(const unsigned __int16 **)v4);
        }
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'((CMonitorManager::DeviceStateChangedContext *)v4);
      }
      *((_BYTE *)this + 248) = 0;
    }
    if ( v7 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v9 )
    LeaveCriticalSection(v8);
}
