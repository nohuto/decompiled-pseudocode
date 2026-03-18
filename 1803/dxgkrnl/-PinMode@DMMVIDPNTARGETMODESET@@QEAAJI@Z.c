/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00BDC7C
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00051BC (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00B9770 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C021BB10 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C0220AD0 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006730 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 Container; // r14
  int PathSourceFromTarget; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNTARGET>::FindById((__int64)this + 24, a2);
    v6 = (unsigned int *)v4;
    if ( v4 )
    {
      v7 = *((_QWORD *)this + 14);
      v8 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 40);
        if ( !v9 )
        {
          v20 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v20);
          v9 = *(_QWORD *)(v7 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v9 + 64);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(Container + 96),
                                 *(_DWORD *)(v7 + 24));
        if ( PathSourceFromTarget == -1 )
        {
          v21 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v21 + 24) = v3;
          *(_QWORD *)(v21 + 32) = this;
          WdLogEvent5_WdError(v21);
          return 3223192384LL;
        }
        else
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(
                   (DMMVIDPNTOPOLOGY *)(Container + 96),
                   PathSourceFromTarget,
                   *(_DWORD *)(v7 + 24));
          if ( !Path )
          {
            v22 = WdLogNewEntry5_WdAssertion(v13);
            WdLogEvent5_WdAssertion(v22);
          }
          if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            return 0LL;
          }
          else
          {
            v23 = (_QWORD *)WdLogNewEntry5_WdError(v15);
            v23[3] = v6[21];
            v23[4] = v6[22];
            v23[5] = v6[23];
            v23[6] = v6[24];
            v23[7] = *(unsigned int *)(v7 + 24);
            WdLogEvent5_WdError(v23);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v8;
          }
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v19 + 24) = this;
        WdLogEvent5_WdError(v19);
        return 3223192329LL;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v18 + 24) = v3;
      *(_QWORD *)(v18 + 32) = this;
      WdLogEvent5_WdError(v18);
      return 3223192394LL;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v17 + 24) = v3;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdDmmEvent(v17);
    return 3223192352LL;
  }
  return result;
}
