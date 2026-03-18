/*
 * XREFs of IoQueuesDeletion @ 0x1C0003EAC
 * Callers:
 *     NVMeControllerStop @ 0x1C0004B70 (NVMeControllerStop.c)
 *     NVMeControllerPowerDown @ 0x1C0004E10 (NVMeControllerPowerDown.c)
 * Callees:
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

bool __fastcall IoQueuesDeletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // di
  bool v6; // r14
  unsigned __int16 i; // di
  unsigned __int16 j; // si
  unsigned __int16 v9; // di
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  char v14; // al
  unsigned __int16 v15; // di
  void *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  char v20; // cl

  v5 = 0;
  v6 = 1;
  if ( *(_WORD *)(a1 + 368) > 4u )
  {
    do
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      if ( *(_WORD *)(a1 + 368) <= 4u )
        break;
      ++v5;
    }
    while ( v5 < 0x3E8u );
  }
  for ( i = 0; i < *(_WORD *)(a1 + 232); ++i )
  {
    for ( j = 0; j < 0x3E8u; ++j )
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      if ( !*(_WORD *)(*(_QWORD *)(a1 + 544) + 136LL * i + 128) )
        break;
    }
  }
  v9 = 0;
  while ( v9 < *(_WORD *)(a1 + 232) )
  {
    v10 = *(void **)(a1 + 656);
    *(_BYTE *)(a1 + 571) = 0;
    memset(v10, 0, 0x1098uLL);
    v11 = *(_QWORD *)(a1 + 656);
    ++v9;
    *(_QWORD *)(a1 + 624) = v11;
    *(_DWORD *)(a1 + 560) = 1;
    *(_BYTE *)(v11 + 4245) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
    v12 = *(_QWORD *)(a1 + 656);
    *(_BYTE *)(v12 + 4096) = 0;
    *(_WORD *)(v12 + 4136) = v9;
    ProcessCommand(a1, a1 + 568);
    LOBYTE(v13) = 1;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v13, 10000LL);
    v14 = *(_BYTE *)(a1 + 571);
    v6 = v14 == 1;
    if ( v14 != 1 )
      *(_DWORD *)(a1 + 24) = 15;
  }
  v15 = 0;
  while ( v15 < *(_WORD *)(a1 + 234) )
  {
    v16 = *(void **)(a1 + 656);
    *(_BYTE *)(a1 + 571) = 0;
    memset(v16, 0, 0x1098uLL);
    v17 = *(_QWORD *)(a1 + 656);
    ++v15;
    *(_QWORD *)(a1 + 624) = v17;
    *(_DWORD *)(a1 + 560) = 1;
    *(_BYTE *)(v17 + 4245) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
    v18 = *(_QWORD *)(a1 + 656);
    *(_BYTE *)(v18 + 4096) = 4;
    *(_WORD *)(v18 + 4136) = v15;
    ProcessCommand(a1, a1 + 568);
    LOBYTE(v19) = 1;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v19, 10000LL);
    v20 = *(_BYTE *)(a1 + 571);
    v6 = v20 == 1;
    if ( v20 != 1 )
      *(_DWORD *)(a1 + 24) = 16;
  }
  return v6;
}
