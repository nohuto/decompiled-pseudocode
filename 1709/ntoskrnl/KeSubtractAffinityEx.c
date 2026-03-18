/*
 * XREFs of KeSubtractAffinityEx @ 0x14005CAE0
 * Callers:
 *     KiIpiSendRequest @ 0x14005B830 (KiIpiSendRequest.c)
 *     PpmParkReportUnparkedCores @ 0x14008F6E0 (PpmParkReportUnparkedCores.c)
 *     PpmParkSteerInterrupts @ 0x14008FDD0 (PpmParkSteerInterrupts.c)
 *     PpmIdleSelectStates @ 0x14013A6A0 (PpmIdleSelectStates.c)
 *     KiStartProfileTarget @ 0x1402087C0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1402089D0 (KiStopProfileTarget.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmPostProcessMediaBuffering @ 0x14070B9C0 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall KeSubtractAffinityEx(char *a1, char *a2, _BYTE *a3)
{
  unsigned int v4; // r11d
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // ax
  _WORD *v8; // r10
  signed __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rdx
  _BYTE v16[176]; // [rsp+0h] [rbp-C8h] BYREF

  if ( !a3 )
    a3 = v16;
  *((_WORD *)a3 + 1) = 20;
  v4 = 0;
  *(_WORD *)a3 = *(_WORD *)a1;
  v5 = *(_WORD *)a1;
  v6 = *(_WORD *)a2;
  if ( v5 < *(_WORD *)a2 )
    v6 = v5;
  v7 = 0;
  if ( v6 )
  {
    v8 = a1 + 8;
    v7 = v6;
    v9 = a2 - a1;
    v10 = v6;
    do
    {
      v11 = *(_QWORD *)((char *)v8 + v9);
      v8 += 4;
      v12 = *((_QWORD *)v8 - 1) & ~v11;
      *(_QWORD *)((char *)v8 + a3 - a1 - 8) = v12;
      if ( v12 )
        v4 = 1;
      --v10;
    }
    while ( v10 );
  }
  for ( ; v7 < *(_WORD *)a1; ++v7 )
  {
    v15 = *(_QWORD *)&a1[8 * v7 + 8];
    *(_QWORD *)&a3[8 * v7 + 8] = v15;
    if ( v15 )
      v4 = 1;
  }
  if ( a3 != v16 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v7 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v13 + 8] = 0LL )
      v13 = v7++;
  }
  return v4;
}
