/*
 * XREFs of NVMeSetIoQueueCount @ 0x1C000EB30
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2, char a3)
{
  __int16 v6; // si
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // bx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8

  if ( a2 )
  {
    v6 = *(_WORD *)(a1 + 240);
    v7 = *(_WORD *)(a1 + 242);
  }
  else
  {
    *(_DWORD *)(a1 + 240) = 0;
    if ( *(_BYTE *)(a1 + 16) )
    {
      v6 = 1;
      v7 = 1;
    }
    else
    {
      v8 = *(_WORD *)(a1 + 36);
      if ( !v8 )
        v8 = *(_WORD *)(a1 + 170);
      v7 = *(_WORD *)(a1 + 38);
      if ( !v7 )
      {
        v9 = *(_WORD *)(a1 + 208);
        if ( v9 <= 1u )
          v7 = 1;
        else
          v7 = v9 - 1;
      }
      v6 = v7;
      if ( v8 > v7 )
        v6 = v8;
    }
  }
  *(_BYTE *)(a1 + 603) = 0;
  memset(*(void **)(a1 + 688), 0, 0x10A0uLL);
  v10 = *(_QWORD *)(a1 + 688);
  *(_QWORD *)(a1 + 656) = v10;
  *(_DWORD *)(a1 + 592) = 1;
  *(_BYTE *)(v10 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 688) + 4244LL) = 0;
  v11 = *(_QWORD *)(a1 + 688);
  *(_WORD *)(v11 + 4142) = v7 - 1;
  *(_BYTE *)(v11 + 4096) = 9;
  *(_BYTE *)(v11 + 4136) = 7;
  *(_WORD *)(v11 + 4140) = v6 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 688) + 4224LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 688) + 4232LL) = a2;
  ProcessCommand(a1, a1 + 600);
  LOBYTE(v12) = a3;
  return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v12, 10000LL);
}
