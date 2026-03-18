/*
 * XREFs of _lambda_9701550c22e6dfba19810e7e8a87dbd3_::operator() @ 0x1C010FCA0
 * Callers:
 *     _lambda_ffedf47d2c9adf3870413880fe1feca7_::_lambda_invoker_cdecl_ @ 0x1C001A210 (_lambda_ffedf47d2c9adf3870413880fe1feca7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0002600 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0016DDC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AD104 (MonitorGetCCDMonitorID.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00B8134 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall lambda_9701550c22e6dfba19810e7e8a87dbd3_::operator()(unsigned int **a1, struct DXGADAPTER *a2)
{
  struct DXGADAPTER *v3; // rdi
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rbx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  unsigned int v19; // edx
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  _QWORD *v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // r15
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int64 v28; // rdx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  int v38; // eax
  struct HDXGMONITOR__ *v39; // rsi
  __int64 v41; // rcx
  int MonitorFromHandle; // esi
  struct DXGMONITOR *v43; // rdi
  __int64 v44; // rcx
  struct _DEVICE_OBJECT *v45; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  bool v55; // [rsp+20h] [rbp-E0h] BYREF
  bool v56; // [rsp+21h] [rbp-DFh] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+28h] [rbp-D8h] BYREF
  struct DXGMONITOR *v58; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGADAPTER *v59; // [rsp+38h] [rbp-C8h]
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v61[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v62[32]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v63[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v64[560]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v65[1072]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v66[108]; // [rsp+700h] [rbp+600h] BYREF

  v59 = a2;
  v3 = a2;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v61, a2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61) >= 0 && *((_QWORD *)v3 + 307) )
  {
    ++**a1;
    v4 = *(_QWORD *)a1[1];
    v5 = **a1;
    if ( *(_DWORD *)(v4 + 4) >= v5 )
    {
      v6 = *(_QWORD *)(v4 + 8) + 560LL * (v5 - 1);
      memset(v64, 0, sizeof(v64));
      v7 = (_OWORD *)v6;
      v8 = v64;
      v9 = 4LL;
      do
      {
        v10 = v8[1];
        *v7 = *v8;
        v11 = v8[2];
        v7[1] = v10;
        v12 = v8[3];
        v7[2] = v11;
        v13 = v8[4];
        v7[3] = v12;
        v14 = v8[5];
        v7[4] = v13;
        v15 = v8[6];
        v7[5] = v14;
        v16 = v8[7];
        v8 += 8;
        v7[6] = v15;
        v7 += 8;
        *(v7 - 1) = v16;
        --v9;
      }
      while ( v9 );
      v17 = v8[1];
      *v7 = *v8;
      v18 = v8[2];
      v7[1] = v17;
      v7[2] = v18;
      *(_QWORD *)v6 = *(_QWORD *)((char *)v3 + 268);
      RtlStringCbCopyNW(
        (char *)(v6 + 8),
        0LL,
        *(char **)(*((_QWORD *)v3 + 168) + 8LL),
        **((unsigned __int16 **)v3 + 168));
      v19 = *(_DWORD *)(v6 + 556) & 0xFFFFFFFD | (*(_BYTE *)(*((_QWORD *)v3 + 307) + 132LL) != 0 ? 2 : 0);
      *(_DWORD *)(v6 + 556) = v19;
      *(_DWORD *)(v6 + 556) = v19 & 0xFFFFFFFE | (*(_BYTE *)(*((_QWORD *)v3 + 307) + 133LL) != 0);
      *(_DWORD *)(v6 + 528) = DXGADAPTER::GetDriverVersion(v3);
      *(_DWORD *)(v6 + 532) = *(_DWORD *)(*((_QWORD *)v3 + 307) + 80LL);
      *(_DWORD *)(v6 + 536) = *((_DWORD *)v3 + 69);
      *(_DWORD *)(v6 + 540) = *((_DWORD *)v3 + 70);
      *(_DWORD *)(v6 + 544) = *((_DWORD *)v3 + 71);
      *(_DWORD *)(v6 + 548) = *((_DWORD *)v3 + 72);
      *(_DWORD *)(v6 + 552) = *((_DWORD *)v3 + 73);
    }
    v20 = *(_QWORD *)(*((_QWORD *)v3 + 307) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v60, v20);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 80) + 72LL));
    v21 = *(_QWORD **)(v20 + 80);
    NextTarget = 0LL;
    v23 = (_QWORD *)v21[3];
    if ( v23 != v21 + 3 )
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v23 - 1);
    if ( NextTarget )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)a1[1] + 20LL) < ++*a1[2] )
          goto LABEL_14;
        v24 = *((_DWORD *)NextTarget + 6);
        v55 = 0;
        v56 = 0;
        IsVirtualizationDisabledForTarget(v3, v24, &v55, &v56);
        v25 = *(_QWORD *)(*(_QWORD *)a1[1] + 24LL) + 1060LL * (*a1[2] - 1);
        memset(v65, 0, 0x424uLL);
        v26 = (_OWORD *)v25;
        v27 = v65;
        v28 = 8LL;
        do
        {
          v29 = v27[1];
          *v26 = *v27;
          v30 = v27[2];
          v26[1] = v29;
          v31 = v27[3];
          v26[2] = v30;
          v32 = v27[4];
          v26[3] = v31;
          v33 = v27[5];
          v26[4] = v32;
          v34 = v27[6];
          v26[5] = v33;
          v35 = v27[7];
          v27 += 8;
          v26[6] = v34;
          v26 += 8;
          *(v26 - 1) = v35;
          --v28;
        }
        while ( v28 );
        v36 = *v27;
        v37 = v27[1];
        v38 = *((_DWORD *)v27 + 8);
        *v26 = v36;
        v26[1] = v37;
        *((_DWORD *)v26 + 8) = v38;
        *(_QWORD *)v25 = *(_QWORD *)((char *)v3 + 268);
        *(_DWORD *)(v25 + 8) = *((_DWORD *)NextTarget + 6);
        *(_DWORD *)(v25 + 1052) = *((_DWORD *)NextTarget + 22);
        *(_DWORD *)(v25 + 1056) = (!v56 ? 2 : 0) | (!v55 ? 4 : 0) | *(_DWORD *)(v25 + 1056) & 0xFFFFFFF8 | (*((_QWORD *)NextTarget + 13) != 0LL);
        v39 = (struct HDXGMONITOR__ *)*((_QWORD *)NextTarget + 13);
        if ( !v39 )
          goto LABEL_14;
        memset(v66, 0, 0x1A4uLL);
        v58 = 0LL;
        MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v39, &v58);
        if ( MonitorFromHandle < 0 )
          goto LABEL_31;
        v43 = v58;
        if ( !v58 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v41);
          WdLogEvent5_WdAssertion(v51);
          v53 = WdLogNewEntry5_WdAssertion(v52);
          WdLogEvent5_WdAssertion(v53);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v43 + 296), 1u);
        if ( *((_DWORD *)v43 + 108) != 1 || (*((_DWORD *)v43 + 10) & 0x10) != 0 )
          break;
        v54 = WdLogNewEntry5_WdDmmEvent(v44);
        *(_QWORD *)(v54 + 24) = v43;
        WdLogEvent5_WdDmmEvent(v54);
        ExReleaseResourceLite((PERESOURCE)((char *)v43 + 296));
        KeLeaveCriticalRegion();
LABEL_33:
        MonitorGetCCDMonitorID(*((struct HDXGMONITOR__ **)NextTarget + 13), 0x104u, (unsigned __int16 *)(v25 + 12));
        v3 = v59;
        *(_DWORD *)(v25 + 1056) ^= (*(_DWORD *)(v25 + 1056) ^ (*((_DWORD *)NextTarget + 135) >> 3)) & 8;
LABEL_14:
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v21, NextTarget);
        if ( !NextTarget )
          goto LABEL_15;
      }
      memset(&v66[41], 0, 0x100uLL);
      v45 = (struct _DEVICE_OBJECT *)*((_QWORD *)v43 + 7);
      if ( !v45 )
        goto LABEL_26;
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v45, 0, &SymbolicLinkList);
      MonitorFromHandle = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v48, v47, v49, v50) + 24) = DeviceInterfaces;
      }
      else
      {
        MonitorFromHandle = RtlStringCchCopyW((unsigned __int16 *)&v66[41], 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( MonitorFromHandle >= 0 )
        {
          HIWORD(v66[41]) = 92;
LABEL_26:
          MonitorFromHandle = DXGMONITOR::_FillMonitorDeviceInfo(v43, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v66);
          if ( MonitorFromHandle == -1071841279 )
            MonitorFromHandle = 0;
          if ( MonitorFromHandle >= 0 && (v66[5] & 1) == 0 && !LOWORD(v66[9]) )
            v66[5] |= 2u;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v43 + 296));
      KeLeaveCriticalRegion();
LABEL_31:
      if ( MonitorFromHandle >= 0 )
        RtlStringCchCopyW((unsigned __int16 *)(v25 + 532), 0x104uLL, (const unsigned __int16 *)&v66[41]);
      goto LABEL_33;
    }
LABEL_15:
    ReferenceCounted::Release((ReferenceCounted *)(v21 + 8));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v60 + 40));
  }
  COREACCESS::~COREACCESS((COREACCESS *)v63);
  COREACCESS::~COREACCESS((COREACCESS *)v62);
  return 0LL;
}
