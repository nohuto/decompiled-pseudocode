/*
 * XREFs of SetHandleFlag @ 0x1C0051C60
 * Callers:
 *     CloseProtectedHandle @ 0x1C0051C20 (CloseProtectedHandle.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcessWin32Process; // rax
  ULONG *v10; // rbx
  ULONG *v12; // rax
  ULONG *v13; // r14
  const void *v14; // rdx

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8);
  if ( CurrentProcessWin32Process )
  {
    v10 = (ULONG *)(CurrentProcessWin32Process + 680);
    if ( a3 )
    {
      if ( v5 >= *v10 )
      {
        v12 = (ULONG *)Win32AllocPoolWithQuotaZInit((unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3, 0x69707355u);
        v13 = v12;
        if ( !v12 )
        {
          v4 = 0;
          goto LABEL_5;
        }
        v14 = (const void *)*((_QWORD *)v10 + 1);
        if ( v14 )
        {
          memmove(v12, v14, (unsigned __int64)*v10 >> 3);
          Win32FreePool(*((_QWORD *)v10 + 1));
        }
        RtlInitializeBitMap((PRTL_BITMAP)v10, v13, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits((PRTL_BITMAP)v10, v5, 1u);
    }
    else if ( v5 < *v10 )
    {
      RtlClearBits((PRTL_BITMAP)(CurrentProcessWin32Process + 680), v5, 1u);
    }
  }
LABEL_5:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}
