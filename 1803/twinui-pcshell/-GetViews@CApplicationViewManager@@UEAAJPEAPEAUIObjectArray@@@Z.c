/*
 * XREFs of ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18013B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x18013C1F0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViews(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v13; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+60h] [rbp+18h]

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 137LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v14 = this + 48;
  AcquireSRWLockShared(this + 48);
  v9 = 0LL;
  if ( this[50].Ptr )
  {
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, *((_QWORD *)this[49].Ptr + v9));
      v7 = v10;
      if ( v10 < 0 )
        break;
      if ( (PVOID)++v9 >= this[50].Ptr )
        goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
    if ( this != (RTL_SRWLOCK *)-384LL )
      ReleaseSRWLockShared(this + 48);
  }
  else
  {
LABEL_6:
    if ( this != (RTL_SRWLOCK *)-384LL )
      ReleaseSRWLockShared(this + 48);
    CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
    v6 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v13)(
           v13,
           &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
           a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 152LL;
      goto LABEL_10;
    }
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v7;
}
