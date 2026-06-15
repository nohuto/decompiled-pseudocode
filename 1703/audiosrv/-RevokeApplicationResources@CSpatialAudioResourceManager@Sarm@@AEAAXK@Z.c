/*
 * XREFs of ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C4080
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C2F60 (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x1800C2678 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C2AB4 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C2BAC (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C41D8 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C667C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::RevokeApplicationResources(PTP_TIMER *this, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  struct Sarm::CStreamResource *i; // rax
  __int64 *v7; // rcx
  double v8; // xmm1_8
  char v9; // bl
  __int64 v10; // rsi
  struct Sarm::CStreamResource *FirstStream; // rax
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall **v14)(); // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h]
  __int64 (__fastcall ***v16)(); // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream((Sarm::CSpatialAudioResourceManager *)this, a2);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream((Sarm::CSpatialAudioResourceManager *)this, a2) )
  {
    v7 = *(__int64 **)(*((_QWORD *)i + 1) + 16LL);
    if ( v2 <= *v7 )
      v2 = *v7;
    if ( v3 <= v7[1] )
      v3 = v7[1];
  }
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v8 = (double)(int)g_u64QPCFrequency;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v8 = v8 + 1.844674407370955e19;
  v9 = 0;
  v10 = v2 - (unsigned int)(int)((double)(int)PerformanceCount.LowPart * -10000000.0 / v8);
  FirstStream = Sarm::CSpatialAudioResourceManager::GetFirstStream((Sarm::CSpatialAudioResourceManager *)this, a2);
  if ( FirstStream )
  {
    do
    {
      if ( *((_DWORD *)FirstStream + 20) )
      {
        v12 = Sarm::CStreamResource::SetDynamicObjects(FirstStream, 0, v10);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2F9,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v12);
        v9 = 1;
      }
      FirstStream = Sarm::CSpatialAudioResourceManager::GetNextStream((Sarm::CSpatialAudioResourceManager *)this, a2);
    }
    while ( FirstStream );
    if ( v9 )
    {
      CWorkFifo::DelayWorkUntil(this + 38, v10 + v3);
      *(_QWORD *)&v13 = this;
      v14 = off_1800DE4C0;
      DWORD2(v13) = a2;
      v16 = &v14;
      v15 = v13;
      CWorkFifo::ScheduleWorkItem((CWorkFifo *)(this + 38));
    }
  }
}
