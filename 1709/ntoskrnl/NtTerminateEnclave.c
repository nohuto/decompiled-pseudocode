/*
 * XREFs of NtTerminateEnclave @ 0x1406EA158
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiTerminateEnclave @ 0x1406E917C (MiTerminateEnclave.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  unsigned __int64 v5; // rax
  char *v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (Flags & 0xFFFFFFFA) != 0 )
    return -1073741584;
  v5 = MiObtainReferencedVad((unsigned __int64)BaseAddress, &v8);
  v6 = (char *)v5;
  if ( !v5 )
    return v8;
  if ( (*(_DWORD *)(v5 + 48) & 0x40000) != 0
    && (PVOID)((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12) == BaseAddress )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v5, Flags);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v6);
  return v7;
}
