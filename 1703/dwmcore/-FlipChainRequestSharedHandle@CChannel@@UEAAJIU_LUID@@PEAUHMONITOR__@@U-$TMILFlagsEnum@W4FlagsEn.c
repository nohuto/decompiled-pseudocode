/*
 * XREFs of ?FlipChainRequestSharedHandle@CChannel@@UEAAJIU_LUID@@PEAUHMONITOR__@@U?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@@Z @ 0x180139350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::FlipChainRequestSharedHandle(CChannel *this, int a2, __int64 a3, __int64 a4, int a5)
{
  _DWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+38h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+20h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10[0] = 189;
  v12 = a5;
  v10[1] = a2;
  v11[0] = a3;
  v11[1] = a4;
  LODWORD(a3) = CChannel::SendCommand(this, v10, 0x1Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return (unsigned int)a3;
}
