/*
 * XREFs of ?CachedVisualImageFreeze@CChannel@@UEAAJI@Z @ 0x180080320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CachedVisualImageFreeze(CChannel *this, int a2)
{
  unsigned int v4; // ebx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6[0] = 206;
  v6[1] = a2;
  v6[2] = 1;
  v4 = CChannel::SendCommand(this, v6, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return v4;
}
