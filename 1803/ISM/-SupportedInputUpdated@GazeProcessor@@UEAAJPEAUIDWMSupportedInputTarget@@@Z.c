/*
 * XREFs of ?SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z @ 0x180038330
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEBQEAUIHeatSystemContextClient@@@?$_List_buy@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@1@PEAU21@0AEBQEAUIHeatSystemContextClient@@@Z @ 0x180038754 (--$_Buynode@AEBQEAUIHeatSystemContextClient@@@-$_List_buy@PEAUIHeatSystemContextClient@@V-$alloc.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::SupportedInputUpdated(GazeProcessor *this, struct IDWMSupportedInputTarget *a2)
{
  __int64 v3; // rax
  int v5; // eax
  void **v6; // rdi
  struct IDWMSupportedInputTarget **i; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int *v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int *v16; // rdx
  int v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v18 = 0;
  v3 = *(_QWORD *)a2;
  v19 = (__int64)a2;
  v5 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, int *))(v3 + 40))(a2, &v18);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x14D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x1800384F8LL);
  }
  v6 = (void **)*((_QWORD *)this + 22);
  for ( i = (struct IDWMSupportedInputTarget **)*v6;
        i != (struct IDWMSupportedInputTarget **)v6 && i[2] != a2;
        i = (struct IDWMSupportedInputTarget **)*i )
  {
    ;
  }
  if ( i == (struct IDWMSupportedInputTarget **)v6 )
  {
    if ( (v18 & 0x4000) != 0 )
    {
      v8 = (__int64 *)v6[1];
      v9 = std::_List_buy<IHeatSystemContextClient *>::_Buynode<IHeatSystemContextClient * const &>(
             i,
             *((_QWORD *)this + 22),
             v8,
             &v19);
      v10 = *((_QWORD *)this + 23);
      if ( v10 == 0xAAAAAAAAAAAAAA9LL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)this + 23) = v10 + 1;
      v6[1] = (void *)v9;
      *v8 = v9;
      if ( *((_QWORD *)this + 23) == 1LL )
      {
        v11 = *((_QWORD *)this + 4);
        v12 = (unsigned int *)*((_QWORD *)this + 5);
        v19 = 4LL;
        v20 = 1LL;
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 72LL))(v11, *v12, &v19);
        if ( v13 < 0 )
        {
          v14 = 350LL;
LABEL_17:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v14,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
            (const char *)(unsigned int)v13);
        }
      }
    }
  }
  else if ( (v18 & 0x4000) == 0 )
  {
    *(_QWORD *)i[1] = *i;
    *((_QWORD *)*i + 1) = i[1];
    --*((_QWORD *)this + 23);
    operator delete(i);
    if ( !*((_QWORD *)this + 23) )
    {
      v15 = *((_QWORD *)this + 4);
      v16 = (unsigned int *)*((_QWORD *)this + 5);
      v20 = 0LL;
      v19 = 4LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 72LL))(v15, *v16, &v19);
      if ( v13 < 0 )
      {
        v14 = 364LL;
        goto LABEL_17;
      }
    }
  }
  return 0LL;
}
