/*
 * XREFs of ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x1801204F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180120898 (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 */

__int64 __fastcall MilConnection_CreateChannel(struct HMIL_CONNECTION__ *a1, struct IDwmChannel **a2)
{
  signed int v4; // ebx
  signed int v5; // eax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+10h] BYREF
  struct CChannel *v8; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( a1 )
    {
      v7 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 112);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 112));
      v5 = CConnection::CreateKernelChannel(a1, &v8);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x81u);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x70u);
      else
        *a2 = v8;
    }
    else
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x6Cu);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x6Bu);
  }
  return (unsigned int)v4;
}
