/*
 * XREFs of MiInitializeEnclave @ 0x1406E8970
 * Callers:
 *     NtInitializeEnclave @ 0x1406E9854 (NtInitializeEnclave.c)
 * Callees:
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     KeInitializeEnclave @ 0x1406D8174 (KeInitializeEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1406E9118 (MiReturnReservedEnclavePages.c)
 *     PsDereferenceVsmEnclave @ 0x14071BE9C (PsDereferenceVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14071BEF4 (PsInitializeVsmEnclave.c)
 */

__int64 __fastcall MiInitializeEnclave(unsigned __int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rsi
  int v11; // edi
  int v12; // eax
  volatile signed __int64 *v13; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  int v15; // [rsp+20h] [rbp-28h]
  _DWORD v16[6]; // [rsp+30h] [rbp-18h] BYREF

  v7 = MiObtainReferencedVad(a1, v16);
  v9 = v7;
  if ( !v7 )
    return v16[0];
  if ( (*(_DWORD *)(v7 + 48) & 0x40000) != 0 )
  {
    v12 = *(_DWORD *)(v7 + 64);
    if ( (v12 & 2) != 0 )
    {
      v11 = -1073740528;
    }
    else
    {
      if ( (v12 & 1) != 0 )
      {
        if ( a3 == 4096 )
        {
          v11 = KeInitializeEnclave(
                  (__int64)(*(_QWORD *)(v9 + 72) << 25) >> 16,
                  (__int64)a2,
                  v8,
                  (__int64)(a2 + 512),
                  v15,
                  a4);
          if ( v11 >= 0 )
          {
            MiReturnReservedEnclavePages(v9);
            *(_DWORD *)(v9 + 64) |= 2u;
            v11 = 0;
          }
          goto LABEL_17;
        }
      }
      else if ( a3 == 8 && *a2 == 8 )
      {
        v13 = *(volatile signed __int64 **)(v9 + 72);
        if ( _InterlockedIncrement64(v13 + 2) <= 1 )
          __fastfail(0xEu);
        CurrentThread = KeGetCurrentThread();
        MiUnlockVad((__int64)CurrentThread, v9);
        v11 = PsInitializeVsmEnclave(v13, (unsigned int)a2[1]);
        PsDereferenceVsmEnclave((PVOID)v13);
        MiLockVad((__int64)CurrentThread, v9);
        goto LABEL_17;
      }
      v11 = -1073741820;
    }
  }
  else
  {
    v11 = -1073741800;
  }
LABEL_17:
  MiUnlockAndDereferenceVad((char *)v9);
  return (unsigned int)v11;
}
