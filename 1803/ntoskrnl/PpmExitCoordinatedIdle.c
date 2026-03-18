/*
 * XREFs of PpmExitCoordinatedIdle @ 0x14010D150
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KdCallPowerHandlers @ 0x14023E5EC (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x14023E890 (KdPowerTransitionEx.c)
 *     KeQueryWakeSource @ 0x140240D5C (KeQueryWakeSource.c)
 *     PpmExitCoordinatedIdleState @ 0x140271F44 (PpmExitCoordinatedIdleState.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x1402741B0 (PpmUpdatePlatformIdleAccounting.c)
 *     PopDiagTraceIdleWakeSource @ 0x14027CFC4 (PopDiagTraceIdleWakeSource.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1402805E8 (PpmEventCoordinatedIdleTransition.c)
 */

__int64 __fastcall PpmExitCoordinatedIdle(
        __int64 a1,
        __int64 a2,
        __int64 i,
        int a4,
        char a5,
        unsigned __int64 a6,
        char a7)
{
  unsigned int v7; // esi
  __int64 v8; // rdi
  char v10; // bp
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // r12
  unsigned int v18; // ecx
  __int64 v19; // rax
  char v20; // r10
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  char v26[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-50h]
  unsigned int v28; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+48h] [rbp-40h] BYREF
  __int64 v30; // [rsp+50h] [rbp-38h]

  v7 = -1;
  v8 = 0LL;
  v10 = i;
  if ( PpmPlatformStates )
  {
    if ( !(_BYTE)i )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 4); i = (unsigned int)(i + 1) )
      {
        v14 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 4 * i);
        v15 = PpmPlatformStates + 384 * v14;
        if ( (*(_DWORD *)(v15 + 320) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(v15 + 320) = *(_DWORD *)(v15 + 320) & 0xFE000FFF | ((*(_DWORD *)(v15 + 320) & 0xFFF | 0x2000) << 12);
        if ( a5 )
          ++*(_DWORD *)(1008 * v14 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
      }
    }
    LODWORD(v16) = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      do
      {
        v16 = (unsigned int)(v16 - 1);
        v17 = 384 * v16 + PpmPlatformStates + 64;
        v18 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
        v30 = v17;
        if ( ((*(_QWORD *)(v17 + 8 * ((unsigned __int64)v18 >> 6) + 72) >> (v18 & 0x3F)) & 1) != 0
          && (unsigned __int8)PpmExitCoordinatedIdleState(v17 + 256, v26, i) )
        {
          v19 = *(_QWORD *)(a2 + 16);
          i = 3221225659LL;
          v20 = a5;
          LODWORD(v27) = -1073741637;
          v28 = 6;
          *(_DWORD *)(v19 + 4 * v8) = v16;
          v8 = (unsigned int)(v8 + 1);
          v29 = 0LL;
          if ( (_DWORD)v8 == 1 && *(_BYTE *)(v17 + 57) )
          {
            v7 = v16;
            if ( v10 )
            {
              if ( a4 >= 0 && !a5 && (_DWORD)v16 == PpmDripsStateIndex )
              {
                if ( *(_BYTE *)(PpmPlatformStates + 56) )
                {
                  v21 = KeQueryWakeSource(&v28, &v29);
                  v20 = a5;
                  i = (unsigned int)v21;
                  LODWORD(v27) = v21;
                  if ( v21 < 0 )
                  {
                    i = 0LL;
                    v28 = 4;
                    LODWORD(v27) = 0;
                  }
                }
              }
              if ( *(_BYTE *)(v17 + 56) )
              {
                KdCallPowerHandlers(1LL);
                LOBYTE(v22) = 1;
                KdPowerTransitionEx(2147483649LL, v22);
                i = (unsigned int)v27;
                v20 = a5;
              }
              if ( (PopSimulate & 0x100) != 0 && a4 >= 0 && v20 && a7 && (_DWORD)v16 == PpmDripsStateIndex )
                KeBugCheckEx(0xA0u, 0x257uLL, (unsigned int)v16, 0LL, 0LL);
            }
            *(_BYTE *)(PpmPlatformStates + 56) = 0;
          }
          if ( !v20 )
          {
            v23 = *(_QWORD *)(v30 + 264);
            v24 = *(_QWORD *)(PpmPlatformStates + 48) + 1008LL * (unsigned int)v16;
            if ( a6 >= v23 )
            {
              v25 = a6 - v23;
              *(_QWORD *)(v24 + 56) += a6 - v23;
            }
            else
            {
              v25 = 0LL;
            }
            v27 = v25;
            if ( (int)i >= 0 )
            {
              PopDiagTraceIdleWakeSource(v7, v25, v28, &v29);
              v25 = v27;
            }
            if ( a4 < 0 && v26[0] )
            {
              ++*(_DWORD *)(v24 + 28);
            }
            else
            {
              ++*(_DWORD *)(v24 + 32);
              PpmUpdatePlatformIdleAccounting(v24 + 24, v25);
            }
          }
        }
      }
      while ( (_DWORD)v16 );
    }
    if ( v10 )
      PpmEventCoordinatedIdleTransition(0LL, (unsigned int)v8, *(_QWORD *)(a2 + 16));
  }
  *(_DWORD *)(a2 + 4) = v8;
  return v7;
}
