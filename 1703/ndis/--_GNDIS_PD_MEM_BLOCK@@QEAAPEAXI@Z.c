/*
 * XREFs of ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00EB174
 * Callers:
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00EB430 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 *     ?NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00EB780 (-NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAP.c)
 *     ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00EC080 (-NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z.c)
 *     ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00EC180 (-NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[7];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    P[7] = 0LL;
  }
  if ( P[5] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(P[2] + 96LL))(
      *(_QWORD *)(P[2] + 32LL),
      *((unsigned int *)P + 6),
      P[4]);
    P[5] = 0LL;
  }
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x6D41444Eu);
  return P;
}
