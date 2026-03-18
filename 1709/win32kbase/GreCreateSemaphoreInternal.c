/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1C0024B58
 * Callers:
 *     EngCreateSemaphore @ 0x1C0021450 (EngCreateSemaphore.c)
 *     GreCreateSemaphore @ 0x1C0024A80 (GreCreateSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00EE574 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1C00FBD30 (EngInitializeSafeSemaphore.c)
 *     bInitPALOBJ @ 0x1C01DF3FC (bInitPALOBJ.c)
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     MultiUserGreTrackAddEngResource @ 0x1C0024BE0 (MultiUserGreTrackAddEngResource.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 GreCreateSemaphoreInternal()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax

  v0 = Win32AllocPoolNonPaged(136LL, 1835365191LL);
  v1 = v0;
  if ( v0 )
  {
    v1 = v0 + 32;
    v2 = v0;
    if ( ExInitializeResourceLite((PERESOURCE)(v0 + 32)) < 0 )
    {
      Win32FreePool(v2, v3, v4);
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
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v5, v6, v7);
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
