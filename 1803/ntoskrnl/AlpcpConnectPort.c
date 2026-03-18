/*
 * XREFs of AlpcpConnectPort @ 0x1404DA5F0
 * Callers:
 *     NtAlpcConnectPortEx @ 0x1404DE174 (NtAlpcConnectPortEx.c)
 *     NtAlpcConnectPort @ 0x140573DAC (NtAlpcConnectPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C7830 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
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
        void *a12,
        __int64 a13)
{
  _QWORD *v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  KPROCESSOR_MODE v19; // al
  _QWORD *v20; // r14
  int v21; // edi
  int v23; // [rsp+20h] [rbp-158h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PVOID Object[3]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v26; // [rsp+80h] [rbp-F8h] BYREF
  void *v27; // [rsp+88h] [rbp-F0h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+98h] [rbp-E0h]
  __int64 v30; // [rsp+A0h] [rbp-D8h]
  __int64 v31; // [rsp+A8h] [rbp-D0h]
  __int64 v32; // [rsp+B0h] [rbp-C8h]
  void *v33; // [rsp+B8h] [rbp-C0h]
  __int64 v34; // [rsp+C0h] [rbp-B8h]
  int v35[2]; // [rsp+C8h] [rbp-B0h]
  int v36[2]; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+D8h] [rbp-A0h]
  __int128 v38; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-88h]
  __int128 v40; // [rsp+100h] [rbp-78h]
  __int128 v41; // [rsp+110h] [rbp-68h]
  __int64 v42; // [rsp+120h] [rbp-58h]

  v29 = a4;
  v30 = a3;
  v31 = a2;
  v13 = (_QWORD *)a1;
  v37 = a1;
  Object[1] = a7;
  Object[2] = Src;
  *(_QWORD *)v36 = a9;
  *(_QWORD *)v35 = a10;
  v34 = a11;
  v33 = a12;
  v32 = a13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = (__int64)Src;
  v27 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v38 = *(_OWORD *)a5;
      v39 = *(_OWORD *)(a5 + 16);
      v40 = *(_OWORD *)(a5 + 32);
      v41 = *(_OWORD *)(a5 + 48);
      v42 = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  if ( a5 )
  {
    v16 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v38 = *(_OWORD *)v16;
    v39 = *(_OWORD *)(v16 + 16);
    v40 = *(_OWORD *)(v16 + 32);
    v41 = *(_OWORD *)(v16 + 48);
    v42 = *(_QWORD *)(v16 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid(Src, v23, 1, (__int64)&v26), ClientPort >= 0) )
  {
    if ( !a7
      || (ClientPort = SeCaptureSecurityDescriptor((__int64)a7, PreviousMode, PagedPool, 0, &v27), ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)Object,
                     a6 & 0xFFFF0000,
                     v31,
                     v30,
                     v29,
                     (unsigned __int64)&v38 & -(__int64)(a5 != 0),
                     (__int64)v27,
                     v26,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v19 = PreviousMode;
        if ( (a6 & 0x100000) != 0 )
          v19 = 1;
        v20 = Object[0];
        v21 = AlpcpProcessConnectionRequest(
                (__int64)Object[0],
                a6 & 0xFFFF0000,
                *(__int64 *)v36,
                *(unsigned __int64 **)v35,
                v34,
                (int *)v33,
                (LARGE_INTEGER *)v32,
                PreviousMode,
                v19);
        ClientPort = v21;
        if ( v21 == -1073741759 && (v20[52] & 0x100) != 0 )
          *v13 = v20[7];
        if ( !v21 )
          *v13 = Handle;
        ObfDereferenceObject(v20);
        if ( v21 )
          NtClose(Handle);
      }
    }
  }
  if ( v26 && (void *)v26 != Src )
  {
    LOBYTE(v18) = 1;
    LOBYTE(v17) = PreviousMode;
    SeReleaseSid(v26, v17, v18);
  }
  if ( v27 && v27 != a7 )
    SeReleaseSecurityDescriptor(v27, PreviousMode, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)ClientPort;
}
