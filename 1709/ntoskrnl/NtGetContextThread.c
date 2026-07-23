/*
 * XREFs of NtGetContextThread @ 0x1405892A8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtGetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  KPROCESSOR_MODE PreviousMode; // si
  int ContextThreadInternal; // edi
  PVOID v5; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

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
    v5 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
      ContextThreadInternal = -1073741816;
    else
      ContextThreadInternal = PspGetContextThreadInternal(
                                (__int64)Object,
                                (__int64)Context,
                                PreviousMode,
                                PreviousMode,
                                1);
    ObfDereferenceObject(v5);
  }
  return ContextThreadInternal;
}
