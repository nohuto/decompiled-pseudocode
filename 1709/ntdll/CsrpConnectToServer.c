/*
 * XREFs of CsrpConnectToServer @ 0x18000699C
 * Callers:
 *     CsrClientConnectToServer @ 0x1800067D0 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtOpenSection @ 0x1800A07A0 (NtOpenSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     ZwConnectPort @ 0x1800A1450 (ZwConnectPort.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall CsrpConnectToServer(_WORD *Src, int a2, __int64 *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rbx
  SIZE_T v10; // r8
  wchar_t *Heap; // rax
  wchar_t *v12; // rdi
  size_t v13; // rbx
  wchar_t *v14; // rdi
  _WORD *v15; // rdi
  NTSTATUS v16; // ebx
  HANDLE v17; // rcx
  struct _PEB *v18; // rcx
  HANDLE v20; // rcx
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
  __int64 v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  _QWORD Parameters[12]; // [rsp+130h] [rbp+30h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+190h] [rbp+90h] BYREF

  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9 + 28;
  if ( v10 > 0xFFFF )
    return 3221225734LL;
  CsrPortName.MaximumLength = 2 * v9 + 28;
  Heap = (wchar_t *)RtlAllocateHeap(CsrHeap, NtdllBaseTag, v10);
  CsrPortName.Buffer = Heap;
  v12 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v13 = v9;
  memmove(Heap, Src, v13 * 2);
  v14 = &v12[v13];
  *v14 = 92;
  v15 = v14 + 1;
  *(_OWORD *)v15 = *(_OWORD *)L"SharedSection";
  *((_QWORD *)v15 + 2) = *(_QWORD *)L"ction";
  v15[12] = aSharedsection[12];
  ObjectAttributes.Length = 48;
  CsrPortName.Length = (_WORD)v15 - LOWORD(CsrPortName.Buffer) + 26;
  ObjectAttributes.ObjectName = &CsrPortName;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = NtOpenSection(&SectionHandle, 4u, &ObjectAttributes);
  if ( v16 >= 0 )
  {
    *(_QWORD *)v15 = *(_QWORD *)L"ApiPort";
    *((_DWORD *)v15 + 2) = *(_DWORD *)L"ort";
    v15[6] = aApiport[6];
    CsrPortName.Length = (_WORD)v15 - LOWORD(CsrPortName.Buffer) + 14;
    SecurityQos.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
    MaximumSize.QuadPart = 0x10000LL;
    v16 = NtCreateSection(&Handle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v16 < 0 )
      goto LABEL_22;
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
      goto LABEL_18;
    if ( a2 == 1 )
    {
      v33 = *a3;
      v32 = 1LL;
    }
    else
    {
LABEL_18:
      HIDWORD(v32) = -1073741811;
    }
    v16 = ZwConnectPort(
            &CsrPortHandle,
            &CsrPortName,
            &SecurityQos,
            &ClientView,
            &ServerView,
            &MaxMessageLength,
            ConnectionInformation,
            &ConnectionInformationLength);
    NtClose(Handle);
    if ( v16 < 0 )
    {
LABEL_22:
      v20 = SectionHandle;
    }
    else
    {
      v17 = SectionHandle;
      *a5 = HIDWORD(v32);
      BaseAddress = 0LL;
      ViewSize = 0LL;
      v16 = ZwMapViewOfSection(
              v17,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &BaseAddress,
              0LL,
              0LL,
              0LL,
              &ViewSize,
              ViewUnmap,
              0x500000u,
              2u);
      NtClose(SectionHandle);
      SectionHandle = 0LL;
      if ( v16 >= 0 )
      {
        v18 = NtCurrentPeb();
        v18->CsrServerReadOnlySharedMemoryBase = ConnectionInformation[0];
        v18->ReadOnlySharedMemoryBase = BaseAddress;
        v18->ReadOnlyStaticServerData = (void **)((char *)BaseAddress
                                                + ConnectionInformation[1]
                                                - ConnectionInformation[0]);
        CsrReadOnlySharedMemorySize = ViewSize;
        CsrProcessId = ConnectionInformation[2];
        CsrPortMemoryRemoteDelta = (char *)ClientView.ViewRemoteBase - (char *)ClientView.ViewBase;
        memset(Parameters, 0, sizeof(Parameters));
        Parameters[9] = WinSqmCheckEscalationSetString;
        LODWORD(Parameters[0]) = 96;
        Parameters[7] = 4096LL;
        Parameters[8] = ClientView.ViewSize;
        CsrPortHeap = RtlCreateHeap(0x8000u, ClientView.ViewBase, ClientView.ViewSize, 1uLL, 0LL, Parameters);
        if ( CsrPortHeap )
        {
          CsrPortBaseTag = 0;
          return 0LL;
        }
        v16 = -1073741801;
      }
      NtClose(CsrPortHandle);
      v20 = SectionHandle;
      CsrPortHandle = 0LL;
      if ( !SectionHandle )
        goto LABEL_24;
    }
    NtClose(v20);
  }
LABEL_24:
  RtlFreeHeap(CsrHeap, 0, CsrPortName.Buffer);
  return (unsigned int)v16;
}
