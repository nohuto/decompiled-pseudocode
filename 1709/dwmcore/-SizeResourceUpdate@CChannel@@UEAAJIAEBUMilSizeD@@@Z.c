/*
 * XREFs of ?SizeResourceUpdate@CChannel@@UEAAJIAEBUMilSizeD@@@Z @ 0x18000E370
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::SizeResourceUpdate(CChannel *this, int a2, const struct MilSizeD *a3)
{
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = *(_OWORD *)a3;
  v9[0] = 306;
  v9[1] = a2;
  v10 = v6;
  v7 = CChannel::SendCommand(this, v9, 0x18u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v7;
}
