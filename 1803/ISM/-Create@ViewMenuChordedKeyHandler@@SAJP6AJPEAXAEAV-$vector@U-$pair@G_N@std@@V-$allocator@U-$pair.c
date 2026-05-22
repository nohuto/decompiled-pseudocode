/*
 * XREFs of ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180036CD0
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003254C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180036770 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEBU?$pair@G_N@std@@PEAU12@V?$allocator@U?$pair@G_N@std@@@2@@std@@YAPEAU?$pair@G_N@0@PEBU10@0PEAU10@AEAV?$allocator@U?$pair@G_N@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180036800 (--$_Uninitialized_copy_al_unchecked@PEBU-$pair@G_N@std@@PEAU12@V-$allocator@U-$pair@G_N@std@@@2@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewMenuChordedKeyHandler::Create(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  int v6; // edi
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  _DWORD *v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // [rsp+80h] [rbp+18h] BYREF

  v28 = a3;
  if ( !a4 )
    return (unsigned int)-2147024809;
  v7 = (char *)malloc(0x68uLL);
  v8 = v7;
  if ( v7 )
    memset_0(v7, 0, 0x68uLL);
  if ( v8 )
  {
    *(_QWORD *)v8 = &RefCountedObject::`vftable';
    *((_DWORD *)v8 + 2) = 1;
    *(_QWORD *)v8 = &ViewMenuChordedKeyHandler::`vftable';
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
    *((_QWORD *)v8 + 7) = 0LL;
    *((_QWORD *)v8 + 8) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    *((_QWORD *)v8 + 11) = 0LL;
    *((_QWORD *)v8 + 12) = 0LL;
    *((_DWORD *)v8 + 4) = 0;
    *((_QWORD *)v8 + 4) = 0LL;
    v9 = *((_QWORD *)v8 + 3);
    if ( v9 )
    {
      *((_QWORD *)v8 + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    *((_QWORD *)v8 + 5) = 0LL;
    *((_QWORD *)v8 + 7) = *((_QWORD *)v8 + 6);
    *(_WORD *)(v8 + 73) = 0;
    v8[72] = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    return (unsigned int)-2147024882;
  v10 = (unsigned __int64 *)(v8 + 80);
  if ( v8 + 80 != (char *)&qword_180136558 )
  {
    v11 = qword_180136560;
    v12 = qword_180136558;
    v13 = (qword_180136560 - qword_180136558) >> 2;
    v14 = (_DWORD *)*((_QWORD *)v8 + 11);
    v15 = *v10;
    v16 = ((__int64)v14 - *((_QWORD *)v8 + 10)) >> 2;
    v17 = (__int64)(*((_QWORD *)v8 + 12) - *((_QWORD *)v8 + 10)) >> 2;
    if ( v13 <= v17 )
    {
      if ( v13 <= v16 )
      {
        v23 = v15 + 4 * v13;
        while ( v12 != v11 )
        {
          *(_WORD *)v15 = *(_WORD *)v12;
          *(_BYTE *)(v15 + 2) = *(_BYTE *)(v12 + 2);
          v15 += 4LL;
          v12 += 4LL;
        }
        *((_QWORD *)v8 + 11) = v23;
        goto LABEL_39;
      }
      v22 = qword_180136558 + 4 * v16;
      if ( qword_180136558 != v22 )
      {
        do
        {
          *(_WORD *)v15 = *(_WORD *)v12;
          *(_BYTE *)(v15 + 2) = *(_BYTE *)(v12 + 2);
          v15 += 4LL;
          v12 += 4LL;
        }
        while ( v12 != v22 );
        v14 = (_DWORD *)*((_QWORD *)v8 + 11);
      }
      v21 = v22;
      goto LABEL_34;
    }
    if ( v13 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v18 = v17 >> 1;
    if ( v17 <= 0x3FFFFFFFFFFFFFFFLL - (v17 >> 1) )
    {
      v19 = v17 + v18;
      if ( v17 + v18 < v13 )
        v19 = (qword_180136560 - qword_180136558) >> 2;
      v13 = v19;
    }
    if ( !v15 )
    {
LABEL_27:
      std::vector<enum _Button>::_Buy((_QWORD *)v8 + 10, v13);
      v14 = (_DWORD *)*v10;
      v21 = v12;
LABEL_34:
      *((_QWORD *)v8 + 11) = std::_Uninitialized_copy_al_unchecked<std::pair<unsigned short,bool> const *,std::pair<unsigned short,bool> *,std::allocator<std::pair<unsigned short,bool>>>(
                               v21,
                               v11,
                               v14);
      goto LABEL_39;
    }
    if ( v17 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v17 < 0x1000 )
      {
LABEL_26:
        operator delete((void *)v15);
        goto LABEL_27;
      }
      if ( (v15 & 0x1F) == 0 )
      {
        v20 = *(_QWORD *)(v15 - 8);
        if ( v20 < v15 )
        {
          v15 = v15 - v20 - 8;
          if ( v15 <= 0x1F )
          {
            v15 = v20;
            goto LABEL_26;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v15, v17);
    __debugbreak();
  }
LABEL_39:
  *((_QWORD *)v8 + 4) = ControllerProcessor::TaskSwitcherInvokedCallbackStatic;
  *((_QWORD *)v8 + 5) = a2;
  *((_DWORD *)v8 + 4) = 1;
  v28 = 0LL;
  v6 = CoreUICreate(&v28);
  if ( v6 >= 0 )
  {
    v24 = v28;
    v25 = *((_QWORD *)v8 + 3);
    if ( v25 )
    {
      *((_QWORD *)v8 + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), char *, char *))(*(_QWORD *)v24 + 120LL))(
           v24,
           lambda_1ee5a9c53eca02d00e8b9ffa9f88f873_::_lambda_invoker_cdecl_,
           v8,
           v8 + 24);
    if ( v6 >= 0 )
    {
      *((_QWORD *)v8 + 7) = *((_QWORD *)v8 + 6);
      *(_WORD *)(v8 + 73) = 0;
      v8[72] = 0;
    }
  }
  v26 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v6 < 0 )
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  else
    *a4 = v8;
  return (unsigned int)v6;
}
