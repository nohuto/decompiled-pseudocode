/*
 * XREFs of NtSecureConnectPort @ 0x140470F8C
 * Callers:
 *     NtConnectPort @ 0x140470F40 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x140688C40 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14047153C (AlpcpReceiveLegacyConnectionReply.c)
 *     SeReleaseSid @ 0x140471664 (SeReleaseSid.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404748C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140474A80 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     AlpcpLogConnectFail @ 0x1406B27BC (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406B281C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1406B2880 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSecureConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PSID ServerSid,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  PSID v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  int ClientPort; // r15d
  _DWORD *v24; // r15
  int v25; // edi
  ULONG_PTR v26; // r13
  unsigned int v27; // r12d
  int v29; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v30; // [rsp+48h] [rbp-180h]
  char PreviousMode; // [rsp+60h] [rbp-168h]
  NTSTATUS v32; // [rsp+64h] [rbp-164h]
  ULONG v33; // [rsp+68h] [rbp-160h] BYREF
  __int64 v34; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-148h] BYREF
  PHANDLE v37; // [rsp+88h] [rbp-140h]
  PVOID Object; // [rsp+90h] [rbp-138h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-130h] BYREF
  PUNICODE_STRING v40; // [rsp+A0h] [rbp-128h]
  ULONG_PTR v41; // [rsp+A8h] [rbp-120h] BYREF
  PULONG v42; // [rsp+B0h] [rbp-118h]
  PULONG v43; // [rsp+B8h] [rbp-110h]
  struct _REMOTE_PORT_VIEW v44; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v45[3]; // [rsp+D8h] [rbp-F0h] BYREF
  _QWORD v46[8]; // [rsp+110h] [rbp-B8h] BYREF
  _WORD v47[20]; // [rsp+150h] [rbp-78h] BYREF
  __int64 v48; // [rsp+178h] [rbp-50h] BYREF
  int v49; // [rsp+180h] [rbp-48h]

  v40 = PortName;
  v37 = PortHandle;
  v43 = MaxMessageLength;
  Address = ConnectionInformation;
  v42 = ConnectionInformationLength;
  memset(v46, 0, sizeof(v46));
  memset(v47, 0, sizeof(v47));
  v33 = 0;
  v48 = 0LL;
  v49 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v33 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v45[0] = *(__m128i *)&ClientView->Length;
      v45[1] = *(__m128i *)&ClientView->SectionOffset;
      v45[2] = *(__m128i *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v48 = *(_QWORD *)&SecurityQos->Length;
      v49 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v34 = (__int64)ServerSid;
LABEL_40:
    v30 = (unsigned __int64)&v48 & -(__int64)(SecurityQos != 0LL);
    v20 = (PSID)v34;
    ClientPort = AlpcpCreateClientPort(
                   (unsigned int)&Handle,
                   (unsigned int)&Object,
                   0,
                   (_DWORD)v40,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   v34,
                   v30,
                   1);
    v32 = ClientPort;
    if ( v20 != ServerSid )
    {
      LOBYTE(v22) = 1;
      LOBYTE(v21) = PreviousMode;
      SeReleaseSid(v20, v21, v22);
    }
    if ( ClientPort >= 0 )
    {
      v47[0] = v33;
      v24 = Object;
      v25 = AlpcpFormatConnectionRequest(
              (unsigned int)&v41,
              0,
              (_DWORD)Object,
              (_DWORD)Address,
              (__int64)v47,
              0LL,
              (unsigned __int64)v45 & -(__int64)(ClientView != 0LL),
              (__int64)&BugCheckParameter2,
              1,
              PreviousMode);
      v32 = v25;
      if ( v25 >= 0 )
      {
        v26 = v41;
        v27 = *(_DWORD *)(v41 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v41);
        v46[0] = v24;
        v46[1] = v26;
        LODWORD(v46[6]) = 0x20000;
        v25 = AlpcpDispatchConnectionRequest(v46);
        v32 = v25;
        if ( v25 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v27, (unsigned int)v25);
          AlpcpUnlockMessage(v26);
        }
        else
        {
          v25 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v46,
                  (_DWORD)Address,
                  (unsigned int)&v33,
                  BugCheckParameter2,
                  (unsigned __int64)v45 & -(__int64)(ClientView != 0LL),
                  (unsigned __int64)&v44 & -(__int64)(ServerView != 0LL));
          v32 = v25;
          if ( v25 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v27, (unsigned int)v25);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v27);
            *v37 = Handle;
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v45[0];
              *(__m128i *)&ClientView->SectionOffset = v45[1];
              *(__m128i *)&ClientView->ViewBase = v45[2];
            }
            if ( ServerView )
              *ServerView = v44;
            if ( v42 )
              *v42 = v33;
            if ( v43 )
              *v43 = v24[68];
          }
        }
      }
      ObfDereferenceObject(v24);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2);
      if ( v25 )
        NtClose(Handle);
    }
    goto LABEL_62;
  }
  v12 = (__int64)v37;
  if ( (unsigned __int64)v37 >= 0x7FFFFFFF0000LL )
    v12 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v12 = *(_QWORD *)v12;
  if ( ConnectionInformationLength )
  {
    v13 = (__int64)ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v33 = *(_DWORD *)v13;
    ProbeForWrite(Address, v33, 1u);
  }
  if ( ClientView )
  {
    v14 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    v45[0] = *(__m128i *)v14;
    v45[1] = *(__m128i *)(v14 + 16);
    v45[2] = *(__m128i *)(v14 + 32);
    if ( _mm_cvtsi128_si32(v45[0]) != 48 )
    {
      v32 = -1073741811;
      goto LABEL_62;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v15 = *(_BYTE *)v15;
    *(_BYTE *)(v15 + 47) = *(_BYTE *)(v15 + 47);
  }
  if ( ServerView )
  {
    v16 = (__int64)ServerView;
    if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    if ( *(_DWORD *)v16 != 24 )
    {
      v32 = -1073741811;
      goto LABEL_62;
    }
    if ( ((unsigned __int8)ServerView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (__int64)ServerView;
    if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v17 = *(_BYTE *)v17;
    *(_BYTE *)(v17 + 23) = *(_BYTE *)(v17 + 23);
  }
  if ( MaxMessageLength )
  {
    v18 = (__int64)MaxMessageLength;
    if ( (unsigned __int64)MaxMessageLength >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  if ( SecurityQos )
  {
    v19 = (__int64)SecurityQos;
    if ( (unsigned __int64)SecurityQos >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    v48 = *(_QWORD *)v19;
    v49 = *(_DWORD *)(v19 + 8);
  }
  v34 = (__int64)ServerSid;
  if ( !ServerSid )
    goto LABEL_40;
  v32 = SeCaptureSid(ServerSid, v29, 1, (__int64)&v34);
  if ( v32 >= 0 )
    goto LABEL_40;
LABEL_62:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v32;
}
