/*
 * XREFs of ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180014E00
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180014FA0 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::NotificationWorkCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *v8; // rbx
  _QWORD *v9; // rcx
  unsigned int (__fastcall *v10)(ModernResourceEnforcer *__hidden); // rax
  int v11; // eax
  DWORD v12; // ebx
  void *v13; // r8
  void *v14; // r8
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 248));
  v5 = (_QWORD **)(a2 + 296);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 248));
    v8 = (struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)(v6 - 17);
    ModernResourceEnforcer::ProcessWorkItem((ModernResourceEnforcer *)a2, v8);
    if ( v8 )
    {
      if ( *((_DWORD *)v8 + 32) > 1u )
      {
        v13 = (void *)*((_QWORD *)v8 + 14);
        if ( v13 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
        v14 = (void *)*((_QWORD *)v8 + 15);
        if ( v14 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      }
      v9 = (_QWORD *)*((_QWORD *)v8 + 1);
      if ( v9 != (_QWORD *)((char *)v8 + 24) )
        operator delete(v9);
      operator delete(v8);
    }
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 248));
  }
  *((_DWORD *)a2 + 90) &= ~1u;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 248));
  v10 = *(unsigned int (__fastcall **)(ModernResourceEnforcer *__hidden))(*(_QWORD *)a2 + 16LL);
  if ( v10 == ModernResourceEnforcer::Release )
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)a2 + 60);
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
