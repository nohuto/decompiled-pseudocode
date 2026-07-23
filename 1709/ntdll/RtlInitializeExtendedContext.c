/*
 * XREFs of RtlInitializeExtendedContext @ 0x180072370
 * Callers:
 *     <none>
 * Callees:
 *     RtlpValidateContextFlags @ 0x180072554 (RtlpValidateContextFlags.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  _CONTEXT_EX *v4; // rbx
  NTSTATUS result; // eax
  LONG v6; // r10d
  __int64 v7; // r11
  _DWORD *v8; // rcx
  ULONG Length; // ecx
  LONG v10; // edi
  int v11; // eax
  unsigned __int64 v12; // rcx
  _CONTEXT_EX *v13; // rcx
  _DWORD *v14; // rcx
  char v15; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, &v15);
  if ( result >= 0 )
  {
    if ( (v6 & 0x10000) != 0 )
    {
      v8 = (_DWORD *)((v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v4 = (_CONTEXT_EX *)(v8 + 179);
      *v8 = v6;
      v8[182] = 716;
    }
    else if ( (v6 & 0x100000) != 0 )
    {
      v12 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v4 = (_CONTEXT_EX *)(v12 + 1232);
      *(_DWORD *)(v12 + 48) = v6;
      *(_DWORD *)(v12 + 1244) = 1232;
    }
    else if ( (v6 & 0x200000) != 0 )
    {
      v13 = (_CONTEXT_EX *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v4 = v13 + 13;
      v13->All.Offset = v6;
      v13[13].Legacy.Length = 416;
    }
    else if ( (v6 & 0x400000) != 0 )
    {
      v14 = (_DWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = (_CONTEXT_EX *)(v14 + 228);
      *v14 = v6;
      v14[231] = 912;
    }
    Length = v4->Legacy.Length;
    v4->Legacy.Offset = -Length;
    v4->All.Offset = -Length;
    v4->All.Length = Length + 24;
    if ( (v6 & 0x10020) != 65568 && (v6 & 0x10000) != 0 )
      v4->Legacy.Length = 204;
    if ( (v15 & 2) != 0 )
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
  return result;
}
