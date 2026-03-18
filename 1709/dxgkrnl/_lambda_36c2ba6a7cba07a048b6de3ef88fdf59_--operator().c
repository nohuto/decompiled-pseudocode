/*
 * XREFs of _lambda_36c2ba6a7cba07a048b6de3ef88fdf59_::operator() @ 0x1C01C2DFC
 * Callers:
 *     _lambda_1ff3a3f8ec7154ebd3969214561ed056_::_lambda_invoker_cdecl_ @ 0x1C0029DE0 (_lambda_1ff3a3f8ec7154ebd3969214561ed056_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1C00012D8 (RtlStringCbCopyNW.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     RtlStringCchCopyW @ 0x1C000E754 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00D82E4 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00D8C78 (MonitorGetCCDMonitorID.c)
 *     MonitorIsDedicatedTimingGeneration @ 0x1C011E95C (MonitorIsDedicatedTimingGeneration.c)
 */

__int64 __fastcall lambda_36c2ba6a7cba07a048b6de3ef88fdf59_::operator()(unsigned int **a1, _QWORD *a2)
{
  unsigned int **v2; // rsi
  bool v4; // r13
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rcx
  const struct DMMVIDEOPRESENTTARGET *v23; // rdi
  __int64 v24; // rdi
  bool v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  struct _FAST_MUTEX *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  int MonitorInstance; // eax
  int v37; // edi
  __int64 v38; // rax
  struct DXGMONITOR *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rdx
  _OWORD *v45; // rcx
  _OWORD *v46; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm1
  unsigned int v55; // ecx
  char v56; // al
  struct HDXGMONITOR__ *v57; // r15
  __int64 v58; // rcx
  NTSTATUS MonitorFromHandle; // esi
  struct DXGMONITOR *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _DEVICE_OBJECT *v66; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int IsDedicatedTimingGeneration; // eax
  int v71; // ecx
  void (__fastcall ***v72)(_QWORD, __int64); // rcx
  int v73; // ebx
  __int64 v74; // rax
  char IsVirtualModeSuportDisabled; // [rsp+20h] [rbp-E0h]
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // [rsp+28h] [rbp-D8h]
  PZZWSTR SymbolicLinkList; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGMONITOR *v79; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGMONITOR *v80; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int **v81; // [rsp+48h] [rbp-B8h]
  __int64 v82; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v83[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v84[32]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v85[40]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v86[544]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v87[1056]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v88[108]; // [rsp+6F0h] [rbp+5F0h] BYREF

  v2 = a1;
  v81 = a1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v83, (struct DXGADAPTER *const)a2, 0LL);
  v4 = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v83) >= 0 && a2[288] )
  {
    ++**v2;
    v5 = *(_QWORD *)v2[1];
    v6 = **v2;
    if ( *(_DWORD *)(v5 + 4) >= v6 )
    {
      v7 = *(_QWORD *)(v5 + 8) + 540LL * (v6 - 1);
      memset(v86, 0, 0x21CuLL);
      v8 = v7;
      v9 = v86;
      v10 = 4LL;
      do
      {
        v11 = *((_OWORD *)v9 + 1);
        *(_OWORD *)v8 = *(_OWORD *)v9;
        v12 = *((_OWORD *)v9 + 2);
        *(_OWORD *)(v8 + 16) = v11;
        v13 = *((_OWORD *)v9 + 3);
        *(_OWORD *)(v8 + 32) = v12;
        v14 = *((_OWORD *)v9 + 4);
        *(_OWORD *)(v8 + 48) = v13;
        v15 = *((_OWORD *)v9 + 5);
        *(_OWORD *)(v8 + 64) = v14;
        v16 = *((_OWORD *)v9 + 6);
        *(_OWORD *)(v8 + 80) = v15;
        v17 = *((_OWORD *)v9 + 7);
        v9 += 128;
        *(_OWORD *)(v8 + 96) = v16;
        v8 += 128LL;
        *(_OWORD *)(v8 - 16) = v17;
        --v10;
      }
      while ( v10 );
      v18 = *((_QWORD *)v9 + 2);
      *(_OWORD *)v8 = *(_OWORD *)v9;
      *(_QWORD *)(v8 + 16) = v18;
      *(_DWORD *)(v8 + 24) = *((_DWORD *)v9 + 6);
      *(_QWORD *)v7 = *(_QWORD *)((char *)a2 + 268);
      RtlStringCbCopyNW(
        (NTSTRSAFE_PWSTR)(v7 + 8),
        (size_t)v9,
        *(STRSAFE_PCNZWCH *)(a2[156] + 8LL),
        *(unsigned __int16 *)a2[156]);
      v19 = *(_DWORD *)(v7 + 536) & 0xFFFFFFFD | (*(_BYTE *)(a2[288] + 132LL) != 0 ? 2 : 0);
      *(_DWORD *)(v7 + 536) = v19;
      *(_DWORD *)(v7 + 536) = v19 & 0xFFFFFFFE | (*(_BYTE *)(a2[288] + 133LL) != 0);
      *(_DWORD *)(v7 + 528) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a2);
      *(_DWORD *)(v7 + 532) = *(_DWORD *)(a2[288] + 80LL);
    }
    v20 = *(_QWORD *)(a2[288] + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v82, v20);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 80) + 72LL));
    v21 = *(_QWORD *)(v20 + 80);
    v22 = *(_QWORD *)(v21 + 24);
    if ( v22 != v21 + 24 )
    {
      v23 = (const struct DMMVIDEOPRESENTTARGET *)(v22 - 8);
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v22 - 8);
      if ( v22 != 8 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v2[1] + 20LL) < ++*v2[2] )
            goto LABEL_66;
          v24 = *((unsigned int *)v23 + 6);
          v25 = 0;
          if ( (_DWORD)v24 != -1 )
            break;
LABEL_40:
          v43 = *(_QWORD *)(*(_QWORD *)v2[1] + 24LL) + 1056LL * (*v2[2] - 1);
          memset(v87, 0, sizeof(v87));
          v44 = 8LL;
          v45 = v87;
          v46 = (_OWORD *)v43;
          do
          {
            v47 = v45[1];
            *v46 = *v45;
            v48 = v45[2];
            v46[1] = v47;
            v49 = v45[3];
            v46[2] = v48;
            v50 = v45[4];
            v46[3] = v49;
            v51 = v45[5];
            v46[4] = v50;
            v52 = v45[6];
            v46[5] = v51;
            v53 = v45[7];
            v45 += 8;
            v46[6] = v52;
            v46 += 8;
            *(v46 - 1) = v53;
            --v44;
          }
          while ( v44 );
          v23 = NextTarget;
          v54 = v45[1];
          *v46 = *v45;
          v46[1] = v54;
          *(_QWORD *)v43 = *(_QWORD *)((char *)a2 + 268);
          *(_DWORD *)(v43 + 8) = *((_DWORD *)NextTarget + 6);
          v55 = *(_DWORD *)(v43 + 1052) & 0xFFFFFFFE | (*((_QWORD *)NextTarget + 13) != 0LL);
          *(_DWORD *)(v43 + 1052) = v55;
          v56 = -!v4;
          v4 = 0;
          *(_DWORD *)(v43 + 1052) = v56 & 2 | (!v25 ? 4 : 0) | v55 & 0xFFFFFFF1 | (*((_BYTE *)NextTarget + 404) != 0
                                                                                 ? 8
                                                                                 : 0);
          v57 = (struct HDXGMONITOR__ *)*((_QWORD *)NextTarget + 13);
          if ( v57 )
          {
            memset(v88, 0, 0x1A4uLL);
            v80 = 0LL;
            MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v57, &v80);
            if ( MonitorFromHandle >= 0 )
            {
              v60 = v80;
              if ( !v80 )
              {
                v61 = WdLogNewEntry5_WdAssertion(v58);
                WdLogEvent5_WdAssertion(v61);
                v63 = WdLogNewEntry5_WdAssertion(v62);
                WdLogEvent5_WdAssertion(v63);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceSharedLite((PERESOURCE)((char *)v60 + 280), 1u);
              if ( *((_DWORD *)v60 + 104) == 1 && (*((_DWORD *)v60 + 6) & 0x10) == 0 )
              {
                v65 = WdLogNewEntry5_WdDmmEvent(v64);
                *(_QWORD *)(v65 + 24) = v60;
                WdLogEvent5_WdDmmEvent(v65);
                ExReleaseResourceLite((PERESOURCE)((char *)v60 + 280));
                KeLeaveCriticalRegion();
                v23 = NextTarget;
LABEL_63:
                MonitorGetCCDMonitorID(*((struct HDXGMONITOR__ **)v23 + 13), 260, (unsigned __int16 *)(v43 + 12));
                IsDedicatedTimingGeneration = MonitorIsDedicatedTimingGeneration(*((struct HDXGMONITOR__ **)v23 + 13));
                v2 = v81;
                v71 = 0;
                if ( IsDedicatedTimingGeneration >= 0 )
                  v71 = 16;
                *(_DWORD *)(v43 + 1052) = v71 | *(_DWORD *)(v43 + 1052) & 0xFFFFFFEF;
                goto LABEL_66;
              }
              memset(&v88[41], 0, 0x100uLL);
              v66 = (struct _DEVICE_OBJECT *)*((_QWORD *)v60 + 5);
              if ( v66 )
              {
                SymbolicLinkList = 0LL;
                DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v66, 0, &SymbolicLinkList);
                MonitorFromHandle = DeviceInterfaces;
                if ( DeviceInterfaces < 0 )
                {
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v69, v68) + 24) = DeviceInterfaces;
                  goto LABEL_60;
                }
                MonitorFromHandle = RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v88[41], 0x80uLL, SymbolicLinkList);
                ExFreePoolWithTag(SymbolicLinkList, 0);
                if ( MonitorFromHandle >= 0 )
                {
                  HIWORD(v88[41]) = 92;
                  goto LABEL_54;
                }
              }
              else
              {
LABEL_54:
                MonitorFromHandle = DXGMONITOR::_FillMonitorDeviceInfo(
                                      v60,
                                      (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v88);
                if ( MonitorFromHandle == -1071841279 )
                  MonitorFromHandle = 0;
                if ( MonitorFromHandle >= 0 && (v88[5] & 1) == 0 && !LOWORD(v88[9]) )
                  v88[5] |= 2u;
              }
LABEL_60:
              ExReleaseResourceLite((PERESOURCE)((char *)v60 + 280));
              KeLeaveCriticalRegion();
              v23 = NextTarget;
            }
            if ( MonitorFromHandle >= 0 )
              RtlStringCchCopyW((NTSTRSAFE_PWSTR)(v43 + 532), 0x104uLL, (NTSTRSAFE_PCWSTR)&v88[41]);
            goto LABEL_63;
          }
LABEL_66:
          NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v21, v23);
          v23 = NextTarget;
          if ( !NextTarget )
            goto LABEL_67;
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
        {
          v27 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v27 + 24) = 7392LL;
          WdLogEvent5_WdAssertion(v27);
        }
        v28 = a2[288];
        if ( !v28 )
        {
          v29 = WdLogNewEntry5_WdError(v26);
          *(_QWORD *)(v29 + 24) = 7397LL;
          WdLogEvent5_WdError(v29);
          goto LABEL_40;
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
        {
          v31 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v31);
        }
        if ( !a2[288] )
        {
          v32 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v32);
        }
        v33 = *(struct _FAST_MUTEX **)(a2[288] + 96LL);
        if ( !v33 )
        {
          v34 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v34 + 24) = a2;
          WdLogEvent5_WdError(v34);
          MonitorInstance = -1073741811;
LABEL_21:
          LOBYTE(v35) = IsVirtualModeSuportDisabled;
LABEL_22:
          v37 = 0;
          if ( MonitorInstance != -1073741632 )
            v37 = MonitorInstance;
          if ( v37 < 0 )
          {
            v42 = WdLogNewEntry5_WdAssertion(v35);
            *(_QWORD *)(v42 + 24) = v37;
            WdLogEvent5_WdAssertion(v42);
          }
          else if ( (_BYTE)v35 )
          {
            v25 = 1;
            v4 = 1;
          }
          else
          {
            v25 = *(_BYTE *)(v28 + 132) == 0;
            v4 = *(_BYTE *)(v28 + 133) == 0;
          }
          goto LABEL_40;
        }
        v79 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v33, v24, 1, (ULONG **)&v79);
        if ( MonitorInstance == -1073741275 )
        {
          v38 = WdLogNewEntry5_WdDmmEvent(v35);
          *(_QWORD *)(v38 + 24) = v24;
          *(_QWORD *)(v38 + 32) = a2;
          WdLogEvent5_WdDmmEvent(v38);
          MonitorInstance = -1073741632;
        }
        else
        {
          if ( MonitorInstance >= 0 )
          {
            v39 = v79;
            if ( !v79 || *((_DWORD *)v79 + 104) != 1 )
            {
              v40 = WdLogNewEntry5_WdAssertion(v35);
              WdLogEvent5_WdAssertion(v40);
            }
            if ( !v39 )
            {
              v41 = WdLogNewEntry5_WdAssertion(v35);
              WdLogEvent5_WdAssertion(v41);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v39 + 280), 1u);
            IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v39);
            ExReleaseResourceLite((PERESOURCE)((char *)v39 + 280));
            KeLeaveCriticalRegion();
            v2 = v81;
            MonitorInstance = 0;
          }
          if ( MonitorInstance != -1073741632 )
            goto LABEL_21;
        }
        LOBYTE(v35) = 0;
        IsVirtualModeSuportDisabled = 0;
        goto LABEL_22;
      }
    }
LABEL_67:
    if ( v21 )
    {
      v72 = (void (__fastcall ***)(_QWORD, __int64))(v21 + 64);
      v73 = _InterlockedDecrement((volatile signed __int32 *)(v21 + 72));
      if ( v73 )
      {
        if ( v73 < 0 )
        {
          v74 = WdLogNewEntry5_WdError(v72);
          *(_QWORD *)(v74 + 24) = v73;
          WdLogEvent5_WdError(v74);
        }
      }
      else if ( v72 )
      {
        (**v72)(v72, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v82 + 40));
  }
  COREACCESS::~COREACCESS((COREACCESS *)v85);
  COREACCESS::~COREACCESS((COREACCESS *)v84);
  return 0LL;
}
