/*
 * XREFs of ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B7F00
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800B7758 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800B7B64 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180036770 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void **__fastcall std::vector<enum _Button>::operator=(void **a1, char **a2)
{
  char *v2; // rdi
  char *v4; // r15
  char *v5; // rbp
  signed __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // rbx
  char *v14; // rax
  char *v15; // rdx
  __int64 v16; // rbx
  char *v17; // rdx
  char *v18; // rbx
  size_t v19; // r15

  v2 = (char *)*a1;
  v4 = a2[1];
  v5 = *a2;
  v6 = v4 - *a2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v8 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v9 = v6 >> 2;
  if ( v6 >> 2 > v8 )
  {
    if ( v9 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v10 = v8 >> 1;
    if ( v8 <= 0x3FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v11 = v10 + v8;
      if ( v10 + v8 < v9 )
        v11 = v6 >> 2;
      v9 = v11;
    }
    if ( !v2 )
      goto LABEL_15;
    if ( v8 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v8 < 0x1000 )
      {
LABEL_14:
        operator delete(v2);
LABEL_15:
        std::vector<enum _Button>::_Buy(a1, v9);
        v13 = (char *)*a1;
        memmove(*a1, v5, v6);
        v14 = &v13[v6];
        goto LABEL_20;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v12 = *((_QWORD *)v2 - 1);
        if ( v12 < (unsigned __int64)v2 && (unsigned __int64)&v2[-v12 - 8] <= 0x1F )
        {
          v2 = (char *)*((_QWORD *)v2 - 1);
          goto LABEL_14;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v8, v10);
    __debugbreak();
  }
  v15 = *a2;
  if ( v9 <= v7 )
  {
    memmove(v2, v15, v6);
    v14 = &v2[4 * v9];
  }
  else
  {
    v16 = 4 * v7;
    memmove(v2, v15, 4 * v7);
    v17 = &v5[v16];
    v18 = (char *)a1[1];
    v19 = v4 - v17;
    memmove(v18, v17, v19);
    v14 = &v18[v19];
  }
LABEL_20:
  a1[1] = v14;
  return a1;
}
