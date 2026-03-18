/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C0115068
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0103B78 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0103C28 (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C0096FD4 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0097048 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C0107E94 (RIMIsRunningOnSurfaceHub.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01152CC (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01153A0 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C011544C (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  RIMDeadzone *v5; // r13
  unsigned int v6; // r12d
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int v14; // r9d
  unsigned int v15; // r14d
  __int64 v16; // r10
  __int64 v17; // r8
  int v18; // r9d
  unsigned int v19; // r11d
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  struct tagPOINT v23; // [rsp+20h] [rbp-18h]
  struct tagPOINT v24; // [rsp+28h] [rbp-10h]
  int v25; // [rsp+80h] [rbp+48h]
  int v27; // [rsp+94h] [rbp+5Ch]
  int v28; // [rsp+9Ch] [rbp+64h]
  unsigned int Angle; // [rsp+A0h] [rbp+68h]

  v28 = HIDWORD(a4);
  v27 = HIDWORD(a3);
  v5 = RIMDeadzone::s_pRimDeadzoneInstance;
  v6 = 0;
  v7 = 2;
  v8 = a4;
  v9 = a3;
  if ( a5 )
    v7 = a5;
  v25 = v7;
  if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 4) || v7 != *(_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance )
  {
    if ( *((_QWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 3) )
      RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone::s_pRimDeadzoneInstance);
    v10 = v7 == 1 ? RIMDeadzone::_InitializeLeftHandedDeadzone(v5) : RIMDeadzone::_InitializeRightHandedDeadzone(v5);
    if ( v10 < 0 )
      return 0LL;
  }
  v23.x = v9 / 100;
  v23.y = v27 / 100;
  v24.x = v8 / 100;
  v24.y = v28 / 100;
  Angle = RIMDeadzone::_GetAngle(v23, v24);
  v12 = Angle;
  v13 = *((_DWORD *)v5 + 8);
  v14 = 0;
  v15 = (v9 / 100 - v8 / 100) * (v9 / 100 - v8 / 100) + (v27 / 100 - v28 / 100) * (v27 / 100 - v28 / 100);
  if ( v13 )
  {
    v16 = *((_QWORD *)v5 + 3);
    while ( 1 )
    {
      if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v12, *(_QWORD *)(v16 + 24LL * v14)) )
      {
        v19 = *(_DWORD *)(v16 + 8 * v17 + 16);
        v20 = 0;
        if ( v19 )
          break;
      }
LABEL_21:
      v14 = v18 + 1;
      if ( v14 >= v13 )
        goto LABEL_22;
    }
    v21 = *(_QWORD *)(v16 + 8 * v17 + 8);
    while ( v15 < *(_DWORD *)(v21 + 8LL * v20) || v15 >= *(_DWORD *)(v21 + 8LL * v20 + 4) )
    {
      if ( ++v20 >= v19 )
      {
        v12 = Angle;
        goto LABEL_21;
      }
    }
    return 1;
  }
LABEL_22:
  if ( RIMIsRunningOnSurfaceHub() )
    return v6;
  v22 = a2[3] - 1000;
  if ( v25 != 2 )
  {
    if ( v27 > v22 && v9 <= v8 )
      return 1;
    if ( v9 >= *a2 + 530 )
      return v6;
    goto LABEL_31;
  }
  if ( v27 > v22 && v9 >= v8 )
    return 1;
  if ( v9 > a2[2] - 530 )
  {
LABEL_31:
    if ( v27 >= v28 )
      return 1;
  }
  return v6;
}
