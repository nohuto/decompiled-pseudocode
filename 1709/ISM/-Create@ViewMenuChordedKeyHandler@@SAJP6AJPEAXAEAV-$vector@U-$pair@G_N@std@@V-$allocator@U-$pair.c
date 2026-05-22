/*
 * XREFs of ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x1800425A0
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEAU?$pair@G_N@std@@PEAU12@V?$allocator@U?$pair@G_N@std@@@2@@std@@YAPEAU?$pair@G_N@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@G_N@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800420E8 (--$_Uninitialized_copy_al_unchecked@PEAU-$pair@G_N@std@@PEAU12@V-$allocator@U-$pair@G_N@std@@@2@.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewMenuChordedKeyHandler::Create(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  int v6; // edi
  int v7; // r9d
  char *v8; // rax
  char *v9; // rbx
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  void *v20; // rax
  _DWORD *v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // r9d
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v32; // [rsp+80h] [rbp+18h] BYREF

  v32 = a3;
  if ( a4 )
  {
    v8 = (char *)malloc(0x68uLL);
    v9 = v8;
    if ( v8 )
      memset(v8, 0, 0x68uLL);
    if ( v9 )
    {
      *(_QWORD *)v9 = &RefCountedObject::`vftable';
      *((_DWORD *)v9 + 2) = 1;
      *(_QWORD *)v9 = &ViewMenuChordedKeyHandler::`vftable';
      *((_QWORD *)v9 + 3) = 0LL;
      *((_QWORD *)v9 + 6) = 0LL;
      *((_QWORD *)v9 + 7) = 0LL;
      *((_QWORD *)v9 + 8) = 0LL;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 11) = 0LL;
      *((_QWORD *)v9 + 12) = 0LL;
      *((_DWORD *)v9 + 4) = 0;
      *((_QWORD *)v9 + 4) = 0LL;
      a1 = *((_QWORD *)v9 + 3);
      if ( a1 )
      {
        *((_QWORD *)v9 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      }
      *((_QWORD *)v9 + 5) = 0LL;
      *((_QWORD *)v9 + 7) = *((_QWORD *)v9 + 6);
      *(_WORD *)(v9 + 73) = 0;
      v9[72] = 0;
    }
    else
    {
      v9 = 0LL;
    }
    if ( !v9 )
    {
      v6 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v6;
      v7 = 42;
      goto LABEL_4;
    }
    v10 = (unsigned __int64 *)(v9 + 80);
    if ( v9 + 80 != (char *)&xmmword_18010F050 )
    {
      v11 = *((_QWORD *)&xmmword_18010F050 + 1);
      v12 = xmmword_18010F050;
      v13 = (__int64)(*((_QWORD *)&xmmword_18010F050 + 1) - xmmword_18010F050) >> 2;
      v14 = *v10;
      v15 = (__int64)(*((_QWORD *)v9 + 11) - *((_QWORD *)v9 + 10)) >> 2;
      v16 = (__int64)(*((_QWORD *)v9 + 12) - *((_QWORD *)v9 + 10)) >> 2;
      if ( v13 > v16 )
      {
        if ( v13 > 0x3FFFFFFFFFFFFFFFLL )
          std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
        v17 = v16 >> 1;
        if ( v16 <= 0x3FFFFFFFFFFFFFFFLL - (v16 >> 1) )
        {
          v18 = v17 + v16;
          if ( v17 + v16 < v13 )
            v18 = (__int64)(*((_QWORD *)&xmmword_18010F050 + 1) - xmmword_18010F050) >> 2;
          v13 = v18;
        }
        if ( !v14 )
          goto LABEL_32;
        if ( v16 <= 0x3FFFFFFFFFFFFFFFLL )
        {
          if ( 4 * v16 < 0x1000 )
          {
LABEL_30:
            operator delete((void *)v14);
LABEL_32:
            *v10 = 0LL;
            *((_QWORD *)v9 + 11) = 0LL;
            *((_QWORD *)v9 + 12) = 0LL;
            if ( v13 )
            {
              if ( v13 > 0x3FFFFFFFFFFFFFFFLL )
                std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
              v20 = std::_Allocate(v13, 4uLL);
              *v10 = (unsigned __int64)v20;
              *((_QWORD *)v9 + 11) = v20;
              *((_QWORD *)v9 + 12) = *v10 + 4 * v13;
            }
            v21 = (_DWORD *)*v10;
            v22 = v12;
            goto LABEL_42;
          }
          if ( (v14 & 0x1F) == 0 )
          {
            v19 = *(_QWORD *)(v14 - 8);
            if ( v19 < v14 )
            {
              v14 = v14 - v19 - 8;
              if ( v14 <= 0x1F )
              {
                v14 = v19;
                goto LABEL_30;
              }
            }
          }
        }
        _o__invalid_parameter_noinfo_noreturn(v14);
        __debugbreak();
      }
      if ( v13 > v15 )
      {
        v23 = xmmword_18010F050 + 4 * v15;
        while ( v12 != v23 )
        {
          *(_WORD *)v14 = *(_WORD *)v12;
          *(_BYTE *)(v14 + 2) = *(_BYTE *)(v12 + 2);
          v14 += 4LL;
          v12 += 4LL;
        }
        v21 = (_DWORD *)*((_QWORD *)v9 + 11);
        v22 = v23;
LABEL_42:
        *((_QWORD *)v9 + 11) = std::_Uninitialized_copy_al_unchecked<std::pair<unsigned short,bool> *,std::pair<unsigned short,bool> *,std::allocator<std::pair<unsigned short,bool>>>(
                                 v22,
                                 v11,
                                 v21);
        goto LABEL_47;
      }
      v24 = v14 + 4 * v13;
      while ( v12 != v11 )
      {
        *(_WORD *)v14 = *(_WORD *)v12;
        *(_BYTE *)(v14 + 2) = *(_BYTE *)(v12 + 2);
        v14 += 4LL;
        v12 += 4LL;
      }
      *((_QWORD *)v9 + 11) = v24;
    }
LABEL_47:
    *((_QWORD *)v9 + 4) = ControllerProcessor::TaskSwitcherInvokedCallbackStatic;
    *((_QWORD *)v9 + 5) = a2;
    *((_DWORD *)v9 + 4) = 1;
    v32 = 0LL;
    v25 = CoreUICreate(&v32);
    v6 = v25;
    if ( v25 >= 0 )
    {
      v28 = v32;
      v29 = *((_QWORD *)v9 + 3);
      if ( v29 )
      {
        *((_QWORD *)v9 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v25 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), char *, char *))(*(_QWORD *)v28 + 120LL))(
              v28,
              lambda_1ee5a9c53eca02d00e8b9ffa9f88f873_::_lambda_invoker_cdecl_,
              v9,
              v9 + 24);
      v6 = v25;
      if ( v25 >= 0 )
      {
        *((_QWORD *)v9 + 7) = *((_QWORD *)v9 + 6);
        *(_WORD *)(v9 + 73) = 0;
        v9[72] = 0;
        goto LABEL_57;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v27 = 114;
        goto LABEL_50;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v27 = 107;
LABEL_50:
      McTemplateU0qqq(v26, &MinInput_Warning_CheckResult, 0, v27, v25);
    }
LABEL_57:
    v30 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    if ( v6 >= 0 )
    {
      *a4 = v9;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v30, &MinInput_Warning_CheckResult, 0, 48, v6);
    }
    if ( v6 < 0 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
    return (unsigned int)v6;
  }
  v6 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 36;
LABEL_4:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v7, v6);
  }
  return (unsigned int)v6;
}
