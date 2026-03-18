/*
 * XREFs of xxxSetClassLong @ 0x1C01C5F38
 * Callers:
 *     NtUserSetClassLong @ 0x1C01EB200 (NtUserSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 */

unsigned __int64 __fastcall xxxSetClassLong(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  _QWORD *i; // rcx

  v5 = a3;
  v6 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) != PsGetCurrentProcessWin32Process(a1) )
  {
    v9 = 5LL;
LABEL_14:
    UserSetLastError(v9, v8);
    return 0LL;
  }
  if ( (int)v6 < 0 )
  {
    if ( (int)v6 >= -34 && byte_1C02E4398[(int)v6 + 34] <= 4u )
      return xxxSetClassData((struct tagWND *)a1, (_DWORD *)(unsigned int)v6, v5, a4);
    goto LABEL_13;
  }
  v8 = 0xFFFFFFFFLL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 64LL);
  v12 = v6 + 4;
  if ( (int)v6 + 4 < (unsigned int)v6 || (v8 = v12, v12 > *(_DWORD *)(v11 + 112)) )
  {
LABEL_13:
    v9 = 1413LL;
    goto LABEL_14;
  }
  result = *(unsigned int *)(v6 + v11 + 176);
  *(_DWORD *)(v6 + v11 + 176) = v5;
  for ( i = *(_QWORD **)(v11 + 72); i; i = (_QWORD *)*i )
    *(_DWORD *)((char *)i + v6 + 176) = v5;
  return result;
}
