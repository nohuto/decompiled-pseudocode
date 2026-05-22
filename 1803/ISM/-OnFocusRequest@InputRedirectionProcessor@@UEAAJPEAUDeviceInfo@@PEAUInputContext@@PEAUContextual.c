/*
 * XREFs of ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B5680
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnFocusRequest(
        InputRedirectionProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  char *v4; // r8
  int v6; // r10d
  int v7; // r9d
  _DWORD *i; // rax
  _DWORD *v9; // rbx
  _DWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)a4 = 0;
  v4 = (char *)this + 80;
  v6 = 0;
  v7 = *((_DWORD *)a2 + 1);
  for ( i = (_DWORD *)((char *)this + 80); (v7 & *i) == 0; i += 4 )
  {
    if ( (unsigned int)++v6 >= 4 )
      return 0LL;
  }
  v9 = 0LL;
  v10 = (_DWORD *)((char *)this + 80);
  v11 = 0LL;
  while ( (v7 & *v10) == 0 )
  {
    v11 = (unsigned int)(v11 + 1);
    v10 += 4;
    if ( (unsigned int)v11 >= 4 )
      goto LABEL_10;
  }
  v9 = *(_DWORD **)&v4[16 * v11 + 8];
LABEL_10:
  if ( *((_QWORD *)v9 + 4) )
  {
    if ( v9[14] != *((_DWORD *)a2 + 3) )
    {
      v12 = *((_QWORD *)a4 + 1);
      if ( v12 )
      {
        *((_QWORD *)a4 + 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, char *))v9)(
              v9,
              &GUID_00000000_0000_0000_c000_000000000046,
              (char *)a4 + 8);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x17A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\"
                   "lib\\inputredirectionprocessor.cpp",
          (const char *)(unsigned int)v13);
        JUMPOUT(0x1800B57A1LL);
      }
      *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 32LL))(v9) != 0) + 2;
    }
  }
  else
  {
    v14 = 0LL;
    v15 = v4 + 8;
    while ( (_DWORD *)*v15 != v9 )
    {
      v14 = (unsigned int)(v14 + 1);
      v15 += 2;
      if ( (unsigned int)v14 >= 4 )
        goto LABEL_21;
    }
    *(_DWORD *)&v4[16 * v14] = 0;
LABEL_21:
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
