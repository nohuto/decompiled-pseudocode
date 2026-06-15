/*
 * XREFs of ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000E48C
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000DEFC (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000B840 (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x18000E92C (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x18000F470 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F880 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x18000FD48 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::ApplyDuckingGainStages(CDuckingManager *this, const unsigned __int16 *a2)
{
  int DuckableSessionsList; // ebx
  __int64 v4; // rbx
  const wchar_t *v5; // rax
  HANDLE ProcessHeap; // rax
  CVolumeGainStage *v7; // rax
  const struct _GUID *v8; // rdx
  CVolumeGainStage *v9; // rax
  int v10; // ecx
  int v11; // ecx
  float v12; // xmm6_4
  HANDLE v13; // rax
  CVolumeGainStage *v14; // rax
  const struct _GUID *v15; // rdx
  volatile signed __int32 *v16; // rdi
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+48h] [rbp-28h]
  int v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v21 = 10;
  v20 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v18);
  if ( DuckableSessionsList < 0 )
  {
LABEL_30:
    AudPolicyLogError("CDuckingManager::ApplyDuckingGainStages", 1484, DuckableSessionsList);
    goto LABEL_31;
  }
  while ( v19 )
  {
    v4 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v18);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v5 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v5);
    }
    v22 = 0LL;
    DuckableSessionsList = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4)(
                             v4,
                             &GUID_69319164_2df0_4e6b_88e7_2cd561a24381,
                             &v22);
    if ( DuckableSessionsList >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22) )
      {
        ProcessHeap = GetProcessHeap();
        v7 = (CVolumeGainStage *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
        if ( v7 )
        {
          v9 = CVolumeGainStage::CVolumeGainStage(v7, v8, 0.0, 10000000LL, 1);
          goto LABEL_20;
        }
LABEL_21:
        v16 = 0LL;
      }
      else
      {
        v10 = *((_DWORD *)this + 77);
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 1 )
              v12 = FLOAT_N6_0;
            else
              v12 = 0.0;
          }
          else
          {
            v12 = FLOAT_N18_0;
          }
        }
        else
        {
          v12 = FLOAT_N96_0;
        }
        v13 = GetProcessHeap();
        v14 = (CVolumeGainStage *)HeapAlloc(v13, 0, 0x38uLL);
        if ( !v14 )
          goto LABEL_21;
        v9 = CVolumeGainStage::CVolumeGainStage(v14, v15, v12, 10000000LL, 0);
LABEL_20:
        v16 = (volatile signed __int32 *)v9;
      }
      if ( v16 )
      {
        DuckableSessionsList = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v22 + 40LL))(
                                 v22,
                                 v16);
        if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1LL);
        }
      }
      else
      {
        DuckableSessionsList = -2147024882;
      }
    }
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( DuckableSessionsList < 0 )
    goto LABEL_30;
LABEL_31:
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v18);
  return (unsigned int)DuckableSessionsList;
}
