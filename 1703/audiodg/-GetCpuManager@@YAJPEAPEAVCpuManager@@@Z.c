/*
 * XREFs of ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x140036C80
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140004810 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetCpuManager(struct CpuManager **a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_140085FB8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_140085FB8 + 8LL))(qword_140085FB8);
    *a1 = (struct CpuManager *)qword_140085FB8;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v2;
}
