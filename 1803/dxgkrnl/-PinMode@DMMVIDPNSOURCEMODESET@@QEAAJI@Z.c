/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00BE024
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003B98 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00B9854 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C0212F4C (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C021646C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C02209D0 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0003570 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006730 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 Container; // r12
  __int64 i; // r14
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rcx
  DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this + 24, a2);
    v6 = v4;
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
          v23 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v23);
          v9 = *(_QWORD *)(v7 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v9 + 64);
        for ( i = 0LL; ; ++i )
        {
          v12 = *(_DWORD *)(v7 + 24);
          v27 = -1;
          v13 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(Container + 96), v12, i, &v27);
          v15 = v13;
          if ( v13 < 0 )
            break;
          if ( v27 == -1 )
            return 0LL;
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(Container + 96), *(_DWORD *)(v7 + 24), v27);
          if ( !Path )
          {
            v24 = WdLogNewEntry5_WdAssertion(v16);
            WdLogEvent5_WdAssertion(v24);
          }
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v18);
            v25[3] = *(unsigned int *)(v6 + 76);
            v25[4] = *(unsigned int *)(v6 + 80);
            v25[5] = *(int *)(v6 + 96);
            v25[6] = *(unsigned int *)(v7 + 24);
            WdLogEvent5_WdError(v25);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v8;
            return result;
          }
        }
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v26[3] = i;
        v26[4] = v3;
        v26[5] = this;
        v26[6] = v15;
        WdLogEvent5_WdError(v26);
        return (unsigned int)v15;
      }
      else
      {
        v22 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v22 + 24) = this;
        WdLogEvent5_WdError(v22);
        return 3223192328LL;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v21 + 24) = v3;
      *(_QWORD *)(v21 + 32) = this;
      WdLogEvent5_WdError(v21);
      return 3223192394LL;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v20 + 24) = v3;
    *(_QWORD *)(v20 + 32) = this;
    WdLogEvent5_WdDmmEvent(v20);
    return 3223192352LL;
  }
}
