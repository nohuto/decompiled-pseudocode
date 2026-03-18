/*
 * XREFs of ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C0132A68
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z @ 0x1C0134AB0 (-FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z.c)
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C013553C (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0136DB8 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x1C0136E00 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::DoGestureProcessing(CPTPEngine *this, struct PTPInput *a2, int *a3)
{
  int v3; // eax
  BOOL v6; // esi
  unsigned int v7; // r15d
  int v8; // edi
  char v9; // r10
  char v10; // r9
  unsigned int v11; // r11d
  _DWORD *v12; // r8
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // r13d
  struct CContactState *v18; // r12
  __int128 *v19; // r8
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  int *v24; // [rsp+A0h] [rbp+40h]

  v24 = a3;
  v3 = *((_DWORD *)this + 750);
  v6 = v3 == 6;
  *a3 = 0;
  if ( v3 == 3 || v3 == 6 )
    goto LABEL_29;
  v7 = 0;
  v8 = 1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_31;
  v12 = (_DWORD *)((char *)a2 + 64);
  do
  {
    v13 = 296LL * (unsigned int)(*(v12 - 2) % *((_DWORD *)this + 4));
    v14 = *(_DWORD *)((char *)this + v13 + 1192);
    if ( (v14 & 1) != 0 )
    {
      v15 = (v14 & 0x80u) != 0 || (*v12 & 0x40000) != 0;
      v16 = (v15 << 10) | v14 & 0xFFFFFBFF;
      *(_DWORD *)((char *)this + v13 + 1192) = v16;
      if ( !v15 )
      {
        ++v7;
        if ( (v16 & 0x20000) == 0 )
          v10 = 1;
        if ( (v16 & 4) != 0 )
          v9 = 1;
      }
    }
    ++v11;
    v12 += 24;
    v17 = 3;
    if ( v7 > 2 )
      v17 = 6;
    v6 = v7 > 2;
  }
  while ( v11 < *((_DWORD *)a2 + 12) );
  if ( v7 < 2 )
  {
LABEL_31:
    LODWORD(v22) = 1;
    v21 = v23;
    v20 = v22;
    CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v20);
    return;
  }
  if ( !v10 || v9 )
  {
    v18 = CPTPEngine::FindOrAssignPrimary(this, a2);
    if ( v18 )
    {
      *((_QWORD *)this + 399) = *(_QWORD *)a2;
      *((_DWORD *)this + 750) = v17;
      CBasePTPEngine::SendInertiaOutput(this, 1LL);
      if ( v7 <= 2 )
      {
        v19 = &v20;
        LODWORD(v22) = 9;
        v21 = v23;
        v20 = v22;
      }
      else
      {
        v19 = &v22;
        v23 = v21;
        LODWORD(v20) = (v7 != 3) + 11;
        v22 = v20;
      }
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, v19);
      v8 = CPTPEngine::SendInitialGestureFrame(this, a2, v18, v7 > 2);
    }
    else
    {
      LODWORD(v22) = 1;
      v21 = v23;
      v20 = v22;
      CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v20);
    }
    if ( !v8 )
    {
      a3 = v24;
LABEL_29:
      CPTPEngine::ProcessGestureFrame(this, a2, v6, a3);
    }
  }
}
