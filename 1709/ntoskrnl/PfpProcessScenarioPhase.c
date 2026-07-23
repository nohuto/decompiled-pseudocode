/*
 * XREFs of PfpProcessScenarioPhase @ 0x1405EF25C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14043E10C (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x14046CE14 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     RtlGetActiveConsoleId @ 0x1400B16C0 (RtlGetActiveConsoleId.c)
 *     PfpScenCtxScenarioSet @ 0x140429040 (PfpScenCtxScenarioSet.c)
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PfpScenCtxPrefetchWait @ 0x140430E90 (PfpScenCtxPrefetchWait.c)
 *     PfpLogScenarioEvent @ 0x1406F268C (PfpLogScenarioEvent.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(__int64 a1, char a2)
{
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // edi
  ULONG ActiveConsoleId; // ebx
  __int64 v8; // r9
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  ULONG v12; // ebx
  unsigned int v13; // ebx
  void *NextSession; // rax
  char v15; // dl

  if ( *(_DWORD *)a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  if ( v3 <= 2 )
  {
LABEL_14:
    v5 = 0;
    if ( a2 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v15 = *(_BYTE *)(a1 + 16) & 1 | 4;
      if ( v3 != 5 )
        v15 = *(_BYTE *)(a1 + 16) & 1;
      PfPowerActionNotify(*(_DWORD *)(a1 + 8), v15, *(_DWORD *)(a1 + 16) >> 1);
    }
    return v5;
  }
  if ( v3 != 3 )
  {
    if ( v3 == 4 )
    {
      v4 = *(_DWORD *)(a1 + 8);
      v5 = 0;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
          {
            PfpScenCtxScenarioSet((ULONG_PTR)&qword_14038D2C0, 4, 0, 0LL);
            if ( dword_140387A98 < (unsigned int)dword_140387A9C )
              PfpLogScenarioEvent(5, 2, 3, dword_14038D2F4, 1);
          }
        }
        return v5;
      }
      v8 = 0LL;
      v9 = 4;
      goto LABEL_30;
    }
    if ( v3 == 5 )
      goto LABEL_14;
    return (unsigned int)-1073741811;
  }
  v10 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  if ( v10 )
  {
    if ( v10 != 1 || dword_14038D2F0 != 3 )
      return v5;
    PfpScenCtxPrefetchWait((ULONG_PTR)&qword_14038D2C0, 3, 0x1388u);
    PfpLogScenarioEvent(3, 0, 0, dword_14038D2F4, 0);
    v8 = 0LL;
    v11 = 3;
    v9 = 0;
LABEL_31:
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_14038D2C0, v11, v9, v8);
    return v5;
  }
  v12 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v12 && dword_140387A98 < (unsigned int)dword_140387A9C )
  {
    v13 = 0;
    NextSession = (void *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      while ( ++v13 < 3 )
      {
        NextSession = (void *)MmGetNextSession(NextSession);
        if ( !NextSession )
          goto LABEL_28;
      }
      ObfDereferenceObject(NextSession);
LABEL_28:
      if ( v13 >= 3 )
      {
        v8 = *(_QWORD *)(a1 + 24);
        v9 = 3;
LABEL_30:
        v11 = 0;
        goto LABEL_31;
      }
    }
  }
  return v5;
}
