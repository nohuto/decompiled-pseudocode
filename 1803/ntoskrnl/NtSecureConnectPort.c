/*
 * XREFs of NtSecureConnectPort @ 0x1404DF490
 * Callers:
 *     NtConnectPort @ 0x1404DFB70 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x1407198D0 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404DDDF4 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1404DFA3C (AlpcpReceiveLegacyConnectionReply.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     AlpcpLogConnectFail @ 0x1407493F4 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140749454 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407494B8 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  int v23; // r15d
  _DWORD *v24; // r15
  int v25; // edi
  ULONG_PTR v26; // r13
  unsigned int v27; // r12d
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  int v34; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v35; // [rsp+48h] [rbp-180h]
  char PreviousMode; // [rsp+60h] [rbp-168h]
  NTSTATUS v37; // [rsp+64h] [rbp-164h]
  ULONG v38; // [rsp+68h] [rbp-160h] BYREF
  __int64 v39; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-148h] BYREF
  __int64 v42; // [rsp+88h] [rbp-140h]
  PHANDLE v43; // [rsp+90h] [rbp-138h]
  PVOID Object; // [rsp+98h] [rbp-130h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-128h] BYREF
  ULONG_PTR v46; // [rsp+A8h] [rbp-120h] BYREF
  PULONG v47; // [rsp+B0h] [rbp-118h]
  PULONG v48; // [rsp+B8h] [rbp-110h]
  struct _REMOTE_PORT_VIEW v49; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v50[3]; // [rsp+D8h] [rbp-F0h] BYREF
  _QWORD v51[8]; // [rsp+110h] [rbp-B8h] BYREF
  unsigned __int16 v52[20]; // [rsp+150h] [rbp-78h] BYREF
  __int64 v53; // [rsp+178h] [rbp-50h] BYREF
  int v54; // [rsp+180h] [rbp-48h]

  v42 = (__int64)PortName;
  v43 = PortHandle;
  v48 = MaxMessageLength;
  Address = ConnectionInformation;
  v47 = ConnectionInformationLength;
  memset(v51, 0, sizeof(v51));
  memset(v52, 0, sizeof(v52));
  v38 = 0;
  v53 = 0LL;
  v54 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(v50, 0, sizeof(v50));
  memset(&v49, 0, sizeof(v49));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v38 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v50[0] = *(__m128i *)&ClientView->Length;
      v50[1] = *(__m128i *)&ClientView->SectionOffset;
      v50[2] = *(__m128i *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v53 = *(_QWORD *)&SecurityQos->Length;
      v54 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v39 = (__int64)ServerSid;
LABEL_40:
    v35 = (unsigned __int64)&v53 & -(__int64)(SecurityQos != 0LL);
    v20 = (PSID)v39;
    v23 = AlpcpCreateClientPort((__int64 *)&Handle, &Object, 0, v42, 0LL, 0LL, 0LL, 0LL, v39, v35, 1);
    v37 = v23;
    if ( v20 != ServerSid )
    {
      LOBYTE(v22) = 1;
      LOBYTE(v21) = PreviousMode;
      SeReleaseSid(v20, v21, v22);
    }
    if ( v23 >= 0 )
    {
      v52[0] = v38;
      v42 = (unsigned __int64)v50 & -(__int64)(ClientView != 0LL);
      v24 = Object;
      v25 = AlpcpFormatConnectionRequest(
              &v46,
              0,
              Object,
              (__int64)Address,
              v52,
              0LL,
              v42,
              &BugCheckParameter2,
              1,
              PreviousMode);
      v37 = v25;
      if ( v25 >= 0 )
      {
        v26 = v46;
        v27 = *(_DWORD *)(v46 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v46);
        v51[0] = v24;
        v51[1] = v26;
        LODWORD(v51[6]) = 0x20000;
        v28 = AlpcpDispatchConnectionRequest((__int64)v51);
        v25 = v28;
        v37 = v28;
        if ( v28 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v27, (unsigned int)v28);
          AlpcpUnlockMessage(v26, v29, v30, v31);
        }
        else
        {
          v32 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v51,
                  (_DWORD)Address,
                  (unsigned int)&v38,
                  BugCheckParameter2,
                  v42,
                  (unsigned __int64)&v49 & -(__int64)(ServerView != 0LL));
          v25 = v32;
          v37 = v32;
          if ( v32 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v27, v32);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v27);
            *v43 = Handle;
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v50[0];
              *(__m128i *)&ClientView->SectionOffset = v50[1];
              *(__m128i *)&ClientView->ViewBase = v50[2];
            }
            if ( ServerView )
              *ServerView = v49;
            if ( v47 )
              *v47 = v38;
            if ( v48 )
              *v48 = v24[68];
          }
        }
      }
      ObfDereferenceObject(v24);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
      if ( v25 )
        NtClose(Handle);
    }
    goto LABEL_62;
  }
  v12 = (__int64)v43;
  if ( (unsigned __int64)v43 >= 0x7FFFFFFF0000LL )
    v12 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v12 = *(_QWORD *)v12;
  if ( ConnectionInformationLength )
  {
    v13 = (__int64)ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v38 = *(_DWORD *)v13;
    ProbeForWrite(Address, v38, 1u);
  }
  if ( ClientView )
  {
    v14 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    v50[0] = *(__m128i *)v14;
    v50[1] = *(__m128i *)(v14 + 16);
    v50[2] = *(__m128i *)(v14 + 32);
    if ( _mm_cvtsi128_si32(v50[0]) != 48 )
    {
      v37 = -1073741811;
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
      v37 = -1073741811;
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
    v53 = *(_QWORD *)v19;
    v54 = *(_DWORD *)(v19 + 8);
  }
  v39 = (__int64)ServerSid;
  if ( !ServerSid )
    goto LABEL_40;
  v37 = SeCaptureSid(ServerSid, v34, 1, (__int64)&v39);
  if ( v37 >= 0 )
    goto LABEL_40;
LABEL_62:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v37;
}
