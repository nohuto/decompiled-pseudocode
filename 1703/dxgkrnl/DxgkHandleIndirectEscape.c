/*
 * XREFs of DxgkHandleIndirectEscape @ 0x1C01CBAC4
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0042224 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0042250 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C00422A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C01CAD84 (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C01CB080 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C01CB6B0 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // r15
  _WORD *PoolWithQuotaTag; // rbx
  PVOID v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int Miniport; // r14d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct _FDO_CONTEXT *v31; // [rsp+40h] [rbp-88h] BYREF
  void *v32; // [rsp+48h] [rbp-80h] BYREF
  void *v33; // [rsp+50h] [rbp-78h] BYREF
  __int64 v34; // [rsp+58h] [rbp-70h] BYREF
  __int16 v35; // [rsp+60h] [rbp-68h]
  char v36; // [rsp+62h] [rbp-66h]
  _QWORD v37[2]; // [rsp+68h] [rbp-60h] BYREF
  PVOID v38; // [rsp+78h] [rbp-50h] BYREF
  char v39; // [rsp+80h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-40h] BYREF
  void *v41; // [rsp+E0h] [rbp+18h] BYREF
  void *v42; // [rsp+E8h] [rbp+20h] BYREF

  if ( (unsigned int)a1 < 0x38 )
  {
    v3 = WdLogNewEntry5_WdError(a1, a2);
    v4 = -1073741789LL;
LABEL_3:
    *(_QWORD *)(v3 + 24) = v4;
    WdLogEvent5_WdError(v3);
    return (unsigned int)v4;
  }
  v6 = DpiIndirectEscapeAccessCheck();
  v4 = v6;
  if ( v6 < 0 )
  {
    v3 = WdLogNewEntry5_WdError(v8, v7);
    goto LABEL_3;
  }
  v9 = (_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 0;
  PoolWithQuotaTag = 0LL;
  v42 = 0LL;
  v11 = 0LL;
  v41 = 0LL;
  v12 = *(_DWORD *)(a2 + 16);
  if ( v12 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v12, 0x74727044u);
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v42);
    v42 = PoolWithQuotaTag;
    v32 = 0LL;
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v32);
    if ( !PoolWithQuotaTag )
      goto LABEL_9;
  }
  v15 = *(_DWORD *)(a2 + 32);
  if ( v15 )
  {
    v11 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v15, 0x74727044u);
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
    v41 = v11;
    v33 = 0LL;
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v33);
    if ( !v11 )
    {
LABEL_9:
      v14 = WdLogNewEntry5_WdLowResource(v13);
      LODWORD(v4) = -1073741801;
      *(_QWORD *)(v14 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v14);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v42);
      return (unsigned int)v4;
    }
  }
  v16 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v16 )
  {
    v17 = *(_QWORD *)(a2 + 24);
    if ( v17 + v16 > MmUserProbeAddress || v17 + v16 < v17 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(PoolWithQuotaTag, *(const void **)(a2 + 24), *(unsigned int *)(a2 + 16));
  }
  v18 = *(_DWORD *)(a2 + 32);
  if ( v18 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v18, 1u);
  v19 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v19 )
  {
    if ( (_DWORD)v19 == 1 )
    {
      v31 = 0LL;
      v38 = 0LL;
      v39 = 0;
      v34 = 0LL;
      v35 = 0;
      v36 = 0;
      v37[0] = 1LL;
      v37[1] = *(_QWORD *)a2;
      Miniport = DpiIndirectGetMiniport(
                   (const struct DXGK_MINIPORT_FILTER *)v37,
                   &v38,
                   (struct AUTO_PNPPOWER_LOCK *)&v34,
                   &v31);
      if ( Miniport >= 0 )
      {
        v24 = _guard_dispatch_icall_fptr();
        v27 = v24;
        if ( v24 < 0 )
        {
          v28 = WdLogNewEntry5_WdError(v26, v25);
          *(_QWORD *)(v28 + 24) = v27;
          WdLogEvent5_WdError(v28);
        }
        Miniport = v27;
      }
      AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v34);
      AUTO_REMOVE_LOCK::Release(&v38);
    }
    else
    {
      Miniport = -1073741637;
      v21 = WdLogNewEntry5_WdError(v19, v7);
      *(_QWORD *)(v21 + 24) = -1073741637LL;
      WdLogEvent5_WdError(v21);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 16) < 0x238u )
    {
      v29 = WdLogNewEntry5_WdError(v19, v7);
      *(_QWORD *)(v29 + 24) = *(unsigned int *)(a2 + 16);
      WdLogEvent5_WdError(v29);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v42);
      return 3221225485LL;
    }
    PoolWithQuotaTag[259] = 0;
    RtlInitUnicodeString(&DestinationString, PoolWithQuotaTag);
    Miniport = DpiIndirectStartAdapter(&DestinationString, PoolWithQuotaTag, *(_DWORD *)(a2 + 16));
  }
  if ( Miniport >= 0 )
  {
    if ( *(_DWORD *)(a2 + 32) >= *v9 )
    {
      if ( *v9 )
        memmove(*(void **)(a2 + 40), v11, (unsigned int)*v9);
    }
    else
    {
      Miniport = -1073741811;
      v30 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v30 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v30);
    }
  }
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v42);
  return (unsigned int)Miniport;
}
