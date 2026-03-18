/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C011CA0C
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01103B0 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01179C4 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011A9EC (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeDelegateAction(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  struct CPointerInfoNode *v9; // rax
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  int *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v9 = CTouchProcessor::LookupNode((CTouchProcessor *)this, a2, a3);
  v12 = (int *)v9;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 585:
        v13 = *(_DWORD *)v9;
        if ( (v13 & 0x1000000) == 0 || (v13 & 0x2000000) != 0 || (v13 & 0x4000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v13 = *v12;
        }
        v14 = v13 | 0x2000000;
        goto LABEL_63;
      case 586:
        *(_DWORD *)v9 |= 0x20000000u;
        goto LABEL_78;
      case 593:
        v15 = *((_DWORD *)v9 + 1);
        if ( (v15 & 1) == 0 || (v15 & 2) != 0 || (v15 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v15 = v12[1];
        }
        v16 = v15 | 2;
        break;
      case 594:
        v17 = *((_DWORD *)v9 + 1);
        if ( (v17 & 0x10) == 0 || (v17 & 0x20) != 0 || (v17 & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v17 = v12[1];
        }
        v16 = v17 | 0x20;
        break;
      default:
        v18 = *(_DWORD *)v9;
        if ( (v18 & 0x100000) == 0 || (v18 & 0x200000) != 0 || (v18 & 0x400000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v18 = *v12;
        }
        v14 = v18 | 0x200000;
        goto LABEL_63;
    }
LABEL_76:
    v12[1] = v16;
    goto LABEL_78;
  }
  if ( !a6 )
  {
    switch ( a4 )
    {
      case 585:
        v22 = *(_DWORD *)v9;
        if ( (v22 & 0x1000000) == 0 || (v22 & 0x2000000) != 0 || (v22 & 0x4000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v22 = *v12;
        }
        v14 = v22 | 0x4000000;
        goto LABEL_63;
      case 586:
        v23 = *(_DWORD *)v9;
        if ( (v23 & 0x10000000) == 0 || (v23 & 0x20000000) != 0 || (v23 & 0x40000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v23 = *v12;
        }
        v14 = v23 | 0x40000000;
        goto LABEL_63;
      case 593:
        v24 = *((_DWORD *)v9 + 1);
        if ( (v24 & 1) == 0 || (v24 & 2) != 0 || (v24 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v24 = v12[1];
        }
        v16 = v24 | 4;
        break;
      case 594:
        v25 = *((_DWORD *)v9 + 1);
        if ( (v25 & 0x10) == 0 || (v25 & 0x20) != 0 || (v25 & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v25 = v12[1];
        }
        v16 = v25 | 0x40;
        break;
      default:
        *(_DWORD *)v9 |= 0x400000u;
        goto LABEL_78;
    }
    goto LABEL_76;
  }
  if ( a4 == 585 )
  {
    v19 = *(_DWORD *)v9;
    v20 = 0x1000000;
    if ( (v19 & 0x800000) != 0 && (v19 & 0x1000000) == 0 )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( a4 == 586 )
  {
    v19 = *(_DWORD *)v9;
    v20 = 0x10000000;
    if ( (v19 & 0x8000000) != 0 && (v19 & 0x10000000) == 0 )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( a4 != 593 )
  {
    if ( a4 == 594 )
    {
      v21 = *((_DWORD *)v9 + 1);
      if ( (v21 & 8) == 0 || (v21 & 0x10) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
        v21 = v12[1];
      }
      v16 = v21 | 0x10;
      goto LABEL_76;
    }
    v19 = *(_DWORD *)v9;
    v20 = 0x100000;
    if ( (v19 & 0x100000) == 0 )
    {
LABEL_50:
      v14 = v20 | v19;
LABEL_63:
      *v12 = v14;
      goto LABEL_78;
    }
LABEL_49:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    v19 = *v12;
    goto LABEL_50;
  }
  if ( *(int *)v9 >= 0 || (*((_DWORD *)v9 + 1) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  v12[1] |= 1u;
LABEL_78:
  CTouchProcessor::ReevaluateQFrameHasDelegation(v11, a2, v12[2]);
}
