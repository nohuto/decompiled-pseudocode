/*
 * XREFs of RtlInitializeExtendedContext @ 0x180068A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068D44 @ 0x180068D44 (sub_180068D44.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  _CONTEXT_EX *v4; // rbx
  NTSTATUS result; // eax
  int v6; // r10d
  __int64 v7; // r11
  _DWORD *v8; // rcx
  ULONG Length; // ecx
  LONG v10; // edi
  int v11; // eax
  char v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  result = sub_180068D44(ContextFlags, &v12);
  if ( result < 0 )
    return result;
  if ( (v6 & 0x10000) != 0 )
  {
    v8 = (_DWORD *)((v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v4 = (_CONTEXT_EX *)(v8 + 179);
  }
  else
  {
    if ( (v6 & 0x100000) != 0 )
    {
      v8 = (_DWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v8[12] = v6;
      v4 = (_CONTEXT_EX *)(v8 + 308);
      goto LABEL_5;
    }
    if ( (v6 & 0x200000) != 0 )
    {
      v8 = (_DWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v4 = (_CONTEXT_EX *)(v8 + 104);
    }
    else
    {
      if ( (v6 & 0x400000) == 0 )
        goto LABEL_6;
      v8 = (_DWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = (_CONTEXT_EX *)(v8 + 228);
    }
  }
  *v8 = v6;
LABEL_5:
  v4->Legacy.Length = (_DWORD)v4 - (_DWORD)v8;
LABEL_6:
  Length = v4->Legacy.Length;
  v4->Legacy.Offset = -Length;
  v4->All.Offset = -Length;
  v4->All.Length = Length + 24;
  if ( (v6 & 0x10020) != 65568 && (v6 & 0x10000) != 0 )
    v4->Legacy.Length = 204;
  if ( (v12 & 2) != 0 )
  {
    memset((void *)(((unsigned __int64)&v4[2].XState.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v4[2].XState.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    v10 = (((_DWORD)v4 + 87) & 0xFFFFFFC0) - (_DWORD)v4;
    v4->XState.Offset = v10;
    v11 = MEMORY[0x7FFE03E8] - 512;
    v4->XState.Length = MEMORY[0x7FFE03E8] - 512;
    v4->All.Length = v10 + v11 - v4->All.Offset;
  }
  else
  {
    v4->XState.Length = 0;
    v4->XState.Offset = 25;
  }
  *ContextEx = v4;
  return 0;
}
