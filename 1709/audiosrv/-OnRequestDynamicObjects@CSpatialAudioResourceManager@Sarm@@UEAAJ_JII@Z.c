/*
 * XREFs of ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1800C1150
 * Callers:
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x1800C0250 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ @ 0x1800C28F8 (-WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ.c)
 *     ?LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z @ 0x1800C3964 (-LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x1800C5440 (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CSpatialAudioResourceManagerTraceLogger *v9; // rcx
  Sarm::CStreamResource *Stream; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  struct Sarm::CStreamResource *v16; // rax
  __int128 v17; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v18)(); // [rsp+38h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h]
  unsigned __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall ***v21)(); // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  CSpatialAudioResourceManagerTraceLogger::LogRequestDynamicObjects(v9, a2, a3, a4);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( !Stream )
  {
    v11 = 482LL;
LABEL_3:
    v12 = -2005139191;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v12);
    goto LABEL_10;
  }
  v13 = Sarm::CStreamResource::ValidateDynamicObjectRequest(Stream, a3, a4);
  v12 = v13;
  if ( v13 < 0 )
  {
    v14 = 485LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_10:
    if ( v4 )
      LeaveCriticalSection(v4);
    return v12;
  }
  v18 = off_1800F4848;
  *(_QWORD *)&v17 = this;
  *((_QWORD *)&v17 + 1) = a2;
  v19 = v17;
  v21 = &v18;
  v20 = __PAIR64__(a4, a3);
  v13 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
  v12 = v13;
  if ( v13 < 0 )
  {
    v14 = 489LL;
    goto LABEL_9;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( a3 )
  {
    if ( !CWorkFifo::WaitForWorkToComplete((Sarm::CSpatialAudioResourceManager *)((char *)this + 344)) )
    {
      v12 = -2005139188;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EE,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010CLL);
      return v12;
    }
    EnterCriticalSection(v4);
    v16 = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
    if ( !v16 )
    {
      v11 = 499LL;
      goto LABEL_3;
    }
    if ( *((_DWORD *)v16 + 20) < a3 )
    {
      v12 = -2005139188;
      v11 = 502LL;
      goto LABEL_4;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  return 0LL;
}
