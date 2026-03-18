/*
 * XREFs of ExCreateCallback @ 0x1404CC7B0
 * Callers:
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405CBD10 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterBootDriverCallback @ 0x1405D5660 (IoRegisterBootDriverCallback.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     ExpInitializeCallbacks @ 0x1408219B8 (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140822E64 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140823D88 (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x140826210 (IopInitializeSessionNotifications.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExpUnlockCallbackListExclusive @ 0x14014A248 (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rsi
  HANDLE v5; // rdi
  __m128i v6; // xmm2
  __int128 v8; // xmm0
  __int128 v11; // xmm0
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebx
  NTSTATUS inserted; // eax
  PVOID Object; // [rsp+58h] [rbp-1h] BYREF
  __int128 v17; // [rsp+60h] [rbp+7h] BYREF
  __m128i v18; // [rsp+70h] [rbp+17h]
  __int128 v19; // [rsp+80h] [rbp+27h]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *(__m128i *)&ObjectAttributes->ObjectName;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  v18 = v6;
  Handle = 0LL;
  v17 = v8;
  v11 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v18.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) | 0x200;
  v19 = v11;
  if ( v6.m128i_i64[0] )
  {
    v12 = ObOpenObjectByName((unsigned int)&v17, (_DWORD)ExCallbackObjectType, 0, 0, 0, 0LL, (__int64)&Handle);
    v5 = Handle;
    v13 = v12;
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v13 < 0 )
  {
    if ( Create )
    {
      v13 = ObCreateObjectEx(0, (_DWORD)ExCallbackObjectType, (unsigned int)&v17, 0);
      if ( v13 < 0 )
        return v13;
      MEMORY[0] = 1819042115;
      MEMORY[0x20] = AllowMultipleCallbacks;
      MEMORY[0x18] = 16LL;
      MEMORY[0x10] = 16LL;
      MEMORY[8] = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
      if ( *(__int64 **)qword_140344568 != &ExpCallbackListHead )
        __fastfail(3u);
      MEMORY[0x30] = qword_140344568;
      MEMORY[0x28] = &ExpCallbackListHead;
      *(_QWORD *)qword_140344568 = 40LL;
      qword_140344568 = 40LL;
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&Handle);
      v5 = Handle;
      v13 = inserted;
    }
    if ( v13 < 0 )
      return v13;
  }
  v13 = ObReferenceObjectByHandle(v5, 0, ExCallbackObjectType, 0, &Object, 0LL);
  ZwClose(v5);
  if ( v13 >= 0 )
    *CallbackObject = (PCALLBACK_OBJECT)Object;
  return v13;
}
