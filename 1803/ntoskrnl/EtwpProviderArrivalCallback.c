/*
 * XREFs of EtwpProviderArrivalCallback @ 0x14058C90C
 * Callers:
 *     EtwpTrackProviderBinary @ 0x140581C38 (EtwpTrackProviderBinary.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpTrackProviderRegistration @ 0x14058F2A0 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407B2700 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpTrackDebugIdForSession @ 0x14058CA30 (EtwpTrackDebugIdForSession.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x14058CB5C (EtwpLocateDbgIdForRegEntry.c)
 *     MmGetFileNameForAddress @ 0x140749798 (MmGetFileNameForAddress.c)
 *     RtlPcToFilePath @ 0x14078AB40 (RtlPcToFilePath.c)
 *     EtwpSendDbgId @ 0x1407AD100 (EtwpSendDbgId.c)
 *     EtwpTrackBinaryForSession @ 0x1407B2344 (EtwpTrackBinaryForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3)
{
  PVOID v4; // rcx
  unsigned int v7; // edi
  int v8; // eax
  _BYTE *v9; // rsi
  int FileNameForAddress; // eax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  PVOID v13; // [rsp+28h] [rbp-D8h] BYREF
  PVOID P; // [rsp+30h] [rbp-D0h]
  _BYTE v15[512]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = *(PVOID *)(a3 + 88);
  v7 = 0;
  if ( !v4 )
    return 3221225793LL;
  if ( (*(_BYTE *)(a3 + 98) & 0x20) != 0 || (*(_DWORD *)(a1 + 832) & 0x2000000) != 0 )
  {
    LODWORD(v13) = 0x2000000;
    P = v15;
    if ( a2 )
      FileNameForAddress = MmGetFileNameForAddress(v4, &v13);
    else
      FileNameForAddress = RtlPcToFilePath(v4, &v13);
    v7 = FileNameForAddress;
    if ( FileNameForAddress >= 0 )
      EtwpTrackBinaryForSession(a1, &v13, *(_QWORD *)(a3 + 32) + 24LL);
    v4 = P;
    if ( P != v15 )
      ExFreePoolWithTag(P, 0);
  }
  if ( (*(_BYTE *)(a3 + 98) & 8) == 0 )
    return v7;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) == 0 )
  {
    v12 = 512;
    v13 = v15;
    LOBYTE(v4) = a2;
    v8 = EtwpLocateDbgIdForRegEntry(v4, a3, &v13, &v12);
    v9 = v13;
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( (EtwpTrackDebugIdForSession(a1, v13, v12), !(_BYTE)KdDebuggerNotPresent) && !KdPitchDebugger
        || KdEventLoggingPresent )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0 )
          EtwpSendDbgId(a1);
      }
    }
    if ( v9 != v15 )
      ExFreePoolWithTag(v9, 0);
    return v7;
  }
  return 3221225659LL;
}
