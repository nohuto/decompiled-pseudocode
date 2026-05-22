/*
 * XREFs of ?OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800A54F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@@Z @ 0x1800A20F8 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractio.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@IEAAXXZ @ 0x1800AA0FC (-_Tidy@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnFinalRelease(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  __int64 v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // rbx
  struct _TP_WORK *v19; // rsi
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 48));
    *(_QWORD *)(v2 + 32) = 0LL;
    v3 = *(__int64 **)(v2 + 24);
    v4 = *v3;
    v5 = *(_QWORD *)(v2 + 40);
    if ( *(_BYTE *)(v2 + 16) )
      (*(void (__fastcall **)(__int64 *, __int64))(v4 + 64))(v3, v5);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v4 + 80))(v3, v5);
    if ( v2 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 48));
  }
  v6 = *((_QWORD *)this + 37);
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
    *(_QWORD *)(v6 + 32) = 0LL;
    v7 = *(__int64 **)(v6 + 24);
    v8 = *v7;
    v9 = *(_QWORD *)(v6 + 40);
    if ( *(_BYTE *)(v6 + 16) )
      (*(void (__fastcall **)(__int64 *, __int64))(v8 + 64))(v7, v9);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v8 + 80))(v7, v9);
    if ( v6 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v10 = *((_QWORD *)this + 38);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 128LL))(v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = *((_QWORD *)this + 38);
  if ( v12 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  v13 = *((_QWORD *)this + 51);
  if ( v13 )
  {
    *((_QWORD *)this + 51) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 47);
  if ( v14 )
  {
    *((_QWORD *)this + 47) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 48);
  if ( v15 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 49);
  if ( v16 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 50);
  if ( v17 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-336LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-72LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  v18 = (char *)this + 456;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Erase(
    (__int64)this + 456,
    *(_QWORD **)(*((_QWORD *)this + 57) + 8LL));
  *(_QWORD *)(*(_QWORD *)v18 + 8LL) = *(_QWORD *)v18;
  **(_QWORD **)v18 = *(_QWORD *)v18;
  *(_QWORD *)(*(_QWORD *)v18 + 16LL) = *(_QWORD *)v18;
  *((_QWORD *)this + 58) = 0LL;
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-416LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  *((_BYTE *)this + 512) = 1;
  std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::_Tidy((char *)this + 520);
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-472LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  v19 = (struct _TP_WORK *)*((_QWORD *)this + 70);
  if ( v19 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v19, 0);
    CloseThreadpoolWork(v19);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 70) = 0LL;
  return 0LL;
}
