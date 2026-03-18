/*
 * XREFs of NtTerminateEnclave @ 0x140753BEC
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiTerminateEnclave @ 0x140752D34 (MiTerminateEnclave.c)
 */

__int64 __fastcall NtTerminateEnclave(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 0xFFFFFFFA) != 0 )
    return 3221225712LL;
  v5 = MiObtainReferencedVadEx(a1, 0, (int *)&v11);
  v9 = (void *)v5;
  if ( !v5 )
    return v11;
  if ( (*(_DWORD *)(v5 + 48) & 0x10000) != 0
    && (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12 == a1 )
  {
    v10 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v5, a2, v8);
  }
  else
  {
    v10 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v9, v6, v7, v8);
  return v10;
}
