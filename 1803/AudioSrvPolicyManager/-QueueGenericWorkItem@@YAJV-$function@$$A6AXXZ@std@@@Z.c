/*
 * XREFs of ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180029748
 * Callers:
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18000A500 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     PbmSetSmtcSubscriptionState @ 0x180021CE0 (PbmSetSmtcSubscriptionState.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGenericWorkItem@@QEAA@V?$function@$$A6AXXZ@std@@@Z @ 0x180029AF0 (--0CGenericWorkItem@@QEAA@V-$function@$$A6AXXZ@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180035538 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall QueueGenericWorkItem(__int64 a1)
{
  void *v2; // rsi
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  ULONG_PTR v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdx
  signed int LastError; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _BYTE v14[56]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v15 = 0LL;
    v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
    if ( v3 )
      v15 = (**v3)(v3, v14);
    v4 = CGenericWorkItem::CGenericWorkItem(v2, v14);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, v4, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      LastError = GetLastError();
      v10 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v10 = LastError;
    }
    if ( (v10 & 0x80000000) == 0 )
    {
      v13 = *(_QWORD *)(a1 + 56);
      if ( v13 )
      {
        LOBYTE(v8) = v13 != a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v8);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x410,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
        (const char *)v10);
      (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
      v12 = *(_QWORD *)(a1 + 56);
      if ( v12 )
      {
        LOBYTE(v11) = v12 != a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)0x8007000ELL);
    v6 = *(_QWORD *)(a1 + 56);
    if ( v6 )
    {
      LOBYTE(v5) = v6 != a1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    return 2147942414LL;
  }
}
