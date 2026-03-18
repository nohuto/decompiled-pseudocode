/*
 * XREFs of ?VisualSetOptions@CChannel@@UEAAJIHH@Z @ 0x180081810
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetOptions(CChannel *this, int a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+2Ch] [rbp-1Ch]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10[0] = 53;
  v10[1] = a2;
  v10[2] = a3;
  v11 = a4;
  v8 = CChannel::SendCommand(this, v10, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v8;
}
