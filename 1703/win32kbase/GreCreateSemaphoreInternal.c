/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1C0054A38
 * Callers:
 *     EngCreateSemaphore @ 0x1C00546B0 (EngCreateSemaphore.c)
 *     GreCreateSemaphore @ 0x1C00546C0 (GreCreateSemaphore.c)
 *     HmgCreate @ 0x1C0075A30 (HmgCreate.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00E936C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1C00FB910 (EngInitializeSafeSemaphore.c)
 *     bInitPALOBJ @ 0x1C01D7B18 (bInitPALOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     MultiUserGreTrackAddEngResource @ 0x1C0054AC0 (MultiUserGreTrackAddEngResource.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 */

__int64 GreCreateSemaphoreInternal()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rax

  v0 = Win32AllocPoolNonPaged(136LL, 1835365191LL);
  v1 = v0;
  if ( v0 )
  {
    v1 = v0 + 32;
    v2 = v0;
    if ( ExInitializeResourceLite((PERESOURCE)(v0 + 32)) < 0 )
    {
      Win32FreePool(v2);
      return 0LL;
    }
    else
    {
      MultiUserGreTrackAddEngResource(v2);
      if ( v1 )
      {
        *(_QWORD *)(v1 - 8) = 0LL;
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          *(_DWORD *)(ThreadWin32Thread + 104) = 0;
          *(_DWORD *)(ThreadWin32Thread + 108) = 0;
        }
      }
    }
  }
  return v1;
}
