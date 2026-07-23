/*
 * XREFs of LdrpSendPostSnapNotifications @ 0x180020F14
 * Callers:
 *     LdrpNotifyLoadOfGraph @ 0x180020E8C (LdrpNotifyLoadOfGraph.c)
 * Callees:
 *     LdrpSendDllNotifications @ 0x180021068 (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800210F4 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     CompatCachepLookupCdb @ 0x18007873C (CompatCachepLookupCdb.c)
 *     AVrfDllLoadNotification @ 0x180087838 (AVrfDllLoadNotification.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpSendPostSnapNotifications(__int64 a1)
{
  __int64 v1; // r12
  void (__fastcall *v2)(__int64); // rsi
  BOOL v3; // edi
  unsigned int NtGlobalFlag; // ebp
  __int64 v5; // rdx
  __int64 v6; // r15
  int Notification; // r13d
  int v8; // ebp
  __int64 v9; // rbx
  _WORD *v10; // rbp
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  char *Heap; // r14
  char v17; // al
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // r8
  int v22; // [rsp+78h] [rbp+10h]
  BOOL v23; // [rsp+80h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v3 = g_pShimmedModuleList != 0LL;
  v23 = v3;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    v5 = MEMORY[0x7FFE0330];
    v2 = (void (__fastcall *)(__int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                               g_pfnSE_DllLoaded,
                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  }
  v6 = *(_QWORD *)(v1 + 8);
  Notification = 0;
  if ( v6 != v1 )
  {
    v8 = NtGlobalFlag & 0x100;
    v22 = v8;
    do
    {
      v9 = v6 - 160;
      if ( v8 )
      {
        Notification = AVrfDllLoadNotification(v6 - 160);
        if ( Notification < 0 )
          break;
      }
      SbUpdateSwitchContextBasedOnDll(v6 - 160, v5, 0LL);
      if ( v2 && !g_ShimsLoading )
      {
        v2(v6 - 160);
        *(_BYTE *)(v9 + 105) |= 8u;
      }
      if ( !v3 )
      {
        v10 = *(_WORD **)(v9 + 80);
        if ( (unsigned int)CompatCachepLookupCdb(v10) )
        {
          if ( g_pShimmedModuleList )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v10[v13] );
            v14 = v13 + g_pShimmedModuleListLength + 1;
          }
          else
          {
            v15 = -1LL;
            do
              ++v15;
            while ( v10[v15] );
            v14 = v15 + 2;
          }
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v14);
          if ( Heap )
          {
            if ( g_pShimmedModuleList )
            {
              v18 = 2 * g_pShimmedModuleListLength;
              memmove(Heap, g_pShimmedModuleList, 2 * g_pShimmedModuleListLength);
              v19 = -1LL;
              do
                ++v19;
              while ( v10[v19] );
              memmove(&Heap[v18 + 2], v10, 2 * v19);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
              v1 = a1;
            }
            else
            {
              v20 = -1LL;
              do
                ++v20;
              while ( v10[v20] );
              memmove(Heap, v10, 2 * v20);
            }
            g_pShimmedModuleList = Heap;
            g_pShimmedModuleListLength = v14;
          }
          else
          {
            v17 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                2703,
                (unsigned int)"LdrpCheckModule",
                0,
                "Failed to allocated memory for shimmed module list\n");
              v17 = LdrpDebugFlags;
            }
            if ( (v17 & 0x10) != 0 )
              __debugbreak();
          }
          v3 = v23;
        }
        v8 = v22;
      }
      LdrpSendDllNotifications(v6 - 160, 1LL);
      v11 = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v9 + 104) |= 8u;
      LdrpLogDllState(v11, v9 + 72, 5293LL);
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v6 != v1 );
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  return (unsigned int)Notification;
}
