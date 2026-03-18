/*
 * XREFs of ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00D001C
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00D9650 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C0009328 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0009380 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00D8C78 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        unsigned __int8 IsVirtualModeSuportDisabled,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        bool *a8)
{
  DXGADAPTER *v10; // rsi
  __int64 Length; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  __int64 v19; // r12
  int CCDMonitorID; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  bool v25; // r15
  bool v26; // r12
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rcx
  struct _FAST_MUTEX *v32; // rcx
  int MonitorInstance; // eax
  struct DXGMONITOR *v34; // r14
  void (__fastcall ***v35)(_QWORD, __int64); // rcx
  int v36; // ebx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  struct DXGMONITOR *v55; // [rsp+28h] [rbp-58h] BYREF
  __int64 v56; // [rsp+30h] [rbp-50h] BYREF
  void **v57; // [rsp+38h] [rbp-48h] BYREF
  __int128 v58; // [rsp+40h] [rbp-40h]
  void **v59; // [rsp+50h] [rbp-30h]
  void *Source2; // [rsp+58h] [rbp-28h]
  __int64 v61; // [rsp+60h] [rbp-20h]
  int v62; // [rsp+68h] [rbp-18h]
  __int64 v63; // [rsp+70h] [rbp-10h]

  v10 = this;
  if ( !a2 || !a4 || !a5 || !a6 || (this = (DXGADAPTER *)a7) == 0LL || !a8 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v54[5] = a5;
    v54[3] = a2;
    v54[4] = a4;
    v54[6] = a6;
    WdLogEvent5_WdError(v54);
    return 3221225485LL;
  }
  *a4 = -1;
  Source2 = 0LL;
  v61 = 0LL;
  *a5 = D3DKMDT_VOT_UNINITIALIZED;
  *a8 = 0;
  *a6 = D3DKMDT_VOT_UNINITIALIZED;
  Length = a2->Length;
  v57 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  *a7 = 0;
  v59 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v58 = 0LL;
  v62 = 3;
  DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v57, Length + 2);
  if ( !Source2 )
  {
    v39 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v39 + 24) = ((unsigned __int64)a2->Length >> 1) + 2;
    *(_QWORD *)(v39 + 32) = v10;
    WdLogEvent5_WdError(v39);
    LODWORD(v24) = -1073741801;
    goto LABEL_50;
  }
  if ( !v10 )
  {
    v40 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v40 + 24) = 0LL;
LABEL_56:
    WdLogEvent5_WdError(v40);
    LODWORD(v24) = -1071775742;
    goto LABEL_50;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v41);
  }
  v14 = *((_QWORD *)v10 + 288);
  if ( !v14 )
  {
    v40 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v40 + 24) = v10;
    goto LABEL_56;
  }
  v15 = *(_QWORD *)(v14 + 88);
  if ( !v15 )
  {
    v42 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v42 + 24) = v10;
    WdLogEvent5_WdError(v42);
    LODWORD(v24) = -1071774923;
    goto LABEL_50;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v56, v15);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
  v16 = *(_QWORD *)(v15 + 80);
  v63 = v16;
  v17 = *(_QWORD *)(v16 + 24);
  if ( v17 == v16 + 24 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v17 - 8)) == 0LL )
  {
LABEL_59:
    LODWORD(v24) = -1073741275;
    goto LABEL_45;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)NextTarget + 404) )
      goto LABEL_58;
    v19 = *((_QWORD *)NextTarget + 13);
    if ( !v19 )
      goto LABEL_58;
    CCDMonitorID = MonitorGetCCDMonitorID(*((_QWORD *)NextTarget + 13), (unsigned int)v61 >> 1, Source2);
    v24 = CCDMonitorID;
    if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
      goto LABEL_58;
    if ( CCDMonitorID < 0 )
      break;
    if ( RtlCompareMemory(a2->Buffer, Source2, a2->Length) == a2->Length )
    {
      v25 = 1;
      v26 = 1;
      v27 = a5;
      *a4 = *((_DWORD *)NextTarget + 6);
      *a5 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20);
      *a6 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 21);
      v28 = *a4;
      if ( (_DWORD)v28 == -1 )
      {
        LODWORD(v24) = -1073741811;
LABEL_43:
        if ( (int)v24 >= 0 )
        {
          *a7 = !v25;
          *a8 = !v26;
          goto LABEL_45;
        }
      }
      else
      {
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
        {
          v43 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v43 + 24) = 7392LL;
          WdLogEvent5_WdAssertion(v43);
        }
        v30 = *((_QWORD *)v10 + 288);
        if ( v30 )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
          {
            v46 = WdLogNewEntry5_WdAssertion(v31);
            WdLogEvent5_WdAssertion(v46);
          }
          if ( !*((_QWORD *)v10 + 288) )
          {
            v47 = WdLogNewEntry5_WdAssertion(v31);
            WdLogEvent5_WdAssertion(v47);
          }
          v32 = *(struct _FAST_MUTEX **)(*((_QWORD *)v10 + 288) + 96LL);
          if ( !v32 )
          {
            v48 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v48 + 24) = v10;
            WdLogEvent5_WdError(v48);
            MonitorInstance = -1073741811;
            goto LABEL_38;
          }
          v55 = 0LL;
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v32, v28, 1, (ULONG **)&v55);
          if ( MonitorInstance == -1073741275 )
          {
            v38 = WdLogNewEntry5_WdDmmEvent(v27);
            *(_QWORD *)(v38 + 24) = v28;
            *(_QWORD *)(v38 + 32) = v10;
            WdLogEvent5_WdDmmEvent(v38);
            MonitorInstance = -1073741632;
          }
          else
          {
            if ( MonitorInstance >= 0 )
            {
              v34 = v55;
              if ( !v55 || *((_DWORD *)v55 + 104) != 1 )
              {
                v49 = WdLogNewEntry5_WdAssertion(v27);
                WdLogEvent5_WdAssertion(v49);
              }
              if ( !v34 )
              {
                v50 = WdLogNewEntry5_WdAssertion(v27);
                WdLogEvent5_WdAssertion(v50);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceSharedLite((PERESOURCE)((char *)v34 + 280), 1u);
              IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v34);
              ExReleaseResourceLite((PERESOURCE)((char *)v34 + 280));
              KeLeaveCriticalRegion();
              MonitorInstance = 0;
            }
            if ( MonitorInstance != -1073741632 )
            {
LABEL_38:
              LODWORD(v24) = 0;
              if ( MonitorInstance != -1073741632 )
                LODWORD(v24) = MonitorInstance;
              if ( (int)v24 < 0 )
              {
                v51 = WdLogNewEntry5_WdAssertion(v27);
                *(_QWORD *)(v51 + 24) = (int)v24;
                WdLogEvent5_WdAssertion(v51);
              }
              else if ( IsVirtualModeSuportDisabled )
              {
                v25 = 1;
                v26 = 1;
              }
              else
              {
                v25 = *(_BYTE *)(v30 + 132) == 0;
                v26 = *(_BYTE *)(v30 + 133) == 0;
              }
              goto LABEL_43;
            }
          }
          IsVirtualModeSuportDisabled = 0;
          goto LABEL_38;
        }
        v44 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v44 + 24) = 7397LL;
        WdLogEvent5_WdError(v44);
        LODWORD(v24) = -1073741811;
      }
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v45[3] = v10;
      v45[4] = *a4;
      v45[5] = (int)v24;
      WdLogEvent5_WdError(v45);
      goto LABEL_45;
    }
LABEL_58:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v16, NextTarget);
    if ( !NextTarget )
      goto LABEL_59;
  }
  v52 = WdLogNewEntry5_WdWarning(v22, v21, v23);
  *(_QWORD *)(v52 + 24) = v19;
  *(_QWORD *)(v52 + 32) = v24;
  WdLogEvent5_WdWarning(v52);
LABEL_45:
  if ( v16 )
  {
    v35 = (void (__fastcall ***)(_QWORD, __int64))(v16 + 64);
    v36 = _InterlockedDecrement((volatile signed __int32 *)(v16 + 72));
    if ( v36 )
    {
      if ( v36 < 0 )
      {
        v53 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v53 + 24) = v36;
        WdLogEvent5_WdError(v53);
      }
    }
    else if ( v35 )
    {
      (**v35)(v35, 1LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v56 + 40));
LABEL_50:
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v57);
  return (unsigned int)v24;
}
