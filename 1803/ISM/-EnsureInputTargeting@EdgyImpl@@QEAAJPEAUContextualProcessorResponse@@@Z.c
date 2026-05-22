/*
 * XREFs of ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1800B47EC
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B3D84 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x18006695C (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x180069028 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyImpl::EnsureInputTargeting(EdgyImpl *this, struct ContextualProcessorResponse *a2)
{
  unsigned int v4; // esi
  int v5; // r12d
  unsigned int v6; // r13d
  const struct CandidateIdentity *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  const void *v10; // r9
  unsigned __int64 v11; // rdx
  void **v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // ecx
  char v15; // bl
  const char *v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+28h] [rbp-49h] BYREF
  char v28; // [rsp+30h] [rbp-41h]
  _QWORD *v29; // [rsp+38h] [rbp-39h]
  __int64 v30; // [rsp+40h] [rbp-31h]
  _BYTE v31[12]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-1Dh]
  int v33; // [rsp+58h] [rbp-19h]
  void *v34[2]; // [rsp+70h] [rbp-1h] BYREF
  __m128i si128; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30 = -2LL;
  v4 = 0;
  v5 = 0;
  *(_DWORD *)a2 = 0;
  v6 = 0;
  memset_0(v31, 0, 0x28uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v34[0]) = 0;
  v7 = (const struct CandidateIdentity *)*((_QWORD *)this + 1);
  if ( !v7
    || !Edges::GetCandidateConfiguration(
          (Edges *)(*((_QWORD *)this + 3) + 72LL),
          v7,
          (struct EdgyConfiguration *)v31,
          0LL) )
  {
    goto LABEL_14;
  }
  v9 = *((_QWORD *)this + 1);
  if ( v34 != (void **)v9 )
  {
    v10 = (const void *)*((_QWORD *)this + 1);
    if ( *(_QWORD *)(v9 + 24) >= 8uLL )
      v10 = *(const void **)v9;
    v11 = *(_QWORD *)(v9 + 16);
    if ( v11 > si128.m128i_i64[1] )
    {
      v28 = 0;
      std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
        (unsigned __int64 *)v34,
        v11,
        v8,
        v10);
    }
    else
    {
      v12 = v34;
      if ( si128.m128i_i64[1] >= 8uLL )
        v12 = (void **)v34[0];
      si128.m128i_i64[0] = *(_QWORD *)(v9 + 16);
      v13 = 2 * v11;
      memmove(v12, v10, 2 * v11);
      *(_WORD *)((char *)v12 + v13) = 0;
    }
  }
  v14 = v32;
  if ( v32 == *(_DWORD *)(*((_QWORD *)this + 1) + 32LL) )
  {
    v15 = 1;
    if ( v33 == 1 )
    {
      v5 = 1;
      *(_DWORD *)a2 = 2;
      v6 = v14;
    }
  }
  else
  {
LABEL_14:
    v15 = 0;
  }
  std::wstring::_Tidy_deallocate((unsigned __int64 *)v34);
  if ( v15 )
  {
    if ( v6 )
    {
      if ( v5 != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xFB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
          v16);
        __debugbreak();
      }
      if ( *(_DWORD *)a2 == 2 )
      {
        v29 = 0LL;
        v27 = 0LL;
        v17 = malloc(0x28uLL);
        v18 = v17;
        if ( v17 )
        {
          memset_0(v17, 0, 0x28uLL);
          v18[2] = &RefCountedObject::`vftable';
          *((_DWORD *)v18 + 6) = 1;
          *v18 = &EdgyInputTarget::`vftable'{for `IInputTarget'};
          v18[1] = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
          v18[2] = &EdgyInputTarget::`vftable'{for `RefCountedObject'};
          *((_DWORD *)v18 + 8) = 0;
        }
        else
        {
          v18 = 0LL;
        }
        v29 = v18;
        v4 = v18 == 0LL ? 0x8007000E : 0;
        if ( !v18 )
        {
          v19 = v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          return v4;
        }
        v20 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v18)(
                v18,
                &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
                &v27);
        v22 = retaddr;
        if ( v21 >= 0 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 80LL))(v27, v6);
          if ( v23 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x10D,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
              (const char *)(unsigned int)v23);
            JUMPOUT(0x1800B4B0ALL);
          }
          if ( *((_QWORD **)a2 + 2) != v18 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
            v24 = *((_QWORD *)a2 + 2);
            *((_QWORD *)a2 + 2) = v18;
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v25 = v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
          goto LABEL_36;
        }
      }
      else
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xFC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
          v16);
      }
      wil::details::in1diag3::FailFast_Hr(
        v22,
        (void *)0x10B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
LABEL_36:
    *((_DWORD *)this + 4) = v5;
  }
  return v4;
}
