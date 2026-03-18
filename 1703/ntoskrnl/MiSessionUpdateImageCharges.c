/*
 * XREFs of MiSessionUpdateImageCharges @ 0x140144324
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14006B974 (MiSessionLookupImage.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 */

__int64 __fastcall MiSessionUpdateImageCharges(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // r8
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx

  v1 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
  v3 = MiCountSystemImageCommitment(v2);
  v4 = v1[9] - v3;
  if ( v4 )
  {
    v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v5 + 3180)), v4);
    v1[9] = v3;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 48), -(__int64)v4);
  }
  return 0LL;
}
