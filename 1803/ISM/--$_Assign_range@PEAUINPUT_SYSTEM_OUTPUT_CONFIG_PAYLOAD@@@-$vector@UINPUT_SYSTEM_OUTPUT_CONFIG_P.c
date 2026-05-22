/*
 * XREFs of ??$_Assign_range@PEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180090AC0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const_____ptr64_::_Do_call @ 0x180090CE0 (std--_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT__ea_180090CE0.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::_Assign_range<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD *>(
        void **a1,
        char *a2,
        __int64 a3)
{
  char *v3; // r9
  size_t v6; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  size_t v14; // rbx
  void *v15; // rax
  char *v16; // rcx
  char *v17; // rbx
  char *result; // rax
  char *v19; // rdi
  char *v20; // rbx
  size_t v21; // r15
  char *v22; // rbx

  v3 = (char *)*a1;
  v6 = a3 - (_QWORD)a2;
  v8 = (a3 - (__int64)a2) / 24;
  v9 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 24;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 24;
  if ( v8 > v10 )
  {
    if ( v8 > 0xAAAAAAAAAAAAAAALL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v11 = v10 >> 1;
    if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
    {
      v12 = v11 + v10;
      if ( v11 + v10 < v8 )
        v12 = v8;
      v8 = v12;
    }
    if ( !v3 )
      goto LABEL_15;
    if ( v10 <= 0xAAAAAAAAAAAAAAALL )
    {
      if ( 24 * v10 < 0x1000 )
      {
LABEL_14:
        operator delete(v3);
LABEL_15:
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        if ( v8 )
        {
          if ( v8 > 0xAAAAAAAAAAAAAAALL )
            std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
          v14 = 24 * v8;
          if ( v14 < 0x1000 )
          {
            v16 = (char *)operator new(v14);
          }
          else
          {
            if ( v14 + 39 < v14 )
              std::_Default_allocate_traits<1>::_Fail();
            v15 = operator new(v14 + 39);
            v16 = (char *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *((_QWORD *)v16 - 1) = v15;
          }
          *a1 = v16;
          a1[1] = v16;
          a1[2] = (char *)*a1 + v14;
        }
        v17 = (char *)*a1;
        memmove(*a1, a2, v6);
        result = &v17[v6];
        goto LABEL_27;
      }
      if ( ((unsigned __int8)v3 & 0x1F) == 0 )
      {
        v13 = *((_QWORD *)v3 - 1);
        if ( v13 < (unsigned __int64)v3 && (unsigned __int64)&v3[-v13 - 8] <= 0x1F )
        {
          v3 = (char *)*((_QWORD *)v3 - 1);
          goto LABEL_14;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v11, v10);
    __debugbreak();
  }
  if ( v8 > v9 )
  {
    v19 = &a2[24 * v9];
    memmove(v3, a2, 24 * v9);
    v20 = (char *)a1[1];
    v21 = a3 - (_QWORD)v19;
    memmove(v20, v19, v21);
    result = &v20[v21];
LABEL_27:
    a1[1] = result;
    return result;
  }
  v22 = &v3[24 * v8];
  result = (char *)memmove(v3, a2, v6);
  a1[1] = v22;
  return result;
}
