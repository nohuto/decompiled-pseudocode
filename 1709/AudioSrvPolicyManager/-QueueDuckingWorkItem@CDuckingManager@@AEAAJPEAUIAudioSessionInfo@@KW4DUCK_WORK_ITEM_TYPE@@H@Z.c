/*
 * XREFs of ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180008EFC
 * Callers:
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800074E0 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800077C0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDuckWorkItem@@@Z @ 0x18000A690 (-AddTail@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDuckingManager::QueueDuckingWorkItem(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v8; // r14
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  _DWORD *v11; // rsi
  signed int v12; // edi
  __int64 v13; // rax
  signed int LastError; // eax
  signed int *v16; // rbx
  _QWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  ATL::CAtlException *v18; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v20; // [rsp+50h] [rbp-28h]

  v17[1] = -2LL;
  v8 = a1;
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v11 = v10;
  v17[0] = v10;
  if ( v10 )
  {
    *v10 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v11[2] = a3;
    v11[3] = a4;
    v11[4] = a5;
  }
  else
  {
    v11 = 0LL;
  }
  v17[0] = v11;
  if ( !v11 )
    goto LABEL_26;
  lpCriticalSection = (LPCRITICAL_SECTION)(v8 + 208);
  v20 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v12 = 0;
  try
  {
    ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::AddTail(v8 + 248, v17);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v16 = (signed int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v8 = a1;
    v12 = *v16;
  }
  if ( v20 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v20 = 0;
  }
  if ( v12 < 0 )
  {
    if ( *(_QWORD *)v11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 16LL))(*(_QWORD *)v11);
    operator delete(v11, (const struct std::nothrow_t *)0x18);
LABEL_26:
    v12 = -2147024882;
    goto LABEL_27;
  }
  if ( *(_QWORD *)(v8 + 296)
    || (v13 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 56LL))(
                ThreadPool,
                CDuckingManager::OnDuckWorkItem,
                v8),
        (*(_QWORD *)(v8 + 296) = v13) != 0LL) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
      ThreadPool,
      *(_QWORD *)(v8 + 296));
  }
  else
  {
    if ( *(_QWORD *)v11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 16LL))(*(_QWORD *)v11);
    operator delete(v11, (const struct std::nothrow_t *)0x18);
    LastError = GetLastError();
    v12 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v12 = LastError;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v12);
    }
    AudPolicyLogError("CDuckingManager::QueueDuckingWorkItem", 1100, v12);
  }
LABEL_27:
  if ( v12 < 0 )
    AudPolicyLogError("CDuckingManager::QueueDuckingWorkItem", 1116, v12);
  return (unsigned int)v12;
}
