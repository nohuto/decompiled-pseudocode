/*
 * XREFs of SmSetStoreInformation @ 0x14048C880
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     SmProcessStoreMemoryPriorityRequest @ 0x14048C768 (SmProcessStoreMemoryPriorityRequest.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SmProcessCreateRequest @ 0x14052AEB8 (SmProcessCreateRequest.c)
 *     SmProcessConfigRequest @ 0x1406506E8 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x14079BA90 (SmProcessDeleteRequest.c)
 *     SmProcessResizeRequest @ 0x14079BEA0 (SmProcessResizeRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x14079C214 (SmProcessSystemStoreTrimRequest.c)
 *     SmcProcessCreateRequest @ 0x14079C744 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x14079C9A0 (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x14079CA0C (SmcProcessResizeRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x14079CCD4 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x14079CE30 (SmcProcessStoreDeleteRequest.c)
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
        return SmcProcessStoreDeleteRequest(&unk_1404661C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 3:
        LOBYTE(v6) = a4;
        return SmProcessCreateRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 4:
        LOBYTE(v6) = a4;
        return SmProcessDeleteRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 9:
        LOBYTE(v6) = a4;
        return SmcProcessCreateRequest(&unk_1404661C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xA:
        LOBYTE(v6) = a4;
        return SmcProcessDeleteRequest(&unk_1404661C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xB:
        LOBYTE(v6) = a4;
        return SmcProcessStoreCreateRequest(&unk_1404661C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
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
      return SmcProcessResizeRequest(&unk_1404661C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
    case 0x13:
      LOBYTE(v5) = a4;
      return SmProcessConfigRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
    case 0x14:
      return SmProcessStoreMemoryPriorityRequest(*((unsigned __int64 *)&v8 + 1), (unsigned int)v9, a4);
    case 0x15:
      LOBYTE(v5) = a4;
      return SmProcessSystemStoreTrimRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
    default:
      return 3221225475LL;
  }
}
