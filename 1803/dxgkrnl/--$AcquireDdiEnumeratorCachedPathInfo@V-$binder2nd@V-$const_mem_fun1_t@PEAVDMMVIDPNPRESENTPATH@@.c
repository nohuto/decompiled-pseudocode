/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00BBC7C
 * Callers:
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C00BB2A0 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00C5800 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C021FB80 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0006464 (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0006494 (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@Z @ 0x1C000B0F4 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000BF3C (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0045A58 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00BEFC4 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  _QWORD *Instance; // rax
  __int64 v17; // rcx
  void *v18; // rbx
  _DWORD *v19; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  int v21; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  SIZE_T v26; // rbp
  PVOID v27; // rax
  __int64 v28; // rcx
  PVOID v29; // r14
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v30);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v14 = v9;
    if ( !v9 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = a2;
      return 3223192359LL;
    }
    v33 = 0LL;
    Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v9);
    auto_ptr<Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>>::reset((void **)&v33, Instance);
    v18 = v33;
    if ( v33 )
    {
      v19 = v33 + 4;
      v33[7] = *(_DWORD *)(v14 + 112);
      if ( a4 )
        ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v14);
      else
        ContentRotationHw = *(_DWORD *)(v14 + 116);
      *((_DWORD *)v18 + 9) = ContentRotationHw;
      *((_DWORD *)v18 + 6) = *(_DWORD *)(v14 + 104);
      *v19 = *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL);
      *((_DWORD *)v18 + 5) = *(_DWORD *)(*(_QWORD *)(v14 + 96) + 24LL);
      *((_DWORD *)v18 + 20) = *(_DWORD *)(v14 + 164);
      v21 = *(_DWORD *)(v14 + 172);
      *((_DWORD *)v18 + 21) = v21;
      *((_DWORD *)v18 + 87) = *(_DWORD *)(v14 + 168);
      if ( v21 == 2 )
        MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v14);
      else
        MacroVisionTriggerBits = 0;
      *((_DWORD *)v18 + 22) = MacroVisionTriggerBits;
      DMMVIDPNPRESENTPATH::GetScalingSupport(
        (DMMVIDPNPRESENTPATH *)v14,
        (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *const)v18 + 8);
      DMMVIDPNPRESENTPATH::GetRotationSupport(
        (DMMVIDPNPRESENTPATH *)v14,
        (struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *const)v18 + 10);
      v23 = *(_QWORD *)(v14 + 184);
      if ( v23 )
      {
        v24 = *(_OWORD *)(v23 + 16);
        v25 = *(_QWORD *)(v23 + 32);
      }
      else
      {
        v24 = *(_OWORD *)&g_DefaultGammaRamp.Type;
        v25 = 0LL;
      }
      *((_OWORD *)v18 + 22) = v24;
      *((_QWORD *)v18 + 46) = v25;
      if ( !*((_QWORD *)v18 + 46) )
        goto LABEL_16;
      v26 = *((_QWORD *)v18 + 45);
      v27 = operator new[](v26, 0x4E506456u, PagedPool);
      v29 = v27;
      if ( v27 )
      {
        memmove(v27, *((const void **)v18 + 46), v26);
        *((_QWORD *)v18 + 46) = v29;
LABEL_16:
        *a3 = v19;
        v18 = 0LL;
LABEL_17:
        operator delete(v18);
        return v4;
      }
      v32 = WdLogNewEntry5_WdLowResource(v28);
      *(_QWORD *)(v32 + 24) = v26;
    }
    else
    {
      v32 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v32 + 24) = a1;
    }
    WdLogEvent5_WdLowResource(v32);
    v4 = -1073741801;
    goto LABEL_17;
  }
  v31 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v31 + 24) = a1;
  WdLogEvent5_WdError(v31);
  return 3223192375LL;
}
