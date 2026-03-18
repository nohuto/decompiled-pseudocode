/*
 * XREFs of NtOpenKeyedEvent @ 0x140720F3C
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtOpenKeyedEvent(PHANDLE OutHandle, ACCESS_MASK AccessMask, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // r8
  NTSTATUS result; // eax
  void *v7; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)OutHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *OutHandle = 0LL;
  result = ObOpenObjectByName(v3, (int)ExpKeyedEventObjectType, PreviousMode, 0, AccessMask, 0LL, (__int64)&v7);
  if ( result >= 0 )
    *OutHandle = v7;
  return result;
}
