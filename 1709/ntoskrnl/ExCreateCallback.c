/*
 * XREFs of ExCreateCallback @ 0x140593970
 * Callers:
 *     HvlPhase2Initialize @ 0x14015CA00 (HvlPhase2Initialize.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405DF540 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterBootDriverCallback @ 0x1405F1D30 (IoRegisterBootDriverCallback.c)
 *     KiFilterFiberContext @ 0x14080CBA0 (KiFilterFiberContext.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 *     ExpInitializeCallbacks @ 0x140852C8C (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x1408542AC (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408551FC (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x140857A88 (IopInitializeSessionNotifications.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExpUnlockCallbackListExclusive @ 0x140157C0C (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
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
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  NTSTATUS inserted; // eax
  PVOID *Object; // [rsp+20h] [rbp-39h]
  PVOID v20; // [rsp+50h] [rbp-9h] BYREF
  PVOID v21; // [rsp+58h] [rbp-1h] BYREF
  __int128 v22; // [rsp+60h] [rbp+7h] BYREF
  __m128i v23; // [rsp+70h] [rbp+17h]
  __int128 v24; // [rsp+80h] [rbp+27h]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *(__m128i *)&ObjectAttributes->ObjectName;
  v20 = 0LL;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  v23 = v6;
  Handle = 0LL;
  v22 = v8;
  v11 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v23.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) | 0x200;
  v24 = v11;
  if ( v6.m128i_i64[0] )
  {
    v12 = ObOpenObjectByName((__int64)&v22, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, &Handle);
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
      v13 = ObCreateObjectEx(0, ExCallbackObjectType, (__int64)&v22, 0, (__int64)Object, 56, 0, 0, &v20, 0LL);
      if ( v13 < 0 )
        return v13;
      v15 = (char *)v20;
      *(_DWORD *)v20 = 1819042115;
      v15[32] = AllowMultipleCallbacks;
      *((_QWORD *)v15 + 3) = v15 + 16;
      *((_QWORD *)v15 + 2) = v15 + 16;
      *((_QWORD *)v15 + 1) = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
      v16 = (_QWORD *)qword_14035E0A8;
      v17 = v15 + 40;
      if ( *(__int64 **)qword_14035E0A8 != &ExpCallbackListHead )
        __fastfail(3u);
      *((_QWORD *)v15 + 6) = qword_14035E0A8;
      *v17 = &ExpCallbackListHead;
      *v16 = v17;
      qword_14035E0A8 = (__int64)(v15 + 40);
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObjectEx(v15, 0LL, 1u, 0, 0, 0LL, (unsigned __int64 *)&Handle);
      v5 = Handle;
      v13 = inserted;
    }
    if ( v13 < 0 )
      return v13;
  }
  v13 = ObReferenceObjectByHandle(v5, 0, ExCallbackObjectType, 0, &v21, 0LL);
  ZwClose(v5);
  if ( v13 >= 0 )
    *CallbackObject = (PCALLBACK_OBJECT)v21;
  return v13;
}
