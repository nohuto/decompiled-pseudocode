/*
 * XREFs of ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180121C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  RTL_SRWLOCK *v5; // r13
  unsigned int v6; // edi
  HSTRING *v7; // rbx
  PVOID v8; // rcx
  _QWORD *Ptr; // r8
  _QWORD *v10; // rdx
  __int64 *v11; // rax
  const struct _GUID *v12; // rcx
  int Instance; // eax
  __int64 v14; // rcx
  PVOID v15; // r14
  _BYTE *v16; // r12
  __int64 v17; // rdi
  PCWSTR StringRawBuffer; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _BYTE *v22; // r8
  RTL_SRWLOCK *v23; // rdi
  int v24; // r15d
  PVOID v25; // rdx
  _QWORD *v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // r15
  __int64 v29; // rcx
  char *v30; // r8
  char v31; // al
  __int64 v32; // rcx
  struct IObjectArray *v33; // rax
  struct IObjectArray *v35; // [rsp+20h] [rbp-30h] BYREF
  HSTRING *v36; // [rsp+28h] [rbp-28h]
  __int64 v37; // [rsp+30h] [rbp-20h]
  RTL_SRWLOCK *v38; // [rsp+38h] [rbp-18h]
  __int64 *v39; // [rsp+40h] [rbp-10h]
  char v40; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v43; // [rsp+A8h] [rbp+58h] BYREF

  v37 = -2LL;
  *a3 = 0LL;
  v5 = this + 34;
  AcquireSRWLockExclusive(this + 34);
  v38 = v5;
  if ( LOBYTE(this[35].Ptr) )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_49;
  }
  v7 = 0LL;
  v36 = 0LL;
  v8 = 0LL;
  if ( this[40].Ptr )
  {
    Ptr = this[39].Ptr;
    v10 = Ptr;
    while ( *(_QWORD *)(*v10 + 40LL) != a2.value )
    {
      v8 = (char *)v8 + 1;
      ++v10;
      if ( v8 >= this[40].Ptr )
        goto LABEL_46;
    }
    if ( Ptr[(_QWORD)v8] )
    {
      v7 = (HSTRING *)Ptr[(_QWORD)v8];
      (*((void (__fastcall **)(HSTRING *))*v7 + 1))(v7);
      v36 = v7;
      v35 = 0LL;
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v35);
      Instance = CEnumerableObjectCollection::CreateInstance(v12, (void **)v11);
      v6 = Instance;
      if ( Instance < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x832,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)Instance);
        v14 = (__int64)v35;
        goto LABEL_44;
      }
      v15 = this[48].Ptr;
      if ( !v15 )
      {
LABEL_43:
        v33 = v35;
        v14 = 0LL;
        v35 = 0LL;
        *a3 = v33;
        v6 = 0;
LABEL_44:
        if ( v14 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        goto LABEL_47;
      }
      v16 = (char *)v15 - 1;
      while ( 1 )
      {
        v17 = *((_QWORD *)this[47].Ptr + (_QWORD)v15 - 1);
        StringRawBuffer = WindowsGetStringRawBuffer(v7[2], 0LL);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v17 + 600LL))(v17, StringRawBuffer) )
          break;
LABEL_42:
        --v16;
        v15 = (char *)v15 - 1;
        if ( !v15 )
          goto LABEL_43;
      }
      v19 = *((_QWORD *)this[47].Ptr + (_QWORD)v15 - 1);
      v43 = v19;
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        v19 = v43;
      }
      if ( v16 < this[48].Ptr )
      {
        v20 = this[47].Ptr;
        v21 = v20[(_QWORD)v15 - 1];
        if ( v21 )
        {
          v20[(_QWORD)v15 - 1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v19 = v43;
        }
        v22 = this[48].Ptr;
        if ( v16 != v22 - 1 )
        {
          memmove(
            (char *)this[47].Ptr + 8 * (_QWORD)v15 - 8,
            (char *)this[47].Ptr + 8 * (_QWORD)v15,
            8 * (v22 - v16) - 8);
          v19 = v43;
        }
        --this[48].Ptr;
      }
      (*(void (__fastcall **)(__int64, HSTRING *, __int64))(*(_QWORD *)v19 + 568LL))(v19, v7 + 1, 1LL);
      v39 = &v43;
      v40 = 1;
      v23 = this + 43;
      v24 = 0;
      v25 = this[44].Ptr;
      if ( v25 != this[46].Ptr
        || (v24 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                    (__int64)&this[43],
                    (unsigned __int64)v25 + 1),
            v24 >= 0) )
      {
        v26 = (char *)this[43].Ptr + 8 * (__int64)this[44].Ptr++;
        if ( v26 )
        {
          *v26 = v43;
          if ( v43 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
        }
      }
      if ( v24 >= 0 )
      {
        v27 = ((__int64 (__fastcall *)(struct IObjectArray *))v35->lpVtbl[1].QueryInterface)(v35);
        if ( v27 >= 0 )
        {
          v31 = 0;
LABEL_38:
          if ( v31 )
          {
            v40 = 0;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 336LL))(v43, 0LL);
          }
          v32 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          goto LABEL_42;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84A,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v27);
        v28 = (unsigned __int64)this[44].Ptr - 1;
        if ( (PVOID)v28 < this[44].Ptr )
        {
          v29 = *((_QWORD *)v23->Ptr + v28);
          if ( v29 )
          {
            *((_QWORD *)v23->Ptr + v28) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = (char *)this[44].Ptr;
          if ( (char *)v28 != v30 - 1 )
            memmove((char *)v23->Ptr + 8 * v28, (char *)v23->Ptr + 8 * v28 + 8, 8LL * (_QWORD)&v30[-v28] - 8);
          --this[44].Ptr;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x848,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v24);
      }
      v31 = 1;
      goto LABEL_38;
    }
  }
LABEL_46:
  v6 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x82C,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)0x80070490LL);
LABEL_47:
  if ( v7 )
    (*((void (__fastcall **)(HSTRING *))*v7 + 2))(v7);
LABEL_49:
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return v6;
}
