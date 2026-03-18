/*
 * XREFs of SmQueryStoreInformation @ 0x1405721BC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SmProcessCompressionInfoRequest @ 0x140572248 (SmProcessCompressionInfoRequest.c)
 *     SmProcessListRequest @ 0x140738584 (SmProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x140738924 (SmProcessRegistrationRequest.c)
 *     SmProcessStatsRequest @ 0x140738AC4 (SmProcessStatsRequest.c)
 *     SmcProcessListRequest @ 0x1407397D4 (SmcProcessListRequest.c)
 *     SmcProcessStatsRequest @ 0x140739A18 (SmcProcessStatsRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // bl
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
    case 2:
      return SmProcessStatsRequest(v6, v8[2], v9[0], a5, PreviousMode);
    case 5:
      return SmProcessListRequest(&SmGlobals, *(_QWORD *)&v8[2], (unsigned int)v9[0], a5, PreviousMode);
    case 8:
      return SmcProcessListRequest((unsigned int)&unk_14041B1B0, v8[2], v9[0], a5, PreviousMode);
    case 13:
      return SmcProcessStatsRequest((unsigned int)&unk_14041B1B0, v8[2], v9[0], a5, PreviousMode);
    case 15:
      LOBYTE(a4) = PreviousMode;
      return SmProcessRegistrationRequest(*(_QWORD *)&v8[2], (unsigned int)v9[0], a5, a4);
    default:
      return 3221225475LL;
  }
}
