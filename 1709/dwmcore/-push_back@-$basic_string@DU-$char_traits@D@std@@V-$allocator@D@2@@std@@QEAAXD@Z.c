/*
 * XREFs of ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800075A0
 * Callers:
 *     _anonymous_namespace_::Encoder::EnsureZeroesAreSerialized @ 0x180006DD4 (_anonymous_namespace_--Encoder--EnsureZeroesAreSerialized.c)
 *     _anonymous_namespace_::Encoder::EncodeBlock @ 0x180006E30 (_anonymous_namespace_--Encoder--EncodeBlock.c)
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 * Callees:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180007438 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char __fastcall std::string::push_back(__int64 *a1, char a2)
{
  unsigned __int64 v2; // rax
  __int64 *v4; // rbx
  _QWORD *v5; // r8
  unsigned __int64 v6; // rcx
  char *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  size_t v14; // r8
  bool v15; // cf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[3];
  v4 = a1;
  if ( v2 < 0x10 )
    v5 = a1;
  else
    v5 = (_QWORD *)*a1;
  v6 = a1[2];
  v7 = (char *)v5 + v6;
  if ( v2 < 0x10 )
    v8 = (__int64)v4;
  else
    v8 = *v4;
  if ( v7 )
  {
    v7 -= v8;
    if ( v6 < (unsigned __int64)v7 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
  }
  if ( v6 == -1LL || ~v6 == 1 )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = v6 + 1;
  LOBYTE(v10) = std::string::_Grow(v4, v6 + 1);
  if ( (_BYTE)v10 )
  {
    v11 = v4[3];
    if ( v11 < 0x10 )
      v12 = (__int64)v4;
    else
      v12 = *v4;
    if ( v11 < 0x10 )
      v13 = v4;
    else
      v13 = (_QWORD *)*v4;
    v14 = v4[2] - (_QWORD)v7;
    if ( v14 )
      memmove((char *)v13 + (_QWORD)v7 + 1, &v7[v12], v14);
    if ( (unsigned __int64)v4[3] < 0x10 )
      v10 = (__int64)v4;
    else
      v10 = *v4;
    v7[v10] = a2;
    v15 = (unsigned __int64)v4[3] < 0x10;
    v4[2] = v9;
    if ( !v15 )
      v4 = (__int64 *)*v4;
    *((_BYTE *)v4 + v9) = 0;
  }
  return v10;
}
