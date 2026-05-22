/*
 * XREFs of ??$assign@PEAPEAVPropertyNode@Input@@X@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXPEAPEAVPropertyNode@Input@@0@Z @ 0x180032624
 * Callers:
 *     ??4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z @ 0x180032050 (--4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

char *__fastcall std::vector<Input::PropertyNode *>::assign<Input::PropertyNode * *,void>(
        void **a1,
        char *a2,
        __int64 a3)
{
  char *v3; // rdi
  size_t v5; // r15
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char *v14; // rax
  char *v15; // rbx
  char *result; // rax
  __int64 v17; // rbx
  char *v18; // rdx
  char *v19; // rbx
  size_t v20; // r14

  v3 = (char *)*a1;
  v5 = a3 - (_QWORD)a2;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  v7 = (a3 - (__int64)a2) >> 3;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  if ( v7 <= v9 )
  {
    if ( v7 <= v6 )
    {
      memmove(v3, a2, a3 - (_QWORD)a2);
      result = &v3[8 * v7];
    }
    else
    {
      v17 = 8 * v6;
      memmove(v3, a2, 8 * v6);
      v18 = &a2[v17];
      v19 = (char *)a1[1];
      v20 = a3 - (_QWORD)v18;
      memmove(v19, v18, v20);
      result = &v19[v20];
    }
    goto LABEL_24;
  }
  if ( v7 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v11 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v12 = v11 + v9;
    if ( v11 + v9 < v7 )
      v12 = v7;
    v7 = v12;
  }
  if ( v3 )
  {
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v9 < 0x1000 )
      {
LABEL_14:
        operator delete(v3);
        goto LABEL_15;
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
    _o__invalid_parameter_noinfo_noreturn(v9);
    __debugbreak();
  }
LABEL_15:
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v7 )
  {
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v14 = (char *)std::_Allocate(v7, 8uLL);
    *a1 = v14;
    a1[1] = v14;
    a1[2] = (char *)*a1 + 8 * v7;
  }
  v15 = (char *)*a1;
  memmove(*a1, a2, v5);
  result = &v15[v5];
LABEL_24:
  a1[1] = result;
  return result;
}
