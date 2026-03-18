/*
 * XREFs of AllocateW32Process @ 0x1C00F4800
 * Callers:
 *     W32pProcessCallout @ 0x1C00F4680 (W32pProcessCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall AllocateW32Process(__int64 a1)
{
  volatile signed __int32 *v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
  if ( PsGetProcessWin32Process(a1) )
  {
    v7 = 1073741851;
  }
  else
  {
    v2 = (volatile signed __int32 *)Win32AllocPoolWithQuota(W32ProcessSize, 1768977237LL);
    v4 = v2;
    if ( v2 )
    {
      memset((void *)v2, 0, W32ProcessSize);
      LOBYTE(v5) = 1;
      GdiPreUserProcessCallout(v4, v5);
      *(_QWORD *)v4 = a1;
      v7 = PsSetProcessWin32Process(a1, v4, 0LL);
      if ( v7 < 0 )
      {
        UserSetLastError(5LL, v6);
        Win32FreePool(v4, v8, v9);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v4);
        _InterlockedIncrement(v4 + 2);
      }
    }
    else
    {
      UserSetLastError(8LL, v3);
      v7 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v7;
}
