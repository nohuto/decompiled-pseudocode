/*
 * XREFs of ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1800F3264
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7b5d4040f449a8cdcef3c365c74c67ab__void_::_Do_call @ 0x1800F5160 (std--_Func_impl_no_alloc__lambda_7b5d4040f449a8cdcef3c365c74c67ab__void_--_Do_call.c)
 * Callees:
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x1800F27B8 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x1800F2A3C (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800F468C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x1800F5E7C (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800F62FC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1800F7498 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects(
        PTP_TIMER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall **v12)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall ***v14)(); // [rsp+78h] [rbp-8h]
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects", 0x20Du);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream((Sarm::CSpatialAudioResourceManager *)this, a2);
  if ( Stream )
  {
    v15 = 0LL;
    if ( (int)Sarm::CStreamResource::ProcessDynamicObjectCountChange(Stream, a3, a4, &v15) >= 0 && v15 > 0 )
    {
      CWorkFifo::DelayWorkUntil(this + 43, v15);
      *(_QWORD *)&v11 = this;
      *((_QWORD *)&v11 + 1) = a2;
      v12 = off_18012CCB8;
      v13 = v11;
      v14 = &v12;
      CWorkFifo::ScheduleWorkItem((CWorkFifo *)(this + 43));
    }
  }
  else
  {
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v10, 0x212u, a2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
}
