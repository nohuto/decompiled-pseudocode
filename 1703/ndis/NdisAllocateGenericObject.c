/*
 * XREFs of NdisAllocateGenericObject @ 0x1C00221A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     WPP_SF_qLLq @ 0x1C005EDFC (WPP_SF_qLLq_ea_1C005EDFC.c)
 */

PNDIS_GENERIC_OBJECT __stdcall NdisAllocateGenericObject(PDRIVER_OBJECT DriverObject, ULONG Tag, USHORT Size)
{
  struct _NDIS_GENERIC_OBJECT *PoolWithTag; // rax
  __int64 v7; // rdx
  void *v8; // rcx
  struct _NDIS_GENERIC_OBJECT *v9; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)byte_1C009261C >= 4u && traceInited )
    WPP_SF_qdD(130LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, DriverObject, Tag, Size);
  if ( Size >= 0xFFE0u )
    return 0LL;
  PoolWithTag = (struct _NDIS_GENERIC_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(Size + 32), Tag);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size + 4LL);
    v8 = retaddr;
    v9->CallersCaller = 0LL;
    v9->Caller = retaddr;
    *(_WORD *)&v9->Header.Type = 257;
    v9->Header.Size = Size + 32;
    v9->DriverObject = DriverObject;
  }
  if ( (unsigned __int8)byte_1C009261C >= 4u )
  {
    if ( traceInited )
      WPP_SF_qLLq(v8, v7, DriverObject, Tag, Size, v9);
  }
  return v9;
}
