/*
 * XREFs of ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EC10
 * Callers:
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400054E0 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAAEAPEAVCStreamInstance@@AEAPEAU__POSITION@@@Z @ 0x140003E80 (-GetNext@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140010810 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140010EB0 (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14004252C (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  CConnectionInstance *v9; // rcx
  struct IAudioProcessor *v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CAudioDeviceGraph::RegisterSpatialPipe((CAudioDeviceGraph *)((char *)this - 16), a2, 0);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, a2);
  }
  if ( *((_DWORD *)a2 + 29) )
  {
    v4 = (_QWORD *)*((_QWORD *)a2 + 18);
    if ( v4 )
    {
      if ( (*(int (__fastcall **)(_QWORD *, unsigned __int64 *))(*v4 + 32LL))(v4, &v18) >= 0 )
      {
        v5 = *((_QWORD *)a2 + 3);
        while ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 16);
          v5 = *(_QWORD *)(v5 + 8);
          if ( *(_DWORD *)(v6 + 40) == 2 )
          {
            v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
            if ( v7 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(**((_QWORD **)a2 + 18) + 64LL))(
              *((_QWORD *)a2 + 18),
              v18,
              v7);
            if ( v7 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          }
        }
        v8 = (_QWORD *)*((_QWORD *)a2 + 8);
        while ( v8 )
        {
          v9 = (CConnectionInstance *)v8[2];
          v8 = (_QWORD *)*v8;
          v10 = (struct IAudioProcessor *)*((_QWORD *)a2 + 18);
          v11 = v18;
          v12 = *((_DWORD *)v9 + 4);
          *((_DWORD *)v9 + 1) = 0;
          if ( v12 )
          {
            if ( v12 == 1 )
              CConnectionInstance::RemoveCaptureConnection(v9, v10, v11);
          }
          else
          {
            CConnectionInstance::RemoveRenderConnection(v9, v10, v11);
          }
        }
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)a2 + 18) + 40LL))(
               *((_QWORD *)a2 + 18),
               v18) >= 0 )
          *((_DWORD *)a2 + 29) = 0;
      }
    }
  }
  v13 = *((_QWORD *)a2 + 30);
  v18 = v13;
  while ( v13 )
  {
    v4 = (_QWORD *)*ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                      (__int64)v4,
                      (_QWORD **)&v18);
    v13 = v18;
    v4[1] = -1LL;
  }
  v14 = *((_QWORD *)a2 + 18);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    *((_QWORD *)a2 + 18) = 0LL;
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
