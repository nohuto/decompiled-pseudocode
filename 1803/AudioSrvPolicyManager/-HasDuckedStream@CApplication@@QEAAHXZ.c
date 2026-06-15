/*
 * XREFs of ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x1800122C4
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001D448 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180016280 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180019884 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::HasDuckedStream(CApplication *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  int v4; // r13d
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int v7; // ebp
  __int64 v8; // rsi
  _DWORD *v9; // r15
  __int64 v10; // r8
  unsigned int v11; // r14d
  CApplication *v12; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+90h] [rbp+8h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( *(_DWORD *)(v3 + 472) )
      continue;
    v4 = 0;
    if ( !(unsigned int)CProcess::SubjectToStreamClassPolicyGains((CProcess *)(v3 + 16)) )
      continue;
    v7 = 0;
    if ( *(int *)(v3 + 328) <= 0 )
      continue;
    v8 = 0LL;
    do
    {
      if ( v8 < 0 || v7 >= *(_DWORD *)(v3 + 328) )
      {
        ATL::_AtlRaiseException(v6, v5);
        CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(v12);
        return;
      }
      v9 = *(_DWORD **)(v8 + *(_QWORD *)(v3 + 320));
      v10 = *(_QWORD *)(v8 + *(_QWORD *)(v3 + 312));
      v15 = v10;
      v11 = 0;
      while ( !*v9 )
      {
LABEL_13:
        ++v11;
        ++v9;
        if ( v11 >= 0x15 )
          goto LABEL_16;
      }
      if ( !(*(unsigned int (__fastcall **)(char *, _QWORD, __int64, _QWORD, _DWORD, bool))(*((_QWORD *)g_StreamClassPolicyManager
                                                                                            + 2)
                                                                                          + 24LL))(
              (char *)g_StreamClassPolicyManager + 16,
              *(unsigned int *)(v3 + 220),
              v10,
              v11,
              0,
              *(_DWORD *)(*(_QWORD *)(v3 + 280) + 168LL) != 0) )
      {
        v10 = v15;
        goto LABEL_13;
      }
      v4 = 1;
LABEL_16:
      ++v7;
      v8 += 8LL;
    }
    while ( v7 < *(_DWORD *)(v3 + 328) );
    if ( v4 )
      break;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
}
