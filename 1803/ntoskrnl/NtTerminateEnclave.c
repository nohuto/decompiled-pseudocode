/*
 * XREFs of NtTerminateEnclave @ 0x140753BEC
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiTerminateEnclave @ 0x140752D34 (MiTerminateEnclave.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rdi
  NTSTATUS v10; // ebx
  NTSTATUS v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (Flags & 0xFFFFFFFA) != 0 )
    return -1073741584;
  v5 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v11);
  v9 = (void *)v5;
  if ( !v5 )
    return v11;
  if ( (*(_DWORD *)(v5 + 48) & 0x10000) != 0
    && (PVOID)((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12) == BaseAddress )
  {
    v10 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v5, Flags, v8);
  }
  else
  {
    v10 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v9, v6, v7, v8);
  return v10;
}
