/*
 * XREFs of VrpPreLoadKey @ 0x1406A6F7C
 * Callers:
 *     VrpRegistryCallback @ 0x1406A3720 (VrpRegistryCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     EtwActivityIdControl @ 0x14010EE00 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmSetCallbackObjectContext @ 0x140689270 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x1406A3AA8 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1406A3BD0 (VrpFreeKeyContext.c)
 *     VrpAddNamespaceNodeToList @ 0x1406A5394 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1406A56CC (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1406A5980 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x1406A95FC (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x1406A9810 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x1406A98B8 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpPreLoadKey(_QWORD *a1, GUID *a2)
{
  __int64 v4; // r15
  const UNICODE_STRING *v5; // rcx
  UNICODE_STRING *v6; // r13
  int NamespaceNodePlaceholderKey; // esi
  PVOID *v8; // rax
  int v9; // ecx
  PVOID v10; // rax
  GUID *v11; // r15
  const UNICODE_STRING *v12; // rbx
  int v13; // r9d
  wchar_t *Buffer; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r12
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  NTSTATUS v21; // eax
  PVOID v22; // rsi
  UNICODE_STRING *KeyContext; // rax
  PVOID *v24; // rcx
  UNICODE_STRING *p_Destination; // rdx
  int v27; // [rsp+38h] [rbp-2E0h]
  char v28; // [rsp+60h] [rbp-2B8h]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-2A8h] BYREF
  int v31; // [rsp+80h] [rbp-298h]
  PVOID P[2]; // [rsp+88h] [rbp-290h] BYREF
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-280h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-270h] BYREF
  UNICODE_STRING String1; // [rsp+B8h] [rbp-260h] BYREF
  int v36; // [rsp+C8h] [rbp-250h]
  int v37; // [rsp+CCh] [rbp-24Ch] BYREF
  int v38; // [rsp+D0h] [rbp-248h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-240h] BYREF
  UNICODE_STRING *v40; // [rsp+E0h] [rbp-238h]
  __int64 v41; // [rsp+E8h] [rbp-230h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp-228h] BYREF
  HANDLE v43; // [rsp+F8h] [rbp-220h] BYREF
  HANDLE v44; // [rsp+100h] [rbp-218h] BYREF
  HANDLE v45; // [rsp+108h] [rbp-210h] BYREF
  HANDLE v46; // [rsp+110h] [rbp-208h] BYREF
  _QWORD *v47; // [rsp+118h] [rbp-200h]
  PVOID Object; // [rsp+120h] [rbp-1F8h] BYREF
  HANDLE v49; // [rsp+128h] [rbp-1F0h] BYREF
  PVOID v50; // [rsp+130h] [rbp-1E8h]
  GUID *v51; // [rsp+138h] [rbp-1E0h]
  int v52[12]; // [rsp+140h] [rbp-1D8h] BYREF
  int v53[12]; // [rsp+170h] [rbp-1A8h] BYREF
  GUID ActivityId; // [rsp+1A0h] [rbp-178h] BYREF
  EVENT_DATA_DESCRIPTOR v55; // [rsp+1B0h] [rbp-168h] BYREF
  _DWORD *v56; // [rsp+1D0h] [rbp-148h]
  __int64 v57; // [rsp+1D8h] [rbp-140h]
  PVOID v58; // [rsp+1E0h] [rbp-138h]
  _DWORD v59[2]; // [rsp+1E8h] [rbp-130h] BYREF
  _DWORD *v60; // [rsp+1F0h] [rbp-128h]
  __int64 v61; // [rsp+1F8h] [rbp-120h]
  wchar_t *v62; // [rsp+200h] [rbp-118h]
  _DWORD v63[2]; // [rsp+208h] [rbp-110h] BYREF
  int *v64; // [rsp+210h] [rbp-108h]
  __int64 v65; // [rsp+218h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp-F8h] BYREF
  _DWORD *v67; // [rsp+240h] [rbp-D8h]
  __int64 v68; // [rsp+248h] [rbp-D0h]
  PVOID v69; // [rsp+250h] [rbp-C8h]
  _DWORD v70[2]; // [rsp+258h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v71; // [rsp+260h] [rbp-B8h] BYREF
  int *v72; // [rsp+280h] [rbp-98h]
  __int64 v73; // [rsp+288h] [rbp-90h]
  char v74; // [rsp+290h] [rbp-88h] BYREF

  v47 = a1;
  v51 = a2;
  P[0] = 0LL;
  P[1] = 0LL;
  v52[0] = 0;
  memset(&v52[2], 0, 0x28uLL);
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v53[0] = 0;
  memset(&v53[2], 0, 0x28uLL);
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *a1;
  GuidString.Buffer = (wchar_t *)&v74;
  *(_DWORD *)&GuidString.Length = 5111808;
  v28 = 0;
  v31 = 0;
  v5 = *(const UNICODE_STRING **)(v4 + 72);
  v41 = 0LL;
  v39 = 0LL;
  Handle = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  v6 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( v5 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v5 + 1, *(PCUNICODE_STRING *)(v4 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_53;
    v28 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(v4 + 8);
  }
  if ( stru_140354A30.LevelPlus1 > 5 )
  {
    v8 = P;
    if ( !P[1] )
      v8 = (PVOID *)&EmptyUnicodeString;
    v9 = *(unsigned __int16 *)v8;
    v10 = v8[1];
    v67 = v70;
    v68 = 2LL;
    v69 = v10;
    v70[0] = v9;
    v70[1] = 0;
    TlgWrite(&stru_140354A30, &unk_1402CF534, &ActivityId, 0LL, 4u, &pData);
  }
  VrpGetNextToken(P, &v39, &String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
LABEL_10:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_55;
  }
  VrpGetNextToken(P, &v39, &String1);
  if ( RtlEqualUnicodeString(&String1, &VrpAppString, 1u) || RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
  {
    NamespaceNodePlaceholderKey = 0;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 24) & 0x10) != 0 )
    {
      NamespaceNodePlaceholderKey = 0;
      v11 = a2;
      goto LABEL_58;
    }
    v12 = &VrpMachineString;
    if ( !RtlEqualUnicodeString(&String1, &VrpMachineString, 1u) )
    {
      v12 = &VrpUserString;
      if ( !RtlEqualUnicodeString(&String1, &VrpUserString, 1u) )
        goto LABEL_10;
    }
    Source.Buffer = (wchar_t *)((char *)P[1] + 2 * v39);
    Source.Length = LOWORD(P[0]) - 2 * v39;
    Source.MaximumLength = Source.Length;
    VrpStripTrailingCharacters(&Source);
    v13 = 0;
    if ( Source.Length )
    {
      Buffer = Source.Buffer;
      while ( *Buffer != 92 )
      {
        ++v13;
        ++Buffer;
        if ( 2LL * v13 >= (unsigned __int64)Source.Length )
          goto LABEL_22;
      }
      goto LABEL_10;
    }
LABEL_22:
    NamespaceNodePlaceholderKey = RtlStringFromGUIDEx(a2, &GuidString, 0);
    if ( NamespaceNodePlaceholderKey >= 0 )
    {
      ++GuidString.Buffer;
      GuidString.Length -= 4;
      GuidString.MaximumLength -= 4;
      Destination.Length = 0;
      Destination.MaximumLength = Source.Length + GuidString.Length + v12->Length + 40;
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x67655256u);
      if ( !Destination.Buffer )
      {
        NamespaceNodePlaceholderKey = -1073741670;
        goto LABEL_55;
      }
      RtlAppendUnicodeStringToString(&Destination, &VrpRootHivePath);
      RtlAppendUnicodeToString(&Destination, L"\\Silo_");
      RtlAppendUnicodeStringToString(&Destination, &GuidString);
      RtlAppendUnicodeToString(&Destination, L"_");
      RtlAppendUnicodeStringToString(&Destination, v12);
      RtlAppendUnicodeToString(&Destination, L"_");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1], 0LL);
      v31 = 1;
      v36 = 1;
      NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(
                                      (__int64)a2,
                                      (const void **)P,
                                      0LL,
                                      (const void **)&Destination,
                                      0x80000000,
                                      &v41);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        v16 = v41;
        NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((ULONGLONG *)&a2->Data1, v41);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v16);
          if ( NamespaceNodePlaceholderKey >= 0 )
          {
            v52[0] = 48;
            *(_QWORD *)&v52[2] = 0LL;
            v52[6] = 576;
            *(_QWORD *)&v52[4] = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v52[8] = 0LL;
            v53[0] = 48;
            *(_QWORD *)&v53[2] = 0LL;
            v53[6] = 576;
            *(_QWORD *)&v53[4] = &Destination;
            *(_OWORD *)&v53[8] = 0LL;
            v17 = *(void **)(v4 + 32);
            if ( !v17
              || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                  v17,
                                                  0x200u,
                                                  0LL,
                                                  0,
                                                  (POBJECT_TYPE)CmKeyObjectType,
                                                  0,
                                                  &Handle),
                  NamespaceNodePlaceholderKey >= 0) )
            {
              v18 = *(void **)(v4 + 40);
              if ( !v18
                || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                    v18,
                                                    0x200u,
                                                    0LL,
                                                    2u,
                                                    (POBJECT_TYPE)ExEventObjectType,
                                                    0,
                                                    &v43),
                    NamespaceNodePlaceholderKey >= 0) )
              {
                v19 = (void *)v47[1];
                if ( !v19
                  || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                      v19,
                                                      0x200u,
                                                      0LL,
                                                      0,
                                                      (POBJECT_TYPE)CmKeyObjectType,
                                                      0,
                                                      &v44),
                      NamespaceNodePlaceholderKey >= 0) )
                {
                  if ( *(_QWORD *)(v4 + 80) != 2LL
                    || (v20 = *(void **)(v4 + 88)) == 0LL
                    || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                        v20,
                                                        0x200u,
                                                        0LL,
                                                        0,
                                                        (POBJECT_TYPE)SeTokenObjectType,
                                                        0,
                                                        &v45),
                        NamespaceNodePlaceholderKey >= 0) )
                  {
                    NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                                    (__int64)v53,
                                                    (__int64)v52,
                                                    *(_DWORD *)(v4 + 24),
                                                    Handle,
                                                    v43,
                                                    *(_DWORD *)(v4 + 48),
                                                    (HANDLE *)((unsigned __int64)&v46 & -(__int64)(*(_QWORD *)(v4 + 56) != 0LL)),
                                                    v27,
                                                    v44,
                                                    *((_BYTE *)v47 + 16),
                                                    v45,
                                                    0);
                    if ( NamespaceNodePlaceholderKey >= 0 )
                    {
                      if ( *(_QWORD *)(v4 + 56) )
                      {
                        if ( v46 )
                        {
                          v21 = ObReferenceObjectByHandle(
                                  v46,
                                  *(_DWORD *)(v4 + 48),
                                  (POBJECT_TYPE)CmKeyObjectType,
                                  0,
                                  &Object,
                                  0LL);
                          v22 = Object;
                          v50 = Object;
                          if ( v21 >= 0 )
                          {
                            KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
                            v6 = KeyContext;
                            v40 = KeyContext;
                            if ( KeyContext )
                            {
                              if ( (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
                              {
                                *(_DWORD *)(&v6[2].MaximumLength + 1) = 0x20000000;
                                if ( CmSetCallbackObjectContext(v22, &VrpCallbackCookie, v6, 0LL) >= 0 )
                                {
                                  v6 = 0LL;
                                  v40 = 0LL;
                                  ObOpenObjectByPointer(
                                    Object,
                                    KeGetCurrentThread()->PreviousMode != 0 ? 64 : 576,
                                    0LL,
                                    *(_DWORD *)(v4 + 48),
                                    (POBJECT_TYPE)CmKeyObjectType,
                                    KeGetCurrentThread()->PreviousMode,
                                    &v49);
                                }
                              }
                            }
                          }
                        }
                        **(_QWORD **)(v4 + 56) = v49;
                      }
                      NamespaceNodePlaceholderKey = -1073740541;
                      if ( stru_140354A30.LevelPlus1 > 5 )
                      {
                        v24 = P;
                        if ( !P[1] )
                          v24 = (PVOID *)&EmptyUnicodeString;
                        p_Destination = &Destination;
                        if ( !Destination.Buffer )
                          p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                        v37 = -1073740541;
                        v56 = v59;
                        v57 = 2LL;
                        v58 = v24[1];
                        v59[0] = *(unsigned __int16 *)v24;
                        v59[1] = 0;
                        v60 = v63;
                        v61 = 2LL;
                        v62 = p_Destination->Buffer;
                        v63[0] = p_Destination->Length;
                        v63[1] = 0;
                        v64 = &v37;
                        v65 = 4LL;
                        TlgWrite(&stru_140354A30, &unk_1402CF6FF, &ActivityId, 0LL, 7u, &v55);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_53:
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) != 0 || NamespaceNodePlaceholderKey == -1073740541 )
  {
    v11 = a2;
    goto LABEL_58;
  }
LABEL_55:
  v11 = a2;
  if ( v41 )
    VrpDestroyNamespaceNode((ULONGLONG *)&a2->Data1, v41);
LABEL_58:
  if ( v31 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v11[1]);
    KeAbPostRelease((ULONG_PTR)&v11[1]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && stru_140354A30.LevelPlus1 > 2 )
  {
    v38 = NamespaceNodePlaceholderKey;
    v72 = &v38;
    v73 = 4LL;
    TlgWrite(&stru_140354A30, &unk_1402CF50A, &ActivityId, 0LL, 3u, &v71);
  }
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v43 )
    ObCloseHandle(v43, 0);
  if ( v44 )
    ObCloseHandle(v44, 0);
  if ( v45 )
    ObCloseHandle(v45, 0);
  if ( v46 )
    ObCloseHandle(v46, 0);
  if ( v50 )
    ObfDereferenceObject(v50);
  if ( v28 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
