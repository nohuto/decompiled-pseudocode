/*
 * XREFs of ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400073A0
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140002750 (-DestroyStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x1400358C0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400036D4 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140003E28 (-RemoveAt@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEA.c)
 *     ?GetNext@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAAEAPEAVCStreamInstance@@AEAPEAU__POSITION@@@Z @ 0x140003E80 (-GetNext@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140003F80 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400065D0 (-GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ??$try_copy@UISubmixInternal@@@?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISubmixInternal@@Uerr_returncode_policy@wil@@@1@XZ @ 0x140008780 (--$try_copy@UISubmixInternal@@@-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-$.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000D800 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400141C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::DestroyStream(CSubmixImpl *this, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *Next; // rax
  __int64 v6; // rbx
  __int64 *v7; // rdx
  unsigned int v8; // esi
  struct ISubmixInternal *v9; // rax
  int StreamingResourceManager; // eax
  struct ProcessRegistrationToken__ *v11; // rdx
  void (*v12)(void); // rax
  char *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct CPipeInstance *v16; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v19; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  GraphStreamingResourceManager *v21; // [rsp+50h] [rbp+8h] BYREF
  struct ISubmixInternal *v22; // [rsp+60h] [rbp+18h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v21 = (GraphStreamingResourceManager *)*((_QWORD *)this + 4);
  if ( !v21 )
    goto LABEL_34;
  while ( 1 )
  {
    Next = ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(v4, (_QWORD **)&v21);
    v6 = *Next;
    if ( *(_QWORD *)(*Next + 8LL) == a2 )
      break;
    if ( !v21 )
      goto LABEL_34;
  }
  if ( v6 )
  {
    v7 = (__int64 *)*((_QWORD *)this + 4);
    v8 = 0;
    if ( v7 )
    {
      while ( v7[2] != v6 )
      {
        v7 = (__int64 *)*v7;
        if ( !v7 )
          goto LABEL_36;
      }
    }
    else
    {
LABEL_36:
      v7 = 0LL;
    }
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAt((__int64 *)this + 4, v7);
    wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::try_copy<ISubmixInternal>((char *)this + 264, &v22);
    v9 = v22;
    if ( v22 )
    {
      v21 = 0LL;
      if ( *(__int64 (__fastcall **)(CSubmixImpl *, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v22
                                                                                                  + 120LL) == CSubmixImpl::GetStreamingResourceManager )
        StreamingResourceManager = CSubmixImpl::GetStreamingResourceManager(v22, &v21);
      else
        StreamingResourceManager = (*(__int64 (__fastcall **)(struct ISubmixInternal *, GraphStreamingResourceManager **))(*(_QWORD *)v22 + 120LL))(
                                     v22,
                                     &v21);
      if ( StreamingResourceManager >= 0 )
      {
        v11 = *(struct ProcessRegistrationToken__ **)(v6 + 48);
        if ( v11 )
        {
          v12 = *(void (**)(void))(*(_QWORD *)v21 + 32LL);
          if ( (char *)v12 == (char *)GraphStreamingResourceManager::UnregisterProcess )
            GraphStreamingResourceManager::UnregisterProcess(v21, v11);
          else
            v12();
          *(_QWORD *)(v6 + 48) = 0LL;
        }
      }
      if ( v21 )
        (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v21 + 16LL))(v21);
      v9 = v22;
    }
    if ( *(_BYTE *)(v6 + 17) && v9 )
      CStreamInstance::DisconnectFromRightSubmix((struct CPipeInstance **)v6, v9);
    v13 = *(char **)(v6 + 40);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v13);
    v14 = *(_QWORD *)(v6 + 32);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *(_QWORD *)(v6 + 24);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = *(struct CPipeInstance **)v6;
    if ( *(_QWORD *)v6 )
    {
      CPipeInstance::~CPipeInstance(*(CPipeInstance **)v6);
      operator delete(v16);
    }
    *(_QWORD *)v6 = 0LL;
    operator delete((void *)v6);
    PublishDeviceGraphWnfState();
    if ( v22 )
      (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  else
  {
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x272,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL,
      (int)lpCriticalSection);
    v8 = -2005139430;
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
