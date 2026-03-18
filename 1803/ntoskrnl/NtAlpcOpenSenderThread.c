/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1404E032C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     PsOpenThread @ 0x1404D52E0 (PsOpenThread.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404DDD48 (AlpcpProbeAndCaptureMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(
        _QWORD *a1,
        void *a2,
        unsigned __int64 a3,
        int a4,
        ACCESS_MASK a5,
        _OWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  __int64 v12; // rcx
  _OWORD *v13; // r9
  PVOID v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  int v26[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+68h] [rbp-40h]
  int v30[4]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v31; // [rsp+80h] [rbp-28h]
  __int128 v32; // [rsp+90h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a1;
      *(_QWORD *)v12 = *(_QWORD *)v12;
      AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&Source2, a4);
      if ( a6 < v13 )
        v13 = a6;
      *(_OWORD *)v30 = *v13;
      v31 = v13[1];
      v32 = v13[2];
    }
    else
    {
      Source2 = *(_OWORD *)a3;
      v28 = *(_OWORD *)(a3 + 16);
      v29 = *(_QWORD *)(a3 + 32);
      *(_OWORD *)v30 = *a6;
      v31 = a6[1];
      v32 = a6[2];
    }
    v14 = Object;
    v11 = AlpcpLookupMessage((__int64)Object, DWORD2(v28), v29, &BugCheckParameter2);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v14);
    }
    else
    {
      v18 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2, v15, v16, v17);
        ObfDereferenceObject(v14);
        v11 = -1073740029;
      }
      else
      {
        v19 = *(_QWORD *)(BugCheckParameter2 + 32);
        if ( v19 && RtlCompareMemory((const void *)(v19 + 1592), (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v19);
          AlpcpUnlockMessage(v18, v20, v21, v22);
          v11 = PsOpenThread(
                  (unsigned __int64)v26,
                  a5,
                  (__int64)v30,
                  (__int128 *)((char *)&Source2 + 8),
                  0,
                  PreviousMode);
          ObfDereferenceObject((PVOID)v19);
          ObfDereferenceObject(v14);
          if ( v11 >= 0 )
            *a1 = *(_QWORD *)v26;
        }
        else
        {
          AlpcpUnlockMessage(v18, v15, v16, v17);
          ObfDereferenceObject(v14);
          v11 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
