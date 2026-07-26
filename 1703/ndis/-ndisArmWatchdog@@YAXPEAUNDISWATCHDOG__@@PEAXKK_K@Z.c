/*
 * XREFs of ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z @ 0x1C00A5338
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000B2E0 (ndisFDoOidRequestInternal.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXKK_K@Z @ 0x1C00B5B18 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00DD9EC (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000C190 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall ndisArmWatchdog(
        struct _NDIS_REFCOUNT_BLOCK *a1,
        _QWORD *a2,
        _NDIS_REFCOUNT_STACK_ENTRY a3,
        _NDIS_REFCOUNT_STACK_ENTRY a4,
        unsigned __int64 a5)
{
  char v8; // si
  unsigned __int8 *v9; // rdx
  struct _NDIS_REFCOUNT_BLOCK *v10; // rdi
  int v11; // edx
  _QWORD *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rbx
  ULONG v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  ULONG SecondsRemaining; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
    return;
  v8 = 0;
  v10 = ndisRefCountHandleFromRefCountBlock(a1);
  v10[2].RefWithStack[0].Block.Dereferences[4] = (_NDIS_REFCOUNT_STACK_ENTRY)1685537870;
  if ( !v9 )
    goto LABEL_21;
  v11 = *v9 - 5;
  if ( v11 )
  {
    v17 = v11 - 12;
    if ( !v17 )
    {
      v12 = a2;
      goto LABEL_5;
    }
    if ( v17 == 1 )
    {
      v12 = (_QWORD *)a2[2];
      goto LABEL_5;
    }
LABEL_21:
    v12 = 0LL;
    goto LABEL_5;
  }
  v12 = (_QWORD *)a2[4];
LABEL_5:
  if ( v12 )
  {
    if ( PoQueryWatchdogTime((PDEVICE_OBJECT)v12[482], &SecondsRemaining) )
    {
      v15 = SecondsRemaining;
      v8 = 1;
      if ( SecondsRemaining < 3 )
        v15 = 3;
      v16 = 1000 * v15 - 3000;
      if ( v16 < 0xBB8 )
        v16 = 3000;
      if ( v16 < *(_DWORD *)&a4 )
        a4 = (_NDIS_REFCOUNT_STACK_ENTRY)v16;
    }
    *(_BYTE *)&v10[3].RefWithStack[0].Block.References[4] = v8;
  }
  *(_QWORD *)&v10[3].Flags = a2;
  *((_QWORD *)v10[2].RefWithStack + 7) = &ndisGlobalTriageBlock;
  v10[2].RefWithStack[0].Block.Dereferences[5] = a4;
  v10[3].TaggedRefCounts.Tags = (_NDIS_REFCOUNT_TAGGED_ENTRY *)MEMORY[0xFFFFF78000000008];
  *(_QWORD *)v10[3].RefWithStack[0].Block.References = KeGetCurrentThread();
  *(_QWORD *)&v10[3].RefWithStack[0].Block.References[2] = a5;
  v13 = g_ndisWatchdogSequenceNumber + 1;
  v10[2].RefWithStack[0].Block.Dereferences[2] = a3;
  g_ndisWatchdogSequenceNumber = v13;
  v10[2].RefWithStack[0].Block.References[1] = (_NDIS_REFCOUNT_STACK_ENTRY)v13;
  v14 = -10000LL * *(_DWORD *)&v10[2].RefWithStack[0].Block.Dereferences[5];
  v10[2].TaggedRefCounts.RefMask[0] = 1;
  KeClearEvent((PRKEVENT)&v10[2].RefWithStack[0].Block.References[2]);
  KeSetTimerEx((PKTIMER)((char *)v10->RefWithStack + 56), (LARGE_INTEGER)v14, 0, (PKDPC)v10);
}
