/*
 * XREFs of MiInitializeEnclave @ 0x1406BBAD0
 * Callers:
 *     NtInitializeEnclave @ 0x1406BC21C (NtInitializeEnclave.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     KeInitializeEnclave @ 0x1406ACE8C (KeInitializeEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1406BBDE0 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiInitializeEnclave(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int *v5; // rax
  __int64 v6; // r8
  unsigned int *v7; // rdi
  int v9; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  v5 = MiObtainReferencedVad(a1, &v11);
  v7 = v5;
  if ( !v5 )
    return v11;
  if ( (v5[12] & 7) == 3 && (v5[12] & 0x40000) != 0 && (v5[22] & 1) == 0 )
  {
    v9 = KeInitializeEnclave((__int64)(*((_QWORD *)v5 + 8) << 25) >> 16, a2, v6, a2 + 2048, v10, a3);
    if ( v9 >= 0 )
    {
      MiReturnReservedEnclavePages(v7);
      v7[22] |= 1u;
      v9 = 0;
    }
  }
  else
  {
    v9 = -1073741800;
  }
  MiUnlockAndDereferenceVad((char *)v7);
  return (unsigned int)v9;
}
