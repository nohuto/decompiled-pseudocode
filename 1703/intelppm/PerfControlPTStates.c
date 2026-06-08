/*
 * XREFs of PerfControlPTStates @ 0x1C00018B0
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChange @ 0x1C0001954 (InvokePTStateChange.c)
 */

_UNKNOWN **__fastcall PerfControlPTStates(__int64 a1, _DWORD *a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return result;
  }
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 48);
  v10 = v9 + 32LL * (unsigned int)*a2;
  v11 = *(unsigned __int8 *)(v10 + 25);
  if ( *(_DWORD *)(a1 + 8) == v11 )
    goto LABEL_6;
  if ( v11 == 1 )
  {
    if ( !*(_DWORD *)(v8 + 64) )
      goto LABEL_6;
    v12 = *(unsigned int *)(v8 + 60);
  }
  else
  {
    v13 = *(_DWORD *)(v8 + 60);
    if ( !v13 )
      goto LABEL_6;
    v12 = (unsigned int)(v13 - 1);
  }
  if ( !(v9 + 32 * v12) )
  {
LABEL_6:
    if ( a3 )
      InvokePTStateChange(v8);
    goto LABEL_8;
  }
  if ( a3 )
  {
    InvokePTStateChange(v8);
    goto LABEL_6;
  }
LABEL_8:
  *(_DWORD *)(a1 + 16) = *a2;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v10 + 25);
  result = (_UNKNOWN **)*(unsigned __int8 *)(v10 + 24);
  *(_DWORD *)(a1 + 12) = (_DWORD)result;
  return result;
}
