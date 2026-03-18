/*
 * XREFs of MiStoreEvictThread @ 0x14017ED50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     MiStoreEvictPageFile @ 0x140072CD4 (MiStoreEvictPageFile.c)
 *     KiInitializeTimer2 @ 0x14008605C (KiInitializeTimer2.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *P)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // r8
  int v5; // r15d
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  KIRQL v9; // bl
  _QWORD v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v14; // [rsp+C2h] [rbp-3Eh]

  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = P[8];
  v3 = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v2 )
  {
    v14 = 0;
    KiInitializeTimer2((__int64)v13, 0LL, 0LL, 8);
    v10[1] = -1LL;
    v10[0] = v4;
    KeSetTimer2((__int64)v13, -600000000LL, 600000000LL, (__int64)v10);
    Object[1] = v13;
    Object[0] = (PVOID)(v3 + 1184);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent((PRKEVENT)(v3 + 1184));
      while ( 1 )
      {
        v5 = *(_DWORD *)(v3 + 1152);
        v6 = 0;
        v7 = *(_DWORD *)(v3 + 6872);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v3 + 8LL * v6 + 6880);
            if ( (*(_BYTE *)(v8 + 204) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8LL * v6 + 6880));
              if ( *(_DWORD *)(v8 + 200) >= 0x100u )
                --v6;
            }
            ++v6;
          }
          while ( v6 < v7 );
        }
        v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1168));
        if ( v5 == *(_DWORD *)(v3 + 1152) )
          break;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1168));
        __writecr8(v9);
      }
      if ( v5 )
      {
        *(_DWORD *)(v3 + 1152) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1232), 0, 0);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1168));
      __writecr8(v9);
    }
  }
}
