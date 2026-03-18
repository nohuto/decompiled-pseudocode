/*
 * XREFs of NVMeGetLogPageCompletion @ 0x1C000E820
 * Callers:
 *     <none>
 * Callees:
 *     NVMeIssueAsyncEventCommand @ 0x1C000EC38 (NVMeIssueAsyncEventCommand.c)
 */

__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // edx
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8

  v2 = 0LL;
  if ( a2 == a1 + 568 )
  {
    v2 = a1 + 560;
  }
  else
  {
    v5 = 0;
    while ( a2 != 104LL * v5 + a1 + 672 )
    {
      if ( ++v5 >= 4 )
        goto LABEL_8;
    }
    v2 = 104LL * v5 + a1 + 664;
  }
LABEL_8:
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  result = v6 & 0xFFF;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - result + 4096;
  if ( !v2 )
    goto LABEL_25;
  if ( *(_BYTE *)(a2 + 3) == 14 || (result = *(unsigned int *)(a1 + 20), (result & 0xE) != 0) )
  {
    if ( *(_QWORD *)(v6 + 4200) )
    {
      result = *(_QWORD *)(v2 + 96);
      v10 = *(_QWORD *)(result + 4200);
      if ( v10 )
        result = StorPortExtendedFunction(25LL, a1, v10, *(unsigned int *)(result + 4232));
      *(_QWORD *)(v6 + 4200) = 0LL;
      *(_DWORD *)(v6 + 4232) = 0;
    }
LABEL_25:
    *(_BYTE *)(v6 + 4245) |= 8u;
    return result;
  }
  if ( *(_QWORD *)(v6 + 4200) )
  {
    v8 = *(_QWORD *)(v2 + 96);
    v9 = *(_QWORD *)(v8 + 4200);
    if ( v9 )
      StorPortExtendedFunction(25LL, a1, v9, *(unsigned int *)(v8 + 4232));
    *(_QWORD *)(v6 + 4200) = 0LL;
    *(_DWORD *)(v6 + 4232) = 0;
    *(_BYTE *)(v6 + 4245) |= 8u;
  }
  *(_DWORD *)v2 = 0;
  return NVMeIssueAsyncEventCommand(a1, v2);
}
