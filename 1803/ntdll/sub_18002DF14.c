/*
 * XREFs of sub_18002DF14 @ 0x18002DF14
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     sub_180054D18 @ 0x180054D18 (sub_180054D18.c)
 *     sub_1800717A0 @ 0x1800717A0 (sub_1800717A0.c)
 *     sub_18007AE58 @ 0x18007AE58 (sub_18007AE58.c)
 *     sub_18007B5B8 @ 0x18007B5B8 (sub_18007B5B8.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_18002DF14(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v9; // al
  char v10; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v2) = 0;
  if ( stru_1801564C0.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return (unsigned int)v2;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) )
  {
    case 5:
      sub_1800717A0();
      break;
    case 6:
      break;
    case 7:
      goto LABEL_9;
    default:
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) - 8) >= 2 )
        LODWORD(v2) = -1073741595;
      return (unsigned int)v2;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && LODWORD(NtCurrentTeb()->SubProcessTag) )
    sub_18007B5B8(*(_QWORD *)(a1 + 152));
  LODWORD(v2) = sub_18002D150(*(_QWORD *)(a1 + 152));
  if ( (int)v2 >= 0 )
  {
    LODWORD(v2) = sub_18007AE58(*(_QWORD *)(a1 + 152));
    if ( (int)v2 >= 0 )
    {
LABEL_9:
      v5 = *(_QWORD *)(a1 + 176);
      if ( v5 && (*(_BYTE *)(v5 + 32) & 1) == 0 )
      {
        sub_180046FBC();
        v6 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v2 = (unsigned int)sub_180054D18(v6, a2, &v10);
        sub_180046F60(v7, 2LL, v2);
      }
      return (unsigned int)v2;
    }
    v9 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1865,
        (unsigned int)"LdrpPrepareModuleForExecution",
        1,
        "Failed to load for appcompat reasons\n");
      v9 = dword_180156A70;
    }
    if ( (v9 & 0x40) != 0 )
      __debugbreak();
  }
  return (unsigned int)v2;
}
