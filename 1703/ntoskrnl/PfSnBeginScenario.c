/*
 * XREFs of PfSnBeginScenario @ 0x1405643EC
 * Callers:
 *     PfSnOperationProcess @ 0x140454168 (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x140563DB0 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     PfSnStartTraceTimer @ 0x14012D018 (PfSnStartTraceTimer.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfSnLogScenarioDecision @ 0x1405646C8 (PfSnLogScenarioDecision.c)
 *     PfSnCheckActionsNeeded @ 0x140564F88 (PfSnCheckActionsNeeded.c)
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 *     PfSnPrefetchScenario @ 0x140567410 (PfSnPrefetchScenario.c)
 */

__int64 __fastcall PfSnBeginScenario(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 CurrentThread; // r13
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r15d
  _BYTE *v12; // rsi
  unsigned int started; // r14d
  struct _EX_RUNDOWN_REF *v14; // rsi
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  char v19; // [rsp+40h] [rbp-20h]
  int v20; // [rsp+44h] [rbp-1Ch] BYREF
  int v21; // [rsp+48h] [rbp-18h] BYREF
  int v22; // [rsp+4Ch] [rbp-14h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+58h] [rbp-8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v22 = -1;
  P = 0LL;
  v7 = a2;
  v24 = 0LL;
  v8 = 0;
  v19 = *(_BYTE *)(CurrentThread + 562);
  v9 = -1LL;
  *(_BYTE *)(CurrentThread + 562) = 0;
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
  {
    v20 = v10;
    started = 1075380276;
    v21 = v10;
    goto LABEL_18;
  }
  v11 = v10 + 1;
  if ( v10 + 1 + _InterlockedExchangeAdd(&dword_14036E030, v10 + 1) < (unsigned int)dword_14036DCC8 )
  {
    v8 = PfSnCheckActionsNeeded(v7, a3, CurrentThread, (unsigned int)&v20, (__int64)&v21);
    if ( (a4 & 2) != 0 )
    {
      v8 &= ~2u;
      v21 = 9;
    }
    if ( (v8 & 2) != 0 )
    {
      if ( (int)PfSnGetPrefetchInstructions(v7, a3, &P) >= 0 )
      {
        v12 = P;
        v9 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 16);
        if ( v9 < *((_QWORD *)P + 25) && v20 != 22 )
        {
          v8 &= ~1u;
          v20 = 11;
        }
        if ( v9 < *((_QWORD *)P + 24) && v21 != 22 )
        {
          v8 &= ~2u;
          v21 = 12;
        }
        v22 = *((_DWORD *)P + 52);
LABEL_7:
        if ( (a4 & 4) != 0 )
        {
          v8 &= ~1u;
          v20 = 8;
        }
        if ( ((unsigned __int8)v8 & (unsigned __int8)v11) != 0 )
        {
          v16 = PfSnBeginTrace(
                  a2,
                  a3,
                  a1,
                  CurrentThread & -(__int64)(((unsigned __int8)v11 & (unsigned __int8)a4) != 0),
                  v11 & (a4 >> 3),
                  &v24);
          if ( v16 < 0 )
          {
            switch ( v16 )
            {
              case -1073741618:
                v20 = 16;
                break;
              case -1073741670:
                v20 = 17;
                break;
              case -1072037882:
                v20 = 18;
                break;
              case -1073741791:
                v20 = 19;
                break;
              default:
                v20 = (v16 != -1073741661) + 20;
                break;
            }
          }
        }
        if ( (v8 & 2) != 0 )
        {
          v17 = a4 | 0x10;
          if ( (v12[216] & 3) == 0 )
            v17 = a4;
          v18 = PfSnPrefetchScenario(v12, v17, 0LL);
          P = 0LL;
          v12 = 0LL;
          if ( v18 >= 0 )
            LOBYTE(v11) = 0;
        }
        started = 0;
        if ( !(_BYTE)v11 )
          goto LABEL_13;
        goto LABEL_12;
      }
      v8 &= ~2u;
      v21 = 10;
    }
    v12 = P;
    goto LABEL_7;
  }
  v20 = v10 + 1;
  started = -1073741631;
  v21 = v10 + 1;
LABEL_12:
  _InterlockedDecrement(&dword_14036E030);
  v12 = P;
LABEL_13:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v14 = v24;
  if ( v24 )
  {
    started = PfSnStartTraceTimer(v24);
    ExReleaseRundownProtection(v14 + 45);
  }
  LODWORD(v7) = a2;
LABEL_18:
  PfSnLogScenarioDecision(v7, a3, v8, v20, v21, v22, v9);
  *(_BYTE *)(CurrentThread + 562) = v19;
  return started;
}
