/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C000F3D4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1, char a2)
{
  __int64 v4; // rax
  _BYTE *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 603) = 0;
    memset(*(void **)(a1 + 688), 0, 0x10A0uLL);
    v4 = *(_QWORD *)(a1 + 688);
    *(_QWORD *)(a1 + 656) = v4;
    *(_DWORD *)(a1 + 592) = 1;
    *(_BYTE *)(v4 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 688) + 4244LL) = 0;
    v5 = *(_BYTE **)(a1 + 688);
    v5[4140] = *(_BYTE *)(a1 + 56);
    v5[4096] = 9;
    v5[4136] = 11;
    ProcessCommand(a1, a1 + 600);
    LOBYTE(v6) = a2;
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v6, 10000LL);
  }
  return result;
}
