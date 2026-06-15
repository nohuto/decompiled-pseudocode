/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000C4A0
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180009880 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 *     WPP_SF_S @ 0x18000B840 (WPP_SF_S.c)
 *     WPP_SF_dd @ 0x18000BA08 (WPP_SF_dd.c)
 *     WPP_SF_dddS @ 0x18000BAE8 (WPP_SF_dddS.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x18000DBEC (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x18000EFF0 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000F0F8 (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18000F5BC (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
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
  LONG v14; // r13d
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v16; // rax
  struct _RTL_CRITICAL_SECTION *v17; // rsi
  unsigned __int64 v18; // rax
  int v19; // r9d
  _UNKNOWN **v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // r13d
  unsigned __int64 i; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r13
  int v32; // ecx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  const wchar_t *v35; // rax
  _QWORD *v36; // rdx
  _QWORD *v37; // rdx
  int v38; // eax
  _QWORD *v39; // rdx
  _QWORD *v40; // rdx
  int *v41; // rbx
  int *v42; // rbx
  int *v43; // rbx
  __int64 v44; // [rsp+20h] [rbp-B8h]
  int v45; // [rsp+48h] [rbp-90h]
  int v46; // [rsp+48h] [rbp-90h]
  __int64 v47; // [rsp+58h] [rbp-80h] BYREF
  __int64 v48; // [rsp+60h] [rbp-78h] BYREF
  LPCRITICAL_SECTION v49; // [rsp+68h] [rbp-70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-68h] BYREF
  char v51; // [rsp+78h] [rbp-60h]
  __int64 v52; // [rsp+80h] [rbp-58h]
  ATL::CAtlException *v53; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v54; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v55; // [rsp+98h] [rbp-40h] BYREF
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
    WPP_SF_((TRACEHANDLE)v8[2], v12, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids);
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
    v16 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
    v17 = v16;
    v49 = v16;
    if ( v16 )
    {
      v16->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v5;
      v16->LockCount = v14;
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v17 )
    {
      v7 = -2147024882;
      goto LABEL_38;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 16);
    v51 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v7 = 0;
    try
    {
      v18 = *((_QWORD *)v6 + 8);
      v47 = v18;
      if ( v18 >= *((_QWORD *)v6 + 9)
        && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                               (char *)v6 + 56,
                               v18 + 1) )
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      *(_QWORD *)(*((_QWORD *)v6 + 7) + 8 * v47) = v17;
      ++*((_QWORD *)v6 + 8);
    }
    catch ( ATL::CAtlException *v53 )
    {
      v41 = (int *)v53;
      if ( *(_DWORD *)v53 == -1073741571 )
        _o__resetstkoflw();
      v7 = *v41;
      if ( *v41 < 0 )
      {
        operator delete(v17, (const struct std::nothrow_t *)0x10);
        v6 = this;
        v5 = a2;
        goto LABEL_34;
      }
      v6 = this;
      v5 = a2;
    }
    if ( v14 )
    {
      v19 = _InterlockedIncrement((volatile signed __int32 *)v6 + 72);
      v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        goto LABEL_35;
      }
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v19);
    }
LABEL_34:
    v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_35:
    if ( !v51 )
    {
LABEL_39:
      if ( *((_DWORD *)v6 + 73) != 3 && (v14 || *((_DWORD *)v6 + 72)) )
      {
        v21 = 1LL;
        v22 = *((unsigned int *)v6 + 72);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    LeaveCriticalSection(lpCriticalSection);
LABEL_38:
    v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_39;
  }
  if ( v4 )
    return (unsigned int)v7;
  v45 = 0;
  v23 = 0;
  v49 = (LPCRITICAL_SECTION)((char *)v6 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
  for ( i = 0LL; i < *((_QWORD *)v6 + 8); ++i )
  {
    v47 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    v48 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    try
    {
      if ( i >= *((_QWORD *)v6 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v25 = **(_QWORD **)(*((_QWORD *)v6 + 7) + 8 * i);
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 64LL))(v25);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        &v47,
        v26);
    }
    catch ( ATL::CAtlException *v54 )
    {
      v42 = (int *)v54;
      if ( *(_DWORD *)v54 == -1073741571 )
        _o__resetstkoflw();
      v7 = *v42;
      if ( *v42 < 0 )
      {
LABEL_91:
        v6 = this;
        v4 = a4;
        v5 = a2;
        v23 = 0;
        goto LABEL_92;
      }
      v6 = this;
      v4 = a4;
      v5 = a2;
      v23 = 0;
    }
    v7 = 0;
    try
    {
      v27 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 64LL))(v5);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        &v48,
        v27);
    }
    catch ( ATL::CAtlException *v55 )
    {
      v43 = (int *)v55;
      if ( *(_DWORD *)v55 == -1073741571 )
        _o__resetstkoflw();
      v7 = *v43;
      if ( *v43 < 0 )
        goto LABEL_91;
      v6 = this;
      v4 = a4;
      v5 = a2;
      v23 = 0;
    }
    if ( !(unsigned int)_o__wcsicmp(v47, v48) )
    {
      v57 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 48LL))(v5);
      v31 = (_QWORD *)((char *)v6 + 56);
      if ( i >= *((_QWORD *)v6 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v32 = *(_DWORD *)(*(_QWORD *)(*v31 + 8 * i) + 8LL);
      v46 = v32;
      if ( v32 )
      {
        v30 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)v6 + 72);
        v33 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v30);
          v32 = v46;
          goto LABEL_61;
        }
      }
      else
      {
LABEL_61:
        v33 = WPP_GLOBAL_Control;
      }
      if ( v57
        && !v32
        && v33 != (_DWORD *)&WPP_GLOBAL_Control
        && (v33[7] & 0x8000000) != 0
        && *((_BYTE *)v33 + 25) >= 4u )
      {
        if ( i >= *((_QWORD *)v6 + 8) )
          ATL::AtlThrowImpl(-2147024809);
        v34 = **(_QWORD **)(*v31 + 8 * i);
        v35 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v34 + 64LL))(
                                 v34,
                                 v28,
                                 v29,
                                 v30);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v35);
      }
      if ( i >= *((_QWORD *)v6 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      operator delete(*(void **)(*v31 + 8 * i), (const struct std::nothrow_t *)0x10);
      ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt((char *)v6 + 56);
      v45 = 1;
      v36 = (_QWORD *)(v48 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v36 + 8LL))(*v36);
      v37 = (_QWORD *)(v47 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v37 + 8LL))(*v37);
      v23 = v57;
      break;
    }
LABEL_92:
    v39 = (_QWORD *)(v48 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v39 + 8LL))(*v39);
    v40 = (_QWORD *)(v47 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 8LL))(*v40);
  }
  LeaveCriticalSection(v49);
  v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v44) = v45;
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v4, v44);
    v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)v6 + 73) != 3 && (v23 || *((_DWORD *)v6 + 72)) )
  {
    v21 = 2LL;
    v22 = 0LL;
LABEL_83:
    v38 = CDuckingManager::QueueDuckingWorkItem((char *)v6 - 16, v5, v22, v21, 0);
    v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
    v7 = v38;
  }
LABEL_84:
  if ( v7 < 0 )
  {
    if ( v20 != &WPP_GLOBAL_Control && (*((_DWORD *)v20 + 7) & 0x8000000) != 0 && *((_BYTE *)v20 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v20[2], 0x1Cu, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v7);
    AudPolicyLogError("CDuckingManager::OnStateChanged", 398, v7);
  }
  return (unsigned int)v7;
}
