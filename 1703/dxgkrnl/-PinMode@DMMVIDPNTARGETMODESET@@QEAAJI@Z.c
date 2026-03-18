/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00DE500
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C000834C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E4108 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00F5140 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C01DB950 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00093E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000CB50 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 Container; // r14
  int PathSourceFromTarget; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)this + 24, a2);
    v9 = (unsigned int *)v4;
    if ( v4 )
    {
      v10 = *((_QWORD *)this + 14);
      v11 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v10 )
      {
        if ( !*(_QWORD *)(v10 + 40) )
        {
          v27 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
          WdLogEvent5_WdAssertion(v27);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v10 + 40) + 64LL);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(Container + 96),
                                 *(_DWORD *)(v10 + 24));
        if ( PathSourceFromTarget == -1 )
        {
          v28 = WdLogNewEntry5_WdError(v15, v14);
          *(_QWORD *)(v28 + 24) = v3;
          *(_QWORD *)(v28 + 32) = this;
          WdLogEvent5_WdError(v28);
          return 3223192384LL;
        }
        else
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(
                   (DMMVIDPNTOPOLOGY *)(Container + 96),
                   PathSourceFromTarget,
                   *(_DWORD *)(v10 + 24));
          if ( !Path )
          {
            v29 = WdLogNewEntry5_WdAssertion(v17, v16, v19, v20);
            WdLogEvent5_WdAssertion(v29);
          }
          if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            return 0LL;
          }
          else
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
            v30[3] = v9[21];
            v30[4] = v9[22];
            v30[5] = v9[23];
            v30[6] = v9[24];
            v30[7] = *(unsigned int *)(v10 + 24);
            WdLogEvent5_WdError(v30);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v11;
          }
        }
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v26 + 24) = this;
        WdLogEvent5_WdError(v26);
        return 3223192329LL;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v25 + 24) = v3;
      *(_QWORD *)(v25 + 32) = this;
      WdLogEvent5_WdError(v25);
      return 3223192394LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v24 + 24) = v3;
    *(_QWORD *)(v24 + 32) = this;
    WdLogEvent5_WdDmmEvent(v24);
    return 3223192352LL;
  }
  return result;
}
