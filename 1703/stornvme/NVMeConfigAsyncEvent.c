/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C000E74C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004640 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1, char a2)
{
  __int64 v4; // rax
  _BYTE *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 571) = 0;
    memset(*(void **)(a1 + 656), 0, 0x1098uLL);
    v4 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(a1 + 624) = v4;
    *(_DWORD *)(a1 + 560) = 1;
    *(_BYTE *)(v4 + 4245) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
    v5 = *(_BYTE **)(a1 + 656);
    v5[4140] = *(_BYTE *)(a1 + 56);
    v5[4096] = 9;
    v5[4136] = 11;
    ProcessCommand(a1, a1 + 568);
    LOBYTE(v6) = a2;
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v6, 10000LL);
  }
  return result;
}
