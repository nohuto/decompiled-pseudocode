/*
 * XREFs of ?FindUniqueNonNullAudioSession@CAudioSessionManager@@IEAAJPEAPEAVCAudioSession@@K@Z @ 0x18000431C
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800051F0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000524C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800052B4 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsSystemSoundsSession@CAudioSession@@UEAAHXZ @ 0x1800354B0 (-IsSystemSoundsSession@CAudioSession@@UEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSessionManager::FindUniqueNonNullAudioSession(
        CAudioSessionManager *this,
        struct CAudioSession **a2,
        int a3)
{
  int v3; // esi
  char *v4; // r14
  struct CAudioSession *v7; // rdi
  __int64 *v8; // rbx
  __int64 (__fastcall *v9)(CAudioSession *__hidden); // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(CAudioSession *__hidden, unsigned int *); // rax
  int v14; // eax
  unsigned int v15; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v18; // [rsp+28h] [rbp-8h]
  unsigned int v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 StartPosition; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = (char *)this + 64;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v18 = 0;
  v7 = 0LL;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition(v4);
  if ( !StartPosition )
    goto LABEL_22;
  do
  {
    v8 = *(__int64 **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                        v4,
                        &StartPosition);
    if ( v8 )
    {
      v9 = *(__int64 (__fastcall **)(CAudioSession *__hidden))(v8[3] + 24);
      v10 = v9 == CAudioSession::IsSystemSoundsSession
          ? CAudioSession::IsSystemSoundsSession((CAudioSession *)(v8 + 3))
          : ((__int64 (*)(void))v9)();
      if ( !v10 && *((_DWORD *)v8 + 102) != 2 )
      {
        v11 = v8[85] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( !v11 )
          v11 = v8[86] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        if ( v11 )
        {
          v12 = *v8;
          v19 = 0;
          v13 = *(__int64 (__fastcall **)(CAudioSession *__hidden, unsigned int *))(v12 + 128);
          v14 = v13 == CAudioSession::GetProcessId
              ? CAudioSession::GetProcessId((CAudioSession *)v8, &v19)
              : v13((CAudioSession *)v8, &v19);
          if ( v14 >= 0 && a3 == v19 )
          {
            v7 = (struct CAudioSession *)v8;
            ++v3;
          }
        }
      }
    }
  }
  while ( StartPosition );
  if ( v3 == 1 )
  {
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
    v15 = 0;
    *a2 = v7;
  }
  else
  {
LABEL_22:
    v15 = -2147467259;
  }
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return v15;
}
