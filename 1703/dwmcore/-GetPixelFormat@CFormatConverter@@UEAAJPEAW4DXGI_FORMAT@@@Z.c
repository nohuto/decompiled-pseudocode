/*
 * XREFs of ?GetPixelFormat@CFormatConverter@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1801AB630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  unsigned int v3; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(this + 2) & -(__int64)(this != (enum DXGI_FORMAT *)16));
  EnterCriticalSection(v6);
  if ( a2 )
  {
    *a2 = this[17];
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1E9u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1ECu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return v3;
}
