/*
 * XREFs of RtlInitializeExtendedContext @ 0x140131818
 * Callers:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1401321E0 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140249930 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x140563548 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140563880 (PspWow64GetContextThread.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1407801FC (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x140780B40 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140131930 (RtlpValidateContextFlags.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  result = RtlpValidateContextFlags(ContextFlags, &v12);
  if ( result < 0 )
    return result;
  if ( (v6 & 0x10000) != 0 )
  {
    v8 = (_DWORD *)((v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v4 = (_CONTEXT_EX *)(v8 + 179);
LABEL_13:
    *v8 = v6;
    goto LABEL_5;
  }
  if ( (v6 & 0x100000) == 0 )
  {
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
    goto LABEL_13;
  }
  v8 = (_DWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v8[12] = v6;
  v4 = (_CONTEXT_EX *)(v8 + 308);
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
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v4[2].XState.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
    v10 = (((_DWORD)v4 + 87) & 0xFFFFFFC0) - (_DWORD)v4;
    v4->XState.Offset = v10;
    v11 = MEMORY[0xFFFFF780000003E8] - 512;
    v4->XState.Length = MEMORY[0xFFFFF780000003E8] - 512;
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
