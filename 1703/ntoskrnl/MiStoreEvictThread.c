/*
 * XREFs of MiStoreEvictThread @ 0x1401687C0
 * Callers:
 *     <none>
 * Callees:
 *     MiStoreEvictPageFile @ 0x1400320B4 (MiStoreEvictPageFile.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KiInitializeTimer2 @ 0x14012A6A0 (KiInitializeTimer2.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
    Object[0] = (PVOID)(v3 + 1224);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent((PRKEVENT)(v3 + 1224));
      while ( 1 )
      {
        v5 = *(_DWORD *)(v3 + 1200);
        v6 = 0;
        v7 = *(_DWORD *)(v3 + 5592);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v3 + 8LL * v6 + 5600);
            if ( (*(_BYTE *)(v8 + 204) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8LL * v6 + 5600));
              if ( *(_DWORD *)(v8 + 200) >= 0x100u )
                --v6;
            }
            ++v6;
          }
          while ( v6 < v7 );
        }
        v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1212));
        if ( v5 == *(_DWORD *)(v3 + 1200) )
          break;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1212));
        __writecr8(v9);
      }
      if ( v5 )
      {
        *(_DWORD *)(v3 + 1200) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1264), 0, 0);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1212));
      __writecr8(v9);
    }
  }
}
