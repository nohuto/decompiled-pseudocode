/*
 * XREFs of ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x18000E92C
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000D53C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000E48C (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18000E6AC (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x18000E7F0 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18000F8F4 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::GetDuckableSessionsList(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 v4; // r12
  __int64 v5; // r14
  int v6; // ebx
  unsigned __int64 i; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rcx
  _UNKNOWN **v12; // rcx
  __int64 result; // rax
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v15; // [rsp+30h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-50h] BYREF
  char v17; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v17 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *(_QWORD *)(v5 + 80) )
      goto LABEL_18;
    v8 = **(_QWORD **)(*(_QWORD *)(v5 + 72) + 8 * i);
    v21 = v8;
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8)
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
      if ( !(unsigned int)_o__wcsicmp(v4, v9) )
      {
        v6 = 0;
        try
        {
          v10 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(v3, &v21, v3[1], 0LL);
          v11 = (__int64 *)v3[1];
          if ( v11 )
            *v11 = v10;
          else
            *v3 = v10;
          v3[1] = v10;
        }
        catch ( ATL::CAtlException *v15 )
        {
          v14 = v15;
          if ( *(_DWORD *)v15 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v21) = *(_DWORD *)v14;
          v6 = v21;
          if ( (int)v21 >= 0 )
          {
            v5 = a1;
            v3 = a3;
            v4 = a2;
            continue;
          }
          v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v21);
LABEL_18:
            v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
          }
          if ( v6 < 0 )
          {
            if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x8000000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
              WPP_SF_D((TRACEHANDLE)v12[2], 0x3Au, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v6);
            AudPolicyLogError("CDuckingManager::GetDuckableSessionsList", 1699, v6);
          }
          if ( v17 )
            LeaveCriticalSection(lpCriticalSection);
          result = (unsigned int)v6;
        }
      }
    }
  }
}
