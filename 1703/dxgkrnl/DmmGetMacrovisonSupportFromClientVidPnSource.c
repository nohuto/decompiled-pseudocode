/*
 * XREFs of DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C01D5330
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01A87E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rax
  int v13; // edi
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // rbx
  DMMVIDPNTOPOLOGY *v23; // r13
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v35; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // [rsp+20h] [rbp-20h] BYREF
  DMMVIDPNTOPOLOGY *v46; // [rsp+28h] [rbp-18h]
  __int64 v47; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v48; // [rsp+88h] [rbp+48h]
  int v49; // [rsp+90h] [rbp+50h]
  char v50; // [rsp+90h] [rbp+50h]
  unsigned int v51; // [rsp+98h] [rbp+58h] BYREF

  v48 = a2;
  v4 = 0;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  *a3 |= 1u;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(a1 + 2280);
  if ( !v10 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    v13 = v49;
    v50 = 0;
    v14 = v13 | 7;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v47, v11, (__int64)a3, a4);
    v15 = *(_QWORD *)(v11 + 88);
    v45 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v16 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v45, v16);
    if ( v45 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
      v21 = 0LL;
      v22 = *(_QWORD *)(v11 + 80);
      v23 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
      v46 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
      while ( 1 )
      {
        v51 = -1;
        v24 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v23, v48, v21, &v51);
        v20 = v24;
        if ( v24 < 0 )
          break;
        v29 = v51;
        if ( v51 == -1 )
        {
          if ( v22 )
            ReferenceCounted::Release((ReferenceCounted *)(v22 + 64), v25);
          auto_rc<DMMVIDPN const>::reset(&v45, 0LL);
          if ( v50 )
            *a3 = v14;
          goto LABEL_32;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v23, v48, v51);
        if ( !Path )
        {
          v35 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
          WdLogEvent5_WdAssertion(v35);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v22,
                       (unsigned int)v29,
                       v32,
                       v33);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 96) )
          {
            v50 = 1;
            v14 &= *((_DWORD *)Path + 42) | 0xFFFFFFF8;
          }
        }
        else
        {
          v39 = WdLogNewEntry5_WdError(v38, v37);
          *(_QWORD *)(v39 + 24) = v29;
          *(_QWORD *)(v39 + 32) = v22;
          WdLogEvent5_WdError(v39);
        }
        v23 = v46;
        ++v21;
      }
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
      v43[3] = v21;
      v43[4] = v48;
      v43[5] = v23;
      v43[6] = v20;
      if ( v22 )
        ReferenceCounted::Release((ReferenceCounted *)(v22 + 64), v44);
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      LODWORD(v20) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v45, 0LL);
    v4 = v20;
LABEL_32:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40), v40, v41, v42);
    return v4;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
