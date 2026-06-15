/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x180075E10
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_ @ 0x18006E318 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(
        struct _RTL_CRITICAL_SECTION *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  void (__fastcall **v3)(_QWORD, CAudioSessionManager **); // rsi
  char *v7; // rax
  void (__fastcall *CriticalSection)(CAudioSession *); // rax
  void (__fastcall **v10[5])(_QWORD, CAudioSessionManager **); // [rsp+20h] [rbp-28h] BYREF

  v3 = (void (__fastcall **)(_QWORD, CAudioSessionManager **))((char *)&this[7].DebugInfo + 4);
  v7 = *(char **)((char *)&this[7].DebugInfo + 4) - *(_QWORD *)&a2->Data1;
  if ( !v7 )
    v7 = (char *)(*(_QWORD *)&this[7].RecursionCount - *(_QWORD *)a2->Data4);
  if ( v7 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        (__int64)a2);
    }
    CriticalSection = (void (__fastcall *)(CAudioSession *))this->DebugInfo->CriticalSection;
    *(struct _GUID *)v3 = *a2;
    CriticalSection((CAudioSession *)this);
    v10[1] = (void (__fastcall **)(_QWORD, CAudioSessionManager **))this;
    v10[0] = (void (__fastcall **)(_QWORD, CAudioSessionManager **))&CAudioSessionGroupingParamChanged::`vftable';
    v10[2] = v3;
    v10[3] = (void (__fastcall **)(_QWORD, CAudioSessionManager **))a3;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(this + 14, v10);
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))this->DebugInfo->ProcessLocksList.Flink)(this);
  }
  return 0LL;
}
