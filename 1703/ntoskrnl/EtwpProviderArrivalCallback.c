/*
 * XREFs of EtwpProviderArrivalCallback @ 0x140448030
 * Callers:
 *     EtwpTrackProviderBinary @ 0x14045A320 (EtwpTrackProviderBinary.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x14002F550 (RtlPcToFileHeader.c)
 *     RtlImageNtHeaderEx @ 0x14008BA30 (RtlImageNtHeaderEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VslGetEtwDebugId @ 0x1401ED018 (VslGetEtwDebugId.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpAddProviderToSession @ 0x140448258 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x140448384 (EtwpFindDebugId.c)
 *     MmGetImageBase @ 0x14044852C (MmGetImageBase.c)
 *     EtwpGetImageSize @ 0x1405D3778 (EtwpGetImageSize.c)
 *     MmGetFileNameForAddress @ 0x1406B2B60 (MmGetFileNameForAddress.c)
 *     EtwpSendDbgId @ 0x14070F004 (EtwpSendDbgId.c)
 *     EtwpAddWinRtProviderToSession @ 0x1407132C4 (EtwpAddWinRtProviderToSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3)
{
  void *v6; // rcx
  _KPROCESS *Process; // r10
  int FileNameForAddress; // ebx
  __int16 v9; // cx
  ULONGLONG v10; // rdx
  bool v12; // zf
  unsigned int v13; // [rsp+20h] [rbp-168h] BYREF
  ULONGLONG Size; // [rsp+28h] [rbp-160h] BYREF
  PVOID BaseOfImage; // [rsp+30h] [rbp-158h] BYREF
  int v16; // [rsp+38h] [rbp-150h]
  PVOID P; // [rsp+40h] [rbp-148h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-138h] BYREF
  PVOID v20; // [rsp+58h] [rbp-130h]
  _BYTE v21[256]; // [rsp+60h] [rbp-128h] BYREF

  v6 = *(void **)(a3 + 88);
  if ( !v6 )
    return 3221225793LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 && (*(_BYTE *)(a3 + 98) & 8) != 0 )
    return 3221225659LL;
  P = v21;
  v13 = 256;
  BaseOfImage = 0LL;
  Size = 0LL;
  if ( !a2 )
  {
    RtlPcToFileHeader(v6, &BaseOfImage);
    if ( !BaseOfImage )
    {
      FileNameForAddress = -1073741275;
      goto LABEL_20;
    }
LABEL_7:
    FileNameForAddress = RtlImageNtHeaderEx(
                           1u,
                           (PVOID)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL),
                           Size,
                           &NtHeader);
    v16 = FileNameForAddress;
    if ( FileNameForAddress >= 0 )
    {
      v9 = *(_WORD *)(a3 + 98);
      if ( (v9 & 8) == 0 )
      {
        if ( (v9 & 0x20) != 0 )
        {
          FileNameForAddress = MmGetFileNameForAddress(NtHeader, v19);
          if ( FileNameForAddress >= 0 )
          {
            EtwpAddWinRtProviderToSession(a1, v19, *(_QWORD *)(a3 + 32) + 24LL);
            ExFreePoolWithTag(v20, 0);
          }
        }
        goto LABEL_20;
      }
      v10 = Size;
      if ( !Size )
      {
        FileNameForAddress = EtwpGetImageSize(NtHeader, &Size);
        v16 = FileNameForAddress;
        v10 = Size;
      }
      if ( FileNameForAddress >= 0 )
      {
        if ( a2 == 1
          && v10
          && ((unsigned __int64)BaseOfImage + v10 > 0x7FFFFFFF0000LL || (char *)BaseOfImage + v10 < BaseOfImage) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v10 = Size;
        }
        FileNameForAddress = EtwpFindDebugId(BaseOfImage, v10, &P, &v13);
        if ( FileNameForAddress >= 0 )
        {
          EtwpAddProviderToSession(a1, P, v13);
          if ( (_BYTE)KdDebuggerNotPresent )
            goto LABEL_19;
          v12 = KdPitchDebugger == 0;
          goto LABEL_32;
        }
      }
    }
    goto LABEL_20;
  }
  if ( (*(_BYTE *)(a3 + 98) & 8) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->SecurePid )
    {
      FileNameForAddress = VslGetEtwDebugId((__int64)Process, (__int64)v6, &P, &v13);
      if ( FileNameForAddress < 0 )
        goto LABEL_20;
      EtwpAddProviderToSession(a1, P, v13);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
LABEL_19:
        if ( !KdEventLoggingPresent )
          goto LABEL_20;
LABEL_33:
        if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0 )
          EtwpSendDbgId(a1);
        goto LABEL_20;
      }
      v12 = KdPitchDebugger == 0;
LABEL_32:
      if ( v12 )
        goto LABEL_33;
      goto LABEL_19;
    }
  }
  FileNameForAddress = MmGetImageBase(v6, &BaseOfImage, &Size);
  if ( FileNameForAddress >= 0 )
    goto LABEL_7;
LABEL_20:
  if ( P != v21 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)FileNameForAddress;
}
