/*
 * XREFs of AlpcpSetOwnerProcessPort @ 0x140476CEC
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x140445648 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerProcessPort(__int64 a1, _DWORD *a2)
{
  PEPROCESS Process; // rbx
  LONG_PTR result; // rax

  if ( a2 && (*a2 & 0x100000) != 0 )
    Process = PsInitialSystemProcess;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  result = ObfReferenceObjectWithTag(Process, 0x63706C41u);
  *(_QWORD *)(a1 + 24) = Process;
  return result;
}
