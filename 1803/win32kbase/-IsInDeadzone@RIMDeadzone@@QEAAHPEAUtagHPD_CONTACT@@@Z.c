/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C0105E2C
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C00E6688 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C010632C (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C0106580 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C0107AB8 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagHPD_CONTACT *a2)
{
  unsigned int v4; // r15d
  _BOOL8 v5; // r12
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // r8
  LONG v9; // esi
  LONG v10; // r14d
  int v11; // edi
  int v12; // ebx
  unsigned int Angle; // r13d
  unsigned int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  DeadzonePalmTelemetry *v21; // rcx
  DeadzonePalmTelemetry *v22; // rcx
  struct tagPOINT v24; // [rsp+60h] [rbp+8h]
  struct tagPOINT v25; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v4 = 0;
  v5 = (*((_DWORD *)a2 + 655) & 4) == 0 && (*((_DWORD *)a2 + 601) & 4) != 0;
  v6 = *((_DWORD *)this + 4);
  if ( v6 && *((_DWORD *)this + 10) )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v8 = *(_QWORD *)((char *)this + 44);
        v9 = (int)*((_QWORD *)a2 + 304) / 100;
        v25.x = v9;
        v10 = (int)HIDWORD(*((_QWORD *)a2 + 304)) / 100;
        v25.y = v10;
        v11 = (int)v8 / 100;
        v24.x = (int)v8 / 100;
        v12 = SHIDWORD(v8) / 100;
        v24.y = SHIDWORD(v8) / 100;
        Angle = RIMDeadzone::_GetAngle(v25, v24);
        v14 = (v9 - v11) * (v9 - v11) + (v10 - v12) * (v10 - v12);
        v15 = 0LL;
        if ( *((_DWORD *)this + 8) )
        {
          v16 = *((_QWORD *)this + 3);
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(Angle, *(_QWORD *)(v16 + 24 * v15)) )
            {
              v17 = 0LL;
              if ( *(_DWORD *)(v16 + 24 * v15 + 16) )
                break;
            }
LABEL_23:
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= *((_DWORD *)this + 8) )
              return v4;
          }
          v18 = v16;
          while ( 1 )
          {
            v19 = *(_QWORD *)(v18 + 24 * v15 + 8);
            if ( v14 >= *(_DWORD *)(v19 + 8 * v17) && v14 < *(_DWORD *)(v19 + 8 * v17 + 4) )
              break;
            v20 = v18;
            if ( v5 )
            {
              v21 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v21 )
              {
                if ( v14 < 0x57E4 )
                {
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v21, v14, Angle, 0);
                  v16 = *((_QWORD *)this + 3);
                  v20 = v16;
                }
              }
            }
            v17 = (unsigned int)(v17 + 1);
            v18 = v20;
            if ( (unsigned int)v17 >= *(_DWORD *)(v20 + 24 * v15 + 16) )
              goto LABEL_23;
          }
          v4 = 1;
          if ( v5 )
          {
            v22 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v22 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v22, v14, Angle, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *((_QWORD *)a2 + 304));
    }
  }
  return v4;
}
