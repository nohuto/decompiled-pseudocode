/*
 * XREFs of ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1800C3000
 * Callers:
 *     std::_Func_impl__lambda_7b5d4040f449a8cdcef3c365c74c67ab__std::allocator_int__void_::_Do_call @ 0x1800C4D10 (std--_Func_impl__lambda_7b5d4040f449a8cdcef3c365c74c67ab__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x1800C2678 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x1800C28E4 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C41D8 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1800C62D0 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x1800C6D5C (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800C71DC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects(
        PTP_TIMER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall **v12)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall ***v14)(); // [rsp+78h] [rbp-8h]
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)(this + 8), (__int64)lpCriticalSection);
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects", 0x19Fu);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream((Sarm::CSpatialAudioResourceManager *)this, a2);
  if ( Stream )
  {
    v15 = 0LL;
    if ( (int)Sarm::CStreamResource::ProcessDynamicObjectCountChange(Stream, a3, a4, &v15) >= 0 && v15 > 0 )
    {
      CWorkFifo::DelayWorkUntil(this + 38, v15);
      *(_QWORD *)&v11 = this;
      *((_QWORD *)&v11 + 1) = a2;
      v12 = off_1800DE520;
      v13 = v11;
      v14 = &v12;
      CWorkFifo::ScheduleWorkItem((CWorkFifo *)(this + 38));
    }
  }
  else
  {
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v9, 0x1A4u, a2);
  }
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
}
