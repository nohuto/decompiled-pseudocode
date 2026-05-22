/*
 * XREFs of ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B95F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivationProcessor::OnInput(
        ActivationProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  char v10; // bl
  __int64 v11; // rdx
  char v12; // si
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  v20 = -2LL;
  v22 = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4 + 1))(
         *((_QWORD *)a4 + 1),
         &GUID_9a8e3fb8_36b5_4c0c_9118_1aa39b5b35fc,
         &v22);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22) )
    {
      *(_DWORD *)a4 = 3;
    }
    else
    {
      *(_DWORD *)a4 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 56LL))(v22);
      if ( v10 )
        goto LABEL_9;
      v13 = 0LL;
      v18 = 0LL;
      v19 = *((_QWORD *)a2 + 8);
      v14 = *((_QWORD *)a3 + 1);
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v18);
        v13 = v18;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 8)
                                                                                               + 88LL))(
             *((_QWORD *)this + 8),
             *((_QWORD *)a3 + 2),
             *((unsigned int *)a2 + 1),
             *(unsigned int *)a2,
             v13,
             v19) )
      {
LABEL_9:
        if ( v12 )
        {
          v15 = v22;
          *(_DWORD *)a4 = 3;
          LOBYTE(v11) = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v11);
        }
      }
    }
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\acti"
               "vationprocessor.cpp",
      (const char *)(unsigned int)v8);
  }
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v9;
}
