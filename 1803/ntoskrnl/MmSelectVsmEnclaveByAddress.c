/*
 * XREFs of MmSelectVsmEnclaveByAddress @ 0x140752E40
 * Callers:
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 */

__int64 __fastcall MmSelectVsmEnclaveByAddress(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  bool v8; // zf
  unsigned int v9; // ebx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v4 = MiObtainReferencedVadEx(a2, 0, (int *)&v10);
  if ( !v4 )
    return (unsigned int)v10;
  v8 = (*(_DWORD *)(v4 + 48) & 0x10000) == 0;
  v9 = -1073741800;
  LODWORD(v10) = -1073741800;
  if ( !v8 )
  {
    v5 = 1LL;
    if ( (*(_DWORD *)(v4 + 64) & 1) == 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v4 + 72) + 16LL)) <= 1 )
        __fastfail(0xEu);
      v9 = 0;
      *a3 = *(_QWORD *)(v4 + 72);
    }
  }
  MiUnlockAndDereferenceVad((PVOID)v4, v4, v5, v6);
  return v9;
}
