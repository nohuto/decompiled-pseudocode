/*
 * XREFs of ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000F53C
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180005C04 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB9C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CProcess::RemoveSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  unsigned int v4; // edi
  __int64 *i; // r8
  __int64 *v6; // rax
  __int64 v7; // rax
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+50h] [rbp+8h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = (__int64 *)*((_QWORD *)this + 9); i && (struct IAudioSessionInfo *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    try
    {
      v6 = (__int64 *)*i;
      if ( i == *((__int64 **)this + 9) )
        *((_QWORD *)this + 9) = v6;
      else
        *(_QWORD *)i[1] = v6;
      v7 = i[1];
      if ( i == *((__int64 **)this + 10) )
        *((_QWORD *)this + 10) = v7;
      else
        *(_QWORD *)(*i + 8) = v7;
      *i = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = i;
      if ( (*((_QWORD *)this + 11))-- == 1LL )
        ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this + 72);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = (int *)v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v14 = *v10;
      v4 = *v10;
      if ( v14 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, v14);
        }
        AudPolicyLogError("CProcess::RemoveSession", 2997, v14);
      }
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
