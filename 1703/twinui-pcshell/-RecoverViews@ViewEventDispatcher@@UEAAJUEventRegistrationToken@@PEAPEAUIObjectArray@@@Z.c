/*
 * XREFs of ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1800F69D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B20 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  int v6; // r15d
  unsigned int v7; // edi
  HSTRING *v8; // rbx
  PVOID v9; // rcx
  _QWORD *Ptr; // r8
  _QWORD *v11; // rdx
  __int64 *v12; // rax
  const struct _GUID *v13; // rcx
  int Instance; // eax
  __int64 v15; // rcx
  char *v16; // r13
  char *v17; // r14
  __int64 v18; // rdi
  PCWSTR StringRawBuffer; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // r8
  RTL_SRWLOCK *v24; // rdi
  PVOID v25; // rdx
  _QWORD *v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // r15
  __int64 v29; // rcx
  char *v30; // r8
  __int64 v31; // rcx
  struct IObjectArray *v32; // rax
  __int64 *v34; // [rsp+20h] [rbp-30h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD *v36; // [rsp+38h] [rbp-18h] BYREF
  char v37; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v39; // [rsp+90h] [rbp+40h] BYREF
  struct IObjectArray *v40; // [rsp+A0h] [rbp+50h] BYREF
  HSTRING *v41; // [rsp+A8h] [rbp+58h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v6 = 0;
  *a3 = 0LL;
  wil::srwlock::lock_exclusive(this + 25, SRWLock);
  if ( LOBYTE(this[26].Ptr) )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E3,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_49;
  }
  v8 = 0LL;
  v41 = 0LL;
  v9 = 0LL;
  if ( this[31].Ptr )
  {
    Ptr = this[30].Ptr;
    v11 = Ptr;
    while ( *(_QWORD *)(*v11 + 40LL) != a2.value )
    {
      v9 = (char *)v9 + 1;
      ++v11;
      if ( v9 >= this[31].Ptr )
        goto LABEL_46;
    }
    if ( Ptr[(_QWORD)v9] )
    {
      v8 = (HSTRING *)Ptr[(_QWORD)v9];
      (*((void (__fastcall **)(HSTRING *))*v8 + 1))(v8);
      v41 = v8;
      v40 = 0LL;
      v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v40);
      Instance = CEnumerableObjectCollection::CreateInstance(v13, (void **)v12);
      v7 = Instance;
      if ( Instance < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x7F6,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)Instance);
        v15 = (__int64)v40;
        goto LABEL_44;
      }
      v16 = (char *)this[39].Ptr;
      if ( !v16 )
      {
LABEL_43:
        v32 = v40;
        v15 = 0LL;
        v40 = 0LL;
        *a3 = v32;
        v7 = 0;
LABEL_44:
        if ( v15 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_47;
      }
      v17 = v16 - 1;
      while ( 1 )
      {
        v18 = *((_QWORD *)this[38].Ptr + (_QWORD)v17);
        StringRawBuffer = WindowsGetStringRawBuffer(v8[2], 0LL);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v18 + 600LL))(v18, StringRawBuffer) )
          break;
LABEL_42:
        --v17;
        if ( !--v16 )
          goto LABEL_43;
      }
      v20 = *((_QWORD *)this[38].Ptr + (_QWORD)v17);
      v39 = v20;
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v20 = v39;
      }
      if ( v17 < this[39].Ptr )
      {
        v21 = this[38].Ptr;
        v22 = v21[(_QWORD)v17];
        if ( v22 )
        {
          v21[(_QWORD)v17] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v20 = v39;
        }
        v23 = this[39].Ptr;
        if ( v17 != v23 - 1 )
        {
          memmove(
            (char *)this[38].Ptr + 8 * (_QWORD)v17,
            (char *)this[38].Ptr + 8 * (_QWORD)v17 + 8,
            8 * (v23 - v17) - 8);
          v20 = v39;
        }
        --this[39].Ptr;
      }
      (*(void (__fastcall **)(__int64, HSTRING *, __int64))(*(_QWORD *)v20 + 568LL))(v20, v8 + 1, 1LL);
      v34 = &v39;
      wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v36, &v34);
      v24 = this + 34;
      v25 = this[35].Ptr;
      if ( v25 != this[37].Ptr
        || (v6 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                   (__int64)&this[34],
                   (unsigned __int64)v25 + 1),
            v6 >= 0) )
      {
        v26 = (char *)this[34].Ptr + 8 * (__int64)this[35].Ptr++;
        if ( v26 )
        {
          *v26 = v39;
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
        }
      }
      if ( v6 >= 0 )
      {
        v27 = ((__int64 (__fastcall *)(struct IObjectArray *))v40->lpVtbl[1].QueryInterface)(v40);
        v6 = 0;
        if ( v27 >= 0 )
        {
          v37 = 0;
          goto LABEL_38;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x80E,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v27);
        v28 = (unsigned __int64)this[35].Ptr - 1;
        if ( (PVOID)v28 < this[35].Ptr )
        {
          v29 = *((_QWORD *)v24->Ptr + v28);
          if ( v29 )
          {
            *((_QWORD *)v24->Ptr + v28) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = (char *)this[35].Ptr;
          if ( (char *)v28 != v30 - 1 )
            memmove((char *)v24->Ptr + 8 * v28, (char *)v24->Ptr + 8 * v28 + 8, 8LL * (_QWORD)&v30[-v28] - 8);
          --this[35].Ptr;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x80C,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v6);
      }
      v6 = 0;
LABEL_38:
      if ( v37 )
      {
        v37 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v36 + 336LL))(*v36, 0LL);
      }
      v31 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      goto LABEL_42;
    }
  }
LABEL_46:
  v7 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F0,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)0x80070490LL);
LABEL_47:
  if ( v8 )
    (*((void (__fastcall **)(HSTRING *))*v8 + 2))(v8);
LABEL_49:
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return v7;
}
