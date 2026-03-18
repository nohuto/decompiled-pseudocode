/*
 * XREFs of HvpFreeHiveFreeDisplay @ 0x140584AD8
 * Callers:
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HvpFreeHiveFreeDisplay(__int64 a1, char a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 1448);
  v5 = (a2 != 0) + 1LL;
  do
  {
    v6 = v3;
    v7 = 24LL;
    do
    {
      if ( *v6 )
      {
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*v6, *((unsigned int *)v6 - 4));
        *((_DWORD *)v6 - 2) = 0;
        *v6 = 0LL;
        *((_DWORD *)v6 - 4) = 0;
      }
      v6 += 3;
      --v7;
    }
    while ( v7 );
    v3 += 79;
    --v5;
  }
  while ( v5 );
  return result;
}
