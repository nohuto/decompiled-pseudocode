/*
 * XREFs of ?GdiSpriteBitmapUpdateSurface@CChannel@@UEAAJIW4DXGI_FORMAT@@@Z @ 0x18000CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapUpdateSurface(CChannel *this, int a2, enum DXGI_FORMAT a3)
{
  unsigned int v6; // ebx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8[0] = 143;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
