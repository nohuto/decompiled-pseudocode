/*
 * XREFs of ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180015304
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180126520 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800111DC (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800BE210 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800BFFC4 (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18011CF44 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Reinitialize(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  CFrameInfo *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  char *v8; // rdi
  char v9; // r13
  char LowPart; // cl
  int PrimaryVBlankRateAndPeriod; // eax
  int v12; // edi
  __int128 v13; // xmm1
  _OWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF

  *((_QWORD *)this + 3097) = 0LL;
  *((_BYTE *)this + 29500) = 0;
  *((_QWORD *)this + 3098) = 0LL;
  *((_QWORD *)this + 2627) = 0LL;
  *(_WORD *)((char *)this + 21341) = 0;
  *((_BYTE *)this + 21340) = 0;
  if ( *((_BYTE *)this + 21344) )
  {
    *((_QWORD *)this + 3690) = 0LL;
    *((_QWORD *)this + 3692) = ((unsigned __int64)this + 29536) | (((_QWORD)this + 29536) << 32);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    *((_QWORD *)this + 3689) = *((_QWORD *)this + 3690);
  }
  v2 = *((_QWORD *)this + 2626);
  v3 = (CPartitionVerticalBlankScheduler *)((char *)this + 120);
  v4 = 16LL;
  v5 = *(_QWORD *)(v2 + 88);
  v6 = *(_QWORD *)(*((_QWORD *)this + 2625) + 1280LL);
  if ( *((_BYTE *)this + 21344) )
    v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 1280);
  v8 = (char *)this + 1400;
  v9 = *(_BYTE *)(v2 + 1288);
  LOBYTE(PerformanceCount.LowPart) = *(_BYTE *)(v2 + 1297);
  do
  {
    CFrameInfo::Clear(v3);
    *(v8 - 8) = 0;
    *(_QWORD *)v8 = 0LL;
    v8[8] = 0;
    *((_DWORD *)v8 + 3) = 0;
    v8[17] = 0;
    v3 = (CFrameInfo *)((char *)v3 + 1304);
    v8 += 1304;
    --v4;
  }
  while ( v4 );
  LowPart = PerformanceCount.LowPart;
  *(_QWORD *)(*((_QWORD *)this + 2626) + 88LL) = v5;
  *(_QWORD *)(*((_QWORD *)this + 2626) + 1280LL) = v7;
  *(_BYTE *)(*((_QWORD *)this + 2626) + 1288LL) = v9;
  *(_BYTE *)(*((_QWORD *)this + 2626) + 1297LL) = LowPart;
  *(_QWORD *)(*((_QWORD *)this + 2625) + 1280LL) = v6;
  *(_BYTE *)(*((_QWORD *)this + 2626) + 496LL) = 1;
  PrimaryVBlankRateAndPeriod = GetPrimaryVBlankRateAndPeriod(
                                 (struct _UNSIGNED_RATIO *)this + 10,
                                 (unsigned __int64 *)this + 11);
  v12 = PrimaryVBlankRateAndPeriod;
  if ( PrimaryVBlankRateAndPeriod < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PrimaryVBlankRateAndPeriod, 0x2Cu);
  else
    *((_QWORD *)this + 12) = *((_QWORD *)this + 10);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC2u);
  }
  else
  {
    if ( *((_BYTE *)this + 21344) )
      *((_BYTE *)this + 21344) = 0;
    *((_WORD *)this + 12396) = 0;
    CPartitionVerticalBlankScheduler::GetDisplayInfo(this);
    *((_QWORD *)this + 3681) = this;
    *((_QWORD *)this + 3091) = 0LL;
    *((_DWORD *)this + 6184) = 0;
    memset_0(v15, 0, sizeof(v15));
    v13 = v15[1];
    *(_OWORD *)((char *)this + 24744) = v15[0];
    *(_OWORD *)((char *)this + 24760) = v13;
    QueryPerformanceCounter(&PerformanceCount);
    *((LARGE_INTEGER *)this + 3089) = PerformanceCount;
    *((_QWORD *)this + 3090) = 0LL;
  }
  return (unsigned int)v12;
}
