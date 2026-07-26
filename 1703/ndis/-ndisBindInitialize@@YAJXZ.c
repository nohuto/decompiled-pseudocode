/*
 * XREFs of ?ndisBindInitialize@@YAJXZ @ 0x1C0112758
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00AD360 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00BC2CC (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00F0954 (--0KPushLock@@QEAA@XZ.c)
 */

__int64 ndisBindInitialize(void)
{
  PVOID PoolWithTag; // rax
  __int64 v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x6762444Eu);
  v1 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    KPushLock::KPushLock((KPushLock *)v1);
    KPushLock::KPushLock((KPushLock *)(v1 + 8));
    KPushLock::KPushLock((KPushLock *)(v1 + 16));
    *(_DWORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 28) = 0;
    *(_QWORD *)(v1 + 32) = 0LL;
    Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::grow((unsigned int *)(v1 + 24), 0LL);
    *(_DWORD *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 44) = 0;
    *(_QWORD *)(v1 + 48) = 0LL;
    Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>>::grow((unsigned int *)(v1 + 40), 0LL);
  }
  else
  {
    v1 = 0LL;
  }
  qword_1C00926E0 = v1;
  return v1 == 0 ? 0xC000009A : 0;
}
