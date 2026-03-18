/*
 * XREFs of DpiFdoStopAdapter @ 0x1C01FAB88
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C01F5E10 (DpiFdoHandleStopDevice.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C0209B04 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C019FB34 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C019FD14 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C01A80E4 (-LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01D0B5C (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DxgkFinishPnPTransition @ 0x1C01D1058 (DxgkFinishPnPTransition.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01F2788 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoIsDevicePresent @ 0x1C01F8234 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C01FB2A0 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiPnpNotifyGdi @ 0x1C01FE050 (DpiPnpNotifyGdi.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201C7C (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDeleteIoMmuDomain @ 0x1C0201F60 (DpiDeleteIoMmuDomain.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C020A0CC (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiDxgkDdiStopDevice @ 0x1C020AED8 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DXGSHAREDPOWERREGISTRATIONOBJECT *v10; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v12; // rax
  unsigned int started; // r15d
  struct _ERESOURCE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGGLOBAL *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int v29; // r8d
  __int64 *i; // rdx
  __int64 *v31; // rcx
  __int128 *v32; // rax
  DXGADAPTER *v33; // rcx
  DXGGLOBAL *v34; // rax
  int IsDevicePresent; // eax
  char v36; // bl
  int v37; // r15d
  PVOID v38; // rcx
  __int64 v39; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  char v42[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+38h] [rbp-C8h]
  _QWORD v44[3]; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v46[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v47[10]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v46, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_DWORD *)DeviceExtension + 69) & 7;
  v43 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * v5 + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v7 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v6;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v7 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = *((_QWORD *)DeviceExtension + 317);
    memset(&v46[1], 0, 36);
    v46[0] = 0x480000001ELL;
    HIDWORD(v46[6]) = (unsigned int)a1 & 0xFFFF00;
    LODWORD(v46[6]) = 36;
    v46[7] = 0LL;
    v46[8] = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
    KeWaitForSingleObject(DeviceExtension + 3944, Executive, 0, 0, 0LL);
    if ( DeviceExtension[5296] )
    {
      v10 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT *)*((_QWORD *)DeviceExtension + 466);
      Global = DXGGLOBAL::GetGlobal(v9);
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(Global, v10);
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 330, 0);
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 330);
    }
    v12 = DXGGLOBAL::GetGlobal(v9);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)v12 + 74));
    if ( !DeviceExtension[480] )
    {
      v14 = (struct _ERESOURCE *)*((unsigned int *)DeviceExtension + 837);
      if ( (_DWORD)v14 != -1 )
        LPMDisplayUnregisterInternalDisplay(*((PFILE_OBJECT *)DeviceExtension + 466), v14);
    }
    if ( *((_DWORD *)DeviceExtension + 952) != 3 )
    {
      v15 = *((_QWORD *)DeviceExtension + 466);
      if ( v15 )
      {
        DxgkAcquireAdapterCoreSync(v15, 2);
        v16 = *((_QWORD *)DeviceExtension + 466);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v16) )
        {
          v18 = WdLogNewEntry5_WdAssertion(v17);
          *(_QWORD *)(v18 + 24) = 1413LL;
          WdLogEvent5_WdAssertion(v18);
        }
        *(_BYTE *)(v16 + 2373) = 1;
        v19 = DXGGLOBAL::GetGlobal(v17);
        QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v19 + 127), v20, v21, v22);
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 466));
      }
    }
    if ( (DeviceExtension[3736] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C007A760 == a1 )
    {
      v23 = *((_QWORD *)DeviceExtension + 6);
      v24 = *((_QWORD *)DeviceExtension + 5);
      v44[0] = 83886077LL;
      v44[1] = 0LL;
      v44[2] = 0LL;
      v25 = DpiDxgkDdiDisplayDetectControl(DeviceExtension, v24, v23, v44, Timeout);
      v27 = v25;
      if ( v25 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v28 + 24) = *(_QWORD *)(v43 + 1128);
        *(_QWORD *)(v28 + 32) = v27;
        WdLogEvent5_WdError(v28);
      }
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C007A768 == a1 )
      {
        LOBYTE(word_1C007A75C) = 0;
        qword_1C007A768 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C007A760 == a1 )
      {
        qword_1C007A760 = 0LL;
        word_1C007A75C = 0;
      }
      _InterlockedExchange64(&qword_1C007A788, 0LL);
      KeReleaseMutex((PRKMUTEX)Mutex, 0);
      if ( (DeviceExtension[3736] & 1) != 0 )
        DpiPnpNotifyGdi(a1, 0LL, started, a2);
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
    if ( DeviceExtension[1136] && dword_1C007AA8C != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3168), 1u);
      v29 = 0;
      for ( i = (__int64 *)*((_QWORD *)DeviceExtension + 435); v29 < *((_DWORD *)DeviceExtension + 874); i = v31 )
      {
        v31 = (__int64 *)*i;
        if ( *i == *((_QWORD *)DeviceExtension + 435) )
          break;
        if ( *((_DWORD *)i + 126) == dword_1C007AA8C )
        {
          v32 = (__int128 *)i[116];
          if ( v32 )
          {
            xmmword_1C007AA08 = *v32;
            xmmword_1C007AA18 = v32[1];
            xmmword_1C007AA28 = v32[2];
            xmmword_1C007AA38 = v32[3];
            xmmword_1C007AA48 = v32[4];
            xmmword_1C007AA58 = v32[5];
            xmmword_1C007AA68 = v32[6];
            xmmword_1C007AA78 = v32[7];
            v31 = (__int64 *)*i;
          }
        }
        ++v29;
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3168));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    if ( *((_DWORD *)DeviceExtension + 952) != 3 )
    {
      v33 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 466);
      if ( v33 )
        DXGADAPTER::Stop(v33, 0LL, 0);
      v34 = DXGGLOBAL::GetGlobal((__int64)v33);
      DXGGLOBAL::NotifyAdapterRemoval(v34);
    }
  }
  else
  {
    v46[0] = 0x4000000006LL;
    memset(&v46[1], 0, 36);
    HIDWORD(v46[6]) = (unsigned int)a1 & 0xFFFF00;
    LODWORD(v46[6]) = 36;
    v46[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v42);
  v36 = v42[0];
  if ( IsDevicePresent < 0 )
    v36 = 1;
  v37 = -1073741637;
  if ( DeviceExtension[1136] )
  {
    if ( v36 )
    {
      v37 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      memset(v47, 0, 0x48uLL);
      v47[0] = 0x480000001ELL;
      memset(&v47[1], 0, 36);
      v47[8] = *((_QWORD *)DeviceExtension + 317);
      v47[6] = 98LL;
      v47[7] = (unsigned int)v37;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v47);
      if ( v37 < 0 || dword_1C007AA00 != dword_1C007AA8C )
        memset(&xmmword_1C007AA08, 0, 0x80uLL);
    }
    else
    {
      dword_1C007AA88 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3736] &= ~4u;
  if ( v36 && v37 < 0 )
    DpiDxgkDdiStopDevice(v43, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 154) )
  {
    v38 = a1->DeviceExtension;
    Parameters.Version = *((_DWORD *)v38 + 306);
    Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v38 + 154);
    *((_QWORD *)v38 + 154) = 0LL;
    IoDisconnectInterruptEx(&Parameters);
  }
  v39 = *((_QWORD *)DeviceExtension + 61);
  if ( v39 )
  {
    PoFxUnregisterDevice(v39);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 466) + 2504LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiDeleteIoMmuDomain(a1);
  memset(v46, 0, 0x48uLL);
  v46[0] = 0x4000000006LL;
  memset(&v46[1], 0, 36);
  LODWORD(v46[6]) = 36;
  HIDWORD(v46[6]) = (unsigned int)a1 & 0xFFFF00;
  v46[7] = 1LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
}
