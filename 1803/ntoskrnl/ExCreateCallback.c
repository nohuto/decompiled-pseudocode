/*
 * XREFs of ExCreateCallback @ 0x140557360
 * Callers:
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 *     KeRegisterProcessorChangeCallback @ 0x14064C530 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterBootDriverCallback @ 0x140655000 (IoRegisterBootDriverCallback.c)
 *     KiFilterFiberContext @ 0x14087CBB0 (KiFilterFiberContext.c)
 *     PipCslCreateCallback @ 0x140897E30 (PipCslCreateCallback.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     ExpInitializeCallbacks @ 0x1408C40AC (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x1408C6304 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408C70DC (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x1408C9B7C (IopInitializeSessionNotifications.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExpUnlockCallbackListExclusive @ 0x14016D8AC (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
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
  char *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  NTSTATUS inserted; // eax
  PVOID *Object; // [rsp+20h] [rbp-39h]
  PVOID v22; // [rsp+50h] [rbp-9h] BYREF
  PVOID v23; // [rsp+58h] [rbp-1h] BYREF
  __int128 v24; // [rsp+60h] [rbp+7h] BYREF
  __m128i v25; // [rsp+70h] [rbp+17h]
  __int128 v26; // [rsp+80h] [rbp+27h]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *(__m128i *)&ObjectAttributes->ObjectName;
  v22 = 0LL;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  v25 = v6;
  Handle = 0LL;
  v24 = v8;
  v11 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v25.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) | 0x200;
  v26 = v11;
  if ( v6.m128i_i64[0] )
  {
    v12 = ObOpenObjectByName((unsigned int)&v24, (_DWORD)ExCallbackObjectType, 0, 0, 0, 0LL, (__int64)&Handle);
    v5 = Handle;
    v13 = v12;
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v13 >= 0 )
    goto LABEL_6;
  if ( Create )
  {
    v13 = ObCreateObjectEx(0, ExCallbackObjectType, (int)&v24, 0, (__int64)Object, 56, 0, 0, &v22, 0LL);
    if ( v13 < 0 )
      return v13;
    v15 = (char *)v22;
    *(_DWORD *)v22 = 1819042115;
    v15[32] = AllowMultipleCallbacks;
    *((_QWORD *)v15 + 3) = v15 + 16;
    *((_QWORD *)v15 + 2) = v15 + 16;
    *((_QWORD *)v15 + 1) = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
    v18 = (_QWORD *)qword_1403A16A8;
    v19 = v15 + 40;
    if ( *(__int64 **)qword_1403A16A8 != &ExpCallbackListHead )
      __fastfail(3u);
    *((_QWORD *)v15 + 6) = qword_1403A16A8;
    *v19 = &ExpCallbackListHead;
    *v18 = v19;
    qword_1403A16A8 = (__int64)(v15 + 40);
    ExpUnlockCallbackListExclusive((__int64)CurrentThread, (__int64)&ExpCallbackListHead, v16, v17);
    inserted = ObInsertObjectEx(v15, 0LL, 1LL, 0, 0, 0LL, &Handle);
    v5 = Handle;
    v13 = inserted;
  }
  if ( v13 >= 0 )
  {
LABEL_6:
    v13 = ObReferenceObjectByHandle(v5, 0, ExCallbackObjectType, 0, &v23, 0LL);
    ZwClose(v5);
    if ( v13 >= 0 )
      *CallbackObject = (PCALLBACK_OBJECT)v23;
  }
  return v13;
}
