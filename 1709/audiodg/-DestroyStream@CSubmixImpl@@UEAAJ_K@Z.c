/*
 * XREFs of ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011370
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140001A40 (-DestroyStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140035140 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140001D90 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140002790 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400059AC (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140005B70 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400106A0 (-GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140014B10 (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015750 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::DestroyStream(CSubmixImpl *this, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *Next; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rdx
  unsigned int i; // esi
  void (__fastcall ***v9)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  void (__fastcall *v10)(_QWORD, GUID *, struct ISubmixInternal **); // rax
  struct ISubmixInternal *v11; // rax
  int StreamingResourceManager; // eax
  struct ProcessRegistrationToken__ *v13; // rdx
  void (*v14)(void); // rax
  char *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct CPipeInstance *v18; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v21; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct ISubmixInternal *v23; // [rsp+50h] [rbp+8h] BYREF
  GraphStreamingResourceManager *v24; // [rsp+60h] [rbp+18h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v21 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v24 = (GraphStreamingResourceManager *)*((_QWORD *)this + 4);
  if ( !v24 )
    goto LABEL_37;
  while ( 1 )
  {
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, (_QWORD **)&v24);
    v6 = *Next;
    if ( *(_QWORD *)(*Next + 8LL) == a2 )
      break;
    if ( !v24 )
      goto LABEL_37;
  }
  if ( v6 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 4);
    for ( i = 0; v7; v7 = (_QWORD *)*v7 )
    {
      if ( v7[2] == v6 )
        break;
    }
    ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt((char *)this + 32);
    v9 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 33);
    if ( v9 )
    {
      v10 = **v9;
      if ( (char *)v10 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
        ATL::CComObject<CStreamGroup>::QueryInterface(v9, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v23);
      else
        v10(v9, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v23);
      v11 = v23;
      if ( v23 )
      {
        v24 = 0LL;
        if ( *(__int64 (__fastcall **)(CSubmixImpl *, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v23 + 120LL) == CSubmixImpl::GetStreamingResourceManager )
          StreamingResourceManager = CSubmixImpl::GetStreamingResourceManager(v23, &v24);
        else
          StreamingResourceManager = (*(__int64 (__fastcall **)(struct ISubmixInternal *, GraphStreamingResourceManager **))(*(_QWORD *)v23 + 120LL))(
                                       v23,
                                       &v24);
        if ( StreamingResourceManager >= 0 )
        {
          v13 = *(struct ProcessRegistrationToken__ **)(v6 + 48);
          if ( v13 )
          {
            v14 = *(void (**)(void))(*(_QWORD *)v24 + 32LL);
            if ( (char *)v14 == (char *)GraphStreamingResourceManager::UnregisterProcess )
              GraphStreamingResourceManager::UnregisterProcess(v24, v13);
            else
              v14();
            *(_QWORD *)(v6 + 48) = 0LL;
          }
        }
        if ( v24 )
          (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v24 + 16LL))(v24);
        v11 = v23;
      }
    }
    else
    {
      v11 = 0LL;
      v23 = 0LL;
    }
    if ( *(_BYTE *)(v6 + 17) && v11 )
      CStreamInstance::DisconnectFromRightSubmix((struct CPipeInstance **)v6, v11);
    v15 = *(char **)(v6 + 40);
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v15);
    v16 = *(_QWORD *)(v6 + 32);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = *(_QWORD *)(v6 + 24);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = *(struct CPipeInstance **)v6;
    if ( *(_QWORD *)v6 )
    {
      CPipeInstance::~CPipeInstance(*(LPVOID **)v6);
      operator delete(v18);
    }
    *(_QWORD *)v6 = 0LL;
    operator delete((void *)v6);
    PublishDeviceGraphWnfState();
    if ( v23 )
      (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  else
  {
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x276,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL,
      (int)lpCriticalSection);
    i = -2005139430;
  }
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return i;
}
