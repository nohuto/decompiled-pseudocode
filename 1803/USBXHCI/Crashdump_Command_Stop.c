/*
 * XREFs of Crashdump_Command_Stop @ 0x1C0039F5C
 * Callers:
 *     Crashdump_Cleanup @ 0x1C0037320 (Crashdump_Cleanup.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C0039D04 (Crashdump_Command_PrepareForDump.c)
 * Callees:
 *     Crashdump_EventRing_Poll @ 0x1C003977C (Crashdump_EventRing_Poll.c)
 */

__int64 __fastcall Crashdump_Command_Stop(_QWORD *a1, char a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rax
  _DWORD *v6; // rdx
  int v7; // ebx
  __int64 v8; // rsi
  _DWORD *v9; // rcx
  unsigned int v10; // ebx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  signed __int32 v15[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+70h] [rbp+8h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_Stop: begin\n");
  v4 = (_QWORD *)a1[2];
  v16 = *(_OWORD *)(a1[1] + 8LL);
  v5 = *v4 | 4LL;
  v6 = (_DWORD *)a1[2];
  v17 = *(_OWORD *)(a1[1] + 8LL);
  if ( (v17 & 1) != 0 )
  {
    *v6 = v5;
    _InterlockedOr(v15, 0);
    v6[1] = HIDWORD(v5);
  }
  else
  {
    *(_QWORD *)v6 = v5;
  }
  _InterlockedOr(v15, 0);
  v7 = 0;
  v8 = 200LL;
  while ( 1 )
  {
    KeStallExecutionProcessor(0xC8u);
    v9 = (_DWORD *)a1[2];
    if ( (*(_QWORD *)(a1[1] + 8LL) & 1) != 0 )
      LODWORD(v18) = *v9;
    else
      v18 = *(_QWORD *)v9;
    if ( (v18 & 8) == 0 )
      break;
    if ( (unsigned int)++v7 >= 0x50 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Command ring is not stopped after %u us\n", 200 * v7);
      v10 = -1073741823;
      goto LABEL_17;
    }
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Command ring took %u us to stop\n", 200 * (v7 + 1));
  v10 = 0;
  if ( a2 )
  {
    v12 = *a1;
    if ( !*(_DWORD *)(*a1 + 584LL) || *(_BYTE *)(v12 + 624) )
      v8 = 72LL;
    v13 = Crashdump_EventRing_Poll(
            v8 + v12,
            33,
            v11,
            (__int64)a1,
            (__int64 (__fastcall *)(__int64, __int64, int *))Crashdump_Command_EventRingCallback);
    v10 = v13;
    if ( v13 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Did not receive Event TRB, status 0x%X\n", v13);
  }
LABEL_17:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_Stop: end 0x%X\n", v10);
  return v10;
}
