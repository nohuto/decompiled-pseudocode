/*
 * XREFs of VrpPreLoadKey @ 0x14070B60C
 * Callers:
 *     VrpRegistryCallback @ 0x140707D90 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwActivityIdControl @ 0x14012A620 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmSetCallbackObjectContext @ 0x1406ED660 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x140708118 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x140708240 (VrpFreeKeyContext.c)
 *     VrpAddNamespaceNodeToList @ 0x140709A0C (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140709D4C (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14070A004 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x14070DD28 (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x14070DF3C (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14070E020 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpPreLoadKey(_QWORD *a1, GUID *a2)
{
  __int64 v4; // r15
  const UNICODE_STRING *v5; // rcx
  UNICODE_STRING *v6; // r13
  __int64 Length; // rdx
  int NamespaceNodePlaceholderKey; // esi
  void *v9; // r8
  __int64 v10; // r9
  PVOID *v11; // rax
  int v12; // ecx
  PVOID v13; // rax
  GUID *v14; // r15
  const UNICODE_STRING *v15; // rbx
  wchar_t *Buffer; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r12
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  NTSTATUS v23; // eax
  PVOID v24; // rsi
  UNICODE_STRING *KeyContext; // rax
  PVOID *v26; // rcx
  UNICODE_STRING *p_Destination; // rdx
  int v29; // [rsp+38h] [rbp-2E0h]
  char v30; // [rsp+60h] [rbp-2B8h]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-2A8h] BYREF
  int v33; // [rsp+80h] [rbp-298h]
  PVOID P[2]; // [rsp+88h] [rbp-290h] BYREF
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-280h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-270h] BYREF
  UNICODE_STRING String1; // [rsp+B8h] [rbp-260h] BYREF
  int v38; // [rsp+C8h] [rbp-250h]
  int v39; // [rsp+CCh] [rbp-24Ch] BYREF
  int v40; // [rsp+D0h] [rbp-248h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-240h] BYREF
  UNICODE_STRING *v42; // [rsp+E0h] [rbp-238h]
  __int64 v43; // [rsp+E8h] [rbp-230h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp-228h] BYREF
  HANDLE v45; // [rsp+F8h] [rbp-220h] BYREF
  HANDLE v46; // [rsp+100h] [rbp-218h] BYREF
  HANDLE v47; // [rsp+108h] [rbp-210h] BYREF
  HANDLE v48; // [rsp+110h] [rbp-208h] BYREF
  _QWORD *v49; // [rsp+118h] [rbp-200h]
  PVOID Object; // [rsp+120h] [rbp-1F8h] BYREF
  HANDLE v51; // [rsp+128h] [rbp-1F0h] BYREF
  PVOID v52; // [rsp+130h] [rbp-1E8h]
  GUID *v53; // [rsp+138h] [rbp-1E0h]
  int v54[12]; // [rsp+140h] [rbp-1D8h] BYREF
  int v55[12]; // [rsp+170h] [rbp-1A8h] BYREF
  GUID ActivityId; // [rsp+1A0h] [rbp-178h] BYREF
  EVENT_DATA_DESCRIPTOR v57; // [rsp+1B0h] [rbp-168h] BYREF
  _DWORD *v58; // [rsp+1D0h] [rbp-148h]
  __int64 v59; // [rsp+1D8h] [rbp-140h]
  PVOID v60; // [rsp+1E0h] [rbp-138h]
  _DWORD v61[2]; // [rsp+1E8h] [rbp-130h] BYREF
  _DWORD *v62; // [rsp+1F0h] [rbp-128h]
  __int64 v63; // [rsp+1F8h] [rbp-120h]
  wchar_t *v64; // [rsp+200h] [rbp-118h]
  _DWORD v65[2]; // [rsp+208h] [rbp-110h] BYREF
  int *v66; // [rsp+210h] [rbp-108h]
  __int64 v67; // [rsp+218h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp-F8h] BYREF
  _DWORD *v69; // [rsp+240h] [rbp-D8h]
  __int64 v70; // [rsp+248h] [rbp-D0h]
  PVOID v71; // [rsp+250h] [rbp-C8h]
  _DWORD v72[2]; // [rsp+258h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v73; // [rsp+260h] [rbp-B8h] BYREF
  int *v74; // [rsp+280h] [rbp-98h]
  __int64 v75; // [rsp+288h] [rbp-90h]
  char v76; // [rsp+290h] [rbp-88h] BYREF

  v49 = a1;
  v53 = a2;
  P[0] = 0LL;
  P[1] = 0LL;
  memset(v54, 0, sizeof(v54));
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  memset(v55, 0, sizeof(v55));
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *a1;
  GuidString.Buffer = (wchar_t *)&v76;
  *(_DWORD *)&GuidString.Length = 5111808;
  v30 = 0;
  v33 = 0;
  v5 = *(const UNICODE_STRING **)(v4 + 72);
  v43 = 0LL;
  v41 = 0LL;
  Handle = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( v5 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v5 + 1, *(PCUNICODE_STRING *)(v4 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_54;
    v30 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(v4 + 8);
  }
  if ( stru_1403970D0.LevelPlus1 > 5 )
  {
    v11 = P;
    if ( !P[1] )
      v11 = (PVOID *)&EmptyUnicodeString;
    v12 = *(unsigned __int16 *)v11;
    v13 = v11[1];
    v69 = v72;
    v70 = 2LL;
    v71 = v13;
    v72[0] = v12;
    v72[1] = 0;
    TlgWrite(&stru_1403970D0, &unk_140308F00, &ActivityId, 0LL, 4u, &pData);
  }
  VrpGetNextToken(P, &v41, &String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
LABEL_10:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_56;
  }
  VrpGetNextToken(P, &v41, &String1);
  if ( RtlEqualUnicodeString(&String1, &VrpAppString, 1u) || RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
  {
    NamespaceNodePlaceholderKey = 0;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 24) & 0x10) != 0 )
    {
      NamespaceNodePlaceholderKey = 0;
      v14 = a2;
      goto LABEL_59;
    }
    v15 = &VrpMachineString;
    if ( !RtlEqualUnicodeString(&String1, &VrpMachineString, 1u) )
    {
      v15 = &VrpUserString;
      if ( !RtlEqualUnicodeString(&String1, &VrpUserString, 1u) )
        goto LABEL_10;
    }
    Source.Buffer = (wchar_t *)((char *)P[1] + 2 * v41);
    Source.Length = LOWORD(P[0]) - 2 * v41;
    Source.MaximumLength = Source.Length;
    VrpStripTrailingCharacters(&Source);
    v10 = 0LL;
    Length = Source.Length;
    if ( Source.Length )
    {
      Buffer = Source.Buffer;
      while ( *Buffer != 92 )
      {
        v10 = (unsigned int)(v10 + 1);
        ++Buffer;
        if ( 2LL * (int)v10 >= (unsigned __int64)Source.Length )
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
      Destination.MaximumLength = Source.Length + v15->Length + GuidString.Length + 40;
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x67655256u);
      if ( !Destination.Buffer )
      {
        NamespaceNodePlaceholderKey = -1073741670;
        goto LABEL_56;
      }
      RtlAppendUnicodeStringToString(&Destination, &VrpRootHivePath);
      RtlAppendUnicodeToString(&Destination, L"\\Silo_");
      RtlAppendUnicodeStringToString(&Destination, &GuidString);
      RtlAppendUnicodeToString(&Destination, L"_");
      RtlAppendUnicodeStringToString(&Destination, v15);
      RtlAppendUnicodeToString(&Destination, L"_");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1], 0LL);
      v33 = 1;
      v38 = 1;
      NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(
                                      (__int64)a2,
                                      (const void **)P,
                                      0LL,
                                      (const void **)&Destination,
                                      0x80000000,
                                      &v43);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        v18 = v43;
        NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((__int64)a2, v43);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v18);
          if ( NamespaceNodePlaceholderKey >= 0 )
          {
            v54[0] = 48;
            *(_QWORD *)&v54[2] = 0LL;
            v54[6] = 576;
            *(_QWORD *)&v54[4] = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v54[8] = 0LL;
            v55[0] = 48;
            *(_QWORD *)&v55[2] = 0LL;
            v55[6] = 576;
            *(_QWORD *)&v55[4] = &Destination;
            *(_OWORD *)&v55[8] = 0LL;
            v19 = *(void **)(v4 + 32);
            if ( !v19
              || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                  v19,
                                                  0x200u,
                                                  0LL,
                                                  0,
                                                  (POBJECT_TYPE)CmKeyObjectType,
                                                  0,
                                                  &Handle),
                  NamespaceNodePlaceholderKey >= 0) )
            {
              v20 = *(void **)(v4 + 40);
              if ( !v20
                || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                    v20,
                                                    0x200u,
                                                    0LL,
                                                    2u,
                                                    (POBJECT_TYPE)ExEventObjectType,
                                                    0,
                                                    &v45),
                    NamespaceNodePlaceholderKey >= 0) )
              {
                v21 = (void *)v49[1];
                if ( !v21
                  || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                      v21,
                                                      0x200u,
                                                      0LL,
                                                      0,
                                                      (POBJECT_TYPE)CmKeyObjectType,
                                                      0,
                                                      &v46),
                      NamespaceNodePlaceholderKey >= 0) )
                {
                  if ( *(_QWORD *)(v4 + 80) != 2LL
                    || (v22 = *(void **)(v4 + 88)) == 0LL
                    || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                        v22,
                                                        0x200u,
                                                        0LL,
                                                        0,
                                                        (POBJECT_TYPE)SeTokenObjectType,
                                                        0,
                                                        &v47),
                        NamespaceNodePlaceholderKey >= 0) )
                  {
                    NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                                    (__int64)v55,
                                                    v54,
                                                    *(_DWORD *)(v4 + 24),
                                                    (__int64)Handle,
                                                    v45,
                                                    *(_DWORD *)(v4 + 48),
                                                    (HANDLE *)((unsigned __int64)&v48 & -(__int64)(*(_QWORD *)(v4 + 56) != 0LL)),
                                                    v29,
                                                    (__int64)v46,
                                                    *((_BYTE *)v49 + 16),
                                                    v47,
                                                    0);
                    if ( NamespaceNodePlaceholderKey >= 0 )
                    {
                      if ( *(_QWORD *)(v4 + 56) )
                      {
                        if ( v48 )
                        {
                          v23 = ObReferenceObjectByHandle(
                                  v48,
                                  *(_DWORD *)(v4 + 48),
                                  (POBJECT_TYPE)CmKeyObjectType,
                                  0,
                                  &Object,
                                  0LL);
                          v24 = Object;
                          v52 = Object;
                          if ( v23 >= 0 )
                          {
                            KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
                            v6 = KeyContext;
                            v42 = KeyContext;
                            if ( KeyContext )
                            {
                              if ( (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
                              {
                                *(_DWORD *)(&v6[2].MaximumLength + 1) = 0x20000000;
                                if ( CmSetCallbackObjectContext(v24, &VrpCallbackCookie, v6, 0LL) >= 0 )
                                {
                                  v6 = 0LL;
                                  v42 = 0LL;
                                  ObOpenObjectByPointer(
                                    Object,
                                    KeGetCurrentThread()->PreviousMode != 0 ? 64 : 576,
                                    0LL,
                                    *(_DWORD *)(v4 + 48),
                                    (POBJECT_TYPE)CmKeyObjectType,
                                    KeGetCurrentThread()->PreviousMode,
                                    &v51);
                                }
                              }
                            }
                          }
                        }
                        **(_QWORD **)(v4 + 56) = v51;
                        v9 = &EmptyUnicodeString;
                      }
                      else
                      {
                        v9 = &EmptyUnicodeString;
                      }
                      NamespaceNodePlaceholderKey = -1073740541;
                      if ( stru_1403970D0.LevelPlus1 > 5 )
                      {
                        v26 = P;
                        if ( !P[1] )
                          v26 = (PVOID *)&EmptyUnicodeString;
                        p_Destination = &Destination;
                        if ( !Destination.Buffer )
                          p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                        v39 = -1073740541;
                        v58 = v61;
                        v59 = 2LL;
                        v60 = v26[1];
                        v61[0] = *(unsigned __int16 *)v26;
                        v61[1] = 0;
                        v62 = v65;
                        v63 = 2LL;
                        v64 = p_Destination->Buffer;
                        v65[0] = p_Destination->Length;
                        v65[1] = 0;
                        v66 = &v39;
                        v67 = 4LL;
                        TlgWrite(&stru_1403970D0, &unk_1403090CB, &ActivityId, 0LL, 7u, &v57);
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
LABEL_54:
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) != 0 || NamespaceNodePlaceholderKey == -1073740541 )
  {
    v14 = a2;
    goto LABEL_59;
  }
LABEL_56:
  v14 = a2;
  if ( v43 )
    VrpDestroyNamespaceNode((ULONGLONG *)&a2->Data1, v43);
LABEL_59:
  if ( v33 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v14[1], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v14[1], Length, (__int64)v9, v10);
    KeAbPostRelease((ULONG_PTR)&v14[1]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && stru_1403970D0.LevelPlus1 > 2 )
  {
    v40 = NamespaceNodePlaceholderKey;
    v74 = &v40;
    v75 = 4LL;
    TlgWrite(&stru_1403970D0, &unk_140308ED6, &ActivityId, 0LL, 3u, &v73);
  }
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v45 )
    ObCloseHandle(v45, 0);
  if ( v46 )
    ObCloseHandle(v46, 0);
  if ( v47 )
    ObCloseHandle(v47, 0);
  if ( v48 )
    ObCloseHandle(v48, 0);
  if ( v52 )
    ObfDereferenceObject(v52);
  if ( v30 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
