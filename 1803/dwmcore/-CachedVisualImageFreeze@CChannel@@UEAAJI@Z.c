/*
 * XREFs of ?CachedVisualImageFreeze@CChannel@@UEAAJI@Z @ 0x180084F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::CachedVisualImageFreeze(CChannel *this, int a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]
  char *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = 30;
  v7 = a2;
  v4 = CChannel::SendCommand(this, &v6, 8u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v4;
}
