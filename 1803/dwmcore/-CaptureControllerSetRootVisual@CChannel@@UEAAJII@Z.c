/*
 * XREFs of ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z @ 0x180143DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetRootVisual(CChannel *this, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8[0] = 40;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
