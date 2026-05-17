/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x180035EC8
 * Callers:
 *     TppIopFree @ 0x18000A900 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x18000A960 (TpAllocIoCompletion.c)
 *     TppDestroyTimer @ 0x18000C5A8 (TppDestroyTimer.c)
 *     TppWorkpFree @ 0x180010800 (TppWorkpFree.c)
 *     TppSimplepFree @ 0x180011F20 (TppSimplepFree.c)
 *     TppAlpcpFree @ 0x180013A50 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x180013B30 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180014020 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x180014300 (TppJobpFree.c)
 *     TppWorkInitialize @ 0x180036DB4 (TppWorkInitialize.c)
 *     TpSimpleTryPost @ 0x18007C640 (TpSimpleTryPost.c)
 * Callees:
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     TppPoolpDereferenceGlobalPool @ 0x1800110F8 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseActivationContext @ 0x180035E40 (RtlReleaseActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TppCleanupGroupRemoveMember @ 0x18007C494 (TppCleanupGroupRemoveMember.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18007E9F0 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppPoolpFree @ 0x180081F4C (TppPoolpFree.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rcx
  void *v8; // rdx
  __int64 *v9; // rcx
  unsigned __int64 v10; // rdi
  volatile signed __int32 *v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx
  unsigned __int64 v15[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v11 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, v11);
  }
  v2 = (volatile signed __int32 *)a1[12];
  if ( v2 != (volatile signed __int32 *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 72);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    RtlReleaseSRWLockExclusive(a1[18] + 72LL);
    v7 = (volatile signed __int32 *)a1[18];
    if ( v7 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v8 = &TppPoolpGlobalPoolLock;
      v9 = &TppPoolpGlobalPool;
LABEL_11:
      TppPoolpDereferenceGlobalPool((const void **)v9, (__int64)v8);
      goto LABEL_12;
    }
    if ( v7 == (volatile signed __int32 *)TppPoolpSerializedPool )
    {
      v8 = &TppPoolpSerializedPoolLock;
      v9 = &TppPoolpSerializedPool;
      goto LABEL_11;
    }
    if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
      TppPoolpFree(v7);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    v12 = a1 + 19;
    v13 = a1[19];
    v14 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v13 + 8) != a1 + 19 || (_QWORD *)*v14 != v12 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    a1[20] = a1 + 19;
    *v12 = v12;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
LABEL_12:
  v10 = a1[4];
  if ( v10 )
  {
    memset(v15, 0, 0xF8uLL);
    v15[11] = v10;
    v15[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback(v15);
    _guard_dispatch_icall_fptr();
    TppCallbackEpilog(v15);
  }
}
