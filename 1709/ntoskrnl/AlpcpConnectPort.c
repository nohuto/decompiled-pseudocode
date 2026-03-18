/*
 * XREFs of AlpcpConnectPort @ 0x14046378C
 * Callers:
 *     NtAlpcConnectPort @ 0x140460A98 (NtAlpcConnectPort.c)
 *     NtAlpcConnectPortEx @ 0x140460D8C (NtAlpcConnectPortEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeReleaseSid @ 0x140460948 (SeReleaseSid.c)
 *     AlpcpCreateClientPort @ 0x140465D6C (AlpcpCreateClientPort.c)
 *     AlpcpProcessConnectionRequest @ 0x14046750C (AlpcpProcessConnectionRequest.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 */

__int64 __fastcall AlpcpConnectPort(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        void *a7,
        void *Src,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _QWORD *v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned int v16; // r14d
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  char v19; // al
  __int64 v20; // rdx
  _QWORD *v21; // r14
  int v22; // edi
  int v24; // [rsp+20h] [rbp-158h]
  int v25; // [rsp+38h] [rbp-140h]
  int v26; // [rsp+40h] [rbp-138h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PVOID Object[3]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v29; // [rsp+80h] [rbp-F8h] BYREF
  void *v30; // [rsp+88h] [rbp-F0h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+98h] [rbp-E0h]
  __int64 v33; // [rsp+A0h] [rbp-D8h]
  __int64 v34; // [rsp+A8h] [rbp-D0h]
  __int64 v35; // [rsp+B0h] [rbp-C8h]
  __int64 v36; // [rsp+B8h] [rbp-C0h]
  __int64 v37; // [rsp+C0h] [rbp-B8h]
  __int64 v38; // [rsp+C8h] [rbp-B0h]
  __int64 v39; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+D8h] [rbp-A0h]
  __int128 v41; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v42; // [rsp+F0h] [rbp-88h]
  __int128 v43; // [rsp+100h] [rbp-78h]
  __int128 v44; // [rsp+110h] [rbp-68h]
  __int64 v45; // [rsp+120h] [rbp-58h]

  v32 = a4;
  v33 = a3;
  v34 = a2;
  v13 = (_QWORD *)a1;
  v40 = a1;
  Object[1] = a7;
  Object[2] = Src;
  v39 = a9;
  v38 = a10;
  v37 = a11;
  v36 = a12;
  v35 = a13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = a6 & 0xFFFF0000;
  v29 = (__int64)Src;
  v30 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v41 = *(_OWORD *)a5;
      v42 = *(_OWORD *)(a5 + 16);
      v43 = *(_OWORD *)(a5 + 32);
      v44 = *(_OWORD *)(a5 + 48);
      v45 = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  LODWORD(v17) = -65536;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  if ( a5 )
  {
    v18 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    v41 = *(_OWORD *)v18;
    v42 = *(_OWORD *)(v18 + 16);
    v43 = *(_OWORD *)(v18 + 32);
    v44 = *(_OWORD *)(v18 + 48);
    v45 = *(_QWORD *)(v18 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid(Src, v24, 1, (__int64)&v29), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(v17) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor((_DWORD)a7, v17, 1, 0, (__int64)&v30),
          ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)Object,
                     v16,
                     v34,
                     v33,
                     v32,
                     (unsigned __int64)&v41 & -(__int64)(a5 != 0),
                     (__int64)v30,
                     v29,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v19 = PreviousMode;
        if ( (a6 & 0x100000) != 0 )
          v19 = 1;
        LOBYTE(v26) = v19;
        LOBYTE(v25) = PreviousMode;
        v20 = v16;
        v21 = Object[0];
        v22 = AlpcpProcessConnectionRequest(Object[0], v20, v39, v38, v37, v36, v35, v25, v26);
        ClientPort = v22;
        if ( v22 == -1073741759 && (v21[52] & 0x100) != 0 )
          *v13 = v21[7];
        if ( !v22 )
          *v13 = Handle;
        ObfDereferenceObject(v21);
        if ( v22 )
          NtClose(Handle);
      }
    }
  }
  if ( v29 && (void *)v29 != Src )
    SeReleaseSid((void *)v29, PreviousMode, 1);
  if ( v30 && v30 != a7 )
  {
    LOBYTE(v17) = PreviousMode;
    SeReleaseSecurityDescriptor(v30, v17, 0LL);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)ClientPort;
}
