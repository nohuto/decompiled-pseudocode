/*
 * XREFs of MiCreateEnclave @ 0x140751C18
 * Callers:
 *     NtCreateEnclave @ 0x140752ED0 (NtCreateEnclave.c)
 * Callees:
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiAllocateAweInfo @ 0x14074F6C8 (MiAllocateAweInfo.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 *     MiCreateHardwareEnclave @ 0x140751D24 (MiCreateHardwareEnclave.c)
 *     MiCreateVsmEnclave @ 0x140751EE4 (MiCreateVsmEnclave.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rbx
  int v19; // edi
  PVOID v20; // rdx
  int VsmEnclave; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  if ( a6 == 16 || *(_QWORD *)(a1 + 1032) || (result = MiAllocateAweInfo(), (int)result >= 0) )
  {
    EnclaveVad = MiAllocateEnclaveVad(a6, a4, *a2, a3, (__int64 *)P);
    v18 = P[0];
    v19 = EnclaveVad;
    if ( EnclaveVad >= 0 )
    {
      v20 = P[0];
      *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
      if ( a6 == 16 )
      {
        v18[11] = v18 + 10;
        v18[10] = v18 + 10;
        VsmEnclave = MiCreateVsmEnclave(a1, v20, a7, a8);
      }
      else
      {
        VsmEnclave = MiCreateHardwareEnclave(a1, (_DWORD)v20, a5, a7, a9);
      }
      v19 = VsmEnclave;
    }
    if ( v18 )
    {
      if ( v19 >= 0 )
        MiUnlockAndDereferenceVad(v18, v15, v16, v17);
      else
        MiDeleteVad((unsigned int *)v18, 0LL, 0);
    }
    return (unsigned int)v19;
  }
  return result;
}
