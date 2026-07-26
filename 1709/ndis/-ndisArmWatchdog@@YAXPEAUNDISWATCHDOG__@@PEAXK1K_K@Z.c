/*
 * XREFs of ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00B98E0
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000C1D0 (ndisFDoOidRequestInternal.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00BF928 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00E790C (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000D150 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall ndisArmWatchdog(
        struct _NDIS_REFCOUNT_BLOCK *a1,
        _QWORD *a2,
        _NDIS_REFCOUNT_STACK_ENTRY a3,
        void *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  char v9; // si
  unsigned __int8 *v10; // rdx
  struct _NDIS_REFCOUNT_BLOCK *v11; // rdi
  int v12; // edx
  _QWORD *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rbx
  ULONG v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // edx
  ULONG SecondsRemaining; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
    return;
  v9 = 0;
  v11 = ndisRefCountHandleFromRefCountBlock(a1);
  v11[2].RefWithStack[0].Block.Dereferences[4] = (_NDIS_REFCOUNT_STACK_ENTRY)846677070;
  if ( !v10 )
    goto LABEL_22;
  v12 = *v10 - 5;
  if ( v12 )
  {
    v20 = v12 - 12;
    if ( !v20 )
    {
      v13 = a2;
      goto LABEL_5;
    }
    if ( v20 == 1 )
    {
      v13 = (_QWORD *)a2[2];
      goto LABEL_5;
    }
LABEL_22:
    v13 = 0LL;
    goto LABEL_5;
  }
  v13 = (_QWORD *)a2[4];
LABEL_5:
  if ( v13 )
  {
    if ( PoQueryWatchdogTime((PDEVICE_OBJECT)v13[482], &SecondsRemaining) )
    {
      v17 = SecondsRemaining;
      v9 = 1;
      if ( SecondsRemaining < 3 )
        v17 = 3;
      v18 = 3000;
      v19 = 1000 * v17 - 3000;
      if ( v19 >= 0xBB8 )
        v18 = v19;
      v14 = a5;
      if ( v18 < a5 )
        v14 = v18;
    }
    else
    {
      v14 = a5;
    }
    *(_BYTE *)&v11[3].RefWithStack[0].Block.References[4] = v9;
  }
  else
  {
    v14 = a5;
  }
  v11[2].RefWithStack[0].Block.Dereferences[5] = (_NDIS_REFCOUNT_STACK_ENTRY)v14;
  *((_QWORD *)v11[2].RefWithStack + 7) = &ndisGlobalTriageBlock;
  *(_QWORD *)&v11[3].Flags = a2;
  v11[3].TaggedRefCounts.Tags = (_NDIS_REFCOUNT_TAGGED_ENTRY *)MEMORY[0xFFFFF78000000008];
  *(_QWORD *)v11[3].RefWithStack[0].Block.References = KeGetCurrentThread();
  *(_QWORD *)&v11[3].RefWithStack[0].Block.References[2] = a6;
  v15 = g_ndisWatchdogSequenceNumber;
  *(_QWORD *)v11[3].RefWithStack[0].Block.Dereferences = a4;
  g_ndisWatchdogSequenceNumber = v15 + 1;
  v11[2].RefWithStack[0].Block.References[1] = (_NDIS_REFCOUNT_STACK_ENTRY)(v15 + 1);
  v16 = -10000LL * *(_DWORD *)&v11[2].RefWithStack[0].Block.Dereferences[5];
  v11[2].RefWithStack[0].Block.Dereferences[2] = a3;
  v11[2].TaggedRefCounts.RefMask[0] = 1;
  KeClearEvent((PRKEVENT)&v11[2].RefWithStack[0].Block.References[2]);
  KeSetTimerEx((PKTIMER)((char *)v11->RefWithStack + 56), (LARGE_INTEGER)v16, 0, (PKDPC)v11);
}
