/*
 * XREFs of DpiFdoStopAdapter @ 0x1C01C545C
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C01C4520 (DpiFdoHandleStopDevice.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C01CE0EC (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011233C (DpiDxgkDdiDisplayDetectControl.c)
 *     DxgkFinishPnPTransition @ 0x1C011B454 (DxgkFinishPnPTransition.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C011B794 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiPnpNotifyGdi @ 0x1C0122FF4 (DpiPnpNotifyGdi.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0195AF4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0195BE4 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     LPMDisplayUnregisterInternalDisplay @ 0x1C01987B4 (LPMDisplayUnregisterInternalDisplay.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01C2FB4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C01C3060 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C01C4EE0 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C01C5B20 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C9AB8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C01CF8CC (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int started; // r14d
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  _BYTE *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int v56; // r8d
  __int64 *i; // rcx
  __int128 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  DXGADAPTER *v62; // rcx
  DXGGLOBAL *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  int IsDevicePresent; // eax
  __int64 v68; // rdx
  char v69; // bl
  int v70; // r14d
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  char v76[8]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v77; // [rsp+38h] [rbp-71h]
  _BYTE v78[16]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v79[4]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v80[10]; // [rsp+70h] [rbp-39h] BYREF

  memset(v80, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = (struct _ERESOURCE *)*((_QWORD *)DeviceExtension + 21);
  v77 = *((_QWORD *)DeviceExtension + 5);
  ExIsResourceAcquiredSharedLite(v5);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v9 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v10 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v9;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v10 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v11 = *((_QWORD *)DeviceExtension + 317);
    memset(&v80[1], 0, 36);
    v12 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v80[6]) = (unsigned int)a1 & 0xFFFF00;
    v80[0] = 0x480000001ELL;
    LODWORD(v80[6]) = 36;
    v80[7] = 0LL;
    v80[8] = v11;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v80, v6, v7, v8);
    KeWaitForSingleObject(DeviceExtension + 3920, Executive, 0, 0, 0LL);
    if ( DeviceExtension[5096] )
    {
      v17 = (void *)*((_QWORD *)DeviceExtension + 463);
      Global = DXGGLOBAL::GetGlobal(v14, v13, v15, v16);
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(Global, v17);
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 5080), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 5080));
    }
    v19 = DXGGLOBAL::GetGlobal(v14, v13, v15, v16);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)v19 + 73), v20, v21, v22);
    if ( !DeviceExtension[480] )
    {
      v23 = *((unsigned int *)DeviceExtension + 831);
      if ( (_DWORD)v23 != -1 )
        LPMDisplayUnregisterInternalDisplay(*((struct _FILE_OBJECT **)DeviceExtension + 463), (struct _ERESOURCE *)v23);
    }
    if ( *((_DWORD *)DeviceExtension + 946) != 3 )
    {
      v27 = *((_QWORD *)DeviceExtension + 463);
      if ( v27 )
      {
        DxgkAcquireAdapterCoreSync(v27, 2LL);
        v28 = *((_QWORD *)DeviceExtension + 463);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v28) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
          *(_QWORD *)(v33 + 24) = 1149LL;
          WdLogEvent5_WdAssertion(v33);
        }
        *(_BYTE *)(v28 + 2205) = 1;
        v36 = *((_QWORD *)DXGGLOBAL::GetGlobal(v30, v29, v31, v32) + 117);
        if ( *(_BYTE *)v36 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v35, v34, v37, v38) + 24) = 206LL;
        }
        else
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v78, *(struct DXGFASTMUTEX *const *)(v36 + 8), v37, v38);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v78);
          v41 = 18LL;
          v42 = (_BYTE *)(v36 + 16);
          do
          {
            *v42 = 0;
            v42 += 48;
            --v41;
          }
          while ( v41 );
          ++*(_DWORD *)(v36 + 880);
          *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 1LL, v39, v40) + 24) = 228LL;
          if ( v78[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v78, v43, v44, v45);
        }
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 463), 2LL);
      }
    }
    if ( (DeviceExtension[3712] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C006F9E0 == a1 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      v46 = *((_QWORD *)DeviceExtension + 6);
      v47 = *((_QWORD *)DeviceExtension + 5);
      v79[1] = 0LL;
      v79[2] = 0LL;
      v79[0] = 83886077LL;
      v48 = DpiDxgkDdiDisplayDetectControl((__int64)DeviceExtension, v47, v46, (unsigned int *)v79);
      v51 = v48;
      if ( v48 < 0 )
      {
        v52 = WdLogNewEntry5_WdError(v50, v49);
        *(_QWORD *)(v52 + 24) = *(_QWORD *)(v77 + 1128);
        *(_QWORD *)(v52 + 32) = v51;
        WdLogEvent5_WdError(v52);
      }
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C006F9E8 == a1 )
      {
        LOBYTE(word_1C006F9DC) = 0;
        qword_1C006F9E8 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C006F9E0 == a1 )
      {
        qword_1C006F9E0 = 0LL;
        word_1C006F9DC = 0;
      }
      _InterlockedExchange64(&qword_1C006FA08, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (DeviceExtension[3712] & 1) != 0 )
        DpiPnpNotifyGdi((__int64)a1, 0, started, a2);
      else
        DxgkFinishPnPTransition(0xFFFFFFFFLL, v53, v54, v55);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkFinishPnPTransition(0xFFFFFFFFLL, v23, v24, v25);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 163, 0);
    if ( *((_QWORD *)DeviceExtension + 329) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 164, 0);
    if ( *((_QWORD *)DeviceExtension + 333) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 166, 0);
    if ( *((_QWORD *)DeviceExtension + 337) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 168, 0);
    if ( *((_QWORD *)DeviceExtension + 335) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 167, 0);
    if ( *((_QWORD *)DeviceExtension + 339) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 169, 0);
    if ( *((_QWORD *)DeviceExtension + 331) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 165, 0);
    if ( DeviceExtension[1136] && dword_1C006FCB4 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3144), 1u);
      v56 = 0;
      for ( i = (__int64 *)*((_QWORD *)DeviceExtension + 432); v56 < *((_DWORD *)DeviceExtension + 868); ++v56 )
      {
        if ( *i == *((_QWORD *)DeviceExtension + 432) )
          break;
        if ( *((_DWORD *)i + 126) == dword_1C006FCB4 )
        {
          v58 = (__int128 *)i[116];
          if ( v58 )
          {
            xmmword_1C006FC30 = *v58;
            xmmword_1C006FC40 = v58[1];
            xmmword_1C006FC50 = v58[2];
            xmmword_1C006FC60 = v58[3];
            xmmword_1C006FC70 = v58[4];
            xmmword_1C006FC80 = v58[5];
            xmmword_1C006FC90 = v58[6];
            xmmword_1C006FCA0 = v58[7];
          }
        }
        i = (__int64 *)*i;
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3144));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    if ( *((_DWORD *)DeviceExtension + 946) != 3 )
    {
      v62 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 463);
      if ( v62 )
        DXGADAPTER::Stop(v62, 0, 0);
      v63 = DXGGLOBAL::GetGlobal((__int64)v62, v59, v60, v61);
      DXGGLOBAL::NotifyAdapterRemoval(v63, v64, v65, v66);
    }
  }
  else
  {
    v80[0] = 0x4000000006LL;
    v12 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v80[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v80[1], 0, 36);
    LODWORD(v80[6]) = 36;
    v80[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v80, v6, v7, v8);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v76);
  v69 = v76[0];
  if ( IsDevicePresent < 0 )
    v69 = 1;
  v70 = -1073741637;
  if ( DeviceExtension[1136] )
  {
    if ( v69 )
    {
      v70 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      if ( v70 < 0 || dword_1C006FC28 != dword_1C006FCB4 )
        memset(&xmmword_1C006FC30, 0, 0x80uLL);
    }
    else
    {
      dword_1C006FCB0 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3712] &= ~4u;
  if ( v69 && v70 < 0 )
    DpiDxgkDdiStopDevice(v77, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 154) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v71 = *((_QWORD *)DeviceExtension + 61);
  if ( v71 )
  {
    PoFxUnregisterDevice(v71, v68);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 463) + 2328LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v80, 0, 0x48uLL);
  v80[0] = 0x4000000006LL;
  memset(&v80[1], 0, 36);
  LODWORD(v80[6]) = 36;
  HIDWORD(v80[6]) = v12;
  v80[7] = 1LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v80, v72, v73, v74);
}
