/*
 * XREFs of xxxSetClassLongPtr @ 0x1C011CD70
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C011CB80 (NtUserSetClassLongPtr.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // eax
  _QWORD *i; // rcx

  v3 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) != PsGetCurrentProcessWin32Process(a1) )
  {
    v8 = 5LL;
LABEL_12:
    UserSetLastError(v8, v6);
    return 0LL;
  }
  if ( (int)v3 < 0 )
    return xxxSetClassData((struct tagWND *)a1, v3, a3);
  v6 = 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 64LL);
  v10 = v3 + 8;
  if ( (int)v3 + 8 < (unsigned int)v3 || (v6 = v10, v10 > *(_DWORD *)(v9 + 112)) )
  {
    v8 = 1413LL;
    goto LABEL_12;
  }
  result = *(_QWORD *)(v3 + v9 + 176);
  *(_QWORD *)(v3 + v9 + 176) = a3;
  for ( i = *(_QWORD **)(v9 + 72); i; i = (_QWORD *)*i )
    *(_QWORD *)((char *)i + v3 + 176) = a3;
  return result;
}
