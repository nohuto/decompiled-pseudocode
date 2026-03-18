/*
 * XREFs of AcpiPccExecuteCommandAsync @ 0x1C0052700
 * Callers:
 *     AcpiPccExecuteCommand @ 0x1C00A0510 (AcpiPccExecuteCommand.c)
 * Callees:
 *     AcpiPccRingDoorbell @ 0x1C0052B70 (AcpiPccRingDoorbell.c)
 */

__int64 __fastcall AcpiPccExecuteCommandAsync(char *DeferredContext, char a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // r15
  unsigned __int64 v9; // rbx
  KIRQL v10; // r12
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // ecx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  v4 = (KSPIN_LOCK *)(DeferredContext + 520);
  v9 = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 65);
  if ( *((_QWORD *)DeferredContext + 22) )
  {
    v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v12 = *((_QWORD *)DeferredContext + 22) + *((_QWORD *)DeferredContext + 21);
    if ( v12 > v11.QuadPart )
    {
      v13 = v12 - v11.QuadPart;
      if ( is_mul_ok(v13, 0x989680uLL) )
        v14 = v13 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v14 = -10000000 / PerformanceFrequency.QuadPart;
      v9 = v14;
    }
  }
  v15 = *(_DWORD *)DeferredContext;
  v16 = -1073741823;
  if ( (*DeferredContext & 0x3C) == 0x14 )
  {
    *((_QWORD *)DeferredContext + 17) = a4;
    if ( a3 )
    {
      *((_QWORD *)DeferredContext + 16) = a3;
      v17 = v15 & 0xFFFFFFC3 | 0x18;
    }
    else
    {
      v17 = v15 & 0xFFFFFFC3 | 0x20;
    }
    *(_DWORD *)DeferredContext = v17;
    if ( v9 )
      *(_DWORD *)DeferredContext = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)((v17 & 0xFC) + 4)) & 0x3C;
    v16 = 259;
  }
  KeReleaseSpinLock(v4, v10);
  if ( v16 == 259 )
  {
    **((_BYTE **)DeferredContext + 5) = a2;
    **((_WORD **)DeferredContext + 5) = **((_WORD **)DeferredContext + 5) & 0x7FFF | ((unsigned __int16)(*(_DWORD *)DeferredContext >> 1) << 15);
    if ( v9 <= 0x1F4 )
    {
      if ( v9 )
        KeStallExecutionProcessor((v9 + 5) / 0xA);
      AcpiPccRingDoorbell(0LL, DeferredContext, 0LL, 0LL);
    }
    else
    {
      KeSetTimer((PKTIMER)(DeferredContext + 184), (LARGE_INTEGER)-(__int64)v9, (PKDPC)(DeferredContext + 248));
    }
  }
  return v16;
}
