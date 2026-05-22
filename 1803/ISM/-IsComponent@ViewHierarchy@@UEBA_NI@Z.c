/*
 * XREFs of ?IsComponent@ViewHierarchy@@UEBA_NI@Z @ 0x18002C4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ViewHierarchy::IsComponent(ViewHierarchy *this, int a2)
{
  char v2; // r8
  unsigned __int64 v3; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 *v10; // rbx
  __int64 *i; // rax
  __int64 *v12; // rcx
  int v14; // [rsp+10h] [rbp+10h]

  v2 = 0;
  v14 = a2;
  v3 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
  {
    v6 = *((unsigned __int8 *)&v14 + v3++);
    v5 = 0x100000001B3LL * (v6 ^ v5);
  }
  while ( v3 < 4 );
  v7 = v5 & *((_QWORD *)this + 16);
  v8 = *((_QWORD *)this + 13);
  v9 = 2 * v7;
  v10 = *(__int64 **)(v8 + 16 * v7);
  for ( i = v10; ; i = (__int64 *)*i )
  {
    v12 = v10 == *((__int64 **)this + 11) ? (__int64 *)*((_QWORD *)this + 11) : **(__int64 ***)(v8 + 8 * v9 + 8);
    if ( i == v12 )
      break;
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_11;
  }
  i = (__int64 *)*((_QWORD *)this + 11);
LABEL_11:
  if ( i != *((__int64 **)this + 11) )
    return *((_DWORD *)i + 8) != 0;
  return v2;
}
