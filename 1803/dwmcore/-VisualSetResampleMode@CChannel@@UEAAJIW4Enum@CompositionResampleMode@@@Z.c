/*
 * XREFs of ?VisualSetResampleMode@CChannel@@UEAAJIW4Enum@CompositionResampleMode@@@Z @ 0x1800860E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::VisualSetResampleMode(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v8[0] = 388;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand((CChannel *)a1, v8, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
