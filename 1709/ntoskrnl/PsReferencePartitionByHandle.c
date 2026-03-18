/*
 * XREFs of PsReferencePartitionByHandle @ 0x1404FC8D4
 * Callers:
 *     NtManagePartition @ 0x1404FC278 (NtManagePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1406B8098 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x140718000 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14071ADC8 (NtCreatePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall PsReferencePartitionByHandle(void *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4, PVOID Object)
{
  NTSTATUS result; // eax
  volatile signed __int64 *v7; // r8
  signed __int64 *v8; // roff
  signed __int64 v9; // rax
  char v10; // dl
  signed __int64 v11; // rtt
  PVOID v12; // rcx
  unsigned int v13; // ebx

  result = ObReferenceObjectByHandle(a1, a2, PsPartitionType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    v7 = (volatile signed __int64 *)Object;
    v8 = (signed __int64 *)((char *)Object + 24);
    _m_prefetchw((char *)Object + 24);
    v9 = *v8;
    v10 = 1;
    while ( (unsigned __int64)(v9 + 1) > 1 )
    {
      v11 = v9;
      v9 = _InterlockedCompareExchange64(v7 + 3, v9 + 1, v9);
      if ( v11 == v9 )
      {
        v12 = Object;
        *a4 = Object;
        goto LABEL_6;
      }
    }
    if ( v9 )
      __fastfail(0xEu);
    v12 = Object;
    v10 = 0;
LABEL_6:
    v13 = v10 == 0 ? 0xC00004A0 : 0;
    ObfDereferenceObject(v12);
    return v13;
  }
  return result;
}
