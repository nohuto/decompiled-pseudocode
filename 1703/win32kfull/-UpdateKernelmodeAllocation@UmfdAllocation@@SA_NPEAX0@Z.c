/*
 * XREFs of ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02B99EC
 * Callers:
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C029D650 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00D5490 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00D5574 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 */

char __fastcall UmfdAllocation::UpdateKernelmodeAllocation(char *a1, char *a2)
{
  char *v2; // rsi
  char *v4; // rdi
  PVOID v6; // rbx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 28;
  v4 = a2 - 28;
  if ( a1 - 28 == a2 - 28 )
    return 1;
  v6 = UmfdAllocation::s_allocationLookupLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  if ( *((_DWORD *)v2 + 1) == *((_DWORD *)v4 + 1) && *((_DWORD *)v2 + 6) == *((_DWORD *)v4 + 6) )
  {
    v7 = UmfdAllocation::s_allocationLookup;
    if ( UmfdAllocation::s_allocationLookup )
    {
      v8 = *((_QWORD *)v4 + 2);
      if ( v8 )
      {
        v10 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(UmfdAllocation::s_allocationLookup, v8, &v10);
        v7 = UmfdAllocation::s_allocationLookup;
      }
    }
    *((_QWORD *)v2 + 1) = *((_QWORD *)v4 + 1);
    v9 = *((_QWORD *)v4 + 2);
    *((_QWORD *)v2 + 2) = v9;
    if ( NSInstrumentation::CPointerHashTable::Insert(v7, v9, a1) )
    {
      EngFreeMem(v4);
      ExReleasePushLockExclusiveEx(v6, 0LL);
      KeLeaveCriticalRegion();
      return 1;
    }
  }
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  return 0;
}
