/*
 * XREFs of ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180022948
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001E320 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x18001F7C0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800229A4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18002D574 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18002E010 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005959C (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z @ 0x180059618 (-RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z.c)
 *     ?RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180059684 (-RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 */

__int64 __fastcall RmpResourceCheckDestroyPartitionForAcquire(struct _RM_RESOURCE_SET *a1, __int64 a2, unsigned int a3)
{
  void *v3; // rbp
  unsigned int v4; // ebx
  __int64 v7; // r14
  struct _RM_PARTITION *ActivePartition; // rax
  struct _RM_PARTITION *v9; // rdi
  __int64 v10; // rcx
  struct _RM_OBJECT_HEADER *Next; // rax
  HANDLE *v12; // rdi
  const struct _TlgProvider_t *v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v3 = (void *)*((_QWORD *)a1 + 16);
  v4 = 0;
  if ( v3 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 15) + 24LL);
    if ( RmpPartitionTablePartitionExists((struct _RM_PARTITION_TABLE *)(v7 + 336), *((void **)a1 + 16), a3) )
    {
      ActivePartition = RmpPartitionTableFindActivePartition((struct _RM_PARTITION_TABLE *)(v7 + 336), v3);
      v9 = ActivePartition;
      if ( ActivePartition )
      {
        RmpPartitionRevokeAllSets(ActivePartition, *((struct ExecutionModel::ResourceSet **)a1 + 6));
        RmpPartitionRelease(v9);
      }
      return 1;
    }
    else
    {
      RmpObjectTableEnumerationBegin(
        (struct _RM_OBJECT_TABLE *)(v7 + 560),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
        v12 = (HANDLE *)Next;
        if ( !Next )
          break;
        v10 = *((_QWORD *)Next + 16);
        if ( v10 && Next != a1 && (int)NtCompareObjects(v10, v3) >= 0 )
        {
          NtClose(v12[16]);
          v12[16] = 0LL;
        }
        RmpObjectRelease(v12);
      }
      RtlReleaseSRWLockShared(pData.Ptr + 16);
      NtClose(v3);
      *((_QWORD *)a1 + 16) = 0LL;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
      {
        v14 = *((_QWORD *)a1 + 4);
        v16 = &v14;
        v17 = 8LL;
        TlgWrite(v13, &unk_18007D703, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  return v4;
}
