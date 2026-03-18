/*
 * XREFs of PpmPerfArbitratorApplyProcessorState @ 0x14014D6C4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorState @ 0x14014D4E4 (PpmPerfApplyProcessorState.c)
 *     PoSetProcessorQoS @ 0x14024069C (PoSetProcessorQoS.c)
 * Callees:
 *     PpmEventArbitratorPerfStateChange @ 0x14014D7F8 (PpmEventArbitratorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  char v5; // si
  __int64 v7; // rcx
  char v9; // r9
  char v10; // di
  __int64 v11; // r14
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r12
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // r10
  unsigned __int64 v21; // rcx

  v5 = 0;
  v7 = *(_QWORD *)(a1 + 24184);
  v9 = a3;
  v10 = 1;
  v11 = *(_QWORD *)(a1 + 24176);
  if ( PpmPerfQosEnabled )
    v12 = *(unsigned int *)(a1 + 24304);
  else
    v12 = 0LL;
  v13 = *(_DWORD *)(v11 + 472);
  if ( (_DWORD)v12 == *(_DWORD *)(a1 + 24308) )
  {
    if ( *(_DWORD *)(v7 + 104) != v13 )
    {
      *(_DWORD *)(v7 + 104) = v13;
      if ( (_DWORD)v12 )
      {
        if ( (struct _KPRCB *)a1 != KeGetCurrentPrcb() )
          return 0;
        a2 = 1;
      }
      v9 = 1;
    }
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 24312);
    if ( !_bittest(&v16, v12) || *(_DWORD *)(v7 + 104) != v13 )
    {
      *(_DWORD *)(v7 + 104) = v13;
      v9 = 1;
      a2 = 1;
    }
    *(_DWORD *)(a1 + 24308) = v12;
    v5 = 1;
  }
  if ( v9 )
  {
    if ( a3 )
      *(_DWORD *)(v7 + 104) = 0;
    v14 = (int)v12;
    LOBYTE(a4) = a3;
    *(_DWORD *)(v7 + 112) = *(_DWORD *)(v7 + 72);
    LOBYTE(v12) = a2;
    *(_DWORD *)(v7 + 108) = *(_DWORD *)(v7 + 76);
    *(_OWORD *)(v7 + 64) = *(_OWORD *)(v11 + 40 * v14 + 480);
    *(_OWORD *)(v7 + 80) = *(_OWORD *)(v11 + 40 * v14 + 496);
    *(_QWORD *)(v7 + 96) = *(_QWORD *)(v11 + 40 * v14 + 512);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v11 + 288))(*(_QWORD *)(v7 + 8), v7 + 64, v12, a4);
    if ( PopHeteroSystem )
    {
      v17 = *(_DWORD *)(v11 + 4 * v14 + 456);
      v18 = *(_DWORD *)(a1 + 24312);
      if ( v17 != v18 )
      {
        *(_DWORD *)(a1 + 24312) = v17;
        v19 = 0LL;
        v20 = *(_QWORD *)(a1 + 192);
        do
        {
          if ( (v17 & 1) != (v18 & 1) )
          {
            v21 = *(unsigned __int8 *)(a1 + 209);
            if ( (v17 & 1) != 0 )
              _interlockedbittestandset64((volatile signed __int32 *)(v20 + 8 * v19 + 296), v21);
            else
              _interlockedbittestandreset64((volatile signed __int32 *)(v20 + 8 * v19 + 296), v21);
          }
          v17 >>= 1;
          v19 = (unsigned int)(v19 + 1);
          v18 >>= 1;
        }
        while ( (unsigned int)v19 < 3 );
      }
    }
    if ( !a3 )
      v5 = 1;
  }
  if ( v5 )
    PpmEventArbitratorPerfStateChange(a1, a2);
  return v10;
}
