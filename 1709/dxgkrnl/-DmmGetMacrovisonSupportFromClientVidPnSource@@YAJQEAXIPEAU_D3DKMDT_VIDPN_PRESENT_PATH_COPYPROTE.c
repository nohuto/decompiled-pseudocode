/*
 * XREFs of ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C01EC290
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01C2684 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(
        _QWORD *a1,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a3)
{
  unsigned int v3; // esi
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r12
  volatile signed __int32 *v20; // rbx
  DMMVIDPNTOPOLOGY *v21; // r13
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v28; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  void (__fastcall ***v32)(_QWORD, __int64); // rcx
  int v33; // ebx
  __int64 v34; // rax
  _QWORD *v35; // rax
  void (__fastcall ***v36)(_QWORD, __int64); // rcx
  int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-20h] BYREF
  DMMVIDPNTOPOLOGY *v40; // [rsp+28h] [rbp-18h]
  __int64 v41; // [rsp+30h] [rbp-10h] BYREF
  int v43; // [rsp+90h] [rbp+50h]
  char v44; // [rsp+90h] [rbp+50h]
  unsigned int v45; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  *a3 = 0;
  *(_DWORD *)a3 |= 1u;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  v9 = a1[288];
  if ( !v9 )
  {
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    v12 = v43;
    v44 = 0;
    v13 = v12 | 7;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v41, v10);
    v14 = *(_QWORD *)(v10 + 88);
    v39 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v39, v15);
    if ( v39 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
      v19 = 0LL;
      v20 = *(volatile signed __int32 **)(v10 + 80);
      v21 = (DMMVIDPNTOPOLOGY *)(v39 + 96);
      v40 = (DMMVIDPNTOPOLOGY *)(v39 + 96);
      while ( 1 )
      {
        v45 = -1;
        v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v21, (_QWORD *)a2, v19, &v45);
        v18 = v22;
        if ( v22 < 0 )
          break;
        v25 = v45;
        if ( v45 == -1 )
        {
          if ( v20 )
          {
            v32 = (void (__fastcall ***)(_QWORD, __int64))(v20 + 16);
            v33 = _InterlockedDecrement(v20 + 18);
            if ( v33 )
            {
              if ( v33 < 0 )
              {
                v34 = WdLogNewEntry5_WdError(v32);
                *(_QWORD *)(v34 + 24) = v33;
                WdLogEvent5_WdError(v34);
              }
            }
            else if ( v32 )
            {
              (**v32)(v32, 1LL);
            }
          }
          auto_rc<DMMVIDPN const>::reset(&v39, 0LL);
          if ( v44 )
            *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)v13;
          goto LABEL_40;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v21, a2, v45);
        if ( !Path )
        {
          v28 = WdLogNewEntry5_WdAssertion(v26);
          WdLogEvent5_WdAssertion(v28);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v20, v25);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 96) )
          {
            v44 = 1;
            v13 &= *((_DWORD *)Path + 42) | 0xFFFFFFF8;
          }
        }
        else
        {
          v31 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v31 + 24) = v25;
          *(_QWORD *)(v31 + 32) = v20;
          WdLogEvent5_WdError(v31);
        }
        v21 = v40;
        ++v19;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
      v35[3] = v19;
      v35[4] = a2;
      v35[5] = v21;
      v35[6] = v18;
      if ( v20 )
      {
        v36 = (void (__fastcall ***)(_QWORD, __int64))(v20 + 16);
        v37 = _InterlockedDecrement(v20 + 18);
        if ( v37 )
        {
          if ( v37 < 0 )
          {
            v38 = WdLogNewEntry5_WdError(v36);
            *(_QWORD *)(v38 + 24) = v37;
            WdLogEvent5_WdError(v38);
          }
        }
        else if ( v36 )
        {
          (**v36)(v36, 1LL);
        }
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      LODWORD(v18) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v39, 0LL);
    v3 = v18;
LABEL_40:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v41 + 40));
    return v3;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3223192373LL;
  }
}
