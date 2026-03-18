/*
 * XREFs of ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00D85B4
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00B066C (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C000B020 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C000B07C (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AD104 (MonitorGetCCDMonitorID.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        int a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        unsigned __int8 *a8)
{
  DXGADAPTER *v10; // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // rax
  bool *v12; // rdx
  unsigned __int8 *v13; // r8
  __int64 Length; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  _QWORD *v20; // rbx
  _QWORD *v21; // rcx
  __int64 v22; // r13
  int CCDMonitorID; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v28; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v29; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // [rsp+20h] [rbp-40h] BYREF
  void **v43; // [rsp+28h] [rbp-38h] BYREF
  __int128 v44; // [rsp+30h] [rbp-30h]
  void **v45; // [rsp+40h] [rbp-20h]
  void *Source2; // [rsp+48h] [rbp-18h]
  __int64 v47; // [rsp+50h] [rbp-10h]
  int v48; // [rsp+58h] [rbp-8h]
  char v49; // [rsp+A8h] [rbp+48h] BYREF
  int v50; // [rsp+B0h] [rbp+50h] BYREF

  v50 = a3;
  v10 = this;
  if ( !a2 || !a4 || (this = (DXGADAPTER *)a5) == 0LL || (v11 = a6) == 0LL || (v12 = a7) == 0LL || (v13 = a8) == 0LL )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v41[5] = a5;
    v41[6] = a6;
    v41[3] = a2;
    v41[4] = a4;
    WdLogEvent5_WdError(v41);
    return 3221225485LL;
  }
  *a4 = -1;
  Source2 = 0LL;
  v47 = 0LL;
  *(_DWORD *)this = -2;
  *v11 = D3DKMDT_VOT_UNINITIALIZED;
  *v12 = 0;
  Length = a2->Length;
  v43 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  *v13 = 0;
  v45 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v44 = 0LL;
  v48 = 3;
  DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v43, Length + 2);
  if ( !Source2 )
  {
    v35 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v35 + 24) = ((unsigned __int64)a2->Length >> 1) + 2;
    *(_QWORD *)(v35 + 32) = v10;
    WdLogEvent5_WdError(v35);
    LODWORD(v27) = -1073741801;
    goto LABEL_26;
  }
  if ( !v10 )
  {
    v36 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v36 + 24) = 0LL;
LABEL_30:
    WdLogEvent5_WdError(v36);
    LODWORD(v27) = -1071775742;
    goto LABEL_26;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v37);
  }
  v17 = *((_QWORD *)v10 + 307);
  if ( !v17 )
  {
    v36 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v36 + 24) = v10;
    goto LABEL_30;
  }
  v18 = *(_QWORD *)(v17 + 88);
  if ( !v18 )
  {
    v38 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v38 + 24) = v10;
    WdLogEvent5_WdError(v38);
    LODWORD(v27) = -1071774923;
    goto LABEL_26;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v42, *(_QWORD *)(v17 + 88));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
  v50 = 0;
  NextTarget = 0LL;
  v20 = *(_QWORD **)(v18 + 80);
  v21 = (_QWORD *)v20[3];
  if ( v21 != v20 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v21 - 1);
  if ( !NextTarget )
  {
LABEL_34:
    LODWORD(v27) = -1073741275;
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( !*((_DWORD *)NextTarget + 22) )
    {
      v22 = *((_QWORD *)NextTarget + 13);
      if ( v22 )
      {
        CCDMonitorID = MonitorGetCCDMonitorID(
                         *((struct HDXGMONITOR__ **)NextTarget + 13),
                         (unsigned int)v47 >> 1,
                         (unsigned __int16 *)Source2);
        v27 = CCDMonitorID;
        if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
        {
          if ( CCDMonitorID < 0 )
          {
            v40 = WdLogNewEntry5_WdWarning(v25, v24, v26);
            *(_QWORD *)(v40 + 24) = v22;
            *(_QWORD *)(v40 + 32) = v27;
            WdLogEvent5_WdWarning(v40);
            goto LABEL_25;
          }
          if ( RtlCompareMemory(a2->Buffer, Source2, a2->Length) == a2->Length )
            break;
        }
      }
    }
LABEL_33:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v20, NextTarget);
    if ( !NextTarget )
      goto LABEL_34;
  }
  if ( v50 )
  {
    --v50;
    goto LABEL_33;
  }
  v28 = a5;
  *a4 = *((_DWORD *)NextTarget + 6);
  v29 = *((_DWORD *)NextTarget + 20);
  LOBYTE(v50) = 1;
  *v28 = v29;
  v30 = *((_DWORD *)NextTarget + 21);
  v49 = 1;
  *a6 = v30;
  v31 = IsVirtualizationDisabledForTarget(v10, *a4, (bool *)&v50, (bool *)&v49);
  v27 = v31;
  if ( v31 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v39[3] = v10;
    v39[4] = *a4;
    v39[5] = v27;
    WdLogEvent5_WdError(v39);
  }
  else
  {
    v33 = v49 == 0;
    *a7 = (_BYTE)v50 == 0;
    *a8 = v33;
  }
LABEL_25:
  ReferenceCounted::Release((ReferenceCounted *)(v20 + 8));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v42 + 40));
LABEL_26:
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v43);
  return (unsigned int)v27;
}
