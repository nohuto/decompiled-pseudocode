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

struct _PEB *__fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *result; // rax
  bool v2; // zf
  void (__fastcall *v4)(_QWORD *); // rbp
  _QWORD *i; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *j; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  int v23; // [rsp+50h] [rbp+8h] BYREF
  struct _PEB *v24; // [rsp+58h] [rbp+10h]

  result = NtCurrentPeb();
  v2 = *(_DWORD *)(a1 + 56) == -4;
  v24 = result;
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
      if ( (v24->NtGlobalFlag & 0x100) != 0 )
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
    LdrUnloadAlternateResourceModuleEx(v6[6], 0LL);
  }
  result = (struct _PEB *)RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_18:
  while ( 1 )
  {
    v8 = *(_QWORD **)(a1 + 40);
    if ( !v8 )
      break;
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      result = (struct _PEB *)*v9;
      *v8 = *v9;
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
    LdrpDecrementNodeLoadCountLockHeld(v10, 0LL, &v23);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v23 )
      LdrpUnloadNode(v10);
    result = (struct _PEB *)RtlFreeHeap(LdrpHeap, 0LL, v9);
  }
  v14 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v14 != (_QWORD *)a1 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      *((_DWORD *)v14 - 14) |= 2u;
      v16 = v14 - 20;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( (v16[13] & 0x40) != 0 )
      {
        v17 = v16[14];
        if ( *(_QWORD **)(v17 + 8) != v16 + 14 || (v18 = (_QWORD *)v16[15], (_QWORD *)*v18 != v16 + 14) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = *v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v20 = (_QWORD *)v16[1], (_QWORD *)*v20 != v16) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = v16[2];
        if ( *(_QWORD **)(v21 + 8) != v16 + 2 || (v22 = (_QWORD *)v16[3], (_QWORD *)*v22 != v16 + 2) )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *((_DWORD *)v16 + 26) &= ~0x40u;
      }
      if ( *((char *)v16 + 104) < 0 )
      {
        RtlRbRemoveNode(&LdrpMappingInfoIndex, v16 + 28);
        RtlRbRemoveNode(&LdrpModuleBaseAddressIndex, v16 + 25);
        *((_DWORD *)v16 + 16) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess )
        LdrpUnmapModule(v16);
      result = (struct _PEB *)LdrpDereferenceModule(v16);
      v14 = v15;
    }
    while ( v15 != (_QWORD *)a1 );
  }
  return result;
}
