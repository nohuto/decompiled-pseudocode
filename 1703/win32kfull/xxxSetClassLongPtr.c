/*
 * XREFs of xxxSetClassLongPtr @ 0x1C01166FC
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C0116510 (NtUserSetClassLongPtr.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *i; // rcx

  v3 = (int)a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != PsGetCurrentProcessWin32Process(a1, a2) )
  {
    v7 = 5LL;
LABEL_12:
    UserSetLastError(v7);
    return 0LL;
  }
  if ( (int)v3 < 0 )
    return xxxSetClassData((struct tagWND *)a1, v3, a3);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 64LL);
  if ( (int)v3 + 8 < (unsigned int)v3 || (unsigned int)(v3 + 8) > *(_DWORD *)(v8 + 104) )
  {
    v7 = 1413LL;
    goto LABEL_12;
  }
  result = *(_QWORD *)(v3 + v8 + 168);
  *(_QWORD *)(v3 + v8 + 168) = a3;
  for ( i = *(_QWORD **)(v8 + 72); i; i = (_QWORD *)*i )
    *(_QWORD *)((char *)i + v3 + 168) = a3;
  return result;
}
