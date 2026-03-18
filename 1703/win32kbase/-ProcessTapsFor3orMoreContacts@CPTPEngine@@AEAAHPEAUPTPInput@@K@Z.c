/*
 * XREFs of ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0136988
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C0137BC8 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C0137E70 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137EFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C013810C (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z @ 0x1C01381E8 (-SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessTapsFor3orMoreContacts(CPTPEngine *this, struct PTPInput *a2, unsigned int a3)
{
  unsigned int v3; // edi
  char *v5; // rdx
  int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  char *v11; // r11
  int v12; // r14d
  unsigned int v13; // esi
  __int64 v14; // r8
  int *v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int128 *v21; // r8
  _DWORD *v22; // r14
  __int64 v23; // rdx
  char *v24; // rsi
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v3 = 0;
  v5 = (char *)this + 1168;
  v7 = 0;
  v8 = (__int64)this + 2896;
  v9 = 1LL;
  while ( v5 != (char *)v8 )
  {
    if ( (*(_DWORD *)v5 & 1) != 0 )
    {
      if ( (unsigned int)CPTPEngine::SuppressContactForMultiFingerTap(
                           (CPTPEngine *)v8,
                           (const struct CContactState *)v5) )
      {
        ++v7;
      }
      else if ( *((_DWORD *)v5 + 34) < *((_DWORD *)this + 758) )
      {
        v9 = 0LL;
      }
    }
    v5 += 288;
  }
  v10 = *((_DWORD *)this + 727);
  if ( (v10 <= 2 || a3 >= v10) && (*((_DWORD *)this + 805) & 0x1000000) == 0 )
    return 0LL;
  v11 = (char *)a2 + 52;
  v12 = 0;
  v13 = 0;
  v14 = (unsigned int)-__CFSHR__(*((_DWORD *)this + 805), 25);
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_29;
  while ( 1 )
  {
    if ( !*((_DWORD *)v11 + 3)
      || (unsigned int)CPTPEngine::SuppressContactForMultiFingerTap(
                         (CPTPEngine *)v8,
                         (CPTPEngine *)((char *)this
                                      + 288 * (unsigned int)(*((_DWORD *)v11 + 1) % *((_DWORD *)this + 4))
                                      + 1168)) )
    {
      goto LABEL_26;
    }
    v16 = *v15;
    if ( (*v15 & 4) != 0 || (v16 & 0x10) != 0 || (v16 & 8) != 0 )
      break;
    if ( (_DWORD)v14 )
    {
      if ( (v16 & 0x40000) == 0 )
        break;
    }
    else
    {
      *v15 = v16 | 0x40000;
    }
    v17 = v12 + 1;
    v8 = 0x1000000LL;
    if ( (*((_DWORD *)v11 + 3) & 0x40000) == 0 )
      v17 = v12;
    v12 = v17;
    v18 = *((_DWORD *)this + 805);
    if ( (v18 & 0x1000000) == 0 && v12 )
    {
      *((_DWORD *)this + 805) = v18 | 0x1000000;
      *((_DWORD *)this + 728) = *((_DWORD *)this + 727) - v7;
    }
LABEL_26:
    ++v13;
    v11 += 96;
    if ( v13 >= *((_DWORD *)a2 + 12) )
      goto LABEL_29;
  }
  *((_DWORD *)this + 805) &= ~0x1000000u;
LABEL_29:
  v19 = *((_DWORD *)this + 805);
  if ( (v19 & 0x1000000) == 0 )
    return 0LL;
  if ( (v19 & 8) != 0 || (v19 & 0x10) != 0 )
  {
    *((_DWORD *)this + 805) = v19 & 0xFEFFFFFF;
    return 0LL;
  }
  if ( v12 == *((_DWORD *)a2 + 12) - v7 )
  {
    v20 = *((_DWORD *)this + 728);
    if ( v20 == 3 )
    {
      CBasePTPEngine::SendShellOutput(this, 0LL, v14, v9);
      v21 = &v28;
      LODWORD(v26) = 3;
      v29 = v27;
      v28 = v26;
      goto LABEL_37;
    }
    if ( v20 == 4 )
    {
      CBasePTPEngine::SendShellOutput(this, 1LL, v14, v9);
      v21 = &v26;
      LODWORD(v28) = 4;
      v27 = v29;
      v26 = v28;
LABEL_37:
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, v21);
    }
    else if ( v20 == 2 && (*((_DWORD *)this + 98) & 0x400) != 0 && (_DWORD)v9 )
    {
      CPTPEngine::Send2FingerTap(this, a2, *((_DWORD *)a2 + 6));
    }
    *((_DWORD *)this + 805) &= ~0x1000000u;
    if ( *((_DWORD *)a2 + 12) )
    {
      v22 = (_DWORD *)((char *)a2 + 56);
      do
      {
        v23 = (unsigned int)(*v22 % *((_DWORD *)this + 4));
        v24 = (char *)this + 288 * v23 + 1168;
        if ( (*(_DWORD *)v24 & 1) != 0 )
        {
          if ( (*(_DWORD *)v24 & 2) == 0 )
          {
            *(_QWORD *)(v24 + 4) = *(_QWORD *)(v24 + 20);
            CPTPEngine::SetupDragRectsForContact(this, (CPTPEngine *)((char *)this + 288 * v23 + 1168));
          }
          *(_DWORD *)v24 &= ~4u;
        }
        v22 += 24;
        ++v3;
      }
      while ( v3 < *((_DWORD *)a2 + 12) );
    }
  }
  return 1LL;
}
