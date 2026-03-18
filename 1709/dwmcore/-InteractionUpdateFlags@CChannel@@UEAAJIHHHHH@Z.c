/*
 * XREFs of ?InteractionUpdateFlags@CChannel@@UEAAJIHHHHH@Z @ 0x18000C560
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::InteractionUpdateFlags(CChannel *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v11; // ebx
  _DWORD v13[8]; // [rsp+20h] [rbp-20h] BYREF
  char *v14; // [rsp+60h] [rbp+20h] BYREF

  v14 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v13[0] = 187;
  v13[4] = a5;
  v13[5] = a6;
  v13[6] = a7;
  v13[1] = a2;
  v13[2] = a3;
  v13[3] = a4;
  v11 = CChannel::SendCommand(this, v13, 0x1Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v11;
}
