/*
 * XREFs of ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800B7B64
 * Callers:
 *     ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B6E00 (-OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x180008DF4 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAW4_Button@@AEAW42@@Z @ 0x1800372B0 (--$emplace_back@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAW4.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800B735C (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800B74A8 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1800B76AC (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B7F00 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::DetectComboButton(ButtonRecognizer *this, struct InputInfo *a2)
{
  int v2; // r9d
  int v4; // ecx
  __int64 v5; // rbx
  char v6; // r8
  int v7; // r12d
  int v8; // ecx
  int v9; // ecx
  _DWORD **v10; // r13
  int v11; // esi
  char *v12; // rdx
  _DWORD *j; // r14
  _DWORD *v14; // rcx
  unsigned __int64 v15; // rax
  size_t v16; // rbx
  bool v17; // zf
  char *v18; // rdx
  _DWORD *i; // r14
  _DWORD *v20; // rax
  unsigned __int64 v21; // rcx
  size_t v22; // rbx
  char *v23; // rax
  __int64 *v24; // rax
  __int64 **v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rdx
  char v28; // al
  __int64 *v30; // rax
  __int64 **v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rdx
  char IsComboButtonCandidate; // al
  __int64 v35; // rcx
  __int64 *v36; // [rsp+60h] [rbp+40h] BYREF
  int v37; // [rsp+68h] [rbp+48h]

  v2 = *((_DWORD *)a2 + 130);
  v4 = *((_DWORD *)this + 6);
  v5 = 0LL;
  v6 = *((_BYTE *)a2 + 524);
  v7 = 0;
  v37 = v2;
  LODWORD(v36) = v2;
  v8 = v4 - 1;
  if ( !v8 )
  {
    *(_WORD *)((char *)this + 17) = 0;
    *((_BYTE *)this + 16) = 0;
    if ( !v6 )
      return (unsigned int)v7;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &v36);
    ButtonRecognizer::FindExactComboButtonMatch((__int64)this, &v36, (_QWORD *)this + 6);
    v30 = v36;
    if ( v36 != **((__int64 ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v36 = v30;
      v31 = std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v36);
      v32 = *v31;
      v33 = (__int64)(*v31 + 6);
      *((_DWORD *)this + 18) = *((_DWORD *)*v31 + 8);
      *((_BYTE *)this + 80) = *((_BYTE *)v32 + 40);
      if ( (__int64 *)((char *)this + 88) != v32 + 6 )
        std::vector<enum _Button>::operator=((char *)this + 88, v33);
      *((_OWORD *)this + 7) = *(_OWORD *)(v32 + 9);
      *((_OWORD *)this + 8) = *(_OWORD *)(v32 + 11);
      *((_QWORD *)this + 18) = v32[13];
    }
    IsComboButtonCandidate = ButtonRecognizer::IsComboButtonCandidate((__int64)this, (__int64)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !IsComboButtonCandidate )
        goto LABEL_48;
    }
    else if ( !IsComboButtonCandidate )
    {
      goto LABEL_50;
    }
    v35 = *((_QWORD *)this + 19);
    *((_BYTE *)this + 17) = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v35 + 80LL))(
           v35,
           10000000 * qword_180135800,
           0LL);
    if ( v7 >= 0 )
      *((_DWORD *)this + 6) = 2;
    return (unsigned int)v7;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_BYTE *)this + 17) = 1;
    if ( !v6 )
    {
      if ( *((_BYTE *)this + 18) )
      {
        v7 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v7 < 0 )
          return (unsigned int)v7;
        v2 = v37;
        *((_BYTE *)this + 16) = 1;
      }
      v18 = (char *)*((_QWORD *)this + 7);
      for ( i = (_DWORD *)*((_QWORD *)this + 6); i != (_DWORD *)v18 && *i != v2; ++i )
        ;
      v11 = 3;
      if ( i == (_DWORD *)v18 )
        goto LABEL_40;
      v20 = i + 1;
      v21 = (unsigned __int64)(v18 - (char *)(i + 1) + 3) >> 2;
      if ( i + 1 > (_DWORD *)v18 )
        v21 = 0LL;
      if ( v21 )
      {
        do
        {
          if ( *v20 != v2 )
            *i++ = *v20;
          ++v20;
          ++v5;
        }
        while ( v5 != v21 );
      }
      if ( i == (_DWORD *)v18 )
      {
LABEL_40:
        v23 = (char *)*((_QWORD *)this + 7);
      }
      else
      {
        v22 = *((_QWORD *)this + 7) - (_QWORD)v18;
        memmove(i, v18, v22);
        v23 = (char *)i + v22;
        *((_QWORD *)this + 7) = (char *)i + v22;
      }
      v17 = *((_QWORD *)this + 6) == (_QWORD)v23;
      goto LABEL_20;
    }
    *((_BYTE *)this + 18) = 0;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &v36);
    ButtonRecognizer::FindExactComboButtonMatch((__int64)this, &v36, (_QWORD *)this + 6);
    v24 = v36;
    if ( v36 != **((__int64 ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v36 = v24;
      v25 = std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v36);
      v26 = *v25;
      v27 = (__int64)(*v25 + 6);
      *((_DWORD *)this + 18) = *((_DWORD *)*v25 + 8);
      *((_BYTE *)this + 80) = *((_BYTE *)v26 + 40);
      if ( (__int64 *)((char *)this + 88) != v26 + 6 )
        std::vector<enum _Button>::operator=((char *)this + 88, v27);
      *((_OWORD *)this + 7) = *(_OWORD *)(v26 + 9);
      *((_OWORD *)this + 8) = *(_OWORD *)(v26 + 11);
      *((_QWORD *)this + 18) = v26[13];
    }
    v28 = ButtonRecognizer::IsComboButtonCandidate((__int64)this, (__int64)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !v28 )
      {
LABEL_48:
        v7 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v7 < 0 )
          return (unsigned int)v7;
        *((_BYTE *)this + 16) = 1;
LABEL_50:
        v11 = 3;
LABEL_51:
        *((_DWORD *)this + 6) = v11;
        return (unsigned int)v7;
      }
    }
    else if ( !v28 )
    {
      goto LABEL_50;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 19) + 80LL))(
           *((_QWORD *)this + 19),
           10000000 * qword_180135800,
           0LL);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v11 = 2;
    goto LABEL_51;
  }
  if ( v9 == 1 )
  {
    v10 = (_DWORD **)((char *)this + 48);
    v11 = 3;
    if ( v6 )
    {
      std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &v36);
    }
    else
    {
      v12 = (char *)*((_QWORD *)this + 7);
      for ( j = *v10; j != (_DWORD *)v12 && *j != v2; ++j )
        ;
      if ( j != (_DWORD *)v12 )
      {
        v14 = j + 1;
        v15 = (unsigned __int64)(v12 - (char *)(j + 1) + 3) >> 2;
        if ( j + 1 > (_DWORD *)v12 )
          v15 = 0LL;
        if ( v15 )
        {
          do
          {
            if ( *v14 != v2 )
              *j++ = *v14;
            ++v14;
            ++v5;
          }
          while ( v5 != v15 );
        }
        if ( j != (_DWORD *)v12 )
        {
          v16 = *((_QWORD *)this + 7) - (_QWORD)v12;
          memmove(j, v12, v16);
          *((_QWORD *)this + 7) = (char *)j + v16;
        }
      }
    }
    v17 = *v10 == *((_DWORD **)this + 7);
LABEL_20:
    if ( v17 )
      v11 = 1;
    goto LABEL_51;
  }
  return (unsigned int)v7;
}
