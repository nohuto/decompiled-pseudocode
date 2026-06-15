/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x18008F880
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_ @ 0x1800888A8 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  char *v3; // rsi
  __int64 v7; // rax
  void (__fastcall *v8)(CAudioSession *); // rax
  void (__fastcall **v10[5])(_QWORD, _QWORD *); // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)this + 356;
  v7 = *(_QWORD *)((char *)this + 356) - *(_QWORD *)&a2->Data1;
  if ( !v7 )
    v7 = *(_QWORD *)((char *)this + 364) - *(_QWORD *)a2->Data4;
  if ( v7 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        (__int64)a2);
    }
    v8 = *(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL);
    *(struct _GUID *)v3 = *a2;
    v8(this);
    v10[1] = (void (__fastcall **)(_QWORD, _QWORD *))this;
    v10[0] = (void (__fastcall **)(_QWORD, _QWORD *))&CAudioSessionGroupingParamChanged::`vftable';
    v10[2] = (void (__fastcall **)(_QWORD, _QWORD *))v3;
    v10[3] = (void (__fastcall **)(_QWORD, _QWORD *))a3;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 632), v10);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  return 0LL;
}
