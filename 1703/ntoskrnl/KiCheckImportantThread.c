/*
 * XREFs of KiCheckImportantThread @ 0x140203E00
 * Callers:
 *     KiGetHeteroCpuPolicyThread @ 0x14001AF38 (KiGetHeteroCpuPolicyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400EBB90 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 * Callees:
 *     KiIsThreadRankBiased @ 0x140206270 (KiIsThreadRankBiased.c)
 */

char __fastcall KiCheckImportantThread(__int64 a1, __int64 a2, __int64 a3)
{
  char IsThreadRankBiased; // al
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // r11
  char v7; // cl
  char v8; // dl
  __int64 v9; // rax
  bool v10; // zf

  IsThreadRankBiased = KiIsThreadRankBiased(a1, a2, a3, a1);
  v7 = 0;
  if ( IsThreadRankBiased )
    goto LABEL_13;
  if ( *(char *)(v4 + 195) >= 15 )
    goto LABEL_14;
  if ( *(_BYTE *)(v6 + 1119) != 1 )
  {
    if ( v5 )
    {
      v10 = v5 == 1;
LABEL_12:
      if ( v10 )
        goto LABEL_13;
LABEL_14:
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 2u);
      return 1;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 544) + 1474LL) == 2 )
      goto LABEL_14;
    v8 = *(_BYTE *)(v4 + 195);
    if ( v8 >= 10 || (*(_DWORD *)(v4 + 116) & 0x400) != 0 && v8 >= 8 )
      goto LABEL_14;
    v9 = *(_QWORD *)(v4 + 1912);
    if ( v9 )
    {
      v10 = (*(_DWORD *)(v9 + 120) & 4) == 0;
      goto LABEL_12;
    }
  }
LABEL_13:
  _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 2u);
  return v7;
}
