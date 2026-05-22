/*
 * XREFs of ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800B70B0
 * Callers:
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800B6B0C (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::Initialize(ButtonRecognizer *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  int Descriptor; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF

  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 5) = 0;
  *(_WORD *)((char *)this + 17) = 0;
  *((_BYTE *)this + 16) = 0;
  v2 = (__int64 *)((char *)this + 160);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Descriptor = CoreUICreate(v2);
  if ( Descriptor >= 0 )
  {
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (_QWORD *)this + 21,
      *v2);
    v16 = 0LL;
    v17 = 0;
    Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v16, v5, (__int64)c_wszMessagePortNames);
    if ( Descriptor < 0 )
      goto LABEL_5;
    v6 = *v2;
    v7 = (_QWORD *)((char *)this + 184);
    v8 = *((_QWORD *)this + 23);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v6 + 56LL))(
                   v6,
                   v16,
                   (char *)this + 184);
    if ( Descriptor < 0
      || (v9 = *v2,
          wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
            (_QWORD *)this + 21,
            *((_QWORD *)this + 21)),
          Descriptor = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD *, const void *, int), ButtonRecognizer *, _QWORD, char *))(*(_QWORD *)v9 + 80LL))(
                         v9,
                         ButtonRecognizer::MessageProc,
                         this,
                         *v7,
                         (char *)this + 176),
          Descriptor < 0) )
    {
LABEL_5:
      InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
      return (unsigned int)Descriptor;
    }
    v10 = *((_QWORD *)this + 25);
    if ( v10 )
    {
      *((_QWORD *)this + 25) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = *((_QWORD *)this + 24);
    if ( v11 )
    {
      *((_QWORD *)this + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    Descriptor = CoreUICallCreateEndpointHost(*v2, (char *)this + 192, (char *)this + 200);
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
    if ( Descriptor >= 0 )
    {
      v18 = 0LL;
      Descriptor = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 24LL))(*v2, &v18);
      if ( Descriptor < 0 )
      {
        v12 = v18;
        goto LABEL_17;
      }
      Descriptor = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v18 + 40LL))(
                     v18,
                     L"System\\Input\\ComboButton",
                     *((_QWORD *)this + 22),
                     1LL);
      v12 = v18;
      if ( Descriptor < 0 )
      {
LABEL_17:
        if ( v12 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        return (unsigned int)Descriptor;
      }
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = *v2;
      v14 = *((_QWORD *)this + 19);
      if ( v14 )
      {
        *((_QWORD *)this + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), ButtonRecognizer *, char *))(*(_QWORD *)v13 + 120LL))(
                             v13,
                             lambda_c88a0564d6fae1946d42cf268bfdb624_::_lambda_invoker_cdecl_,
                             this,
                             (char *)this + 152);
    }
  }
  return (unsigned int)Descriptor;
}
