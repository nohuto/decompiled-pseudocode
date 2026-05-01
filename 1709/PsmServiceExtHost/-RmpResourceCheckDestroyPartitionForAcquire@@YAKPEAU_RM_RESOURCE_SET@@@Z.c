/*
 * XREFs of ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F894
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180005144 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800055A4 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180014AD0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18003A00C (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z @ 0x18003A088 (-RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z.c)
 *     ?RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x18003A0F4 (-RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 */

__int64 __fastcall RmpResourceCheckDestroyPartitionForAcquire(struct _RM_RESOURCE_SET *a1, __int64 a2, unsigned int a3)
{
  void *v3; // rbp
  unsigned int v4; // ebx
  __int64 v7; // r14
  struct _RM_PARTITION *ActivePartition; // rax
  HANDLE *v9; // rdi
  __int64 v10; // rcx
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_OBJECT_HEADER *v12; // rdi
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-28h]

  v3 = (void *)*((_QWORD *)a1 + 15);
  v4 = 0;
  if ( v3 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 14) + 24LL);
    if ( RmpPartitionTablePartitionExists((struct _RM_PARTITION_TABLE *)(v7 + 312), *((void **)a1 + 15), a3) )
    {
      ActivePartition = RmpPartitionTableFindActivePartition((struct _RM_PARTITION_TABLE *)(v7 + 312), v3);
      v9 = (HANDLE *)ActivePartition;
      if ( ActivePartition )
      {
        RmpPartitionRevokeAllSets(ActivePartition, *((struct ExecutionModel::ResourceSet **)a1 + 5));
        RmpPartitionRelease(v9);
      }
      return 1;
    }
    else
    {
      RmpObjectTableEnumerationBegin(
        (struct _RM_OBJECT_TABLE *)(v7 + 536),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
        v12 = Next;
        if ( !Next )
          break;
        v10 = *((_QWORD *)Next + 15);
        if ( v10 && Next != a1 && (int)NtCompareObjects(v10, v3) >= 0 )
        {
          NtClose(*((HANDLE *)v12 + 15));
          *((_QWORD *)v12 + 15) = 0LL;
        }
        RmpObjectRelease((char *)v12);
      }
      RtlReleaseSRWLockShared(pData.Ptr + 16);
      NtClose(v3);
      *((_QWORD *)a1 + 15) = 0LL;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
      {
        v16 = *((_QWORD *)a1 + 3);
        v18 = &v16;
        v19 = 8LL;
        TlgWrite(v13, &unk_1800572E6, v14, v15, 3u, &pData);
      }
    }
  }
  return v4;
}
