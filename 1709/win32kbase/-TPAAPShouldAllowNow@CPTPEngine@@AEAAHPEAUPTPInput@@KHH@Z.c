/*
 * XREFs of ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013770C
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0132CA4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0134C50 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C01375D4 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0136CD4 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendSqmOutput@CBasePTPEngine@@IEAAXK@Z @ 0x1C0137198 (-SendSqmOutput@CBasePTPEngine@@IEAAXK@Z.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowNow(CPTPEngine *this, struct PTPInput *a2, int a3, int a4, int a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebx
  int v7; // r10d
  int v9; // esi
  int v10; // r15d
  __int64 v11; // r11
  __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  bool v15; // zf
  int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(_QWORD *)a2;
  v6 = 0;
  v7 = a3;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !*((_DWORD *)this + 5) )
  {
    LODWORD(v13) = 0;
LABEL_3:
    v7 = 0;
    LOBYTE(v9) = (_DWORD)v13 == 4;
    goto LABEL_4;
  }
  v13 = *((int *)this + 102);
  if ( !(_DWORD)v13 || (_DWORD)v13 == 4 && a4 )
    goto LABEL_3;
  if ( (a3 & 2) != 0 )
  {
    v10 = 1;
    if ( (*((_DWORD *)this + 820) & 0x10000) != 0 )
    {
      v9 = 1;
      v7 = a3 & 2;
    }
  }
  v17 = v7 & 0x6C;
  if ( !v9 && (v7 & 0x6C) != 0 )
  {
    v10 = 1;
    if ( v17 == 32 )
    {
      v18 = *((_DWORD *)this + v13 + 124);
    }
    else
    {
      v19 = v13;
      v18 = *((_DWORD *)this + v13 + 113);
      if ( v17 == 64 )
        v18 = *((_DWORD *)this + v19 + 132);
    }
    v11 = *((_QWORD *)a2 + 1);
    v12 = *((_QWORD *)a2 + 2);
    if ( v11 > 0 )
    {
      if ( v12 <= v11 )
      {
        v18 = *((_DWORD *)this + 123);
        v20 = v5 - v11;
      }
      else
      {
        v20 = v5 - v12;
      }
      if ( (__int64)((unsigned __int64)(1000 * v20) / *((_QWORD *)this + 12)) < v18 )
      {
        v9 = 1;
        v7 &= 0x6Cu;
      }
    }
  }
LABEL_4:
  v14 = *((_QWORD *)this + 12);
  v21[3] = v9;
  v21[4] = v7;
  v21[0] = 1000 * v11 / v14;
  v21[1] = 1000 * v12 / v14;
  v21[2] = 1000 * v5 / v14;
  CBasePTPEngine::SendEtwOutput((__int64)this, 0, (__int64)v21);
  if ( !a5 || !v10 )
    goto LABEL_8;
  CBasePTPEngine::SendSqmOutput(this, 11611);
  v15 = v9 == 0;
  if ( v9 )
  {
    CBasePTPEngine::SendSqmOutput(this, 11610);
LABEL_8:
    v15 = v9 == 0;
  }
  LOBYTE(v6) = v15;
  return v6;
}
