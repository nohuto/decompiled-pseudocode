/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00DFE24
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000A2B0 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00E41F0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01D3598 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01D57D0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C01DB870 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00093E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 Container; // r12
  unsigned __int64 i; // r14
  unsigned int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNTARGET>::FindById((__int64)this + 24, a2);
    v9 = v4;
    if ( v4 )
    {
      v10 = *((_QWORD *)this + 14);
      v11 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v10 )
      {
        if ( !*(_QWORD *)(v10 + 40) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
          WdLogEvent5_WdAssertion(v30);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v10 + 40) + 64LL);
        for ( i = 0LL; ; ++i )
        {
          v14 = *(_DWORD *)(v10 + 24);
          v34 = -1;
          v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(Container + 96), v14, i, &v34);
          v18 = v15;
          if ( v15 < 0 )
            break;
          if ( v34 == -1 )
            return 0LL;
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(Container + 96), *(_DWORD *)(v10 + 24), v34);
          if ( !Path )
          {
            v31 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
            WdLogEvent5_WdAssertion(v31);
          }
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
            v32[3] = *(unsigned int *)(v9 + 76);
            v32[4] = *(unsigned int *)(v9 + 80);
            v32[5] = *(int *)(v9 + 96);
            v32[6] = *(unsigned int *)(v10 + 24);
            WdLogEvent5_WdError(v32);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v11;
            return result;
          }
        }
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
        v33[3] = i;
        v33[4] = v3;
        v33[5] = this;
        v33[6] = v18;
        WdLogEvent5_WdError(v33);
        return (unsigned int)v18;
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v29 + 24) = this;
        WdLogEvent5_WdError(v29);
        return 3223192328LL;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v28 + 24) = v3;
      *(_QWORD *)(v28 + 32) = this;
      WdLogEvent5_WdError(v28);
      return 3223192394LL;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v27 + 24) = v3;
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdDmmEvent(v27);
    return 3223192352LL;
  }
}
