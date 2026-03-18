/*
 * XREFs of ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01358D8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135C24 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C0136C50 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137118 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C0137150 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z @ 0x1C013753C (-SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessTapsFor3orMoreContacts(CPTPEngine *this, struct PTPInput *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v6; // esi
  char *v7; // rdx
  int v8; // r14d
  char *v9; // r8
  unsigned int v10; // eax
  char *v11; // r9
  int v12; // r15d
  unsigned int v13; // r10d
  int *v14; // rdx
  int v15; // r8d
  int v16; // r11d
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  __int128 *v25; // r8
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]

  v3 = a3;
  v6 = 1;
  if ( *((_DWORD *)this + 749) )
    return 0LL;
  v7 = (char *)this + 1192;
  v8 = 0;
  v9 = (char *)this + 2968;
  while ( v7 != v9 )
  {
    if ( (*(_DWORD *)v7 & 1) != 0 )
    {
      if ( (unsigned int)CPTPEngine::SuppressContactForMultiFingerTap(this, (const struct CContactState *)v7) )
      {
        ++v8;
      }
      else if ( *((_DWORD *)v7 + 33) < *((_DWORD *)this + 773) )
      {
        v6 = 0;
      }
    }
    v7 += 296;
  }
  v10 = *((_DWORD *)this + 744);
  if ( (v10 <= 2 || v3 >= v10) && (*((_DWORD *)this + 820) & 0x800000) == 0 )
    return 0LL;
  v11 = (char *)a2 + 52;
  v12 = 0;
  v13 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_30;
  while ( 1 )
  {
    if ( !*((_DWORD *)v11 + 3)
      || (unsigned int)CPTPEngine::SuppressContactForMultiFingerTap(
                         this,
                         (CPTPEngine *)((char *)this
                                      + 296 * (unsigned int)(*((_DWORD *)v11 + 1) % *((_DWORD *)this + 4))
                                      + 1192)) )
    {
      goto LABEL_27;
    }
    v17 = *v14;
    if ( (*v14 & 4) != 0 || (v17 & 0x10) != 0 || (v17 & 8) != 0 )
      break;
    if ( v15 )
    {
      if ( (v17 & 0x10000) == 0 )
        break;
    }
    else
    {
      *v14 = v17 | 0x10000;
    }
    v18 = v12 + 1;
    v19 = *((_DWORD *)this + 820);
    if ( (*((_DWORD *)v11 + 3) & 0x48000) != 0x40000 )
      v18 = v12;
    v12 = v18;
    if ( (v19 & 0x800000) == 0 && v18 )
    {
      *((_DWORD *)this + 820) = v19 | 0x800000;
      *((_DWORD *)this + 745) = *((_DWORD *)this + 744) - v8;
    }
LABEL_27:
    ++v13;
    v11 += 96;
    if ( v13 >= *((_DWORD *)a2 + 12) )
      goto LABEL_30;
  }
  *((_DWORD *)this + 820) &= v16;
LABEL_30:
  v20 = *((_DWORD *)this + 820);
  if ( (v20 & 0x800000) == 0 )
    return 0LL;
  v21 = *((_DWORD *)this + 743);
  if ( v21 == 4 )
  {
    v22 = v20 & 0xFFFFFFF7;
    goto LABEL_35;
  }
  if ( v21 == 16 )
  {
    v22 = v20 & 0xFFFFFFEF;
LABEL_35:
    *((_DWORD *)this + 820) = v22;
  }
  CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 743, *((_DWORD *)a2 + 6) - *((_DWORD *)this + 772));
  v23 = *((_DWORD *)this + 820);
  if ( (v23 & 8) != 0 || (v23 & 0x10) != 0 )
  {
    *((_DWORD *)this + 820) = v23 & 0xFF7FFFFF;
    return 0LL;
  }
  if ( v12 == *((_DWORD *)a2 + 12) - v8 )
  {
    v24 = *((_DWORD *)this + 745);
    if ( v24 == 3 )
    {
      CBasePTPEngine::SendShellOutput(this, 0LL);
      v25 = &v29;
      LODWORD(v27) = 3;
      v30 = v28;
      v29 = v27;
      goto LABEL_43;
    }
    if ( v24 == 4 )
    {
      CBasePTPEngine::SendShellOutput(this, 1LL);
      v25 = &v27;
      LODWORD(v29) = 4;
      v28 = v30;
      v27 = v29;
LABEL_43:
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, v25);
    }
    else if ( v24 == 2 && (*((_DWORD *)this + 103) & 0x400) != 0 )
    {
      if ( v6 )
        CPTPEngine::Send2FingerTap(this, a2, *((_DWORD *)a2 + 6));
    }
    *((_DWORD *)this + 820) &= ~0x800000u;
    CPTPEngine::ResetDragThresholds(this, a2);
  }
  return 1LL;
}
