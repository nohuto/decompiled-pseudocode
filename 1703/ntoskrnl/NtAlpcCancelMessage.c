/*
 * XREFs of NtAlpcCancelMessage @ 0x14042F61C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCancelMessage(void *a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v6; // edi
  unsigned int v7; // r15d
  __int64 v8; // rsi
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  _DWORD *v11; // rdi
  bool v13; // zf
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v15; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
  }
  else
  {
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
    if ( v6 )
    {
      v9 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
      if ( v9 >= 0 )
      {
        v10 = v6;
        v11 = Object;
        v9 = AlpcpLookupMessage(Object, v10, v7, &v15);
        if ( v9 >= 0 )
        {
          if ( (a2 & 8) == 0
            || ((v11[104] & 6) != 4 ? (v13 = v8 == *(_QWORD *)(v15 + 112)) : (v13 = v8 == *(_QWORD *)(v15 + 104)), v13) )
          {
            if ( (*(_DWORD *)(v15 + 40) & 0x80u) != 0 )
            {
              AlpcpUnlockMessage(v15);
              v9 = -1073740029;
            }
            else
            {
              v9 = AlpcpCancelMessage(v11, v15, a2);
            }
          }
          else
          {
            AlpcpUnlockMessage(v15);
            v9 = -1073740007;
          }
        }
        ObfDereferenceObject(v11);
      }
    }
    else
    {
      v9 = -1073741559;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
