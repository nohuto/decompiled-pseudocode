/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C0114E9C
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0103B04 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01152CC (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C011544C (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C0115DC8 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagPOINT *a2)
{
  unsigned int v2; // r12d
  _BOOL8 v4; // r13
  int v5; // ecx
  int v6; // ecx
  LONG x; // edi
  int v8; // esi
  __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned int v11; // r15d
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  DeadzonePalmTelemetry *v15; // rcx
  DeadzonePalmTelemetry *v16; // rcx
  struct tagPOINT v18; // [rsp+60h] [rbp+40h]
  unsigned int Angle; // [rsp+60h] [rbp+40h]
  struct tagPOINT v20; // [rsp+68h] [rbp+48h]

  v2 = 0;
  v4 = (a2[327].y & 4) == 0 && (a2[300].y & 4) != 0;
  v5 = *((_DWORD *)this + 4);
  if ( v5 && *((_DWORD *)this + 10) )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v20 = a2[304];
        v18 = *(struct tagPOINT *)((char *)this + 44);
        v20.x /= 100;
        v20.y /= 100;
        v18.x /= 100;
        x = v18.x;
        v18.y /= 100;
        Angle = RIMDeadzone::_GetAngle(v20, v18);
        v8 = (v20.x - x) * (v20.x - x);
        v9 = 0LL;
        v10 = Angle;
        v11 = v8 + (v20.y - v18.y) * (v20.y - v18.y);
        if ( *((_DWORD *)this + 8) )
        {
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v10, *(_QWORD *)(*((_QWORD *)this + 3) + 24 * v9)) )
            {
              v13 = 0LL;
              if ( *(_DWORD *)(v12 + 16) )
                break;
            }
LABEL_19:
            v9 = (unsigned int)(v9 + 1);
            if ( (unsigned int)v9 >= *((_DWORD *)this + 8) )
              return v2;
          }
          while ( 1 )
          {
            v14 = *(_QWORD *)(v12 + 8);
            if ( v11 >= *(_DWORD *)(v14 + 8 * v13) && v11 < *(_DWORD *)(v14 + 8 * v13 + 4) )
              break;
            if ( v4 )
            {
              v15 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v15 )
              {
                if ( v11 < 0x57E4 )
                {
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v15, v11, v10, 0);
                  v10 = Angle;
                }
              }
            }
            v13 = (unsigned int)(v13 + 1);
            v12 = *((_QWORD *)this + 3) + 24 * v9;
            if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 16) )
              goto LABEL_19;
          }
          v2 = 1;
          if ( v4 )
          {
            v16 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v16 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v16, v11, v10, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *(_QWORD *)&a2[304]);
    }
  }
  return v2;
}
