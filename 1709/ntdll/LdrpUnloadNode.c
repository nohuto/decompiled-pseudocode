/*
 * XREFs of LdrpUnloadNode @ 0x180010B14
 * Callers:
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180010E84 (LdrpDecrementModuleLoadCountEx.c)
 * Callees:
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x180010F0C (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180011F70 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpProcessDetachNode @ 0x180012198 (LdrpProcessDetachNode.c)
 *     LdrpSendDllNotifications @ 0x180021068 (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800210F4 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpUnmapModule @ 0x180076FA8 (LdrpUnmapModule.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     AVrfDllUnloadNotification @ 0x1800D9B20 (AVrfDllUnloadNotification.c)
 */

int __fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *v1; // rax
  bool v2; // zf
  void (__fastcall *v4)(_QWORD *); // rbp
  _QWORD *i; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *j; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  char *v16; // rbx
  char **v17; // rcx
  void **v18; // rdx
  _QWORD *v19; // rcx
  void **v20; // rax
  char **v21; // rdx
  void **v22; // rcx
  int v24; // [rsp+50h] [rbp+8h] BYREF
  struct _PEB *v25; // [rsp+58h] [rbp+10h]

  v1 = NtCurrentPeb();
  v2 = *(_DWORD *)(a1 + 56) == -4;
  v25 = v1;
  v4 = 0LL;
  if ( v2 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    LdrpProcessDetachNode();
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 56) != 7 )
  {
    if ( *(_DWORD *)(a1 + 56) != 9 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_5:
  if ( g_ShimsEnabled )
    v4 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                g_pfnSE_LdrEntryRemoved,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v6 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications(i - 20, 2LL);
      if ( v4 )
        v4(i - 20);
      SbUpdateSwitchContextBasedOnDll(i - 20, v7, 1LL);
      if ( (v25->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        3102,
        (unsigned int)"LdrpUnloadNode",
        2,
        "Unmapping DLL \"%wZ\"\n",
        v6 + 9);
    LdrUnloadAlternateResourceModuleEx((PVOID)v6[6], 0);
  }
  LODWORD(v1) = RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_18:
  while ( 1 )
  {
    v8 = *(_QWORD ***)(a1 + 40);
    if ( !v8 )
      break;
    v9 = *v8;
    if ( *v8 == v8 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v1 = (struct _PEB *)*v9;
      *v8 = (_QWORD *)*v9;
    }
    if ( !v9 )
      break;
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v10 = v9[1];
    v11 = v9 + 2;
    for ( j = *(_QWORD **)(v10 + 48); (_QWORD *)*j != v11; j = (_QWORD *)*j )
      ;
    *j = *v11;
    if ( *(_QWORD **)(v10 + 48) == v11 )
    {
      v13 = 0LL;
      if ( j != v11 )
        v13 = j;
      *(_QWORD *)(v10 + 48) = v13;
    }
    LdrpDecrementNodeLoadCountLockHeld(v10, 0LL, &v24);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v24 )
      LdrpUnloadNode(v10);
    LODWORD(v1) = RtlFreeHeap(LdrpHeap, 0, v9);
  }
  v14 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v14 != (_QWORD *)a1 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      *((_DWORD *)v14 - 14) |= 2u;
      v16 = (char *)(v14 - 20);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( (v16[104] & 0x40) != 0 )
      {
        v17 = (char **)*((_QWORD *)v16 + 14);
        if ( v17[1] != v16 + 112 || (v18 = (void **)*((_QWORD *)v16 + 15), *v18 != v16 + 112) )
          __fastfail(3u);
        *v18 = v17;
        v17[1] = (char *)v18;
        v19 = *(_QWORD **)v16;
        if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 || (v20 = (void **)*((_QWORD *)v16 + 1), *v20 != v16) )
          __fastfail(3u);
        *v20 = v19;
        v19[1] = v20;
        v21 = (char **)*((_QWORD *)v16 + 2);
        if ( v21[1] != v16 + 16 || (v22 = (void **)*((_QWORD *)v16 + 3), *v22 != v16 + 16) )
          __fastfail(3u);
        *v22 = v21;
        v21[1] = (char *)v22;
        *((_DWORD *)v16 + 26) &= ~0x40u;
      }
      if ( v16[104] < 0 )
      {
        RtlRbRemoveNode(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)(v16 + 224));
        RtlRbRemoveNode(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)(v16 + 200));
        *((_DWORD *)v16 + 16) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess )
        LdrpUnmapModule(v16);
      LODWORD(v1) = LdrpDereferenceModule(v16);
      v14 = v15;
    }
    while ( v15 != (_QWORD *)a1 );
  }
  return (int)v1;
}
