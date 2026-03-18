/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x1C00773BC
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0076950 (VidSchInitializeAdapter.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00B5480 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C00140D0 (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi

  v3 = 0;
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 280), 1u);
  if ( *(_DWORD *)(a1 + 276) != a2 )
  {
    *(_DWORD *)(a1 + 276) = a2;
    *(_QWORD *)(a1 + 1440) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1408), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1488) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1464), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite((PERESOURCE)(a1 + 280));
  return v3;
}
