/*
 * XREFs of SmSetStoreInformation @ 0x140571F70
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     SmProcessCreateRequest @ 0x140444D8C (SmProcessCreateRequest.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140572010 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessConfigRequest @ 0x1407383A8 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x14073851C (SmProcessDeleteRequest.c)
 *     SmProcessResizeRequest @ 0x1407389CC (SmProcessResizeRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140738D48 (SmProcessSystemStoreTrimRequest.c)
 *     SmcProcessCreateRequest @ 0x14073950C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140739768 (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x140739950 (SmcProcessResizeRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x140739C18 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x140739D74 (SmcProcessStoreDeleteRequest.c)
 */

__int64 __fastcall SmSetStoreInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a3 != 24 )
    return 3221225476LL;
  v8 = *a2;
  v9 = *((_QWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 1 )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return 3221225506LL;
  if ( SDWORD1(v8) <= 12 )
  {
    switch ( DWORD1(v8) )
    {
      case 0xC:
        LOBYTE(v6) = a4;
        return SmcProcessStoreDeleteRequest(&unk_14041B1B0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 3:
        return SmProcessCreateRequest((__int64)&SmGlobals, *((unsigned __int64 *)&v8 + 1), v9, a4);
      case 4:
        LOBYTE(v6) = a4;
        return SmProcessDeleteRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 9:
        LOBYTE(v6) = a4;
        return SmcProcessCreateRequest(&unk_14041B1B0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xA:
        LOBYTE(v6) = a4;
        return SmcProcessDeleteRequest(&unk_14041B1B0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xB:
        LOBYTE(v6) = a4;
        return SmcProcessStoreCreateRequest(&unk_14041B1B0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
    }
    return 3221225475LL;
  }
  switch ( DWORD1(v8) )
  {
    case 0x11:
      LOBYTE(v6) = a4;
      return SmProcessResizeRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
    case 0x12:
      LOBYTE(v6) = a4;
      return SmcProcessResizeRequest(&unk_14041B1B0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
    case 0x13:
      LOBYTE(v5) = a4;
      return SmProcessConfigRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
    case 0x14:
      LOBYTE(v5) = a4;
      return SmProcessStoreMemoryPriorityRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
    case 0x15:
      LOBYTE(v5) = a4;
      return SmProcessSystemStoreTrimRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
    default:
      return 3221225475LL;
  }
}
