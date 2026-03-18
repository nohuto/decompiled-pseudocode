/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x1C007C188
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C007B520 (VidSchInitializeAdapter.c)
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C0004120 (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  struct _ERESOURCE *v4; // rbp

  v3 = 0;
  v4 = (struct _ERESOURCE *)(a1 + 296);
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 296), 1u);
  if ( *(_DWORD *)(a1 + 292) != a2 )
  {
    *(_DWORD *)(a1 + 292) = a2;
    *(_QWORD *)(a1 + 1456) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1424), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1504) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1480), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite(v4);
  return v3;
}
