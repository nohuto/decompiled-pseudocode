/*
 * XREFs of NVMeGetLogPageCompletion @ 0x1C000F4B0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeIssueAsyncEventCommand @ 0x1C000F8D8 (NVMeIssueAsyncEventCommand.c)
 */

__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8

  v2 = 0LL;
  if ( a2 == a1 + 600 )
  {
    v2 = a1 + 592;
  }
  else
  {
    v4 = 0;
    while ( a2 != 104LL * v4 + a1 + 704 )
    {
      if ( ++v4 >= 4 )
        goto LABEL_8;
    }
    v2 = 104LL * v4 + a1 + 696;
  }
LABEL_8:
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  result = v5 & 0xFFF;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - result + 4096;
  if ( !v2 )
    goto LABEL_25;
  if ( *(_BYTE *)(a2 + 3) == 14 || (result = *(unsigned int *)(a1 + 20), (result & 0xE) != 0) )
  {
    if ( *(_QWORD *)(v5 + 4200) )
    {
      v9 = *(_QWORD *)(v2 + 96);
      v10 = *(_QWORD *)(v9 + 4200);
      result = *(_QWORD *)(v9 + 4208);
      if ( v10 )
        result = StorPortExtendedFunction(83LL, a1, v10, *(unsigned int *)(v9 + 4240));
      *(_QWORD *)(v5 + 4200) = 0LL;
      *(_DWORD *)(v5 + 4240) = 0;
    }
LABEL_25:
    *(_BYTE *)(v5 + 4253) |= 8u;
    return result;
  }
  if ( *(_QWORD *)(v5 + 4200) )
  {
    v7 = *(_QWORD *)(v2 + 96);
    v8 = *(_QWORD *)(v7 + 4200);
    if ( v8 )
      StorPortExtendedFunction(83LL, a1, v8, *(unsigned int *)(v7 + 4240));
    *(_QWORD *)(v5 + 4200) = 0LL;
    *(_DWORD *)(v5 + 4240) = 0;
    *(_BYTE *)(v5 + 4253) |= 8u;
  }
  *(_DWORD *)v2 = 0;
  return NVMeIssueAsyncEventCommand(a1, v2);
}
