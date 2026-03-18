/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1404751D8
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047545C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     PsOpenProcess @ 0x14050F290 (PsOpenProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(_QWORD *a1, void *a2, __int128 *a3, unsigned int a4, int a5, __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v11; // ebx
  PVOID v12; // rdi
  __int64 v13; // rcx
  __int128 *v14; // r9
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rsi
  __int64 v19; // rsi
  signed __int64 *v20; // rbx
  PVOID v21; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v23[2]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v24; // [rsp+48h] [rbp-80h] BYREF
  __int128 Source2; // [rsp+50h] [rbp-78h] BYREF
  __int128 v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+70h] [rbp-58h]
  __int128 v28; // [rsp+78h] [rbp-50h] BYREF
  __int128 v29; // [rsp+88h] [rbp-40h]
  __int128 v30; // [rsp+98h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v23[1] = (ULONG_PTR)Object;
  if ( v11 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a1;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    AlpcpProbeAndCaptureMessageHeader(a3, &Source2, a4);
    if ( a6 < v14 )
      v14 = a6;
    v28 = *v14;
    v29 = v14[1];
    v30 = v14[2];
    v12 = Object;
  }
  else
  {
    Source2 = *a3;
    v26 = a3[1];
    v27 = *((_QWORD *)a3 + 4);
    v28 = *a6;
    v29 = a6[1];
    v30 = a6[2];
  }
  v11 = AlpcpLookupMessage(v12, DWORD2(v26), (unsigned int)v27, v23);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v12);
    goto LABEL_15;
  }
  v15 = v23[0];
  if ( (*(_DWORD *)(v23[0] + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v23[0]);
    ObfDereferenceObject(v12);
    v11 = -1073740029;
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(v23[0] + 32);
  if ( v16 )
  {
    if ( RtlCompareMemory((const void *)(v16 + 1592), (char *)&Source2 + 8, 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v15);
      ObfDereferenceObject(v12);
      v11 = -1073741813;
      goto LABEL_15;
    }
    v17 = *(_QWORD **)(v16 + 544);
    ObfReferenceObjectWithTag(v17, 0x63706C41u);
    goto LABEL_13;
  }
  v19 = *(_QWORD *)(v23[0] + 24);
  if ( !v19 )
  {
    AlpcpUnlockMessage(v23[0]);
    v21 = v12;
    goto LABEL_28;
  }
  v20 = (signed __int64 *)(v19 + 352);
  ExAcquirePushLockSharedEx(v19 + 352, 0LL);
  if ( (*(_DWORD *)(v19 + 416) & 0x40) == 0 )
  {
    v17 = *(_QWORD **)(v19 + 24);
    if ( v17[92] == *((_QWORD *)&Source2 + 1) )
    {
      ObfReferenceObjectWithTag(v17, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      v15 = v23[0];
      v12 = Object;
LABEL_13:
      AlpcpUnlockMessage(v15);
      v11 = PsOpenProcess((unsigned int)&v24, a5, (unsigned int)&v28, (unsigned int)&Source2 + 8, 0, PreviousMode);
      ObfDereferenceObjectWithTag(v17, 0x63706C41u);
      ObfDereferenceObject(v12);
      if ( v11 >= 0 )
        *a1 = v24;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    KeAbPostRelease((ULONG_PTR)v20);
    AlpcpUnlockMessage(v23[0]);
    v21 = Object;
LABEL_28:
    ObfDereferenceObject(v21);
    v11 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v19 + 352));
  KeAbPostRelease(v19 + 352);
  AlpcpUnlockMessage(v23[0]);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_15:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
