/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800074C8
 * Callers:
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 * Callees:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180007354 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::string::insert(_QWORD *a1, size_t a2, __int64 a3, char a4)
{
  size_t v4; // r8
  size_t v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  size_t v11; // r8
  _QWORD *v12; // rax
  bool v13; // cf
  _QWORD *v14; // rax
  _BYTE *v16; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1[2];
  if ( v4 < a2 )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  if ( v4 == -1LL || ~v4 == 1 )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v4 + 1;
  if ( v4 == -2LL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  if ( a1[3] < v8 )
  {
    std::string::_Copy((__int64)a1, v4 + 1, v4);
    goto LABEL_23;
  }
  if ( v4 == -1LL )
  {
    a1[2] = 0LL;
    if ( a1[3] < 0x10uLL )
      v16 = a1;
    else
      v16 = (_BYTE *)*a1;
    *v16 = 0;
LABEL_23:
    if ( !v8 )
      return a1;
  }
  if ( a1[3] < 0x10uLL )
    v9 = a1;
  else
    v9 = (_QWORD *)*a1;
  if ( a1[3] < 0x10uLL )
    v10 = a1;
  else
    v10 = (_QWORD *)*a1;
  v11 = a1[2] - a2;
  if ( v11 )
    memmove((char *)v10 + a2 + 1, (char *)v9 + a2, v11);
  if ( a1[3] < 0x10uLL )
    v12 = a1;
  else
    v12 = (_QWORD *)*a1;
  *((_BYTE *)v12 + a2) = a4;
  v13 = a1[3] < 0x10uLL;
  a1[2] = v8;
  if ( v13 )
    v14 = a1;
  else
    v14 = (_QWORD *)*a1;
  *((_BYTE *)v14 + v8) = 0;
  return a1;
}
