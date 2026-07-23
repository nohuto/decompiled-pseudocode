/*
 * XREFs of KiCheckWaitNext @ 0x1400E45E0
 * Callers:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiWaitForAllObjects @ 0x1400E3B9C (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400E41B0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // cl
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v7 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  if ( !v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) >= 0 )
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        *a4 = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - MEMORY[0xFFFFF780000003B0];
      else
        *a4 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      *a4 -= *(_QWORD *)a2 + *(_QWORD *)(a1 + 248);
      *a5 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
