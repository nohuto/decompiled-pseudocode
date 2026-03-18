/*
 * XREFs of NVMeSetArbitration @ 0x1C000EDB8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

void __fastcall NVMeSetArbitration(__int64 a1, char a2)
{
  __int64 v2; // r8
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bl
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8

  v2 = *(_QWORD *)(a1 + 1112);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v6 = *(_BYTE *)(a1 + 42);
    if ( v6 == 0xFF )
    {
      v5 = *(_BYTE *)(v2 + 72);
    }
    else
    {
      while ( v6 > 1u )
      {
        v6 >>= 1;
        ++v5;
      }
    }
    v7 = 7;
    *(_BYTE *)(a1 + 603) = 0;
    if ( v5 < 7u )
      v7 = v5;
    memset(*(void **)(a1 + 688), 0, 0x10A0uLL);
    v8 = *(_QWORD *)(a1 + 688);
    *(_QWORD *)(a1 + 656) = v8;
    *(_DWORD *)(a1 + 592) = 1;
    *(_BYTE *)(v8 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 688) + 4244LL) = 0;
    v9 = *(_QWORD *)(a1 + 688);
    LODWORD(v8) = (*(_DWORD *)(v9 + 4140) ^ v7) & 7;
    *(_BYTE *)(v9 + 4096) = 9;
    *(_DWORD *)(v9 + 4140) ^= v8;
    *(_BYTE *)(v9 + 4136) = 1;
    ProcessCommand(a1, a1 + 600);
    LOBYTE(v10) = a2;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v10, 10000LL);
  }
}
