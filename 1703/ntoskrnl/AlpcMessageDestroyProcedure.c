/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x14047EF00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleaseViewAttribute @ 0x14044EE50 (AlpcpReleaseViewAttribute.c)
 *     AlpcpClearOwnerPortMessageUnsafe @ 0x14045B6C4 (AlpcpClearOwnerPortMessageUnsafe.c)
 *     AlpcpReleaseAttributes @ 0x140475E20 (AlpcpReleaseAttributes.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14047A170 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     PsReturnSharedPoolQuota @ 0x1404F5AC0 (PsReturnSharedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x1406B11FC (AlpcpEnterFreeEventMessageLog.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1)
{
  struct _KPROCESS *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog();
  *(_DWORD *)(a1 + 264) |= 0x80000000;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v12 = *(_DWORD *)(a1 + 40);
    AlpcpClearOwnerPortMessageUnsafe(a1);
    *(_DWORD *)(a1 + 40) = 0;
    AlpcpReleaseAttributes((_QWORD *)(a1 + 104));
    v13 = *(_QWORD *)(a1 + 208);
    if ( v13 )
    {
      PsReleaseProcessWakeCounter(v13, *(_DWORD *)(a1 + 264));
      *(_QWORD *)(a1 + 208) = 0LL;
    }
    v14 = *(_QWORD *)(a1 + 216);
    if ( v14 )
    {
      PsReleaseProcessWakeCounter(v14, *(_DWORD *)(a1 + 264));
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    *(_DWORD *)(a1 + 240) = 2621440;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
    if ( (v12 & 0x2000) != 0 )
    {
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 96) + 40LL), 0);
      AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 96), 1);
    }
    return 3221225473LL;
  }
  else
  {
    v2 = *(struct _KPROCESS **)(a1 + 48);
    if ( v2 )
    {
      v15 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v15 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota(v2);
      }
      else
      {
        AlpcpReleasePagedPoolQuota(v2, v15);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
      }
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    v3 = *(void **)(a1 + 224);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x42456C41u);
    v4 = *(void **)(a1 + 24);
    if ( v4 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
        ObfDereferenceObject(v4);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 136);
    if ( v5 )
    {
      AlpcpDereferenceBlobEx(v5, 1);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 )
    {
      AlpcpReleaseViewAttribute(v6);
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 152);
    if ( v7 )
    {
      AlpcpDereferenceBlobEx(v7, 1);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    v8 = *(_QWORD *)(a1 + 160);
    if ( v8 )
    {
      if ( (v8 & 1) != 0 )
        ObfDereferenceObject((PVOID)(v8 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 160) = 0LL;
    }
    v9 = *(_QWORD *)(a1 + 208);
    if ( v9 )
    {
      PsReleaseProcessWakeCounter(v9, *(_DWORD *)(a1 + 264));
      *(_QWORD *)(a1 + 208) = 0LL;
    }
    v10 = *(_QWORD *)(a1 + 216);
    if ( v10 )
    {
      PsReleaseProcessWakeCounter(v10, *(_DWORD *)(a1 + 264));
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    return 0LL;
  }
}
