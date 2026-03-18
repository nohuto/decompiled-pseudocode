/*
 * XREFs of NtAlpcOpenSenderThread @ 0x140447D5C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047545C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     PsOpenThread @ 0x1404F33F0 (PsOpenThread.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(_QWORD *a1, void *a2, __int128 *a3, unsigned int a4, int a5, _OWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v11; // ebx
  PVOID v12; // rdi
  __int64 v13; // rcx
  _OWORD *v14; // r9
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v19; // [rsp+38h] [rbp-90h] BYREF
  int v20[2]; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v22; // [rsp+58h] [rbp-70h]
  __int64 v23; // [rsp+68h] [rbp-60h]
  int v24[4]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v25; // [rsp+80h] [rbp-48h]
  __int128 v26; // [rsp+90h] [rbp-38h]
  PVOID v27; // [rsp+A0h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v27 = Object;
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a1;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      AlpcpProbeAndCaptureMessageHeader(a3, &Source2, a4);
      if ( a6 < v14 )
        v14 = a6;
      *(_OWORD *)v24 = *v14;
      v25 = v14[1];
      v26 = v14[2];
      v12 = Object;
    }
    else
    {
      Source2 = *a3;
      v22 = a3[1];
      v23 = *((_QWORD *)a3 + 4);
      *(_OWORD *)v24 = *a6;
      v25 = a6[1];
      v26 = a6[2];
    }
    v11 = AlpcpLookupMessage(v12, DWORD2(v22), (unsigned int)v23, &v19);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v12);
    }
    else
    {
      v15 = v19;
      if ( (*(_DWORD *)(v19 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v19);
        ObfDereferenceObject(v12);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD *)(v19 + 32);
        if ( v16 && RtlCompareMemory((const void *)(v16 + 1592), (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v16);
          AlpcpUnlockMessage(v15);
          v11 = PsOpenThread((int)v20, a5, (int)v24, (int)&Source2 + 8, 0, PreviousMode);
          ObfDereferenceObject((PVOID)v16);
          ObfDereferenceObject(v12);
          if ( v11 >= 0 )
            *a1 = *(_QWORD *)v20;
        }
        else
        {
          AlpcpUnlockMessage(v15);
          ObfDereferenceObject(v12);
          v11 = -1073741790;
        }
      }
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
