/*
 * XREFs of KeSubtractAffinityEx @ 0x140044C00
 * Callers:
 *     PpmParkReportUnparkedCores @ 0x1400457F0 (PpmParkReportUnparkedCores.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     PpmIdleSelectStates @ 0x14015B9D0 (PpmIdleSelectStates.c)
 *     KiStartProfileTarget @ 0x1402021C0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1402023D0 (KiStopProfileTarget.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmPostProcessMediaBuffering @ 0x1406D5C4C (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall KeSubtractAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rax
  unsigned __int16 v7; // r11
  unsigned __int16 i; // cx
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v13; // rdx
  _BYTE v14[176]; // [rsp+0h] [rbp-C8h] BYREF

  if ( !a3 )
    a3 = v14;
  *((_WORD *)a3 + 1) = 20;
  v5 = 0;
  *(_WORD *)a3 = *a1;
  if ( *a1 < *a2 )
    v6 = a1;
  else
    v6 = a2;
  v7 = *v6;
  for ( i = 0; i < v7; ++i )
  {
    v9 = 4LL * i;
    v10 = (*(_QWORD *)&a1[v9 + 4] & ~*(_QWORD *)&a2[v9 + 4]) == 0LL;
    *(_QWORD *)&a3[v9 * 2 + 8] = *(_QWORD *)&a1[v9 + 4] & ~*(_QWORD *)&a2[v9 + 4];
    if ( !v10 )
      v5 = 1;
  }
  for ( ; i < *a1; ++i )
  {
    v13 = *(_QWORD *)&a1[4 * i + 4];
    *(_QWORD *)&a3[8 * i + 8] = v13;
    if ( v13 )
      v5 = 1;
  }
  if ( a3 != v14 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; i < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v11 + 8] = 0LL )
      v11 = i++;
  }
  return v5;
}
