/*
 * XREFs of MiCreateEnclave @ 0x1406E8210
 * Callers:
 *     NtCreateEnclave @ 0x1406E9454 (NtCreateEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiAllocateAweInfo @ 0x1406E5194 (MiAllocateAweInfo.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 *     MiCreateHardwareEnclave @ 0x1406E8318 (MiCreateHardwareEnclave.c)
 *     MiCreateVsmEnclave @ 0x1406E8520 (MiCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateEnclave(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 result; // rax
  int EnclaveVad; // eax
  char *v15; // rbx
  int v16; // edi
  PVOID v17; // rdx
  int VsmEnclave; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  if ( a6 == 16 || *(_QWORD *)(a1 + 1032) || (result = MiAllocateAweInfo(), (int)result >= 0) )
  {
    EnclaveVad = MiAllocateEnclaveVad(a6, a4, *a2, a3, (__int64 *)P);
    v15 = (char *)P[0];
    v16 = EnclaveVad;
    if ( EnclaveVad >= 0 )
    {
      v17 = P[0];
      *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
      if ( a6 == 16 )
      {
        *((_QWORD *)v15 + 11) = v15 + 80;
        *((_QWORD *)v15 + 10) = v15 + 80;
        VsmEnclave = MiCreateVsmEnclave(a1, v17, a7, a8);
      }
      else
      {
        VsmEnclave = MiCreateHardwareEnclave(a1, (_DWORD)v17, a5, a7, a9);
      }
      v16 = VsmEnclave;
    }
    if ( v15 )
    {
      if ( v16 >= 0 )
        MiUnlockAndDereferenceVad(v15);
      else
        MiDeleteVad((__int64)v15, 0);
    }
    return (unsigned int)v16;
  }
  return result;
}
