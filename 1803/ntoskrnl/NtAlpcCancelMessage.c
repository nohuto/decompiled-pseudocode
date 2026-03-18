/*
 * XREFs of NtAlpcCancelMessage @ 0x140582FB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCancelMessage(void *a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v6; // edi
  int v7; // r15d
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 4) != 0 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = *(_DWORD *)(a3 + 12);
      v7 = *(_DWORD *)(a3 + 16);
      v8 = *(unsigned int *)(a3 + 4);
    }
    else
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = *(_DWORD *)(a3 + 20);
      v7 = *(_DWORD *)(a3 + 24);
      v8 = *(_QWORD *)(a3 + 8);
    }
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 20);
    v7 = *(_DWORD *)(a3 + 24);
    v8 = *(_QWORD *)(a3 + 8);
  }
  if ( !v6 )
  {
    v9 = -1073741559;
    goto LABEL_17;
  }
  v9 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = v6;
    v11 = Object;
    v9 = AlpcpLookupMessage((__int64)Object, v10, v7, &BugCheckParameter2);
    if ( v9 >= 0 )
    {
      if ( (a2 & 8) == 0 )
        goto LABEL_14;
      if ( (v11[104] & 6) == 4 )
      {
        if ( v8 == *(_QWORD *)(BugCheckParameter2 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2, v12, v13, v14);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v11, BugCheckParameter2, a2);
          }
          goto LABEL_16;
        }
      }
      else if ( v8 == *(_QWORD *)(BugCheckParameter2 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(BugCheckParameter2, v12, v13, v14);
      v9 = -1073740007;
    }
LABEL_16:
    ObfDereferenceObject(v11);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
