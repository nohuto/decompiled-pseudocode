/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C0112030
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0112120 (DpiFdoInvalidateChildRelations.c)
 *     DpiGdoCreateGdiObjects @ 0x1C0119A28 (DpiGdoCreateGdiObjects.c)
 *     DmmInitializeAdapter @ 0x1C01223D4 (DmmInitializeAdapter.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01C5D40 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoRemovePdoObjects @ 0x1C01CED38 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C01CF164 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // r14d
  _QWORD *v14; // r15
  _QWORD *v15; // rdi
  unsigned __int16 v16; // ax
  PVOID PoolWithTag; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGADAPTER *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _DXGKARG_QUERYADAPTERINFO v33; // [rsp+20h] [rbp-78h] BYREF
  int v34; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+A8h] [rbp+10h]
  __int64 v36; // [rsp+B0h] [rbp+18h]
  __int64 v37; // [rsp+B8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v4 = *(_QWORD *)(a1 + 64);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  LODWORD(v9) = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168));
  if ( (*(_BYTE *)(v4 + 3713) & 4) == 0 )
  {
LABEL_2:
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
    LODWORD(v9) = DpiFdoInvalidateChildRelations(a1, 6LL, v6);
    if ( (int)v9 < 0 )
      goto LABEL_28;
    if ( (*(_BYTE *)(v4 + 3712) & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3704), 2LL);
      v9 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3704));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3704), 2LL);
      if ( (int)v9 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v31 + 24) = v9;
        WdLogEvent5_WdError(v31);
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
      LOBYTE(v32) = 1;
      DpiPdoRemovePdoObjects(a1, v32, v6);
    }
    return (unsigned int)v9;
  }
  v13 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3144), 1u);
  v14 = *(_QWORD **)(v4 + 3304);
  if ( v14 == (_QWORD *)(v4 + 3304) )
    goto LABEL_23;
  while ( 1 )
  {
    v15 = v14 - 4;
    v14 = (_QWORD *)*v14;
    v16 = *((_WORD *)v15 + 46);
    if ( !v16 )
      goto LABEL_16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x74727044u);
    v15[12] = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, *((unsigned __int16 *)v15 + 46));
    v19 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v9 = v19;
    if ( v19 < 0 )
      goto LABEL_19;
    v34 = *((_DWORD *)v15 + 6);
    memset(&v33, 0, 0x28uLL);
    v22 = *(DXGADAPTER **)(v4 + 3704);
    v33.pInputData = &v34;
    v33.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR;
    v33.InputDataSize = 4;
    v33.OutputDataSize = *((unsigned __int16 *)v15 + 46);
    v33.pOutputData = (void *)v15[12];
    DXGADAPTER::IsCoreResourceSharedOwner(v22);
    v9 = (int)DXGADAPTER::DdiQueryAdapterInfo(v22, &v33, v23);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
    if ( (int)v9 < 0 )
    {
LABEL_19:
      v26 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v26 + 24) = v9;
      goto LABEL_20;
    }
    LODWORD(v9) = DpiFdoValidateIntegratedDisplayDescriptor(v15[12], *((unsigned int *)v15 + 6));
    if ( (int)v9 < 0 )
      goto LABEL_22;
    LOBYTE(v25) = *(_BYTE *)(v15[12] + 122LL);
    if ( ((1 << v25) & v13) != 0 )
    {
      LODWORD(v9) = -1073741811;
      v26 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v26 + 24) = *(unsigned __int8 *)(v15[12] + 122LL);
      *(_QWORD *)(v26 + 32) = *((unsigned int *)v15 + 6);
LABEL_20:
      WdLogEvent5_WdError(v26);
      goto LABEL_22;
    }
    v13 |= 1 << v25;
LABEL_16:
    if ( v14 == (_QWORD *)(v4 + 3304) )
      goto LABEL_22;
  }
  LODWORD(v9) = -1073741670;
  v27 = WdLogNewEntry5_WdLowResource(v18);
  *(_QWORD *)(v27 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v27);
LABEL_22:
  v6 = v37;
LABEL_23:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3144));
  KeLeaveCriticalRegion();
  if ( ((v13 + 1) & v13) != 0 )
  {
    LODWORD(v9) = -1073741811;
    v30 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v30 + 24) = v13;
    WdLogEvent5_WdError(v30);
  }
  if ( (int)v9 >= 0 )
  {
    v7 = v36;
    v8 = v35;
    goto LABEL_2;
  }
  return (unsigned int)v9;
}
