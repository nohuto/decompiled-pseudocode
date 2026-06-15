/*
 * XREFs of ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1800C35B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x1800C28E4 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C41D8 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ @ 0x1800C4B84 (-WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x1800C6854 (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 *     ?LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z @ 0x1800C6CC4 (-LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  CSpatialAudioResourceManagerTraceLogger *v8; // rcx
  Sarm::CStreamResource *Stream; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  struct Sarm::CStreamResource *v15; // rax
  __int128 v16; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v17)(); // [rsp+38h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-40h]
  unsigned __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall ***v20)(); // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B0h] [rbp+30h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 64, (__int64)&lpCriticalSection);
  CSpatialAudioResourceManagerTraceLogger::LogRequestDynamicObjects(v8, a2, a3, a4);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( !Stream )
  {
    v10 = 375LL;
LABEL_3:
    v11 = -2005139191;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v11);
    goto LABEL_10;
  }
  v12 = Sarm::CStreamResource::ValidateDynamicObjectRequest(Stream, a3, a4);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 378LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_10:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v11;
  }
  v17 = off_1800DE4F0;
  *(_QWORD *)&v16 = this;
  *((_QWORD *)&v16 + 1) = a2;
  v18 = v16;
  v20 = &v17;
  v19 = __PAIR64__(a4, a3);
  v12 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 382LL;
    goto LABEL_9;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( a3 )
  {
    if ( !CWorkFifo::WaitForWorkToComplete((Sarm::CSpatialAudioResourceManager *)((char *)this + 304)) )
    {
      v11 = -2005139188;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x183,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010CLL);
      return v11;
    }
    Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 64, (__int64)&lpCriticalSection);
    v15 = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
    if ( !v15 )
    {
      v10 = 392LL;
      goto LABEL_3;
    }
    if ( *((_DWORD *)v15 + 20) < a3 )
    {
      v11 = -2005139188;
      v10 = 395LL;
      goto LABEL_4;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
  return 0LL;
}
