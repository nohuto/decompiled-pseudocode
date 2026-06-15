/*
 * XREFs of ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x140035318
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140004760 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetCpuManager(struct CpuManager **a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_140087FC0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_140087FC0 + 8LL))(qword_140087FC0);
    *a1 = (struct CpuManager *)qword_140087FC0;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v2;
}
