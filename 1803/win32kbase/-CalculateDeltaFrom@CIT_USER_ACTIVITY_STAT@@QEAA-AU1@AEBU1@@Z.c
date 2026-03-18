/*
 * XREFs of ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C003FD00
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // eax
  unsigned int v6; // r11d
  unsigned int v7; // r11d
  unsigned int v9; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx

  v3 = *a1;
  v5 = *a3;
  v6 = *a1;
  *a2 = 0;
  v7 = v6 - v5;
  a2[1] = 0;
  if ( v3 < v5 )
  {
    v11 = *a2;
    v12 = -1;
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - qword_1C01A16D0) <= 0xFFFFFFFF )
      v12 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - qword_1C01A16D0;
    if ( v7 <= v12 )
      v11 = v7;
    *a2 = v11;
  }
  else
  {
    *a2 = v7;
  }
  v9 = a3[1] & 0x7FFFFFFF;
  if ( (a1[1] & 0x7FFFFFFF) > v9 )
    a2[1] = (a1[1] - v9) & 0x7FFFFFFF;
  return a2;
}
