/*
 * XREFs of PfpProcessScenarioPhase @ 0x14058509C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x140563704 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     RtlGetActiveConsoleId @ 0x140071260 (RtlGetActiveConsoleId.c)
 *     PsGetCurrentProcessSessionId @ 0x1400714B0 (PsGetCurrentProcessSessionId.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 *     PfpScenCtxPrefetchWait @ 0x140409BCC (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxScenarioSet @ 0x14040EA40 (PfpScenCtxScenarioSet.c)
 *     PfpLogScenarioEvent @ 0x1405760BC (PfpLogScenarioEvent.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(__int64 a1, char a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // edi
  ULONG ActiveConsoleId; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  ULONG v14; // ebx
  unsigned int v15; // ebx
  void *NextSession; // rax

  if ( *(_DWORD *)a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  v4 = *(_DWORD *)(a1 + 16) & 1;
  if ( v3 <= 2 )
    goto LABEL_12;
  if ( v3 != 3 )
  {
    if ( v3 == 4 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      v6 = 0;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
          {
            PfpScenCtxScenarioSet((ULONG_PTR)&qword_14036DE60, 4, 0, 0LL);
            if ( dword_14036DB18 < (unsigned int)dword_14036DB1C )
              PfpLogScenarioEvent(5, 2, 3, dword_14036DE94, 1);
          }
        }
        return v6;
      }
      v10 = 0LL;
      v11 = 4;
      goto LABEL_33;
    }
    if ( v3 != 5 )
      return (unsigned int)-1073741811;
LABEL_12:
    v6 = 0;
    if ( a2 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v9 = v4 | 4;
      if ( v3 != 5 )
        v9 = v4;
      PfPowerActionNotify(*(_DWORD *)(a1 + 8), v9, *(_DWORD *)(a1 + 16) >> 1);
    }
    return v6;
  }
  v12 = *(_DWORD *)(a1 + 8);
  v6 = 0;
  if ( v12 )
  {
    if ( v12 != 1 || dword_14036DE90 != 3 )
      return v6;
    PfpScenCtxPrefetchWait((ULONG_PTR)&qword_14036DE60, 3, 0x1388u);
    PfpLogScenarioEvent(3, 0, 0, dword_14036DE94, 0);
    v10 = 0LL;
    v13 = 3;
    v11 = 0;
LABEL_34:
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_14036DE60, v13, v11, v10);
    return v6;
  }
  v14 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v14 && dword_14036DB18 < (unsigned int)dword_14036DB1C )
  {
    v15 = 0;
    NextSession = (void *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      while ( ++v15 < 3 )
      {
        NextSession = (void *)MmGetNextSession(NextSession);
        if ( !NextSession )
          goto LABEL_31;
      }
      ObfDereferenceObject(NextSession);
LABEL_31:
      if ( v15 >= 3 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = 3;
LABEL_33:
        v13 = 0;
        goto LABEL_34;
      }
    }
  }
  return v6;
}
