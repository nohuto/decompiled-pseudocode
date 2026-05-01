/*
 * XREFs of ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x1800620A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x180062494 (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::SetFramedView(FrameWrapper *this, struct IUnknown *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int LastError; // ebx
  int v8; // eax
  __int64 v9; // rdx
  const char *v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  unsigned int v17; // [rsp+60h] [rbp+28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+30h] BYREF
  __int64 v19; // [rsp+70h] [rbp+38h] BYREF
  __int64 v20; // [rsp+78h] [rbp+40h] BYREF

  v4 = (_QWORD *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
         v4);
  LastError = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xFC,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v6);
    return LastError;
  }
  v19 = 0LL;
  v8 = (*(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL))(this, &v19);
  LastError = v8;
  if ( v8 < 0 )
  {
    v9 = 260LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_20;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v20);
  LastError = v8;
  if ( v8 < 0 )
  {
    v9 = 262LL;
    goto LABEL_9;
  }
  if ( (unsigned int)GetWindowBand(v20, &v17) )
  {
    v18 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4)(
            *v4,
            &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
            &v18);
    LastError = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 40LL))(v18, v17);
      LastError = v11;
      if ( v11 >= 0 )
      {
        FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 24));
        LastError = 0;
LABEL_18:
        v13 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        goto LABEL_20;
      }
      v12 = 267LL;
    }
    else
    {
      v12 = 266LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_18;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x108,
                (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
                v10);
LABEL_20:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return LastError;
}
