/*
 * XREFs of ?PresentFramedView@FrameWrapper@@UEAAJXZ @ 0x180062250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x180062494 (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::PresentFramedView(FrameWrapper *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF

  if ( !*((_QWORD *)this + 5) )
  {
    v2 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)0x8007139FLL);
    return v2;
  }
  v13 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5))(
         *((_QWORD *)this + 5),
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v13);
  v2 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, &v11);
    v2 = v3;
    if ( v3 < 0 )
    {
      v4 = 283LL;
      goto LABEL_7;
    }
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL))(this, &v12);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v11);
      v2 = v5;
      if ( v5 >= 0 )
      {
        *((_DWORD *)this + 12) |= 1u;
        FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 24));
        v5 = (*(__int64 (__fastcall **)(FrameWrapper *))(*(_QWORD *)this + 96LL))(this);
        v2 = v5;
        if ( v5 >= 0 )
        {
          v2 = 0;
LABEL_16:
          v7 = v12;
          if ( v12 )
          {
            v12 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          }
          goto LABEL_18;
        }
        v6 = 292LL;
      }
      else
      {
        v6 = 286LL;
      }
    }
    else
    {
      v6 = 285LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
  v4 = 281LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v3);
LABEL_18:
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v2;
}
