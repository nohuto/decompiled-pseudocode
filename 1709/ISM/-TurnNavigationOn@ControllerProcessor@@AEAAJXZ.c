/*
 * XREFs of ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18003F0B8
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18003EA00 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18004039C (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800407DC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::TurnNavigationOn(ControllerProcessor *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rcx
  int ChildInputProcessor; // eax
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // r9d
  __int64 (__fastcall ***v9)(_QWORD, GUID *, char *); // r14
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // rsi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // r9d
  _QWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+50h] [rbp-28h]
  char v20; // [rsp+54h] [rbp-24h]

  ControllerProcessor::LiftPressedVirtualKeys(this, 1);
  v2 = (_QWORD *)((char *)this + 256);
  if ( *((_QWORD *)this + 32) )
    goto LABEL_21;
  v3 = *((_QWORD *)this + 4);
  v18[3] = 0LL;
  v19 = -1;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2;
  v18[0] = v3;
  v18[1] = *((_QWORD *)this + 3);
  v18[2] = this;
  v20 = 0;
  if ( v4 )
  {
    *v2 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v4)[2])(v4);
  }
  ChildInputProcessor = CreateChildInputProcessor(2, v18, (__int64)this + 256);
  v7 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_18;
    v8 = 457;
    goto LABEL_17;
  }
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2;
  v10 = *((_QWORD *)this + 33);
  if ( v10 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  ChildInputProcessor = (**v9)(v9, &GUID_10ab2921_3041_4a95_a1fd_33dc19a24aab, (char *)this + 264);
  v7 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_18;
    v8 = 461;
    goto LABEL_17;
  }
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2;
  v12 = *((_QWORD *)this + 34);
  if ( v12 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  ChildInputProcessor = (**v11)(v11, &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b, (char *)this + 272);
  v7 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 465;
LABEL_17:
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 12, v8, ChildInputProcessor);
  }
LABEL_18:
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 12, 1139, v7);
LABEL_29:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
LABEL_21:
  v13 = ControllerProcessor::SetPointerPosition(this, *(struct tagPOINT *)((char *)this + 324), 1);
  v15 = v13;
  if ( v13 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_29;
    v16 = 1142;
LABEL_28:
    McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 12, v16, v13);
    goto LABEL_29;
  }
  if ( (*((_BYTE *)this + 320) & 0x20) == 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 504) + 80LL))(
            *((_QWORD *)this + 504),
            0LL,
            *((_QWORD *)this + 507));
    v15 = v13;
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_29;
      v16 = 1148;
      goto LABEL_28;
    }
  }
  return v15;
}
