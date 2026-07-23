/*
 * XREFs of KiCheckWaitNext @ 0x140088F10
 * Callers:
 *     KiWaitForAllObjects @ 0x140086EF0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x140088D40 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // r10
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v11; // rcx
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
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        v11 = MEMORY[0xFFFFF780000003B0];
      }
      else
      {
        v11 = MEMORY[0xFFFFF780000003B0];
        InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
      }
      *a4 = InterruptTimePrecise.QuadPart - v11 - *(_QWORD *)(a1 + 248) - *(_QWORD *)a2;
      *a5 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
