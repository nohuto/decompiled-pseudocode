/*
 * XREFs of xxxSetClassLong @ 0x1C01C321C
 * Callers:
 *     NtUserSetClassLong @ 0x1C01DF0F0 (NtUserSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 */

unsigned __int64 __fastcall xxxSetClassLong(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rcx
  unsigned __int64 result; // rax
  __int64 v10; // rcx
  _QWORD *i; // rcx

  v5 = a3;
  v6 = (int)a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != PsGetCurrentProcessWin32Process(a1, a2) )
  {
    v8 = 5LL;
LABEL_14:
    UserSetLastError(v8);
    return 0LL;
  }
  if ( (int)v6 < 0 )
  {
    if ( (int)v6 >= -34 && byte_1C02EDE90[(int)v6 + 34] <= 4u )
      return xxxSetClassData((struct tagWND *)a1, v6, v5, a4);
    goto LABEL_13;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 64LL);
  if ( (int)v6 + 4 < (unsigned int)v6 || (unsigned int)(v6 + 4) > *(_DWORD *)(v10 + 104) )
  {
LABEL_13:
    v8 = 1413LL;
    goto LABEL_14;
  }
  result = *(unsigned int *)(v6 + v10 + 168);
  *(_DWORD *)(v6 + v10 + 168) = v5;
  for ( i = *(_QWORD **)(v10 + 72); i; i = (_QWORD *)*i )
    *(_DWORD *)((char *)i + v6 + 168) = v5;
  return result;
}
