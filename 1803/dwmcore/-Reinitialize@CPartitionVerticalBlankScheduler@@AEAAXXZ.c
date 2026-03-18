/*
 * XREFs of ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005E048
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x18005DF64 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A364 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A414 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reset@CRateInfo@@QEAAXXZ @ 0x1800BCA04 (-Reset@CRateInfo@@QEAAXXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800CD824 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::Reinitialize(CPartitionVerticalBlankScheduler *this)
{
  char v1; // dl
  __int64 v3; // rcx
  CRateInfo *v4; // rsi
  __int64 v5; // r14
  char *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r12
  char v10; // r13
  char LowPart; // cl
  __int128 v12; // xmm1
  _OWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 26183);
  *((_QWORD *)this + 3819) = 0LL;
  *((_BYTE *)this + 35276) = 0;
  *((_QWORD *)this + 3820) = 0LL;
  *((_QWORD *)this + 3232) = 0LL;
  *(_WORD *)((char *)this + 26181) = 0;
  *((_BYTE *)this + 26180) = 0;
  if ( v1 )
  {
    *((_QWORD *)this + 4412) = 0LL;
    *((_QWORD *)this + 4414) = ((unsigned __int64)this + 35312) | (((_QWORD)this + 35312) << 32);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    v1 = *((_BYTE *)this + 26183);
    *((_QWORD *)this + 4411) = *((_QWORD *)this + 4412);
  }
  v3 = *((_QWORD *)this + 3231);
  v4 = (CPartitionVerticalBlankScheduler *)((char *)this + 1304);
  v5 = 0LL;
  v6 = (char *)this + 1280;
  v7 = 16LL;
  v8 = *(_QWORD *)(v3 + 16);
  if ( !v1 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 3230) + 1184LL);
  v9 = *(_QWORD *)(v3 + 1184);
  v10 = *(_BYTE *)(v3 + 1192);
  LOBYTE(PerformanceCount.LowPart) = *(_BYTE *)(v3 + 1201);
  do
  {
    CFrameInfo::Clear((CRateInfo *)((char *)v4 - 1208));
    *(v6 - 8) = 0;
    *(_QWORD *)v6 = 0LL;
    v6[8] = 0;
    *((_DWORD *)v6 + 3) = 0;
    v6[17] = 0;
    CRateInfo::Reset(v4);
    v4 = (CRateInfo *)((char *)v4 + 1608);
    v6 += 1608;
    --v7;
  }
  while ( v7 );
  LowPart = PerformanceCount.LowPart;
  *(_QWORD *)(*((_QWORD *)this + 3231) + 16LL) = v8;
  *(_QWORD *)(*((_QWORD *)this + 3231) + 1184LL) = v9;
  *(_BYTE *)(*((_QWORD *)this + 3231) + 1192LL) = v10;
  *(_BYTE *)(*((_QWORD *)this + 3231) + 1201LL) = LowPart;
  *(_QWORD *)(*((_QWORD *)this + 3230) + 1184LL) = v5;
  *(_BYTE *)(*((_QWORD *)this + 3231) + 1059LL) = 1;
  if ( *((_BYTE *)this + 26183) )
    *((_BYTE *)this + 26183) = 0;
  *((_WORD *)this + 15284) = 0;
  CPartitionVerticalBlankScheduler::GetDisplayInfo(this);
  *((_QWORD *)this + 4403) = this;
  *((_QWORD *)this + 3813) = 0LL;
  *((_DWORD *)this + 7628) = 0;
  memset_0(v13, 0, sizeof(v13));
  v12 = v13[1];
  *(_OWORD *)((char *)this + 30520) = v13[0];
  *(_OWORD *)((char *)this + 30536) = v12;
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 3811) = PerformanceCount;
  *((_QWORD *)this + 3812) = 0LL;
}
