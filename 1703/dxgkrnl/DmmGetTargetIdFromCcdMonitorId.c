/*
 * XREFs of DmmGetTargetIdFromCcdMonitorId @ 0x1C00AF6C4
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00AFC34 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C0004930 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0004988 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AF60C (MonitorGetCCDMonitorID.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        bool *a2,
        int a3,
        _DWORD *a4,
        DXGADAPTER *a5,
        _DWORD *a6,
        bool *a7,
        bool *a8)
{
  const void **v9; // r13
  DXGADAPTER *v10; // rsi
  _DWORD *v11; // rax
  bool *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rbx
  _QWORD *v26; // r14
  const struct DMMVIDEOPRESENTTARGET *i; // r14
  __int64 v28; // r12
  int CCDMonitorID; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  DXGADAPTER *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  bool v38; // zf
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // [rsp+20h] [rbp-40h] BYREF
  void **v48; // [rsp+28h] [rbp-38h] BYREF
  __int128 v49; // [rsp+30h] [rbp-30h]
  void **v50; // [rsp+40h] [rbp-20h]
  void *Source2; // [rsp+48h] [rbp-18h]
  __int64 v52; // [rsp+50h] [rbp-10h]
  int v53; // [rsp+58h] [rbp-8h]
  char v54; // [rsp+A8h] [rbp+48h] BYREF
  int v55; // [rsp+B0h] [rbp+50h] BYREF

  v55 = a3;
  v9 = (const void **)a2;
  v10 = this;
  if ( a2 )
  {
    if ( a4 )
    {
      this = a5;
      if ( a5 )
      {
        v11 = a6;
        if ( a6 )
        {
          a2 = a7;
          if ( a7 )
          {
            v12 = a8;
            if ( a8 )
            {
              *a4 = -1;
              Source2 = 0LL;
              v52 = 0LL;
              *(_DWORD *)this = -2;
              *v11 = -2;
              *a2 = 0;
              v13 = *(unsigned __int16 *)v9;
              v48 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
              *v12 = 0;
              v50 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
              v49 = 0LL;
              v53 = 3;
              DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v48, v13 + 2, (__int64)v12, 4294967294LL);
              if ( Source2 )
              {
                if ( v10 )
                {
                  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
                  {
                    v42 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
                    WdLogEvent5_WdAssertion(v42);
                  }
                  v20 = *((_QWORD *)v10 + 285);
                  if ( v20 )
                  {
                    v21 = *(_QWORD *)(v20 + 88);
                    if ( v21 )
                    {
                      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
                        (__int64)&v47,
                        *(_QWORD *)(v20 + 88),
                        v18,
                        v19);
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
                      v25 = *(_QWORD **)(v21 + 80);
                      v55 = 0;
                      v26 = (_QWORD *)v25[3];
                      if ( v26 != v25 + 3 )
                      {
                        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v26 - 1);
                              i;
                              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v25, i, v23, v24) )
                        {
                          v28 = *((_QWORD *)i + 13);
                          if ( !*((_BYTE *)i + 404) )
                          {
                            if ( v28 )
                            {
                              CCDMonitorID = MonitorGetCCDMonitorID(
                                               *((struct HDXGMONITOR__ **)i + 13),
                                               (unsigned int)v52 >> 1,
                                               (unsigned __int16 *)Source2,
                                               v24);
                              v32 = CCDMonitorID;
                              if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
                              {
                                if ( CCDMonitorID < 0 )
                                {
                                  v45 = WdLogNewEntry5_WdWarning(v31, v30, v23, v24);
                                  *(_QWORD *)(v45 + 24) = v28;
                                  *(_QWORD *)(v45 + 32) = v32;
                                  WdLogEvent5_WdWarning(v45);
                                  goto LABEL_24;
                                }
                                if ( RtlCompareMemory(v9[1], Source2, *(unsigned __int16 *)v9) == *(unsigned __int16 *)v9 )
                                {
                                  if ( !v55 )
                                  {
                                    v33 = a5;
                                    *a4 = *((_DWORD *)i + 6);
                                    v34 = *((_DWORD *)i + 20);
                                    LOBYTE(v55) = 1;
                                    *(_DWORD *)v33 = v34;
                                    v35 = *((_DWORD *)i + 21);
                                    v54 = 1;
                                    *a6 = v35;
                                    v36 = IsVirtualizationDisabledForTarget(v10, (unsigned int)*a4, &v55, &v54);
                                    v32 = v36;
                                    if ( v36 < 0 )
                                    {
                                      v44 = (_QWORD *)WdLogNewEntry5_WdError(v37, v22);
                                      v44[3] = v10;
                                      v44[4] = (unsigned int)*a4;
                                      v44[5] = v32;
                                      WdLogEvent5_WdError(v44);
                                    }
                                    else
                                    {
                                      v38 = v54 == 0;
                                      *a7 = (_BYTE)v55 == 0;
                                      *a8 = v38;
                                    }
                                    goto LABEL_24;
                                  }
                                  --v55;
                                }
                              }
                            }
                          }
                        }
                      }
                      LODWORD(v32) = -1073741275;
LABEL_24:
                      if ( v25 )
                        ReferenceCounted::Release((ReferenceCounted *)(v25 + 8), v22);
                      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40), v22, v23, v24);
                    }
                    else
                    {
                      v43 = WdLogNewEntry5_WdError(v17, v16);
                      *(_QWORD *)(v43 + 24) = v10;
                      WdLogEvent5_WdError(v43);
                      LODWORD(v32) = -1071774923;
                    }
                    goto LABEL_27;
                  }
                  v41 = WdLogNewEntry5_WdError(v17, v16);
                  *(_QWORD *)(v41 + 24) = v10;
                }
                else
                {
                  v41 = WdLogNewEntry5_WdError(v15, v14);
                  *(_QWORD *)(v41 + 24) = 0LL;
                }
                WdLogEvent5_WdError(v41);
                LODWORD(v32) = -1071775742;
              }
              else
              {
                v40 = WdLogNewEntry5_WdError(v15, v14);
                *(_QWORD *)(v40 + 24) = ((unsigned __int64)*(unsigned __int16 *)v9 >> 1) + 2;
                *(_QWORD *)(v40 + 32) = v10;
                WdLogEvent5_WdError(v40);
                LODWORD(v32) = -1073741801;
              }
LABEL_27:
              DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v48);
              return (unsigned int)v32;
            }
          }
        }
      }
    }
  }
  v46 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
  v46[5] = a5;
  v46[6] = a6;
  v46[3] = v9;
  v46[4] = a4;
  WdLogEvent5_WdError(v46);
  return 3221225485LL;
}
