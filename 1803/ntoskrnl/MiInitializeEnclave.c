/*
 * XREFs of MiInitializeEnclave @ 0x1407523EC
 * Callers:
 *     NtInitializeEnclave @ 0x1407532E8 (NtInitializeEnclave.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     KeInitializeEnclave @ 0x1407420D8 (KeInitializeEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140752CD4 (MiReturnReservedEnclavePages.c)
 *     PsDereferenceVsmEnclave @ 0x14077F9C8 (PsDereferenceVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14077FA20 (PsInitializeVsmEnclave.c)
 */

__int64 __fastcall MiInitializeEnclave(unsigned __int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v13; // edi
  int v14; // eax
  volatile signed __int64 *v15; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  int v17; // [rsp+20h] [rbp-28h]
  unsigned int v18[6]; // [rsp+30h] [rbp-18h] BYREF

  v7 = MiObtainReferencedVadEx(a1, 0, (int *)v18);
  v11 = v7;
  if ( !v7 )
    return v18[0];
  if ( (*(_DWORD *)(v7 + 48) & 0x10000) != 0 )
  {
    v14 = *(_DWORD *)(v7 + 64);
    if ( (v14 & 2) != 0 )
    {
      v13 = -1073740528;
    }
    else
    {
      if ( (v14 & 1) != 0 )
      {
        if ( a3 == 4096 )
        {
          v13 = KeInitializeEnclave(
                  (__int64)(*(_QWORD *)(v11 + 80) << 25) >> 16,
                  (__int64)a2,
                  v9,
                  (__int64)(a2 + 512),
                  v17,
                  a4);
          if ( v13 >= 0 )
          {
            MiReturnReservedEnclavePages(v11, -1LL);
            *(_DWORD *)(v11 + 64) |= 2u;
            v13 = 0;
          }
          goto LABEL_17;
        }
      }
      else if ( a3 == 8 && *a2 == 8 )
      {
        v15 = *(volatile signed __int64 **)(v11 + 72);
        if ( _InterlockedIncrement64(v15 + 2) <= 1 )
          __fastfail(0xEu);
        CurrentThread = KeGetCurrentThread();
        MiUnlockVad((__int64)CurrentThread, v11, v9, v10);
        v13 = PsInitializeVsmEnclave(v15, (unsigned int)a2[1]);
        PsDereferenceVsmEnclave((PVOID)v15);
        MiLockVad((__int64)CurrentThread, v11);
        goto LABEL_17;
      }
      v13 = -1073741820;
    }
  }
  else
  {
    v13 = -1073741800;
  }
LABEL_17:
  MiUnlockAndDereferenceVad((PVOID)v11, v8, v9, v10);
  return (unsigned int)v13;
}
