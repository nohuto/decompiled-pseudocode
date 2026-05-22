/*
 * XREFs of ?DeliverMouseInputToInputDest@DWMInputRouter@@UEAAXAEBUtagINPUTDEST@@PEAUInputInfo@@@Z @ 0x18001A9C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800122B4 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x1800214AC (-CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall DWMInputRouter::DeliverMouseInputToInputDest(
        DWMInputRouter *this,
        const struct tagINPUTDEST *a2,
        struct InputInfo *a3)
{
  struct IInputTarget *v6; // rbx
  struct IInputTarget **v7; // rsi
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r13
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  void (__fastcall **v12)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v13; // rax
  struct IInputTarget *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // r13
  void (__fastcall **v20)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v21; // rax
  int v22; // edi
  struct IInputTarget *v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // [rsp+90h] [rbp+50h] BYREF
  struct IInputTarget *v28; // [rsp+98h] [rbp+58h]

  v6 = 0LL;
  v28 = 0LL;
  if ( *(_DWORD *)a3 == 4096 )
  {
    v7 = (struct IInputTarget **)((char *)this + 360);
    v8 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 45);
    if ( !v8 )
    {
      v9 = DWMInputTarget::CreateFromINPUTDEST(a2, (struct IInputTarget **)this + 45);
      if ( v9 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_41;
        v11 = 1533;
        goto LABEL_6;
      }
LABEL_29:
      if ( !*v7 )
      {
LABEL_31:
        if ( *((_BYTE *)this + 368) )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 29) + 32LL))(
                  *((_QWORD *)this + 29),
                  (char *)a3 + 648);
          if ( v25 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v26, &MinInput_Warning_CheckResult, 0, 1585, v25);
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          *((_BYTE *)this + 368) = 0;
        }
        if ( v6 )
          (*(void (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)v6 + 24LL))(v6, a3);
        goto LABEL_41;
      }
LABEL_30:
      v6 = *v7;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)*v7 + 8LL))(*v7);
      v28 = v6;
      goto LABEL_31;
    }
    v27 = 0LL;
    v12 = *v8;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v27);
    (*v12)(v8, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v13);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagINPUTDEST *))(*(_QWORD *)v27 + 56LL))(v27, a2) )
      goto LABEL_15;
    v14 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = DWMInputTarget::CreateFromINPUTDEST(a2, v7);
    if ( v15 >= 0 )
    {
LABEL_15:
      v18 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_29;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 0, 1541, v15);
    v17 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  else
  {
    v7 = (struct IInputTarget **)((char *)this + 352);
    v19 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 44);
    if ( v19 )
    {
      v27 = 0LL;
      v20 = *v19;
      v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v27);
      (*v20)(v19, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v21);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, const struct tagINPUTDEST *))(*(_QWORD *)v27 + 56LL))(v27, a2) )
      {
        v22 = *((_DWORD *)a3 + 15);
        *((_DWORD *)a3 + 15) = 4;
        (*(void (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)*v7 + 24LL))(*v7, a3);
        *((_DWORD *)a3 + 15) = v22;
        v23 = *v7;
        if ( *v7 )
        {
          *v7 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v23 + 16LL))(v23);
        }
        *((_BYTE *)this + 368) = 1;
      }
      v24 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    if ( *v7 )
      goto LABEL_30;
    v9 = DWMInputTarget::CreateFromINPUTDEST(a2, v7);
    if ( v9 >= 0 )
    {
      *((_BYTE *)this + 368) = 1;
      goto LABEL_29;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 1575;
LABEL_6:
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, v11, v9);
    }
  }
LABEL_41:
  if ( v6 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v6 + 16LL))(v6);
}
