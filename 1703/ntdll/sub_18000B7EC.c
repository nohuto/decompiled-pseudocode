/*
 * XREFs of sub_18000B7EC @ 0x18000B7EC
 * Callers:
 *     CsrClientConnectToServer @ 0x18000B620 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwOpenSection @ 0x1800A59E0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwConnectPort @ 0x1800A6670 (ZwConnectPort.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18000B7EC(_WORD *Src, int a2, __int64 *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rax
  size_t v10; // rsi
  SIZE_T v11; // r8
  WCHAR *Heap; // rax
  WCHAR *v13; // rbx
  WCHAR *v14; // rbx
  _WORD *v15; // rbx
  NTSTATUS v16; // edi
  NTSTATUS v17; // ebx
  HANDLE v18; // rcx
  struct _PEB *v19; // rcx
  HANDLE v21; // rcx
  HANDLE SectionHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ConnectionInformationLength; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-88h] BYREF
  ULONG MaxMessageLength; // [rsp+80h] [rbp-80h] BYREF
  _PORT_VIEW ClientView; // [rsp+88h] [rbp-78h] BYREF
  _REMOTE_PORT_VIEW ServerView; // [rsp+B8h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD ConnectionInformation[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  _QWORD Parameters[12]; // [rsp+130h] [rbp+30h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+190h] [rbp+90h] BYREF

  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = v9;
  v11 = 2 * v9 + 28;
  if ( v11 > 0xFFFF )
    return 3221225734LL;
  PortName.MaximumLength = 2 * v9 + 28;
  Heap = (WCHAR *)RtlAllocateHeap(qword_18015BAA0, dword_18015B268, v11);
  PortName.Buffer = Heap;
  v13 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove(Heap, Src, v10 * 2);
  v14 = &v13[v10];
  *v14 = 92;
  v15 = v14 + 1;
  *(_OWORD *)v15 = xmmword_180114668;
  *((_QWORD *)v15 + 2) = 0x6F006900740063LL;
  v15[12] = 110;
  ObjectAttributes.Length = 48;
  PortName.Length = (_WORD)v15 - LOWORD(PortName.Buffer) + 26;
  ObjectAttributes.ObjectName = &PortName;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
  if ( v16 < 0 )
  {
    RtlFreeHeap(qword_18015BAA0, 0, PortName.Buffer);
    return (unsigned int)v16;
  }
  *(_QWORD *)v15 = 0x50006900700041LL;
  *((_DWORD *)v15 + 2) = 7471215;
  v15[6] = 116;
  PortName.Length = (_WORD)v15 - LOWORD(PortName.Buffer) + 14;
  SecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  MaximumSize.QuadPart = 0x10000LL;
  v17 = ZwCreateSection(&Handle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v17 < 0 )
    goto LABEL_23;
  ClientView.SectionHandle = Handle;
  ClientView.ViewSize = MaximumSize.LowPart;
  ClientView.Length = 48;
  ClientView.SectionOffset = 0;
  ServerView.Length = 24;
  ServerView.ViewSize = 0LL;
  ServerView.ViewBase = 0LL;
  ConnectionInformationLength = 48;
  *(_OWORD *)&ClientView.ViewBase = 0LL;
  if ( a4 != 8 )
    goto LABEL_19;
  if ( a2 == 1 )
  {
    v34 = *a3;
    v33 = 1LL;
  }
  else
  {
LABEL_19:
    HIDWORD(v33) = -1073741811;
  }
  v17 = ZwConnectPort(
          &PortHandle,
          &PortName,
          &SecurityQos,
          &ClientView,
          &ServerView,
          &MaxMessageLength,
          ConnectionInformation,
          &ConnectionInformationLength);
  ZwClose(Handle);
  if ( v17 < 0 )
  {
LABEL_23:
    v21 = SectionHandle;
  }
  else
  {
    v18 = SectionHandle;
    *a5 = HIDWORD(v33);
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v17 = ZwMapViewOfSection(
            v18,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewUnmap,
            0x500000u,
            2u);
    ZwClose(SectionHandle);
    SectionHandle = 0LL;
    if ( v17 >= 0 )
    {
      v19 = NtCurrentPeb();
      v19->CsrServerReadOnlySharedMemoryBase = ConnectionInformation[0];
      v19->ReadOnlySharedMemoryBase = BaseAddress;
      v19->ReadOnlyStaticServerData = (PVOID *)((char *)BaseAddress + ConnectionInformation[1]
                                                                    - ConnectionInformation[0]);
      qword_18015BA78 = ViewSize;
      qword_18015BA70 = ConnectionInformation[2];
      qword_18015BA80 = (char *)ClientView.ViewRemoteBase - (char *)ClientView.ViewBase;
      memset(Parameters, 0, sizeof(Parameters));
      Parameters[9] = WinSqmStartSqmOptinListener;
      LODWORD(Parameters[0]) = 96;
      Parameters[7] = 4096LL;
      Parameters[8] = ClientView.ViewSize;
      qword_18015BA90 = RtlCreateHeap(0x8000u, ClientView.ViewBase, ClientView.ViewSize, 1uLL, 0LL, Parameters);
      if ( qword_18015BA90 )
      {
        Flags = 0;
        return 0LL;
      }
      v17 = -1073741801;
    }
    ZwClose(PortHandle);
    v21 = SectionHandle;
    PortHandle = 0LL;
    if ( !SectionHandle )
      goto LABEL_25;
  }
  ZwClose(v21);
LABEL_25:
  RtlFreeHeap(qword_18015BAA0, 0, PortName.Buffer);
  return (unsigned int)v17;
}
