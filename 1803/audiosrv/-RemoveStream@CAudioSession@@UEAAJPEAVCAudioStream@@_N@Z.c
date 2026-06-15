/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180046D50
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180048240 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18002EFE0 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x180035DE0 (-SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ @ 0x180044280 (-OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180098038 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800980EC (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x1800AE2CC (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3)
{
  char v3; // si
  char v6; // r13
  unsigned int v7; // r15d
  CAudioStream *v8; // rdi
  void (__fastcall *v9)(CAudioStream *); // rax
  unsigned int v10; // edx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  CAudioStream **v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  __int64 (__fastcall *v21)(CAudioSession *); // rax
  struct IAudioStreamInfo *v22; // r8
  struct ISubmixProxy *v23; // rdx
  __int64 (__fastcall *v24)(CAudioResourceManager *, struct ISubmixProxy *, struct IAudioStreamInfo *); // rax
  int v25; // eax
  char *v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  CAudioStream **v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 (__fastcall *v33)(CAudioStream *); // rax
  struct _TP_WORK *v34; // rdx
  void (__fastcall *v35)(CAudioThreadPool *, struct _TP_WORK *); // rax
  size_t v37; // r14
  size_t v38; // rdx
  void *v39; // rax
  __int64 v40; // r8
  const void *v41; // r10
  size_t v42; // r8
  size_t v43; // rax
  void *v44; // rax
  __int64 v45; // r9
  void *v46; // r14
  __int64 v47; // rcx
  void *v48; // rdx
  size_t v49; // r8
  unsigned int v50; // r13d
  __int64 v51; // r14
  char *v52; // rax
  char *v53; // r12
  __int64 v54; // r8
  const void *v55; // rdx
  size_t v56; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v58; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v59; // [rsp+48h] [rbp-18h] BYREF
  CAudioSession *v60; // [rsp+50h] [rbp-10h]
  CAudioStream *v61; // [rsp+58h] [rbp-8h]
  size_t v62; // [rsp+A0h] [rbp+40h] BYREF
  char v63; // [rsp+B0h] [rbp+50h]

  v63 = a3;
  v3 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 62LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this, a2);
  }
  v9 = *(void (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 160LL);
  if ( v9 == CAudioStream::OnStreamDisconnectedFromSaDevice )
    CAudioStream::OnStreamDisconnectedFromSaDevice(a2);
  else
    v9(a2);
  v59 = (LPCRITICAL_SECTION)((char *)this + 48);
  LOBYTE(v60) = 0;
  ATL::CCritSecLock::Lock(&v59);
  v10 = 0;
  LODWORD(v62) = 0;
  if ( !*((_QWORD *)this + 13) )
    goto LABEL_20;
  v11 = 0LL;
  v12 = *((_QWORD *)this + 13);
  if ( !v12 )
    ATL::AtlThrowImpl(-2147024809);
  while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v11) != a2 )
  {
    LODWORD(v62) = ++v10;
    v11 = v10;
    if ( v10 >= v12 )
      goto LABEL_19;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 96, v11);
    WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, v40, (unsigned int)v62);
  }
  v6 = 1;
  v13 = *((_QWORD *)this + 13);
  if ( v11 >= v13 )
    ATL::AtlThrowImpl(-2147024809);
  v14 = *((_QWORD *)this + 12);
  v15 = (CAudioStream **)(v14 + 8 * v11);
  v8 = *v15;
  v16 = v11 + 1;
  if ( v11 + 1 < v11 || v16 > v13 )
    ATL::AtlThrowImpl(-2147024809);
  v17 = v13 - v16;
  if ( v13 != v16 )
  {
    v41 = (const void *)(v14 + 8 * v16);
    v42 = 8 * v17;
    if ( 8 * v17 )
    {
      if ( !v15 || !v41 )
      {
        *(_DWORD *)_o__errno(v16, v17, v42, v15) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v15, v41, v42);
      v13 = *((_QWORD *)this + 13);
    }
  }
  *((_QWORD *)this + 13) = v13 - 1;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
  v58 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v18 = *((_QWORD *)this + 31);
  v19 = *((_QWORD *)this + 32);
  if ( v18 >= v19 )
  {
    v37 = v18 + 1;
    if ( v18 + 1 > v19 )
    {
      v38 = *((int *)this + 66);
      if ( !*((_QWORD *)this + 30) )
      {
        if ( v38 > v37 )
          v37 = *((int *)this + 66);
        v39 = calloc(v37, 8uLL);
        *((_QWORD *)this + 30) = v39;
        if ( v39 )
        {
          *((_QWORD *)this + 32) = v37;
          goto LABEL_15;
        }
LABEL_79:
        ATL::AtlThrowImpl(-2147024882);
      }
      if ( !*((_DWORD *)this + 66) )
      {
        v38 = v19 >> 1;
        if ( v37 - v19 > v19 >> 1 )
          v38 = v37 - v19;
      }
      v43 = v38 + v19;
      if ( v37 >= v38 + v19 )
        v43 = v18 + 1;
      v62 = v43;
      v44 = calloc(v43, 8uLL);
      v46 = v44;
      if ( !v44 )
        goto LABEL_79;
      v47 = *((_QWORD *)this + 31);
      v48 = (void *)*((_QWORD *)this + 30);
      v49 = 8 * v47;
      if ( 8 * v47 )
      {
        if ( !v48 )
        {
          *(_DWORD *)_o__errno(v47, 0LL, v49, v45) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v44, v48, v49);
        v48 = (void *)*((_QWORD *)this + 30);
      }
      free(v48);
      *((_QWORD *)this + 30) = v46;
      *((_QWORD *)this + 32) = v62;
    }
  }
LABEL_15:
  *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v18) = v8;
  ++*((_QWORD *)this + 31);
  if ( v58 )
    LeaveCriticalSection(lpCriticalSection);
  v20 = (unsigned int)(*((_DWORD *)this + 22) - 1);
  *((_DWORD *)this + 22) = v20;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 64LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, v20);
  }
LABEL_19:
  v3 = v63;
LABEL_20:
  if ( (_BYTE)v60 )
    LeaveCriticalSection(v59);
  if ( !v6 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
    v58 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v50 = 0;
    if ( *((_QWORD *)this + 22) )
    {
      v51 = 0LL;
      v52 = (char *)this + 168;
      while ( *(struct CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                         v52,
                                         v51) != a2 )
      {
        v51 = ++v50;
        v52 = (char *)this + 168;
        if ( (unsigned __int64)v50 >= *((_QWORD *)this + 22) )
          goto LABEL_96;
      }
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0 )
      {
        v53 = (char *)this + 168;
      }
      else
      {
        v53 = (char *)this + 168;
        if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 168, v51);
          WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, v54, v50);
        }
      }
      v8 = *(CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v53, v51);
      v62 = (size_t)v8;
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v53, v51);
      v59 = (LPCRITICAL_SECTION)((char *)this + 200);
      LOBYTE(v60) = 0;
      ATL::CCritSecLock::Lock(&v59);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)this + 240, &v62);
      if ( (_BYTE)v60 )
        LeaveCriticalSection(v59);
    }
LABEL_96:
    if ( v58 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v8 )
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v59 = (LPCRITICAL_SECTION)&CAudioStreamDestroy::`vftable';
      v60 = this;
      v61 = v8;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)this + 496),
        (void (__fastcall ***)(_QWORD, __int64 *))&v59);
      v21 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
      if ( v21 == CAudioSession::Release )
        CAudioSession::Release(this);
      else
        v21(this);
    }
    if ( *((_DWORD *)v8 + 33) == 2 )
    {
      if ( *((_QWORD *)v8 + 22) )
      {
        Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)v8 + 176));
        if ( *((_QWORD *)v8 + 22) )
          ATL::AtlComPtrAssign((struct IUnknown **)v8 + 22, 0LL);
      }
      if ( *((_QWORD *)v8 + 23) )
      {
        Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)v8 + 184));
        if ( *((_QWORD *)v8 + 23) )
          ATL::AtlComPtrAssign((struct IUnknown **)v8 + 23, 0LL);
      }
      if ( *((_QWORD *)v8 + 24) )
      {
        Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)v8 + 192));
        if ( *((_QWORD *)v8 + 24) )
          ATL::AtlComPtrAssign((struct IUnknown **)v8 + 24, 0LL);
      }
    }
    v22 = (CAudioStream *)((char *)v8 + 8);
    v23 = (struct ISubmixProxy *)*((_QWORD *)v8 + 8);
    v24 = *(__int64 (__fastcall **)(CAudioResourceManager *, struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)g_AudioResourceManager + 32LL);
    if ( v24 == CAudioResourceManager::DestroyStream )
      v25 = CAudioResourceManager::DestroyStream(g_AudioResourceManager, v23, v22);
    else
      v25 = v24(g_AudioResourceManager, v23, v22);
    if ( v25 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioStream::CloseAudioHandle", 0x1D2u, v25);
    v26 = (char *)*((_QWORD *)v8 + 66);
    if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      SetEvent(v26);
    *((_QWORD *)v8 + 9) = 0LL;
    v59 = (LPCRITICAL_SECTION)((char *)this + 200);
    LOBYTE(v60) = 0;
    ATL::CCritSecLock::Lock(&v59);
    if ( *((_QWORD *)this + 31) )
    {
      v27 = 0LL;
      v28 = *((_QWORD *)this + 31);
      if ( !v28 )
        ATL::AtlThrowImpl(-2147024809);
      while ( 1 )
      {
        v29 = *((_QWORD *)this + 30);
        v30 = (CAudioStream **)(v29 + 8 * v27);
        if ( *v30 == v8 )
          break;
        v27 = ++v7;
        if ( v7 >= v28 )
          goto LABEL_41;
      }
      v31 = v27 + 1;
      if ( v27 + 1 < v27 || v31 > v28 )
        ATL::AtlThrowImpl(-2147024809);
      v32 = v28 - v31;
      if ( v32 )
      {
        v55 = (const void *)(v29 + 8 * v31);
        v56 = 8 * v32;
        if ( 8 * v32 )
        {
          if ( !v30 || !v55 )
          {
            *(_DWORD *)_o__errno(v32, v55, v56, v30) = 22;
            invalid_parameter_noinfo();
            ATL::AtlThrowImpl(-2147024809);
          }
          memmove(v30, v55, v56);
        }
      }
      --*((_QWORD *)this + 31);
    }
LABEL_41:
    v33 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v8 + 64LL);
    if ( v33 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(v8);
    else
      v33(v8);
    if ( (_BYTE)v60 )
      LeaveCriticalSection(v59);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v34 = (struct _TP_WORK *)*((_QWORD *)this + 76);
    v35 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
    if ( v35 == CAudioThreadPool::SubmitWork )
      CAudioThreadPool::SubmitWork(ThreadPool, v34);
    else
      v35(ThreadPool, v34);
  }
  return 0LL;
}
