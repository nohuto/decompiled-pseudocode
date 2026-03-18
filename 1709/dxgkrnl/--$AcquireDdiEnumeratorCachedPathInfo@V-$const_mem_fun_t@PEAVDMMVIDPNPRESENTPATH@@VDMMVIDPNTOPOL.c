/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00A39A0
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A3520 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C001DFE0 (--1-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0035F08 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A5AB4 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        char **a3)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rbx
  __int64 v16; // rax
  char *v17; // rbx
  int v18; // ecx
  bool v19; // zf
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  size_t v27; // rdi
  SIZE_T v28; // rdx
  PVOID PoolWithTag; // rax
  PVOID v30; // rbp
  __int64 v31; // rax
  char *v32; // [rsp+60h] [rbp+8h] BYREF

  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0;
  *a3 = 0LL;
  if ( !*(_BYTE *)(a1 + 192) )
  {
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = a1;
    WdLogEvent5_WdError(v8);
    return 3223192375LL;
  }
  v12 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
  if ( !v12 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = a2;
    return 3223192359LL;
  }
  v13 = (char *)operator new(0x178uLL, 0x4E506456u, PagedPool);
  v15 = v13;
  if ( v13 )
  {
    *(_DWORD *)v13 = 305419896;
    *((_QWORD *)v13 + 1) = v12;
    memset(v13 + 16, 0, 0x168uLL);
    operator delete(0LL);
  }
  else
  {
    v15 = 0LL;
  }
  v32 = v15;
  if ( v15 )
  {
    v17 = v15 + 16;
    *((_DWORD *)v17 + 3) = *(_DWORD *)(v12 + 112);
    v18 = *(_DWORD *)(v12 + 116);
    if ( (unsigned int)(v18 - 254) <= 1
      || !v18
      || (v19 = DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode((DMMVIDPNPRESENTPATH *)v12) == 0, v20 = 1, v19) )
    {
      v20 = *(_DWORD *)(v12 + 116);
    }
    *((_DWORD *)v17 + 5) = v20;
    *((_DWORD *)v17 + 2) = *(_DWORD *)(v12 + 104);
    *(_DWORD *)v17 = *(_DWORD *)(*(_QWORD *)(v12 + 88) + 24LL);
    *((_DWORD *)v17 + 1) = *(_DWORD *)(*(_QWORD *)(v12 + 96) + 24LL);
    *((_DWORD *)v17 + 16) = *(_DWORD *)(v12 + 164);
    v21 = *(unsigned int *)(v12 + 172);
    *((_DWORD *)v17 + 17) = v21;
    *((_DWORD *)v17 + 83) = *(_DWORD *)(v12 + 168);
    if ( (_DWORD)v21 == 2 )
      *((_DWORD *)v17 + 18) = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v12);
    else
      *((_DWORD *)v17 + 18) = 0;
    if ( v17 == (char *)-16LL )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v22);
    }
    *((_DWORD *)v17 + 4) = *(_DWORD *)(v12 + 120);
    if ( v17 == (char *)-24LL )
    {
      v23 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v23);
    }
    *((_DWORD *)v17 + 6) = *(_DWORD *)(v12 + 124);
    v24 = *(_QWORD *)(v12 + 184);
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
    *((_OWORD *)v17 + 21) = v25;
    *((_QWORD *)v17 + 44) = v26;
    if ( !*((_QWORD *)v17 + 44) )
      goto LABEL_32;
    v27 = *((_QWORD *)v17 + 43);
    v28 = v27;
    if ( v27 )
    {
      if ( v27 > 0x7FFFFFFF )
        goto LABEL_35;
    }
    else
    {
      v28 = 1LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x4E506456u);
    v30 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)v17 + 44), v27);
      *((_QWORD *)v17 + 44) = v30;
LABEL_32:
      *a3 = v17;
      v32 = 0LL;
      goto LABEL_33;
    }
LABEL_35:
    v31 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v31 + 24) = v27;
    WdLogEvent5_WdLowResource(v31);
    v7 = -1073741801;
    goto LABEL_33;
  }
  v16 = WdLogNewEntry5_WdLowResource(v14);
  *(_QWORD *)(v16 + 24) = a1;
  WdLogEvent5_WdLowResource(v16);
  v7 = -1073741801;
LABEL_33:
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::~CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>((void **)&v32);
  return v7;
}
