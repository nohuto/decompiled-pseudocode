/*
 * XREFs of ?VisualSetTransform@CChannel@@UEAAJII@Z @ 0x180022750
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetTransform(CChannel *this, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8[0] = 48;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
