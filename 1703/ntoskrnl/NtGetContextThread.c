/*
 * XREFs of NtGetContextThread @ 0x14044A668
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 */

NTSTATUS __stdcall NtGetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  int v2; // ebp
  KPROCESSOR_MODE PreviousMode; // si
  int ContextThreadInternal; // edi
  int v5; // r8d
  int v6; // r9d
  PVOID v7; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = (int)Context;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(
                            ThreadHandle,
                            8u,
                            (POBJECT_TYPE)PsThreadType,
                            PreviousMode,
                            &Object,
                            0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v7 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ContextThreadInternal = -1073741816;
    }
    else
    {
      LOBYTE(v6) = PreviousMode;
      LOBYTE(v5) = PreviousMode;
      ContextThreadInternal = PspGetContextThreadInternal((_DWORD)Object, v2, v5, v6, 1);
    }
    ObfDereferenceObject(v7);
  }
  return ContextThreadInternal;
}
