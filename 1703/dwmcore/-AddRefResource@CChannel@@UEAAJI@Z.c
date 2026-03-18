/*
 * XREFs of ?AddRefResource@CChannel@@UEAAJI@Z @ 0x1800826A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18007F2C4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 */

__int64 __fastcall CChannel::AddRefResource(CChannel *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  if ( a2 )
  {
    v4 = CHandleTable::CreateOrAddRefOnChannel((__int64)this + 16, (__int64)this, 0, &v8);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2A3u);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2A0u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return v5;
}
