/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180048A90
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180047B70 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x18001882C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800AF4B4 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CVADServer::FinalRelease(CAudioSessionManager **this, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v4; // rcx
  CServerAudioSessionControl *v5; // rcx
  CAudioSessionManager *v6; // r9
  CAudioSessionManager *v7; // rcx
  CAudioSessionManager *v8; // rdx
  __int64 (__fastcall *v9)(CAudioSession *); // rax
  CAudioSession *v10; // rcx
  CAudioSessionManager *v11; // rdx
  __int64 (__fastcall *v12)(CAudioSessionManager *); // rax
  CAudioSessionManager *v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  CAudioSessionManager *v16; // rdx
  CAudioSessionManager *v17; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v19; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, this);
  }
  this[53] = 0LL;
  v4 = this[54];
  this[54] = 0LL;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = this[20];
  if ( v5 )
    CServerAudioSessionControl::RemoveClientReference(v5);
  v6 = this[24];
  if ( v6 )
  {
    v16 = this[24];
    v17 = v16;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
        v6,
        *((_QWORD *)v6 + 7));
      v16 = this[24];
      v17 = v16;
    }
    if ( *((_QWORD *)v16 + 7) )
    {
      if ( *((_BYTE *)this + 188) )
      {
        (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)this[21] + 264LL))(this[21]);
        v16 = this[24];
      }
      LOBYTE(a3) = 1;
      (*(void (__fastcall **)(CAudioSessionManager *, CAudioSessionManager *, __int64))(*(_QWORD *)this[21] + 272LL))(
        this[21],
        v16,
        a3);
      v17 = this[24];
    }
    (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v17 + 64LL))(v17);
    this[24] = 0LL;
  }
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, this[21]);
    v7 = WPP_GLOBAL_Control;
  }
  v8 = this[21];
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v8 + 16LL);
    v10 = this[21];
    if ( v9 == CAudioSession::Release )
      CAudioSession::Release(v10);
    else
      v9(v10);
    this[21] = 0LL;
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v7 + 7) & 0x100) != 0 && *((_BYTE *)v7 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v7 + 2), 15LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
      v7 = WPP_GLOBAL_Control;
    }
    if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v7 + 7) & 0x100) != 0
      && *((_BYTE *)v7 + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)v7 + 2), 16LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, this[19]);
      v7 = WPP_GLOBAL_Control;
    }
  }
  v11 = this[19];
  if ( v11 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v11 + 16LL);
    v13 = this[19];
    if ( v12 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v13);
    else
      v12(v13);
    this[19] = 0LL;
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v7 + 7) & 0x100) != 0
    && *((_BYTE *)v7 + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)v7 + 2), 17LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
  }
  v19 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v14 = g_VADServerList;
  if ( g_VADServerList )
  {
    while ( *(CAudioSessionManager ***)(v14 + 16) != this )
    {
      v14 = *(_QWORD *)v14;
      if ( !v14 )
        goto LABEL_32;
    }
    if ( v14 == g_VADServerList )
      g_VADServerList = *(_QWORD *)v14;
    else
      **(_QWORD **)(v14 + 8) = *(_QWORD *)v14;
    if ( v14 == qword_180189018 )
      qword_180189018 = *(_QWORD *)(v14 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v14 + 8LL) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)v14 = qword_180189030;
    v15 = qword_180189020-- == 1;
    qword_180189030 = v14;
    if ( v15 )
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
  }
LABEL_32:
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, this);
  }
}
