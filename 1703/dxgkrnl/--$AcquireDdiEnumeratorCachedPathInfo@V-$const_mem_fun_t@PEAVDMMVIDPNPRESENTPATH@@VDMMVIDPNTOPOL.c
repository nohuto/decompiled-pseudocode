/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E06D0
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E04C0 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0045120 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DF324 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rbx
  _DWORD *v19; // rdi
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  SIZE_T v29; // rsi
  PVOID v30; // rax
  __int64 v31; // rcx
  PVOID v32; // r15

  if ( !a3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v24);
  }
  v7 = 0;
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v10 )
    {
      v13 = (char *)operator new(0x178uLL, 0x4E506456u, PagedPool);
      v18 = v13;
      if ( v13 )
      {
        *(_DWORD *)v13 = 305419896;
        *((_QWORD *)v13 + 1) = v10;
        memset(v13 + 16, 0, 0x168uLL);
        operator delete(0LL);
      }
      else
      {
        v18 = 0LL;
      }
      if ( v18 )
      {
        v19 = v18 + 16;
        *((_DWORD *)v18 + 7) = *(_DWORD *)(v10 + 112);
        v20 = *(_DWORD *)(v10 + 116);
        if ( (unsigned int)(v20 - 254) > 1
          && v20
          && DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode((DMMVIDPNPRESENTPATH *)v10, v14, v16, v17) )
        {
          v21 = 1;
        }
        else
        {
          v21 = *(_DWORD *)(v10 + 116);
        }
        *((_DWORD *)v18 + 9) = v21;
        *((_DWORD *)v18 + 6) = *(_DWORD *)(v10 + 104);
        *v19 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 24LL);
        *((_DWORD *)v18 + 5) = *(_DWORD *)(*(_QWORD *)(v10 + 96) + 24LL);
        *((_DWORD *)v18 + 20) = *(_DWORD *)(v10 + 164);
        v22 = *(unsigned int *)(v10 + 172);
        *((_DWORD *)v18 + 21) = v22;
        *((_DWORD *)v18 + 87) = *(_DWORD *)(v10 + 168);
        if ( (_DWORD)v22 == 2 )
          *((_DWORD *)v18 + 22) = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(
                                    (DMMVIDPNPRESENTPATH *)v10,
                                    v14,
                                    v16,
                                    v17);
        else
          *((_DWORD *)v18 + 22) = 0;
        if ( v18 == (char *)-32LL )
        {
          v27 = WdLogNewEntry5_WdAssertion(v22, v14, v16, v17);
          WdLogEvent5_WdAssertion(v27);
        }
        *((_DWORD *)v18 + 8) = *(_DWORD *)(v10 + 120);
        if ( v18 == (char *)-40LL )
        {
          v28 = WdLogNewEntry5_WdAssertion(v22, v14, v16, v17);
          WdLogEvent5_WdAssertion(v28);
        }
        *((_DWORD *)v18 + 10) = *(_DWORD *)(v10 + 124);
        *((_OWORD *)v18 + 22) = *(_OWORD *)(v10 + 184);
        *((_QWORD *)v18 + 46) = *(_QWORD *)(v10 + 200);
        if ( !*((_QWORD *)v18 + 46) )
          goto LABEL_17;
        v29 = *((_QWORD *)v18 + 45);
        v30 = operator new(v29, 0x4E506456u, PagedPool);
        v32 = v30;
        if ( v30 )
        {
          memmove(v30, *((const void **)v18 + 46), v29);
          *((_QWORD *)v18 + 46) = v32;
LABEL_17:
          *a3 = v19;
          v18 = 0LL;
LABEL_18:
          operator delete(v18);
          return v7;
        }
        v26 = WdLogNewEntry5_WdLowResource(v31);
        *(_QWORD *)(v26 + 24) = v29;
      }
      else
      {
        v26 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v26 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v26);
      v7 = -1073741801;
      goto LABEL_18;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v11, v12) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v25 + 24) = a1;
    WdLogEvent5_WdError(v25);
    return 3223192375LL;
  }
}
