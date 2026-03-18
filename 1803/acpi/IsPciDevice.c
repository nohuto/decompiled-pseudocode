/*
 * XREFs of IsPciDevice @ 0x1C00319D8
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C0030D90 (GetOpRegionScopeWorker.c)
 *     ACPIInternalIsPci @ 0x1C007D908 (ACPIInternalIsPci.c)
 *     AcpiDeletePciBusInterface @ 0x1C007F900 (AcpiDeletePciBusInterface.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     IsPciDeviceWorker @ 0x1C0031AD0 (IsPciDeviceWorker.c)
 */

__int64 __fastcall IsPciDevice(volatile signed __int32 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  char v12; // al

  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 3221225473LL;
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x46706341u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      v12 = gdwfAMLI;
      *(_QWORD *)v11 = a1;
      dword_1C00677B8 = 0;
      pszDest = 0;
      if ( (v12 & 4) != 0 )
        _InterlockedIncrement(a1 + 2);
      v11[9] = -1;
      *((_QWORD *)v11 + 5) = a2;
      *((_QWORD *)v11 + 6) = a3;
      *((_QWORD *)v11 + 7) = a4;
      return IsPciDeviceWorker(a1, 0LL, 0LL, v11);
    }
    else
    {
      return 3221225626LL;
    }
  }
}
