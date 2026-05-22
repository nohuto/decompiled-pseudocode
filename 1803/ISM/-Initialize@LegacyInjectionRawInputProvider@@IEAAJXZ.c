/*
 * XREFs of ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006B4BC
 * Callers:
 *     ?Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006B430 (-Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x18006BDD0 (-FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LegacyInjectionRawInputProvider::Initialize(LegacyInjectionRawInputProvider *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx
  int Descriptor; // ebx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  unsigned int v16; // [rsp+80h] [rbp+20h] BYREF
  __int64 v17; // [rsp+88h] [rbp+28h] BYREF

  v14 = 0LL;
  v15 = 0;
  v17 = 0LL;
  v16 = 0;
  v2 = (__int64 *)((char *)this + 48);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Descriptor = CoreUICreate(v2);
  if ( Descriptor >= 0 )
  {
    Descriptor = InputSecurityDescriptor::QueryDescriptor(
                   (__int64)&v14,
                   v4,
                   (__int64)L"Input\\Injection.AlpcPort\\Server");
    if ( Descriptor >= 0 )
    {
      v6 = *v2;
      v7 = (_QWORD *)((char *)this + 56);
      v8 = *((_QWORD *)this + 7);
      if ( v8 )
      {
        *v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v6 + 48LL))(
                     v6,
                     v14,
                     L"Input\\Injection.AlpcPort\\Server",
                     (char *)this + 56);
      if ( Descriptor >= 0 )
      {
        v9 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        Descriptor = CoreUIFactoryCreate(&v17);
        if ( Descriptor >= 0 )
        {
          Descriptor = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v17 + 24LL))(
                         v17,
                         &GUID_9978c53c_56b6_4c55_ba5f_5495e889e2fe,
                         &v16);
          if ( Descriptor >= 0 )
          {
            v10 = v17;
            v11 = *((_QWORD *)this + 8);
            if ( v11 )
            {
              *((_QWORD *)this + 8) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            Descriptor = (*(__int64 (__fastcall **)(__int64, LegacyInjectionRawInputProvider *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v10 + 32LL))(
                           v10,
                           this,
                           0LL,
                           v16,
                           L"IRemoteInputInjectionApi",
                           *v7,
                           (char *)this + 64);
            if ( Descriptor >= 0 && (int)LegacyInjectionRawInputProvider::FindRemoteProxy(this) < 0 )
              *((_BYTE *)this + 72) = 1;
          }
        }
      }
    }
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v14);
  return (unsigned int)Descriptor;
}
