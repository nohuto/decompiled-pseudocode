/*
 * XREFs of DpiFdoStopAdapter @ 0x1C01DEF64
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C01E84FC (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0028090 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C010E47C (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011917C (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiPnpNotifyGdi @ 0x1C011C004 (DpiPnpNotifyGdi.c)
 *     DxgkFinishPnPTransition @ 0x1C0123684 (DxgkFinishPnPTransition.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C01AAD1C (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     LPMDisplayUnregisterInternalDisplay @ 0x1C01AE614 (LPMDisplayUnregisterInternalDisplay.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01DC6D4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C01DC780 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C01DEA3C (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C01DF6BC (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E3C08 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C01E9BEC (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  struct _ERESOURCE *v5; // rcx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  void *v11; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v13; // rax
  int started; // r14d
  struct _ERESOURCE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  _BYTE *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // r8d
  __int64 *i; // rcx
  __int128 *v33; // rax
  __int64 v34; // r9
  DXGADAPTER *v35; // rcx
  DXGGLOBAL *v36; // rax
  int IsDevicePresent; // eax
  char v38; // bl
  int v39; // r14d
  __int64 v40; // rcx
  char v42[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+38h] [rbp-C8h]
  _BYTE v44[16]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v45[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v46[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v47[10]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v46, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = (struct _ERESOURCE *)*((_QWORD *)DeviceExtension + 21);
  v43 = *((_QWORD *)DeviceExtension + 5);
  ExIsResourceAcquiredSharedLite(v5);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v7 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v6;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v7 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = *((_QWORD *)DeviceExtension + 317);
    memset(&v46[1], 0, 36);
    v9 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v46[6]) = (unsigned int)a1 & 0xFFFF00;
    v46[0] = 0x480000001ELL;
    LODWORD(v46[6]) = 36;
    v46[7] = 0LL;
    v46[8] = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
    KeWaitForSingleObject(DeviceExtension + 3944, Executive, 0, 0, 0LL);
    if ( DeviceExtension[5232] )
    {
      v11 = (void *)*((_QWORD *)DeviceExtension + 466);
      Global = DXGGLOBAL::GetGlobal(v10);
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(Global, v11);
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 326, 0);
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 326);
    }
    v13 = DXGGLOBAL::GetGlobal(v10);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)v13 + 73));
    if ( !DeviceExtension[480] )
    {
      v15 = (struct _ERESOURCE *)*((unsigned int *)DeviceExtension + 837);
      if ( (_DWORD)v15 != -1 )
        LPMDisplayUnregisterInternalDisplay(*((struct _FILE_OBJECT **)DeviceExtension + 466), v15);
    }
    if ( *((_DWORD *)DeviceExtension + 952) != 3 )
    {
      v16 = *((_QWORD *)DeviceExtension + 466);
      if ( v16 )
      {
        DxgkAcquireAdapterCoreSync(v16, 2);
        v17 = *((_QWORD *)DeviceExtension + 466);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v17) )
        {
          v19 = WdLogNewEntry5_WdAssertion(v18);
          *(_QWORD *)(v19 + 24) = 1353LL;
          WdLogEvent5_WdAssertion(v19);
        }
        *(_BYTE *)(v17 + 2229) = 1;
        v22 = *((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 117);
        if ( *(_BYTE *)v22 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = 201LL;
        }
        else
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v44, *(struct DXGFASTMUTEX *const *)(v22 + 8));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
          v23 = 18LL;
          v24 = (_BYTE *)(v22 + 16);
          do
          {
            *v24 = 0;
            v24 += 32;
            --v23;
          }
          while ( v23 );
          ++*(_DWORD *)(v22 + 592);
          *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 1LL) + 24) = 223LL;
          if ( v44[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
        }
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 466), 2);
      }
    }
    if ( (DeviceExtension[3736] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C0060860 == a1 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      v25 = *((_QWORD *)DeviceExtension + 6);
      v26 = *((_QWORD *)DeviceExtension + 5);
      v45[1] = 0LL;
      v45[2] = 0LL;
      v45[0] = 83886077LL;
      v27 = DpiDxgkDdiDisplayDetectControl((__int64)DeviceExtension, v26, v25, (unsigned int *)v45);
      v29 = v27;
      if ( v27 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v30 + 24) = *(_QWORD *)(v43 + 1128);
        *(_QWORD *)(v30 + 32) = v29;
        WdLogEvent5_WdError(v30);
      }
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C0060868 == a1 )
      {
        LOBYTE(word_1C006085C) = 0;
        qword_1C0060868 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C0060860 == a1 )
      {
        qword_1C0060860 = 0LL;
        word_1C006085C = 0;
      }
      _InterlockedExchange64(&qword_1C0060888, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (DeviceExtension[3736] & 1) != 0 )
        DpiPnpNotifyGdi((__int64)a1, 0, started, a2);
      else
        DxgkFinishPnPTransition(0xFFFFFFFFLL);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkFinishPnPTransition(0xFFFFFFFFLL);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 163, 0);
    if ( *((_QWORD *)DeviceExtension + 329) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 164, 0);
    if ( *((_QWORD *)DeviceExtension + 333) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 166, 0);
    if ( *((_QWORD *)DeviceExtension + 335) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 167, 0);
    if ( *((_QWORD *)DeviceExtension + 339) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 169, 0);
    if ( *((_QWORD *)DeviceExtension + 337) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 168, 0);
    if ( *((_QWORD *)DeviceExtension + 341) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 170, 0);
    if ( *((_QWORD *)DeviceExtension + 331) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 165, 0);
    if ( DeviceExtension[1136] && dword_1C0060B34 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3168), 1u);
      v31 = 0;
      for ( i = (__int64 *)*((_QWORD *)DeviceExtension + 435); v31 < *((_DWORD *)DeviceExtension + 874); ++v31 )
      {
        if ( *i == *((_QWORD *)DeviceExtension + 435) )
          break;
        if ( *((_DWORD *)i + 126) == dword_1C0060B34 )
        {
          v33 = (__int128 *)i[116];
          if ( v33 )
          {
            xmmword_1C0060AB0 = *v33;
            xmmword_1C0060AC0 = v33[1];
            xmmword_1C0060AD0 = v33[2];
            xmmword_1C0060AE0 = v33[3];
            xmmword_1C0060AF0 = v33[4];
            xmmword_1C0060B00 = v33[5];
            xmmword_1C0060B10 = v33[6];
            xmmword_1C0060B20 = v33[7];
          }
        }
        i = (__int64 *)*i;
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3168));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    if ( *((_DWORD *)DeviceExtension + 952) != 3 )
    {
      v35 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 466);
      if ( v35 )
        DXGADAPTER::Stop(v35, 0LL, 0LL, v34);
      v36 = DXGGLOBAL::GetGlobal((__int64)v35);
      DXGGLOBAL::NotifyAdapterRemoval(v36);
    }
  }
  else
  {
    v46[0] = 0x4000000006LL;
    v9 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v46[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v46[1], 0, 36);
    LODWORD(v46[6]) = 36;
    v46[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v42);
  v38 = v42[0];
  if ( IsDevicePresent < 0 )
    v38 = 1;
  v39 = -1073741637;
  if ( DeviceExtension[1136] )
  {
    if ( v38 )
    {
      v39 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      memset(v47, 0, 0x48uLL);
      v47[0] = 0x480000001ELL;
      memset(&v47[1], 0, 36);
      v47[8] = *((_QWORD *)DeviceExtension + 317);
      v47[6] = 98LL;
      v47[7] = (unsigned int)v39;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v47);
      if ( v39 < 0 || dword_1C0060AA8 != dword_1C0060B34 )
        memset(&xmmword_1C0060AB0, 0, 0x80uLL);
    }
    else
    {
      dword_1C0060B30 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3736] &= ~4u;
  if ( v38 && v39 < 0 )
    DpiDxgkDdiStopDevice(v43, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 154) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v40 = *((_QWORD *)DeviceExtension + 61);
  if ( v40 )
  {
    PoFxUnregisterDevice(v40);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 466) + 2352LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v46, 0, 0x48uLL);
  v46[0] = 0x4000000006LL;
  memset(&v46[1], 0, 36);
  LODWORD(v46[6]) = 36;
  HIDWORD(v46[6]) = v9;
  v46[7] = 1LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
}
