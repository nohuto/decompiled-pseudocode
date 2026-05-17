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

__int64 __fastcall sub_18001A58C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v13; // al
  char v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( (HANDLE)qword_180155590 == NtCurrentTeb()->ClientId.UniqueThread )
    return (unsigned int)v4;
  v7 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v7 + 56) == 5 )
  {
    sub_18001A7FC();
  }
  else if ( *(_DWORD *)(v7 + 56) != 6 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v7 + 56) - 7);
    if ( *(_DWORD *)(v7 + 56) == 7 )
      goto LABEL_9;
    if ( (unsigned int)(*(_DWORD *)(v7 + 56) - 8) >= 2 )
      return (unsigned int)-1073741595;
    return (unsigned int)v4;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && LODWORD(NtCurrentTeb()->SubProcessTag) )
    sub_18007E234(*(_QWORD *)(a1 + 152));
  v4 = sub_180038790(*(_QWORD *)(a1 + 152));
  if ( v4 >= 0 )
  {
    v4 = sub_18001A2D0(*(_QWORD **)(a1 + 152));
    if ( v4 >= 0 )
    {
LABEL_9:
      v9 = *(_QWORD *)(a1 + 176);
      if ( v9 && (*(_BYTE *)(v9 + 24) & 1) == 0 )
      {
        sub_180019FC0(v7, a2, v8, a4);
        v10 = *(_QWORD *)(a1 + 152);
        v14 = 0;
        v4 = sub_18006FC38(v10, a2, &v14);
        sub_18001A028(v11, 2, v4);
      }
      return (unsigned int)v4;
    }
    v13 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1747,
        (unsigned int)"LdrpPrepareModuleForExecution",
        1,
        "Failed to load for appcompat reasons\n");
      v13 = dword_180155A10;
    }
    if ( (v13 & 0x40) != 0 )
      __debugbreak();
  }
  return (unsigned int)v4;
}
