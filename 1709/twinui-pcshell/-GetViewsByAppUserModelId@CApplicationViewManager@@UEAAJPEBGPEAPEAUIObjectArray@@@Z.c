/*
 * XREFs of ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1800751E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x1800759F0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViewsByAppUserModelId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  __int64 *v6; // rax
  const struct _GUID *v7; // rcx
  int Instance; // eax
  unsigned int v9; // edi
  __int64 v10; // rbp
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v18 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v18);
  Instance = CEnumerableObjectCollection::CreateInstance(v7, (void **)v6);
  v9 = Instance;
  if ( Instance >= 0 )
  {
    AcquireSRWLockShared(this + 47);
    v10 = 0LL;
    if ( this[49].Ptr )
    {
      while ( 1 )
      {
        v11 = *((_QWORD *)this[48].Ptr + v10);
        if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v11 + 128LL))(v11, a2, &v17) >= 0 )
        {
          if ( v17 )
          {
            v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 40LL))(
                    v18,
                    *((_QWORD *)this[48].Ptr + v10));
            v9 = v12;
            if ( v12 < 0 )
              break;
          }
        }
        if ( (PVOID)++v10 >= this[49].Ptr )
          goto LABEL_11;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD7,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v12);
      if ( this != (RTL_SRWLOCK *)-376LL )
        ReleaseSRWLockShared(this + 47);
    }
    else
    {
LABEL_11:
      if ( this != (RTL_SRWLOCK *)-376LL )
        ReleaseSRWLockShared(this + 47);
      CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
      v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v18)(
              v18,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a3);
      v9 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCD,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
  }
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v9;
}
