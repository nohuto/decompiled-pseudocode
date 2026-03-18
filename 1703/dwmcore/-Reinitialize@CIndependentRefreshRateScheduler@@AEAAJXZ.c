/*
 * XREFs of ?Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D770
 * Callers:
 *     ?Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D0C8 (-Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 *     ?Reset@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013DA8C (-Reset@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x1800658F0 (-GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3F28 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?Initialize@CRateInfo@@QEAAJXZ @ 0x1800B8370 (-Initialize@CRateInfo@@QEAAJXZ.c)
 *     ?SetRefreshesPerFrame@CRateInfo@@QEAAXI@Z @ 0x1800B8408 (-SetRefreshesPerFrame@CRateInfo@@QEAAXI@Z.c)
 *     ?Reinitialize@CTelemetryFrameStatistics@@QEAAXXZ @ 0x1800BC450 (-Reinitialize@CTelemetryFrameStatistics@@QEAAXXZ.c)
 *     ?Initialize@CPartitionScheduler@@IEAAXXZ @ 0x1800C965C (-Initialize@CPartitionScheduler@@IEAAXXZ.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::Reinitialize(CIndependentRefreshRateScheduler *this)
{
  __int64 v2; // rcx
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  char *v8; // rdi
  CFrameInfo *v9; // rsi
  __int64 v10; // rbp
  int v11; // eax
  unsigned int v12; // edi
  char v14; // [rsp+70h] [rbp+8h]
  __int64 v15; // [rsp+78h] [rbp+10h]
  __int64 v16; // [rsp+80h] [rbp+18h]

  *((_QWORD *)this + 3182) = 0LL;
  *((_QWORD *)this + 3183) = 0LL;
  *((_QWORD *)this + 2687) = 0LL;
  *(_WORD *)((char *)this + 21825) = 0;
  *((_BYTE *)this + 21824) = 0;
  if ( *((_BYTE *)this + 21828) )
  {
    CPartitionScheduler::Initialize((CIndependentRefreshRateScheduler *)((char *)this + 8));
    *(_QWORD *)(*((_QWORD *)this + 2686) + 1304LL) = *((_QWORD *)this + 2);
    *(_QWORD *)(*((_QWORD *)this + 2686) + 240LL) = *((_QWORD *)this + 2);
  }
  v2 = *((_QWORD *)this + 2686);
  v3 = *(_QWORD *)(v2 + 1304);
  v4 = *(_QWORD *)(v2 + 240);
  v15 = *(_QWORD *)(v2 + 88);
  v16 = *(_QWORD *)(v2 + 1296);
  v5 = *((_QWORD *)this + 2685);
  v6 = *(_QWORD *)(v5 + 1296);
  v7 = *(_QWORD *)(v5 + 1304);
  if ( *((_BYTE *)this + 21828) )
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  v8 = (char *)this + 1512;
  v14 = *(_BYTE *)(v2 + 1312);
  v9 = (CIndependentRefreshRateScheduler *)((char *)this + 216);
  v10 = 16LL;
  do
  {
    CFrameInfo::Clear(v9);
    *(v8 - 8) = 0;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    v8[16] = 0;
    *((_DWORD *)v8 + 5) = 0;
    v9 = (CFrameInfo *)((char *)v9 + 1328);
    v8 += 1328;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)(*((_QWORD *)this + 2686) + 1304LL) = v3;
  *(_QWORD *)(*((_QWORD *)this + 2686) + 240LL) = v4;
  *(_QWORD *)(*((_QWORD *)this + 2686) + 88LL) = v15;
  *(_QWORD *)(*((_QWORD *)this + 2686) + 1296LL) = v16;
  *(_BYTE *)(*((_QWORD *)this + 2686) + 1312LL) = v14;
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1296LL) = v6;
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1304LL) = v7;
  *(_BYTE *)(*((_QWORD *)this + 2686) + 512LL) = 1;
  v11 = CRateInfo::Initialize((CIndependentRefreshRateScheduler *)((char *)this + 136));
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC2u);
  }
  else
  {
    if ( *((_BYTE *)this + 21828) )
      *((_BYTE *)this + 21828) = 0;
    CRateInfo::SetRefreshesPerFrame((CIndependentRefreshRateScheduler *)((char *)this + 136));
    *((_WORD *)this + 12736) = 0;
    CIndependentRefreshRateScheduler::GetDisplayInfo(this);
    *((_DWORD *)this + 5455) = -1;
    *((_QWORD *)this + 3766) = this;
    CTelemetryFrameStatistics::Reinitialize((CIndependentRefreshRateScheduler *)((char *)this + 25264));
  }
  return v12;
}
