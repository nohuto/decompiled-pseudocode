/*
 * XREFs of SmQueryStoreInformation @ 0x140572E0C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SmProcessCompressionInfoRequest @ 0x140572EF0 (SmProcessCompressionInfoRequest.c)
 *     SmcProcessListRequest @ 0x14064BD80 (SmcProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x140650F20 (SmProcessRegistrationRequest.c)
 *     SmProcessListRequest @ 0x14079BAF8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14079BF90 (SmProcessStatsRequest.c)
 *     SmcProcessStatsRequest @ 0x14079CAD4 (SmcProcessStatsRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  char PreviousMode; // bl
  int v6; // ecx
  int v8[4]; // [rsp+30h] [rbp-28h]
  int v9[2]; // [rsp+40h] [rbp-18h]

  PreviousMode = a4;
  if ( a3 != 24 )
    return 3221225476LL;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  *(_QWORD *)v9 = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225485LL;
  if ( v8[1] > 0x16u || (v6 = 4202788, !_bittest(&v6, v8[1])) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return 3221225506LL;
  }
  switch ( v8[1] )
  {
    case 22:
      LOBYTE(a4) = PreviousMode;
      return SmProcessCompressionInfoRequest(*(_QWORD *)&v8[2], (unsigned int)v9[0], a5, a4);
    case 8:
      return SmcProcessListRequest((unsigned int)&unk_1404661C0, v8[2], v9[0], a5, PreviousMode);
    case 15:
      LOBYTE(a4) = PreviousMode;
      return SmProcessRegistrationRequest(*(_QWORD *)&v8[2], (unsigned int)v9[0], a5, a4);
    case 2:
      return SmProcessStatsRequest(v6, v8[2], v9[0], a5, PreviousMode);
    case 5:
      return SmProcessListRequest(&SmGlobals, *(_QWORD *)&v8[2], (unsigned int)v9[0], a5, PreviousMode);
    case 13:
      return SmcProcessStatsRequest((unsigned int)&unk_1404661C0, v8[2], v9[0], a5, PreviousMode);
    default:
      return 3221225475LL;
  }
}
