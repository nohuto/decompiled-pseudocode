/*
 * XREFs of IoQueuesDeletion @ 0x1C0004170
 * Callers:
 *     NVMeControllerStop @ 0x1C0004EAC (NVMeControllerStop.c)
 *     NVMeControllerPowerDown @ 0x1C0005174 (NVMeControllerPowerDown.c)
 * Callees:
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

bool __fastcall IoQueuesDeletion(__int64 a1)
{
  unsigned __int16 v2; // di
  bool v3; // r14
  unsigned __int16 v4; // ax
  unsigned __int16 i; // di
  unsigned __int16 j; // si
  unsigned __int16 v7; // di
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int16 v12; // di
  void *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8

  v2 = 0;
  v3 = 1;
  if ( *(_WORD *)(a1 + 376) > 4u )
  {
    do
    {
      StorPortStallExecution(10000LL);
      if ( *(_WORD *)(a1 + 376) <= 4u )
        break;
      ++v2;
    }
    while ( v2 < 0x3E8u );
  }
  v4 = *(_WORD *)(a1 + 240);
  for ( i = 0; i < v4; ++i )
  {
    for ( j = 0; j < 0x3E8u; ++j )
    {
      StorPortStallExecution(10000LL);
      if ( !*(_WORD *)(*(_QWORD *)(a1 + 552) + 136LL * i + 128) )
        break;
    }
    v4 = *(_WORD *)(a1 + 240);
  }
  v7 = 0;
  if ( v4 )
  {
    do
    {
      v8 = *(void **)(a1 + 688);
      *(_BYTE *)(a1 + 603) = 0;
      memset(v8, 0, 0x10A0uLL);
      v9 = *(_QWORD *)(a1 + 688);
      ++v7;
      *(_QWORD *)(a1 + 656) = v9;
      *(_DWORD *)(a1 + 592) = 1;
      *(_BYTE *)(v9 + 4253) |= 1u;
      *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4253LL) &= ~2u;
      *(_WORD *)(*(_QWORD *)(a1 + 688) + 4244LL) = 0;
      v10 = *(_QWORD *)(a1 + 688);
      *(_BYTE *)(v10 + 4096) = 0;
      *(_WORD *)(v10 + 4136) = v7;
      ProcessCommand(a1, a1 + 600);
      LOBYTE(v11) = 1;
      WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v11, 10000LL);
      v3 = *(_BYTE *)(a1 + 603) == 1;
      if ( *(_BYTE *)(a1 + 603) != 1 )
        *(_DWORD *)(a1 + 24) = 15;
    }
    while ( v7 < *(_WORD *)(a1 + 240) );
  }
  v12 = 0;
  while ( v12 < *(_WORD *)(a1 + 242) )
  {
    v13 = *(void **)(a1 + 688);
    *(_BYTE *)(a1 + 603) = 0;
    memset(v13, 0, 0x10A0uLL);
    v14 = *(_QWORD *)(a1 + 688);
    ++v12;
    *(_QWORD *)(a1 + 656) = v14;
    *(_DWORD *)(a1 + 592) = 1;
    *(_BYTE *)(v14 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 688) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 688) + 4244LL) = 0;
    v15 = *(_QWORD *)(a1 + 688);
    *(_BYTE *)(v15 + 4096) = 4;
    *(_WORD *)(v15 + 4136) = v12;
    ProcessCommand(a1, a1 + 600);
    LOBYTE(v16) = 1;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v16, 10000LL);
    v3 = *(_BYTE *)(a1 + 603) == 1;
    if ( *(_BYTE *)(a1 + 603) != 1 )
      *(_DWORD *)(a1 + 24) = 16;
  }
  return v3;
}
