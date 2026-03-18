/*
 * XREFs of ?PartitionSwitchRemotingMode@CChannel@@UEAAJW4Enum@DwmRemotingMode@@H@Z @ 0x18000E500
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::PartitionSwitchRemotingMode(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v8[0] = 255;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand((CChannel *)a1, v8, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
