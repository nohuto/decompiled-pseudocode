/*
 * XREFs of ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801973EC
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180196BD4 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180195AA0 (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197104 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197228 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197F14 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18019856C (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::ProcessManipulationInfo(CManipulationManager *this, LARGE_INTEGER *a2)
{
  DWORD LowPart; // eax
  DWORD v5; // edi
  LARGE_INTEGER v6; // rbx
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  DWORD v10; // [rsp+30h] [rbp-69h] BYREF
  DWORD v11; // [rsp+34h] [rbp-65h] BYREF
  DWORD v12; // [rsp+38h] [rbp-61h] BYREF
  DWORD v13; // [rsp+3Ch] [rbp-5Dh] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-59h] BYREF
  LARGE_INTEGER v15; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  DWORD *v17; // [rsp+70h] [rbp-29h]
  const GUID *v18; // [rsp+78h] [rbp-21h]
  DWORD *v19; // [rsp+80h] [rbp-19h]
  const GUID *v20; // [rsp+88h] [rbp-11h]
  DWORD *v21; // [rsp+90h] [rbp-9h]
  const GUID *v22; // [rsp+98h] [rbp-1h]
  LARGE_INTEGER *v23; // [rsp+A0h] [rbp+7h]
  __int64 cData; // [rsp+A8h] [rbp+Fh]
  LARGE_INTEGER *v25; // [rsp+B0h] [rbp+17h]
  __int64 v26; // [rsp+B8h] [rbp+1Fh]
  DWORD *v27; // [rsp+C0h] [rbp+27h]
  const GUID *v28; // [rsp+C8h] [rbp+2Fh]

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
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
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
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180214D93, v8, v9, cData, &pData);
  }
  CManipulationManager::ProcessFrameInputPreTargeting((struct CComposition **)this, (struct CManipulationFrame *)a2);
  CManipulationManager::CalculateFrameTargets(this, (struct CManipulationFrame *)a2);
  CManipulationManager::TargetFrameInput(this, (struct CManipulationFrame *)a2);
  CManipulationManager::RouteAllFrames(this, (struct CManipulationFrame *)a2);
  CManipulationManager::ProcessFrameInputPostTargeting(this, (struct CManipulationFrame *)a2);
}
