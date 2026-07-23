/*
 * XREFs of VrpPreLoadKey @ 0x14067C648
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwLoadKey3 @ 0x140181840 (ZwLoadKey3.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     VrpAddNamespaceNodeToList @ 0x14067AC20 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14067AF54 (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14067B1CC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x14067E730 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14067E7DC (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpPreLoadKey(__int64 a1, __int64 a2)
{
  const UNICODE_STRING *v4; // rcx
  char v5; // r12
  int v6; // r15d
  __int64 v7; // r14
  int NamespaceNodePlaceholderKey; // edi
  PVOID *v9; // rcx
  const UNICODE_STRING *v10; // r15
  int v11; // r9d
  wchar_t *Buffer; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // eax
  bool v15; // zf
  void *v16; // rcx
  PVOID *v17; // rcx
  UNICODE_STRING *p_Destination; // rdx
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-88h] BYREF
  int v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  _CM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+C8h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+F8h] [rbp-8h] BYREF
  GUID ActivityId; // [rsp+128h] [rbp+28h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+140h] [rbp+40h] BYREF
  _DWORD *v35; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h]
  PVOID v37; // [rsp+170h] [rbp+70h]
  _DWORD v38[2]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v39; // [rsp+180h] [rbp+80h]
  __int64 v40; // [rsp+188h] [rbp+88h]
  wchar_t *v41; // [rsp+190h] [rbp+90h]
  _DWORD v42[2]; // [rsp+198h] [rbp+98h] BYREF
  int *v43; // [rsp+1A0h] [rbp+A0h]
  __int64 v44; // [rsp+1A8h] [rbp+A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD *v46; // [rsp+1E0h] [rbp+E0h]
  __int64 v47; // [rsp+1E8h] [rbp+E8h]
  PVOID v48; // [rsp+1F0h] [rbp+F0h]
  _DWORD v49[6]; // [rsp+1F8h] [rbp+F8h] BYREF
  EVENT_DATA_DESCRIPTOR v50; // [rsp+210h] [rbp+110h] BYREF
  int *v51; // [rsp+230h] [rbp+130h]
  __int64 v52; // [rsp+238h] [rbp+138h]
  char v53; // [rsp+250h] [rbp+150h] BYREF

  P[0] = 0LL;
  P[1] = 0LL;
  SourceFile.Length = 0;
  memset(&SourceFile.RootDirectory, 0, 0x28uLL);
  TargetKey.Length = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  memset(&TargetKey.RootDirectory, 0, 0x28uLL);
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *(const UNICODE_STRING **)(a1 + 72);
  GuidString.Buffer = (wchar_t *)&v53;
  *(_DWORD *)&GuidString.Length = 5111808;
  v27 = 0LL;
  v5 = 0;
  v26 = 0LL;
  v6 = 0;
  Handle = 0LL;
  v7 = 0LL;
  if ( v4 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v4 + 1, *(PCUNICODE_STRING *)(a1 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_38;
    v5 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(a1 + 8);
  }
  if ( stru_14033C400.LevelPlus1 > 5 )
  {
    v9 = P;
    v47 = 2LL;
    if ( !P[1] )
      v9 = (PVOID *)&EmptyUnicodeString;
    v49[1] = 0;
    v46 = v49;
    v48 = v9[1];
    v49[0] = *(unsigned __int16 *)v9;
    TlgWrite(&stru_14033C400, &unk_1402AB76A, &ActivityId, 0LL, 4u, &pData);
  }
  VrpGetNextToken(P, &v26, &String1);
  if ( !RtlEqualUnicodeString(&String1, &gRegistryString, 1u) )
  {
LABEL_10:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_47;
  }
  VrpGetNextToken(P, &v26, &String1);
  if ( RtlEqualUnicodeString(&String1, &gAppString, 1u) == 1 || (*(_DWORD *)(a1 + 24) & 0x10) != 0 )
  {
    NamespaceNodePlaceholderKey = 0;
    goto LABEL_49;
  }
  v10 = &gMachineString;
  if ( RtlEqualUnicodeString(&String1, &gMachineString, 1u) != 1 )
  {
    v10 = &gUserString;
    if ( RtlEqualUnicodeString(&String1, &gUserString, 1u) != 1 )
    {
      NamespaceNodePlaceholderKey = -1073741790;
      v6 = 0;
      goto LABEL_38;
    }
  }
  Source.Buffer = (wchar_t *)((char *)P[1] + 2 * v26);
  Source.Length = LOWORD(P[0]) - 2 * v26;
  Source.MaximumLength = Source.Length;
  VrpStripTrailingCharacters(&Source);
  v11 = 0;
  if ( Source.Length )
  {
    Buffer = Source.Buffer;
    while ( *Buffer != 92 )
    {
      ++v11;
      ++Buffer;
      if ( 2LL * v11 >= (unsigned __int64)Source.Length )
        goto LABEL_20;
    }
    goto LABEL_10;
  }
LABEL_20:
  NamespaceNodePlaceholderKey = RtlStringFromGUIDEx((PGUID)a2, &GuidString, 0);
  if ( NamespaceNodePlaceholderKey < 0 )
  {
    v6 = 0;
    goto LABEL_38;
  }
  GuidString.MaximumLength -= 4;
  ++GuidString.Buffer;
  GuidString.Length -= 4;
  Destination.Length = 0;
  Destination.MaximumLength = v10->Length + Source.Length + GuidString.Length + 40;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x67655256u);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &gRootHivePath);
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeToString(&Destination, L"Silo");
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, v10);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
    v6 = 1;
    v14 = VrpCreateNamespaceNode(a2, (const void **)P, (const void **)&Destination, 0x80000000, &v27);
    v7 = v27;
    NamespaceNodePlaceholderKey = v14;
    if ( v14 >= 0 )
    {
      NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((ULONGLONG *)a2, v27);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v7);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          v15 = *(_QWORD *)(a1 + 80) == 2LL;
          SourceFile.ObjectName = *(PUNICODE_STRING *)(a1 + 16);
          SourceFile.Length = 48;
          TargetKey.ObjectName = &Destination;
          SourceFile.RootDirectory = 0LL;
          SourceFile.Attributes = 576;
          *(_OWORD *)&SourceFile.SecurityDescriptor = 0LL;
          TargetKey.Length = 48;
          TargetKey.RootDirectory = 0LL;
          TargetKey.Attributes = 576;
          *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
          if ( !v15
            || (v16 = *(void **)(a1 + 88)) == 0LL
            || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                v16,
                                                0x200u,
                                                0LL,
                                                0,
                                                (POBJECT_TYPE)SeTokenObjectType,
                                                0,
                                                &Handle),
                NamespaceNodePlaceholderKey >= 0) )
          {
            *(_BYTE *)&ExtendedParameters.0 = 3;
            ExtendedParameters.ULong64 = (ULONG64)Handle;
            NamespaceNodePlaceholderKey = ZwLoadKey3(&TargetKey, &SourceFile, 0, &ExtendedParameters, 1u, 0, 0LL, 0LL);
            if ( NamespaceNodePlaceholderKey >= 0 )
            {
              NamespaceNodePlaceholderKey = -1073740541;
              if ( stru_14033C400.LevelPlus1 > 5 )
              {
                v17 = P;
                v20 = -1073740541;
                if ( !P[1] )
                  v17 = (PVOID *)&EmptyUnicodeString;
                v36 = 2LL;
                p_Destination = &Destination;
                v38[1] = 0;
                if ( !Destination.Buffer )
                  p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                v40 = 2LL;
                v42[1] = 0;
                v35 = v38;
                v37 = v17[1];
                v38[0] = *(unsigned __int16 *)v17;
                v39 = v42;
                v41 = p_Destination->Buffer;
                v42[0] = p_Destination->Length;
                v43 = &v20;
                v44 = 4LL;
                TlgWrite(&stru_14033C400, &unk_1402AB6E4, &ActivityId, 0LL, 7u, &v34);
              }
              goto LABEL_42;
            }
          }
        }
      }
    }
LABEL_38:
    if ( NamespaceNodePlaceholderKey != -1073740541 && v7 )
      VrpDestroyNamespaceNode((ULONGLONG *)a2, v7);
    if ( !v6 )
    {
LABEL_45:
      if ( (int)(NamespaceNodePlaceholderKey + 0x80000000) < 0 || NamespaceNodePlaceholderKey == -1073740541 )
        goto LABEL_49;
      goto LABEL_47;
    }
LABEL_42:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
    KeAbPostRelease(a2 + 16);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_45;
  }
  NamespaceNodePlaceholderKey = -1073741670;
LABEL_47:
  if ( stru_14033C400.LevelPlus1 > 2 )
  {
    v25 = NamespaceNodePlaceholderKey;
    v51 = &v25;
    v52 = 4LL;
    TlgWrite(&stru_14033C400, &unk_1402ABA07, &ActivityId, 0LL, 3u, &v50);
  }
LABEL_49:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v5 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
