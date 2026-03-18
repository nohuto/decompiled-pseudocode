/*
 * XREFs of PopPowerAggregatorSelectRequest @ 0x14076A9E8
 * Callers:
 *     PopPowerAggregatorWorker @ 0x14076AC00 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopDiagTracePowerAggregatorInvalidRequestIndex @ 0x14076869C (PopDiagTracePowerAggregatorInvalidRequestIndex.c)
 *     PopDiagTracePowerAggregatorRequest @ 0x140768814 (PopDiagTracePowerAggregatorRequest.c)
 *     PopPowerAggregatorGetPromotionReason @ 0x14076A988 (PopPowerAggregatorGetPromotionReason.c)
 */

void __fastcall PopPowerAggregatorSelectRequest(int *a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rsi
  int *v4; // r14
  unsigned int v5; // r11d
  unsigned int v6; // r10d
  int v7; // edi
  __int64 v8; // rbp
  int *v9; // r12
  int *v10; // r13
  int PromotionReason; // eax
  int v12; // r10d
  unsigned int v13; // ebx
  _DWORD v16[16]; // [rsp+30h] [rbp-88h] BYREF

  v2 = dword_1403A862C;
  v3 = a2;
  v4 = a1;
  if ( (unsigned int)dword_1403A862C < 0x10 )
  {
    memset(v16, 0, sizeof(v16));
    v5 = dword_1403A8630;
    LOBYTE(v6) = 1;
    v7 = dword_1403A862C;
    if ( (unsigned int)dword_1403A8630 > 1 )
    {
      do
      {
        v8 = (v2 + (_BYTE)v6) & 0xF;
        v9 = &PopPowerAggregatorWork[3 * v7];
        v10 = &PopPowerAggregatorWork[3 * v8];
        PromotionReason = PopPowerAggregatorGetPromotionReason(v9 + 5, v10 + 5);
        if ( PromotionReason )
        {
          v16[v7] = PromotionReason;
          v7 = v8;
        }
        else
        {
          v16[v8] = PopPowerAggregatorGetPromotionReason(v10 + 5, v9 + 5);
        }
        v6 = v12 + 1;
      }
      while ( v6 < v5 );
      v3 = a2;
      v4 = a1;
    }
    v13 = 0;
    if ( v5 )
    {
      do
      {
        PopDiagTracePowerAggregatorRequest(
          *v4,
          v13,
          (__int64)&PopPowerAggregatorWork[2 * (((_BYTE)v13 + (_BYTE)dword_1403A862C) & 0xF)
                                         + 5
                                         + (((_BYTE)v13 + (_BYTE)dword_1403A862C) & 0xF)],
          v16[((_BYTE)v13 + (_BYTE)dword_1403A862C) & 0xF]);
        ++v13;
      }
      while ( v13 < dword_1403A8630 );
    }
    *(_QWORD *)v3 = *(_QWORD *)&PopPowerAggregatorWork[3 * v7 + 5];
    *(_DWORD *)(v3 + 8) = PopPowerAggregatorWork[3 * v7 + 7];
    dword_1403A862C = 0;
    dword_1403A8630 = 0;
    memset(&unk_1403A8634, 0, 0xC0uLL);
  }
  else
  {
    PopDiagTracePowerAggregatorInvalidRequestIndex(dword_1403A862C, dword_1403A8630);
  }
}
