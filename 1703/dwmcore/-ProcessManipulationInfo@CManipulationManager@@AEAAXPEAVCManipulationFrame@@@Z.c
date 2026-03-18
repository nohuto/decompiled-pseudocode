/*
 * XREFs of ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180130148
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18004E3CC (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004DD20 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004DE38 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004E068 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004E20C (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18018AD60 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::ProcessManipulationInfo(CManipulationManager *this, LARGE_INTEGER *a2)
{
  DWORD LowPart; // eax
  DWORD v5; // edi
  LARGE_INTEGER v6; // rbx
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  DWORD v10; // [rsp+30h] [rbp-79h] BYREF
  DWORD v11; // [rsp+34h] [rbp-75h] BYREF
  DWORD v12; // [rsp+38h] [rbp-71h] BYREF
  DWORD v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-69h] BYREF
  LARGE_INTEGER v15; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  DWORD *v17; // [rsp+70h] [rbp-39h]
  const GUID *v18; // [rsp+78h] [rbp-31h]
  DWORD *v19; // [rsp+80h] [rbp-29h]
  const GUID *v20; // [rsp+88h] [rbp-21h]
  DWORD *v21; // [rsp+90h] [rbp-19h]
  const GUID *v22; // [rsp+98h] [rbp-11h]
  LARGE_INTEGER *v23; // [rsp+A0h] [rbp-9h]
  __int64 cData; // [rsp+A8h] [rbp-1h]
  LARGE_INTEGER *v25; // [rsp+B0h] [rbp+7h]
  __int64 v26; // [rsp+B8h] [rbp+Fh]
  DWORD *v27; // [rsp+C0h] [rbp+17h]
  const GUID *v28; // [rsp+C8h] [rbp+1Fh]

  LowPart = a2[13].LowPart;
  if ( *((_DWORD *)this + 72) != LowPart )
  {
    ++*((_DWORD *)this + 73);
    *((_DWORD *)this + 72) = LowPart;
  }
  v5 = *((_DWORD *)this + 73);
  v6 = a2[4];
  QueryPerformanceCounter(a2 + 9);
  a2[6].LowPart = a2[12].LowPart;
  a2[6].HighPart = a2[13].LowPart;
  a2[7].LowPart = v5;
  a2[8] = v6;
  a2[11].LowPart = a2[20].HighPart - 1;
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v10 = a2[3].LowPart;
    v17 = &v10;
    v19 = &v11;
    v12 = a2[2].LowPart;
    v21 = &v12;
    v14 = a2[22];
    v23 = &v14;
    v15 = a2[4];
    v25 = &v15;
    v13 = a2[12].LowPart;
    v27 = &v13;
    v18 = v9;
    v11 = v5;
    v20 = v9;
    v22 = v9;
    cData = (unsigned int)(v7 + 6);
    v26 = cData;
    v28 = v9;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F8436, v8, v9, cData, &pData);
  }
  CManipulationManager::ProcessFrameInputPreTargeting(this, (struct CManipulationFrame *)a2);
  CManipulationManager::CalculateFrameTargets(this, (struct CManipulationFrame *)a2);
  CManipulationManager::TargetFrameInput(this, (struct CManipulationFrame *)a2);
  CManipulationManager::RouteAllFrames(this, (struct CManipulationFrame *)a2);
  CManipulationManager::ProcessFrameInputPostTargeting((struct CComposition **)this, (struct CManipulationFrame *)a2);
}
