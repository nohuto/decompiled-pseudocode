/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800AD1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_ @ 0x1800A6728 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  void (__fastcall **v3)(_QWORD, __int64 *); // rsi
  __int64 v7; // rax
  void (__fastcall *v8)(CAudioSession *); // rax
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *i; // rbx
  void (__fastcall **v13[5])(_QWORD, __int64 *); // [rsp+20h] [rbp-28h] BYREF

  v3 = (void (__fastcall **)(_QWORD, __int64 *))((char *)this + 284);
  v7 = *(_QWORD *)((char *)this + 284) - *(_QWORD *)&a2->Data1;
  if ( !v7 )
    v7 = *(_QWORD *)((char *)this + 292) - *(_QWORD *)a2->Data4;
  if ( v7 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        (__int64)a2);
    }
    v8 = *(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL);
    *(struct _GUID *)v3 = *a2;
    v8(this);
    v13[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
    v13[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionGroupingParamChanged::`vftable';
    v13[2] = v3;
    v13[3] = (void (__fastcall **)(_QWORD, __int64 *))a3;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v13);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v10 = (_QWORD *)*((_QWORD *)this + 98);
  for ( i = (_QWORD *)*((_QWORD *)this + 97); i != v10; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 448LL))(*i);
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
