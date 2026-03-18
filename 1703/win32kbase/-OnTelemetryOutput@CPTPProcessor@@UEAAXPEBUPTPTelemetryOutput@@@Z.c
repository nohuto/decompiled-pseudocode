/*
 * XREFs of ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C012BA20
 * Callers:
 *     <none>
 * Callees:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0065A6C (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     EtwTraceTouchPadAAP @ 0x1C00DA8B0 (EtwTraceTouchPadAAP.c)
 */

void __fastcall CPTPProcessor::OnTelemetryOutput(CPTPProcessor *this, const struct PTPTelemetryOutput *a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v15 = *((_DWORD *)a2 + 1);
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = (unsigned int)(v16 - 1);
          if ( (_DWORD)v17 )
          {
            if ( (_DWORD)v17 == 1 )
              EtwTracePTPElasticDragModeStop(v17);
          }
          else
          {
            EtwTracePTPElasticDragModeStart(v17);
          }
        }
        else
        {
          EtwTraceTouchPadCurtainState(*((unsigned int *)a2 + 2), (__int64)a2, a3);
        }
      }
      else
      {
        EtwTraceTouchPadAAP(
          *((_DWORD *)a2 + 2),
          *((_DWORD *)a2 + 3),
          *((_DWORD *)a2 + 4),
          *((_DWORD *)a2 + 5),
          *((_DWORD *)a2 + 6));
      }
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      v3 = *((_DWORD *)a2 + 1);
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = (unsigned int)(v4 - 1);
          if ( (_DWORD)v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              v7 = v6 - 1;
              if ( v7 )
              {
                v8 = v7 - 1;
                if ( v8 )
                {
                  v9 = v8 - 1;
                  if ( v9 )
                  {
                    if ( v9 == 1 )
                      ApiSetTraceLoggingPTPWarpBack(
                        *((unsigned int *)a2 + 2),
                        *(_QWORD *)((char *)a2 + 12),
                        *(_QWORD *)((char *)a2 + 20),
                        *((unsigned int *)a2 + 7));
                  }
                  else
                  {
                    v10 = *(_QWORD *)((char *)a2 + 12);
                    v11 = *((_DWORD *)a2 + 2);
                    if ( v11 )
                    {
                      if ( v11 == 1 )
                        qword_1C018F320 = v10;
                    }
                    else
                    {
                      qword_1C018F318 = v10;
                    }
                  }
                }
                else
                {
                  v12 = *((_DWORD *)a2 + 2);
                  v13 = *(_QWORD *)((char *)a2 + 12);
                  if ( v12 )
                  {
                    if ( v12 == 1 )
                      qword_1C018F310 += v13;
                  }
                  else
                  {
                    qword_1C018F308 += v13;
                  }
                }
              }
              else
              {
                CPTPProcessor::Telemetry::SetLastAction(*((unsigned int *)a2 + 2));
              }
            }
            else if ( qword_1C018A0A8 < qword_1C018F1E8 )
            {
              qword_1C018A0A8 = *((_QWORD *)a2 + 1);
            }
          }
          else
          {
            ApiSetHandlePTPTelemetry(v5, a2);
          }
        }
        else
        {
          CPTPProcessor::Telemetry::OnEndSession(*((_QWORD *)a2 + 1));
        }
      }
      else if ( gTPTelemTimings >= *((_QWORD *)a2 + 1) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        dword_1C018A0CC = 0;
        qword_1C018A0B8 = PerformanceCounter.QuadPart;
      }
      else
      {
        gTPTelemTimings = KeQueryPerformanceCounter(0LL).QuadPart;
      }
    }
  }
  else
  {
    _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, *((_DWORD *)a2 + 1), 1);
  }
}
