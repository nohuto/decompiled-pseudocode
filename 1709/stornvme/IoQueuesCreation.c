/*
 * XREFs of IoQueuesCreation @ 0x1C0003EDC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 * Callees:
 *     IoQueuesFreeResources @ 0x1C00043C4 (IoQueuesFreeResources.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

char __fastcall IoQueuesCreation(__int64 a1, char a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rsi
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int16 v13; // di
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8

  v4 = 1;
  if ( *(_WORD *)(a1 + 234) )
  {
    v5 = a1 + 568;
    while ( 1 )
    {
      v6 = *(void **)(a1 + 656);
      *(_BYTE *)(a1 + 571) = 0;
      memset(v6, 0, 0x1098uLL);
      v7 = *(_QWORD *)(a1 + 656);
      *(_QWORD *)(a1 + 624) = v7;
      *(_DWORD *)(a1 + 560) = 1;
      *(_BYTE *)(v7 + 4245) |= 1u;
      *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
      *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
      v8 = *(_QWORD *)(a1 + 656) + 4096LL;
      v9 = 168LL * v4;
      *(_BYTE *)v8 = 5;
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 552) + v9 - 160);
      *(_WORD *)(v8 + 40) = v4;
      LOWORD(v7) = *(_WORD *)(a1 + 230);
      *(_DWORD *)(v8 + 44) |= 1u;
      *(_WORD *)(v8 + 42) = v7 - 1;
      v10 = *(_DWORD *)(v8 + 44);
      v11 = *(_BYTE *)(a1 + 16) ? v10 & 0xFFFFFFFD : v10 | 2;
      *(_DWORD *)(v8 + 44) = v11;
      *(_WORD *)(v8 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 552) + v9 - 64);
      ProcessCommand(a1, v5);
      LOBYTE(v12) = a2;
      WaitForCommandCompleteWithCustomTimeout(a1, v5, v12, 10000LL);
      if ( *(_BYTE *)(a1 + 571) != 1 )
        break;
      if ( ++v4 > *(_WORD *)(a1 + 234) )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v13 = 1;
    if ( !*(_WORD *)(a1 + 232) )
      return 1;
    while ( 1 )
    {
      v14 = *(void **)(a1 + 656);
      *(_BYTE *)(a1 + 571) = 0;
      memset(v14, 0, 0x1098uLL);
      v15 = *(_QWORD *)(a1 + 656);
      *(_QWORD *)(a1 + 624) = v15;
      *(_DWORD *)(a1 + 560) = 1;
      *(_BYTE *)(v15 + 4245) |= 1u;
      *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
      *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
      v16 = *(_QWORD *)(a1 + 656) + 4096LL;
      v17 = 136LL * v13;
      *(_BYTE *)v16 = 1;
      *(_QWORD *)(v16 + 24) = *(_QWORD *)(v17 + *(_QWORD *)(a1 + 544) - 128);
      *(_WORD *)(v16 + 40) = v13;
      *(_WORD *)(v16 + 42) = *(_WORD *)(a1 + 230) - 1;
      *(_DWORD *)(v16 + 44) = *(_DWORD *)(v16 + 44) & 0xFFFFFFF8 | 5;
      *(_WORD *)(v16 + 46) = *(_WORD *)(v17 + *(_QWORD *)(a1 + 544) - 86);
      ProcessCommand(a1, a1 + 568);
      LOBYTE(v18) = a2;
      WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v18, 10000LL);
      if ( *(_BYTE *)(a1 + 571) != 1 )
        break;
      if ( ++v13 > *(_WORD *)(a1 + 232) )
        return 1;
    }
  }
  IoQueuesFreeResources(a1);
  return 0;
}
