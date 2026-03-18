/*
 * XREFs of NVMeSetFeaturesCachePhase1Completion @ 0x1C0008610
 * Callers:
 *     <none>
 * Callees:
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

char __fastcall NVMeSetFeaturesCachePhase1Completion(__int64 a1, __int64 a2, char *a3)
{
  __int64 v5; // rsi
  char v6; // r14
  char v7; // di
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  char result; // al

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  v6 = 1;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( a3 )
    {
      v7 = *a3;
      v8 = *(_QWORD *)(v5 + 4224);
      *(_BYTE *)(a2 + 3) = 0;
      *(_BYTE *)(v5 + 4245) = *(_BYTE *)(v5 + 4245) & 0xF8 | 1;
      SrbAssignQueueId(a1, a2);
      memset((void *)(v5 + 4096), 0, 0x40uLL);
      v9 = *(_BYTE *)(v8 + 2) >> 2;
      *(_BYTE *)(v5 + 4096) = 9;
      *(_BYTE *)(v5 + 4136) = 6;
      if ( (v7 & 1) != 0 )
        *(_DWORD *)(v5 + 4136) |= 0x80000000;
      *(_DWORD *)(v5 + 4140) ^= (*(_DWORD *)(v5 + 4140) ^ v9) & 1;
      *(_QWORD *)(v5 + 4216) = 0LL;
      ProcessCommand(a1, a2);
      v6 = 0;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  result = (8 * v6) | *(_BYTE *)(v5 + 4245) & 0xF7;
  *(_BYTE *)(v5 + 4245) = result;
  return result;
}
