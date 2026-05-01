/*
 * XREFs of ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B750 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::NotificationWorkCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  char *v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  unsigned int (__fastcall *v10)(ModernResourceEnforcer *__hidden); // rax
  int v11; // eax
  DWORD v12; // ebx
  void *v13; // r8
  void *v14; // r8
  _BYTE TlsValue[80]; // [rsp+20h] [rbp-68h] BYREF

  v3 = HampLockTrackerId;
  memset(TlsValue, 0, 72);
  if ( HampLockTrackerId != -1 )
  {
    TlsGetValue(HampLockTrackerId);
    TlsSetValue(v3, TlsValue);
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 16));
  v5 = a2 + 64;
  while ( *(char **)v5 != v5 )
  {
    v6 = *(__int64 **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *v6, *(__int64 **)(*v6 + 8) != v6) )
      __fastfail(3u);
    *(_QWORD *)v5 = v7;
    *(_QWORD *)(v7 + 8) = v5;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 16));
    v8 = v6 - 17;
    ModernResourceEnforcer::ProcessWorkItem(
      (ModernResourceEnforcer *)a2,
      (struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v8);
    if ( v8 )
    {
      if ( *((_DWORD *)v8 + 32) > 1u )
      {
        v13 = (void *)v8[14];
        if ( v13 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
        v14 = (void *)v8[15];
        if ( v14 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      }
      v9 = (__int64 *)v8[1];
      if ( v9 != v8 + 3 )
        operator delete(v9);
      operator delete(v8);
    }
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 16));
  }
  *((_DWORD *)a2 + 86) &= ~1u;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 16));
  v10 = *(unsigned int (__fastcall **)(ModernResourceEnforcer *__hidden))(*(_QWORD *)a2 + 16LL);
  if ( v10 == ModernResourceEnforcer::Release )
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)a2 + 2);
    if ( v11 < 0 )
      __fastfail(0x80004005);
    if ( !v11 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  }
  else
  {
    v10((ModernResourceEnforcer *)a2);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
}
