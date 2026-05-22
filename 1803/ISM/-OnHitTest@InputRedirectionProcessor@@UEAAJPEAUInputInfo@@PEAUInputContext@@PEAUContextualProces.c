/*
 * XREFs of ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B5510
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnHitTest(
        InputRedirectionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  char *v7; // rcx
  int v8; // r9d
  unsigned int v9; // edx
  _DWORD *v10; // rax
  int v11; // edx
  _DWORD *i; // rax
  _DWORD *v13; // rbx
  _DWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  _QWORD *v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a4 = 0;
  v22 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 9) + 24LL))(
         *((_QWORD *)this + 9),
         *((unsigned int *)a2 + 1),
         &v22) >= 0 )
  {
    v7 = (char *)this + 80;
    v8 = *(_DWORD *)a2;
    v9 = 0;
    v10 = (_DWORD *)((char *)this + 80);
    while ( (*(_DWORD *)(v22 + 4) & *v10) == 0 )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= 4 )
        goto LABEL_7;
    }
    v8 = *(_DWORD *)(v22 + 4);
LABEL_7:
    v11 = 0;
    for ( i = (_DWORD *)((char *)this + 80); (v8 & *i) == 0; i += 4 )
    {
      if ( (unsigned int)++v11 >= 4 )
        return 0LL;
    }
    v13 = 0LL;
    v14 = (_DWORD *)((char *)this + 80);
    v15 = 0LL;
    while ( (v8 & *v14) == 0 )
    {
      v15 = (unsigned int)(v15 + 1);
      v14 += 4;
      if ( (unsigned int)v15 >= 4 )
        goto LABEL_16;
    }
    v13 = *(_DWORD **)&v7[16 * v15 + 8];
LABEL_16:
    if ( *((_QWORD *)v13 + 4) )
    {
      if ( v13[14] != *(_DWORD *)(v22 + 12) )
      {
        v16 = *((_QWORD *)a4 + 1);
        if ( v16 )
        {
          *((_QWORD *)a4 + 1) = 0LL;
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v16 + 16LL))(v16, v14);
        }
        v17 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, char *))v13)(
                v13,
                &GUID_00000000_0000_0000_c000_000000000046,
                (char *)a4 + 8);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x14C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\syste"
                     "m\\lib\\inputredirectionprocessor.cpp",
            (const char *)(unsigned int)v17);
          JUMPOUT(0x1800B567CLL);
        }
        *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 32LL))(v13) != 0) + 2;
      }
    }
    else
    {
      v18 = 0LL;
      v19 = (_QWORD *)((char *)this + 88);
      while ( (_DWORD *)*v19 != v13 )
      {
        v18 = (unsigned int)(v18 + 1);
        v19 += 2;
        if ( (unsigned int)v18 >= 4 )
          goto LABEL_27;
      }
      *(_DWORD *)&v7[16 * v18] = 0;
LABEL_27:
      (*(void (__fastcall **)(_DWORD *, _QWORD *))(*(_QWORD *)v13 + 16LL))(v13, v19);
    }
  }
  return 0LL;
}
