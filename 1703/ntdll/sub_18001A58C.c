/*
 * XREFs of sub_18001A58C @ 0x18001A58C
 * Callers:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_18001A2D0 @ 0x18001A2D0 (sub_18001A2D0.c)
 *     sub_18001A7FC @ 0x18001A7FC (sub_18001A7FC.c)
 *     sub_180038790 @ 0x180038790 (sub_180038790.c)
 *     sub_18006FC38 @ 0x18006FC38 (sub_18006FC38.c)
 *     sub_18007E234 @ 0x18007E234 (sub_18007E234.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_18001A58C(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v9; // al
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( CriticalSection.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return (unsigned int)v2;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) )
  {
    case 5:
      sub_18001A7FC();
      break;
    case 6:
      break;
    case 7:
      goto LABEL_9;
    default:
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) - 8) >= 2 )
        return (unsigned int)-1073741595;
      return (unsigned int)v2;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && LODWORD(NtCurrentTeb()->SubProcessTag) )
    sub_18007E234(*(_QWORD *)(a1 + 152));
  v2 = sub_180038790(*(_QWORD *)(a1 + 152));
  if ( v2 >= 0 )
  {
    v2 = sub_18001A2D0(*(_QWORD **)(a1 + 152));
    if ( v2 >= 0 )
    {
LABEL_9:
      v5 = *(_QWORD *)(a1 + 176);
      if ( v5 && (*(_BYTE *)(v5 + 24) & 1) == 0 )
      {
        sub_180019FC0();
        v6 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v2 = sub_18006FC38(v6, a2, &v10);
        sub_18001A028(v7, 2, v2);
      }
      return (unsigned int)v2;
    }
    v9 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1747,
        (unsigned int)"LdrpPrepareModuleForExecution",
        1,
        "Failed to load for appcompat reasons\n");
      v9 = dword_180155A10;
    }
    if ( (v9 & 0x40) != 0 )
      __debugbreak();
  }
  return (unsigned int)v2;
}
