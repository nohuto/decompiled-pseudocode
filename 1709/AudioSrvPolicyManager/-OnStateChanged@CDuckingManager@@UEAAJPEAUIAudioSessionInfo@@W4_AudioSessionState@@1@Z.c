/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800077C0
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180005A40 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     WPP_SF_dd @ 0x180006D44 (WPP_SF_dd.c)
 *     WPP_SF_dddS @ 0x180006E24 (WPP_SF_dddS.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180008EFC (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x18000A2A4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000A41C (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18000A8DC (-GrowBuffer@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDuckingManager::OnStateChanged(
        CDuckingManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        enum _AudioSessionState a4)
{
  enum _AudioSessionState v4; // r12d
  struct IAudioSessionInfo *v5; // r14
  CDuckingManager *v6; // rbx
  int v7; // edi
  _UNKNOWN **v8; // rcx
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  USHORT v12; // dx
  int v14; // r13d
  HANDLE ProcessHeap; // rax
  _QWORD *v16; // rax
  void *v17; // rsi
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  int v20; // r9d
  _UNKNOWN **v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // r13d
  unsigned __int64 i; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // r13
  int v33; // ecx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  const wchar_t *v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rdx
  _QWORD *v39; // rdx
  _QWORD *v40; // rdx
  int v41; // eax
  int *v42; // rbx
  int *v43; // rbx
  int *v44; // rbx
  __int64 v45; // [rsp+20h] [rbp-B8h]
  int v46; // [rsp+48h] [rbp-90h]
  int v47; // [rsp+48h] [rbp-90h]
  __int64 v48; // [rsp+58h] [rbp-80h] BYREF
  __int64 v49; // [rsp+60h] [rbp-78h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-70h] BYREF
  char v51; // [rsp+70h] [rbp-68h]
  __int64 v52; // [rsp+78h] [rbp-60h]
  ATL::CAtlException *v53; // [rsp+80h] [rbp-58h] BYREF
  ATL::CAtlException *v54; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v55; // [rsp+90h] [rbp-48h] BYREF
  int v57; // [rsp+E0h] [rbp+8h]

  v52 = -2LL;
  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = 0;
  v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (const wchar_t *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_dddS(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, v4, *((_DWORD *)v6 + 73), *((_DWORD *)v6 + 72), v9);
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)v6 + 74) )
  {
    if ( v8 == &WPP_GLOBAL_Control || (*((_DWORD *)v8 + 7) & 0x8000000) == 0 || *((_BYTE *)v8 + 25) < 4u )
      return 0LL;
    v12 = 22;
LABEL_10:
    WPP_SF_((TRACEHANDLE)v8[2], v12, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
    return 0LL;
  }
  if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *, struct IAudioSessionInfo *, __int64))(*(_QWORD *)v5 + 40LL))(
         v5,
         a2,
         a3) )
  {
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      return 0LL;
    }
    v12 = 23;
    goto LABEL_10;
  }
  if ( v4 == AudioSessionStateActive )
  {
    v14 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 48LL))(v5);
    ProcessHeap = GetProcessHeap();
    v16 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
    v17 = v16;
    if ( v16 )
    {
      *v16 = v5;
      *((_DWORD *)v16 + 2) = v14;
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v17 )
    {
      v7 = -2147024882;
      goto LABEL_41;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 16);
    v51 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v7 = 0;
    try
    {
      v18 = *((_QWORD *)v6 + 8);
      v48 = v18;
      if ( v18 >= *((_QWORD *)v6 + 9)
        && !(unsigned __int8)ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::GrowBuffer(
                               (char *)v6 + 56,
                               v18 + 1) )
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      v19 = (_QWORD *)(*((_QWORD *)v6 + 7) + 8 * v48);
      if ( v19 )
        *v19 = v17;
      ++*((_QWORD *)v6 + 8);
    }
    catch ( ATL::CAtlException *v53 )
    {
      v42 = (int *)v53;
      if ( *(_DWORD *)v53 == -1073741571 )
        _o__resetstkoflw();
      v7 = *v42;
      if ( *v42 < 0 )
      {
        operator delete(v17, (const struct std::nothrow_t *)0x10);
        v6 = this;
        v5 = a2;
        goto LABEL_37;
      }
      v6 = this;
      v5 = a2;
    }
    if ( v14 )
    {
      v20 = _InterlockedIncrement((volatile signed __int32 *)v6 + 72);
      v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        goto LABEL_38;
      }
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v20);
    }
LABEL_37:
    v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_38:
    if ( !v51 )
    {
LABEL_42:
      if ( *((_DWORD *)v6 + 73) != 3 && (v14 || *((_DWORD *)v6 + 72)) )
      {
        v22 = 1LL;
        v23 = *((unsigned int *)v6 + 72);
        goto LABEL_96;
      }
      goto LABEL_97;
    }
    LeaveCriticalSection(lpCriticalSection);
LABEL_41:
    v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_42;
  }
  if ( v4 )
    return (unsigned int)v7;
  v46 = 0;
  v24 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
  for ( i = 0LL; i < *((_QWORD *)v6 + 8); ++i )
  {
    v48 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    v49 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    try
    {
      if ( i >= *((_QWORD *)v6 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v26 = **(_QWORD **)(*((_QWORD *)v6 + 7) + 8 * i);
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 64LL))(v26);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        &v48,
        v27);
    }
    catch ( ATL::CAtlException *v54 )
    {
      v43 = (int *)v54;
      if ( *(_DWORD *)v54 == -1073741571 )
        _o__resetstkoflw();
      v7 = *v43;
      if ( *v43 < 0 )
      {
LABEL_81:
        v6 = this;
        v4 = a4;
        v5 = a2;
        v24 = 0;
        goto LABEL_82;
      }
      v6 = this;
      v4 = a4;
      v5 = a2;
      v24 = 0;
    }
    v7 = 0;
    try
    {
      v28 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 64LL))(v5);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        &v49,
        v28);
    }
    catch ( ATL::CAtlException *v55 )
    {
      v44 = (int *)v55;
      if ( *(_DWORD *)v55 == -1073741571 )
        _o__resetstkoflw();
      v7 = *v44;
      if ( *v44 < 0 )
        goto LABEL_81;
      v6 = this;
      v4 = a4;
      v5 = a2;
      v24 = 0;
    }
    if ( !(unsigned int)_o__wcsicmp(v48, v49) )
    {
      v57 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 48LL))(v5);
      v32 = (_QWORD *)((char *)v6 + 56);
      if ( i >= *((_QWORD *)v6 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v33 = *(_DWORD *)(*(_QWORD *)(*v32 + 8 * i) + 8LL);
      v47 = v33;
      if ( v33 )
      {
        v31 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)v6 + 72);
        v34 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v31);
          v33 = v47;
          goto LABEL_66;
        }
      }
      else
      {
LABEL_66:
        v34 = WPP_GLOBAL_Control;
      }
      if ( v57
        && !v33
        && v34 != (_DWORD *)&WPP_GLOBAL_Control
        && (v34[7] & 0x8000000) != 0
        && *((_BYTE *)v34 + 25) >= 4u )
      {
        if ( i >= *((_QWORD *)v6 + 8) )
          ATL::AtlThrowImpl(-2147024809);
        v35 = **(_QWORD **)(*v32 + 8 * i);
        v36 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v35 + 64LL))(
                                 v35,
                                 v29,
                                 v30,
                                 v31);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v36);
      }
      if ( i >= *((_QWORD *)v6 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      operator delete(*(void **)(*v32 + 8 * i), (const struct std::nothrow_t *)0x10);
      ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt((char *)v6 + 56, i);
      v46 = 1;
      v37 = (_QWORD *)(v49 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v37 + 8LL))(*v37);
      v38 = (_QWORD *)(v48 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 8LL))(*v38);
      v24 = v57;
      break;
    }
LABEL_82:
    v39 = (_QWORD *)(v49 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v39 + 8LL))(*v39);
    v40 = (_QWORD *)(v48 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 8LL))(*v40);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
  v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v45) = v46;
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v4, v45);
    v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)v6 + 73) != 3 && (v24 || *((_DWORD *)v6 + 72)) )
  {
    v22 = 2LL;
    v23 = 0LL;
LABEL_96:
    v41 = CDuckingManager::QueueDuckingWorkItem((char *)v6 - 16, v5, v23, v22, 0);
    v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
    v7 = v41;
  }
LABEL_97:
  if ( v7 < 0 )
  {
    if ( v21 != &WPP_GLOBAL_Control && (*((_DWORD *)v21 + 7) & 0x8000000) != 0 && *((_BYTE *)v21 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v21[2], 0x1Cu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v7);
    AudPolicyLogError("CDuckingManager::OnStateChanged", 426, v7);
  }
  return (unsigned int)v7;
}
