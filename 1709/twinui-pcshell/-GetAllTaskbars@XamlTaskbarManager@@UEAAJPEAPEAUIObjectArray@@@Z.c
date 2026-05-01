/*
 * XREFs of ?GetAllTaskbars@XamlTaskbarManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18014B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlTaskbarManager::GetAllTaskbars(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  RTL_SRWLOCK *v4; // rbp
  __int64 *v5; // rax
  const struct _GUID *v6; // rcx
  int Instance; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  int v12; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+58h] [rbp+10h]

  *a2 = 0LL;
  v4 = this + 35;
  AcquireSRWLockShared(this + 35);
  v17 = v4;
  v16 = 0LL;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
  Instance = CEnumerableObjectCollection::CreateInstance(v6, (void **)v5);
  v8 = Instance;
  if ( Instance >= 0 )
  {
    Ptr = this[12].Ptr;
    for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
    {
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, i[3]);
      v8 = Instance;
      if ( Instance < 0 )
      {
        v9 = 200LL;
        goto LABEL_9;
      }
    }
    v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v16)(
            v16,
            &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
            a2);
    v8 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v12);
  }
  else
  {
    v9 = 197LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
      (const char *)(unsigned int)Instance);
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v8;
}
