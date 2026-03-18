/*
 * XREFs of KeQueryWakeSource @ 0x140240D5C
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x14010D150 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140078030 (KeGetCurrentProcessorNumberEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiGetPastDueIRTimerInfo @ 0x14024AD0C (KiGetPastDueIRTimerInfo.c)
 */

__int64 __fastcall KeQueryWakeSource(int *a1, __int64 a2)
{
  __int64 result; // rax
  ULONG CurrentProcessorNumber; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)a2 = 0LL;
  result = ((__int64 (__fastcall *)(_DWORD *, _QWORD))off_1403989C8[0])(v8, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ((v8[0] - 209) & 0xFFFFFFFD) != 0 )
    {
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      v6 = v8[0];
      *a1 = 0;
      *(_DWORD *)(a2 + 4) = v6;
      *(_DWORD *)a2 = CurrentProcessorNumber;
    }
    else
    {
      if ( (unsigned int)KiGetPastDueIRTimerInfo(MEMORY[0xFFFFF78000000008], &v9, &v10) )
      {
        *(_BYTE *)a2 = v9;
        *(_BYTE *)(a2 + 1) = v10;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
      *a1 = v7;
    }
  }
  else
  {
    if ( (_DWORD)result != -1073741823 )
      return result;
    *a1 = 3;
  }
  return 0LL;
}
