/*
 * XREFs of LdrpDynamicShimModule @ 0x1800217FC
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x180021864 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpSendShimEngineInitialNotifications @ 0x180015878 (LdrpSendShimEngineInitialNotifications.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D2BD4 (LdrpGetProcApphelpCheckModule.c)
 */

__int64 __fastcall LdrpDynamicShimModule(__int64 *a1)
{
  int v1; // esi
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // r8
  char v6; // al
  _WORD *i; // rdi
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rdi
  unsigned __int8 (__fastcall *v11)(_WORD *, _QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = dword_18015C6C0;
  v3 = 0;
  if ( dword_18015C6C0 && g_pShimmedModuleList )
  {
    dword_18015C6C0 = 0;
    v3 = LdrpGetProcApphelpCheckModule(&v11);
    if ( v3 >= 0 )
    {
      for ( i = g_pShimmedModuleList; *i; i += v8 + 1 )
      {
        LOBYTE(v5) = 1;
        if ( !v11(i, 0LL, v5) )
        {
          v3 = -1073741502;
          goto LABEL_3;
        }
        v8 = -1LL;
        do
          ++v8;
        while ( i[v8] );
      }
      v9 = MEMORY[0x7FFE0330];
      v10 = __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
      RtlEnterCriticalSection(&LdrpDllNotificationLock);
      if ( LdrInitState < 3 && (*(_DWORD *)(*a1 - 56) & 0x800) == 0 )
        LdrpSendShimEngineInitialNotifications(a1, (__int64 (__fastcall *)(__int64 *))(v10 ^ v9));
      RtlLeaveCriticalSection(&LdrpDllNotificationLock);
    }
    else
    {
      v6 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2877,
          (unsigned int)"LdrpDynamicShimModule",
          0,
          "Getting ApphelpCheckModule failed with status 0x%08lx\n",
          v3);
        v6 = LdrpDebugFlags;
      }
      if ( (v6 & 0x10) != 0 )
        __debugbreak();
      v3 = 0;
    }
  }
LABEL_3:
  if ( g_pShimmedModuleList && v1 == 1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
    g_pShimmedModuleList = 0LL;
    g_pShimmedModuleListLength = 0LL;
  }
  result = (unsigned int)v3;
  dword_18015C6C0 = v1;
  return result;
}
