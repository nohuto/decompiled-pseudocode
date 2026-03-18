/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C0118E70
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 *     DpiGdoCreateGdiObjects @ 0x1C010F370 (DpiGdoCreateGdiObjects.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0118F60 (DpiFdoInvalidateChildRelations.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0121E9C (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01DFA84 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoRemovePdoObjects @ 0x1C01E9154 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C01E9584 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v12; // r14d
  _QWORD *v13; // r15
  _QWORD *v14; // rbp
  unsigned __int16 v15; // ax
  PVOID PoolWithTag; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  DXGADAPTER *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  struct _DXGKARG_QUERYADAPTERINFO v29; // [rsp+20h] [rbp-78h] BYREF
  int v30; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp+10h]
  __int64 v32; // [rsp+B0h] [rbp+18h]
  __int64 v33; // [rsp+B8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v4 = *(_QWORD *)(a1 + 64);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  LODWORD(v9) = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168));
  if ( (*(_BYTE *)(v4 + 3737) & 4) == 0 )
  {
LABEL_2:
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
    LODWORD(v9) = DpiFdoInvalidateChildRelations(a1, 6LL, v6);
    if ( (int)v9 < 0 )
      goto LABEL_28;
    if ( (*(_BYTE *)(v4 + 3736) & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
      v9 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3728));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
      if ( (int)v9 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v27 + 24) = v9;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        LODWORD(v9) = DpiGdoCreateGdiObjects(a1, v8, v7);
      }
    }
    if ( (int)v9 < 0 )
    {
LABEL_28:
      DpiGdoDestroyGdiObjects(a1);
      LOBYTE(v28) = 1;
      DpiPdoRemovePdoObjects(a1, v28, v6);
    }
    return (unsigned int)v9;
  }
  v12 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3168), 1u);
  v13 = *(_QWORD **)(v4 + 3328);
  if ( v13 == (_QWORD *)(v4 + 3328) )
    goto LABEL_23;
  while ( 1 )
  {
    v14 = v13 - 4;
    v13 = (_QWORD *)*v13;
    v15 = *((_WORD *)v14 + 46);
    if ( !v15 )
      goto LABEL_16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x74727044u);
    v14[12] = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, *((unsigned __int16 *)v14 + 46));
    v18 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_19;
    v30 = *((_DWORD *)v14 + 6);
    memset(&v29, 0, 0x28uLL);
    v20 = *(DXGADAPTER **)(v4 + 3728);
    v29.pInputData = &v30;
    v29.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR;
    v29.InputDataSize = 4;
    v29.OutputDataSize = *((unsigned __int16 *)v14 + 46);
    v29.pOutputData = (void *)v14[12];
    DXGADAPTER::IsCoreResourceSharedOwner(v20);
    v9 = (int)DXGADAPTER::DdiQueryAdapterInfo(v20, &v29, v21);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
    if ( (int)v9 < 0 )
    {
LABEL_19:
      v23 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v23 + 24) = v9;
      goto LABEL_20;
    }
    LODWORD(v9) = DpiFdoValidateIntegratedDisplayDescriptor(v14);
    if ( (int)v9 < 0 )
      goto LABEL_22;
    LOBYTE(v22) = *(_BYTE *)(v14[12] + 122LL);
    if ( ((1 << v22) & v12) != 0 )
    {
      LODWORD(v9) = -1073741811;
      v23 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v23 + 24) = *(unsigned __int8 *)(v14[12] + 122LL);
      *(_QWORD *)(v23 + 32) = *((unsigned int *)v14 + 6);
LABEL_20:
      WdLogEvent5_WdError(v23);
      goto LABEL_22;
    }
    v12 |= 1 << v22;
LABEL_16:
    if ( v13 == (_QWORD *)(v4 + 3328) )
      goto LABEL_22;
  }
  LODWORD(v9) = -1073741670;
  v24 = WdLogNewEntry5_WdLowResource(v17);
  *(_QWORD *)(v24 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v24);
LABEL_22:
  v6 = v33;
LABEL_23:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3168));
  KeLeaveCriticalRegion();
  if ( ((v12 + 1) & v12) != 0 )
  {
    LODWORD(v9) = -1073741811;
    v26 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v26 + 24) = v12;
    WdLogEvent5_WdError(v26);
  }
  if ( (int)v9 >= 0 )
  {
    v7 = v32;
    v8 = v31;
    goto LABEL_2;
  }
  return (unsigned int)v9;
}
