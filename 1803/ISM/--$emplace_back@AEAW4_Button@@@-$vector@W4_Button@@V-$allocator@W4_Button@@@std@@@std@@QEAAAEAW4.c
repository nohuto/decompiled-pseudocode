/*
 * XREFs of ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAW4_Button@@AEAW42@@Z @ 0x1800372B0
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x18003707C (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800B7B64 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<enum _Button>::emplace_back<enum _Button &>(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // r14
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rsi
  size_t v12; // rcx
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax

  v4 = *(_DWORD **)(a1 + 16);
  v5 = *(_DWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 2;
    if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = v6 + 1;
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 2;
    v9 = v8 >> 1;
    if ( v8 <= 0x3FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    if ( v10 )
    {
      if ( v10 > 0x3FFFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v12 = 4 * v10;
      if ( 4 * v10 < 0x1000 )
      {
        v11 = operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
          std::_Default_allocate_traits<1>::_Fail();
        v13 = operator new(v12 + 39);
        v11 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      *((_DWORD *)v11 + v6) = *a2;
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(v15, (unsigned __int64)v11, v10);
      throw;
    }
    v16 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_23;
    v17 = (__int64)(*(_QWORD *)(a1 + 16) - v16) >> 2;
    if ( v17 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v17 < 0x1000 )
      {
LABEL_22:
        operator delete((void *)v16);
LABEL_23:
        *(_QWORD *)a1 = v11;
        *(_QWORD *)(a1 + 8) = (char *)v11 + 4 * v7;
        *(_QWORD *)(a1 + 16) = (char *)v11 + 4 * v10;
        return *(_QWORD *)(a1 + 8) - 4LL;
      }
      if ( (v16 & 0x1F) == 0 )
      {
        v18 = *(_QWORD *)(v16 - 8);
        if ( v18 < v16 )
        {
          v16 = v16 - v18 - 8;
          if ( v16 <= 0x1F )
          {
            v16 = v18;
            goto LABEL_22;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v16, v14);
    __debugbreak();
  }
  *v5 = *a2;
  *(_QWORD *)(a1 + 8) += 4LL;
  return *(_QWORD *)(a1 + 8) - 4LL;
}
