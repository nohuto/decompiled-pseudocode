/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00A3E50
 * Callers:
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C00A4870 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00D6810 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00FA600 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C001DFE0 (--1-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0035F08 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00A5DE0 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        char **a3,
        int a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  char *v15; // rax
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 v18; // rax
  char *v19; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  size_t v27; // rsi
  SIZE_T v28; // rdx
  PVOID PoolWithTag; // rax
  PVOID v30; // rbp
  char *v31; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  *a3 = 0LL;
  if ( !*(_BYTE *)(a1 + 192) )
  {
    v10 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223192375LL;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( !v14 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = a2;
    return 3223192359LL;
  }
  v15 = (char *)operator new(0x178uLL, 0x4E506456u, PagedPool);
  v17 = v15;
  if ( v15 )
  {
    *(_DWORD *)v15 = 305419896;
    *((_QWORD *)v15 + 1) = v14;
    memset(v15 + 16, 0, 0x168uLL);
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17 )
    operator delete(0LL);
  v31 = v17;
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v18 + 24) = a1;
LABEL_36:
    WdLogEvent5_WdLowResource(v18);
    v4 = -1073741801;
    goto LABEL_34;
  }
  v19 = v17 + 16;
  *((_DWORD *)v19 + 3) = *(_DWORD *)(v14 + 112);
  if ( a4 )
    ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v14);
  else
    ContentRotationHw = *(_DWORD *)(v14 + 116);
  *((_DWORD *)v19 + 5) = ContentRotationHw;
  *((_DWORD *)v19 + 2) = *(_DWORD *)(v14 + 104);
  *(_DWORD *)v19 = *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL);
  *((_DWORD *)v19 + 1) = *(_DWORD *)(*(_QWORD *)(v14 + 96) + 24LL);
  *((_DWORD *)v19 + 16) = *(_DWORD *)(v14 + 164);
  v21 = *(unsigned int *)(v14 + 172);
  *((_DWORD *)v19 + 17) = v21;
  *((_DWORD *)v19 + 83) = *(_DWORD *)(v14 + 168);
  if ( (_DWORD)v21 == 2 )
    *((_DWORD *)v19 + 18) = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v14);
  else
    *((_DWORD *)v19 + 18) = 0;
  if ( v19 == (char *)-16LL )
  {
    v22 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v22);
  }
  *((_DWORD *)v19 + 4) = *(_DWORD *)(v14 + 120);
  if ( v19 == (char *)-24LL )
  {
    v23 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v23);
  }
  *((_DWORD *)v19 + 6) = *(_DWORD *)(v14 + 124);
  v24 = *(_QWORD *)(v14 + 184);
  if ( v24 )
  {
    v25 = *(_OWORD *)(v24 + 16);
    v26 = *(_QWORD *)(v24 + 32);
  }
  else
  {
    v25 = *(_OWORD *)&g_DefaultGammaRamp.Type;
    v26 = 0LL;
  }
  *((_OWORD *)v19 + 21) = v25;
  *((_QWORD *)v19 + 44) = v26;
  if ( *((_QWORD *)v19 + 44) )
  {
    v27 = *((_QWORD *)v19 + 43);
    v28 = v27;
    if ( !v27 )
      v28 = 1LL;
    if ( v28 > 0x7FFFFFFF
      || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x4E506456u), (v30 = PoolWithTag) == 0LL) )
    {
      v18 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v18 + 24) = v27;
      goto LABEL_36;
    }
    memmove(PoolWithTag, *((const void **)v19 + 44), v27);
    *((_QWORD *)v19 + 44) = v30;
  }
  *a3 = v19;
  v31 = 0LL;
LABEL_34:
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::~CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>((void **)&v31);
  return v4;
}
