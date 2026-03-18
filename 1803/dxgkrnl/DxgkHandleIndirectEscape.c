/*
 * XREFs of DxgkHandleIndirectEscape @ 0x1C0206A54
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000B820 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C000B930 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0041554 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C0205C78 (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C0205FB0 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C02065C4 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rcx
  _DWORD *v8; // r15
  _WORD *PoolWithQuotaTag; // rbx
  PVOID v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  char *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int Miniport; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct _FDO_CONTEXT *v28; // [rsp+40h] [rbp-88h] BYREF
  void *v29; // [rsp+48h] [rbp-80h] BYREF
  void *v30; // [rsp+50h] [rbp-78h] BYREF
  __int64 v31; // [rsp+58h] [rbp-70h] BYREF
  __int16 v32; // [rsp+60h] [rbp-68h]
  char v33; // [rsp+62h] [rbp-66h]
  _QWORD v34[2]; // [rsp+68h] [rbp-60h] BYREF
  PVOID v35; // [rsp+78h] [rbp-50h] BYREF
  char v36; // [rsp+80h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-40h] BYREF
  void *v38; // [rsp+E0h] [rbp+18h] BYREF
  void *v39; // [rsp+E8h] [rbp+20h] BYREF

  if ( (unsigned int)a1 < 0x38 )
  {
    v3 = WdLogNewEntry5_WdError(a1);
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
    v3 = WdLogNewEntry5_WdError(v7);
    goto LABEL_3;
  }
  v8 = (_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 0;
  PoolWithQuotaTag = 0LL;
  v39 = 0LL;
  v10 = 0LL;
  v38 = 0LL;
  v11 = *(_DWORD *)(a2 + 16);
  if ( v11 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v11, 0x74727044u);
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v39);
    v39 = PoolWithQuotaTag;
    v29 = 0LL;
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v29);
    if ( !PoolWithQuotaTag )
      goto LABEL_9;
  }
  v14 = *(_DWORD *)(a2 + 32);
  if ( v14 )
  {
    v10 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v14, 0x74727044u);
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v38);
    v38 = v10;
    v30 = 0LL;
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v30);
    if ( !v10 )
    {
LABEL_9:
      v13 = WdLogNewEntry5_WdLowResource(v12);
      LODWORD(v4) = -1073741801;
      *(_QWORD *)(v13 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v13);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v38);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v39);
      return (unsigned int)v4;
    }
  }
  v15 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v15 )
  {
    v16 = *(char **)(a2 + 24);
    if ( (unsigned __int64)&v16[v15] > MmUserProbeAddress || &v16[v15] < v16 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      LODWORD(v15) = *(_DWORD *)(a2 + 16);
      v16 = *(char **)(a2 + 24);
    }
    memmove(PoolWithQuotaTag, v16, (unsigned int)v15);
  }
  v17 = *(_DWORD *)(a2 + 32);
  if ( v17 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v17, 1u);
  v18 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v18 )
  {
    if ( (_DWORD)v18 == 1 )
    {
      v28 = 0LL;
      v35 = 0LL;
      v36 = 0;
      v31 = 0LL;
      v32 = 0;
      v33 = 0;
      v34[0] = 1LL;
      v34[1] = *(_QWORD *)a2;
      Miniport = DpiIndirectGetMiniport(
                   (const struct DXGK_MINIPORT_FILTER *)v34,
                   &v35,
                   (struct AUTO_PNPPOWER_LOCK *)&v31,
                   &v28);
      if ( Miniport >= 0 )
      {
        v22 = _guard_dispatch_icall_fptr();
        v24 = v22;
        if ( v22 < 0 )
        {
          v25 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v25 + 24) = v24;
          WdLogEvent5_WdError(v25);
        }
        Miniport = v24;
      }
      AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v31);
      AUTO_REMOVE_LOCK::Release(&v35);
    }
    else
    {
      Miniport = -1073741637;
      v20 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v20 + 24) = -1073741637LL;
      WdLogEvent5_WdError(v20);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 16) < 0x238u )
    {
      v26 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v26 + 24) = *(unsigned int *)(a2 + 16);
      WdLogEvent5_WdError(v26);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v38);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v39);
      return 3221225485LL;
    }
    PoolWithQuotaTag[259] = 0;
    RtlInitUnicodeString(&DestinationString, PoolWithQuotaTag);
    Miniport = DpiIndirectStartAdapter(&DestinationString, PoolWithQuotaTag, *(_DWORD *)(a2 + 16));
  }
  if ( Miniport >= 0 )
  {
    if ( *(_DWORD *)(a2 + 32) >= *v8 )
    {
      if ( *v8 )
        memmove(*(void **)(a2 + 40), v10, (unsigned int)*v8);
    }
    else
    {
      Miniport = -1073741811;
      v27 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v27 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v27);
    }
  }
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v38);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v39);
  return (unsigned int)Miniport;
}
