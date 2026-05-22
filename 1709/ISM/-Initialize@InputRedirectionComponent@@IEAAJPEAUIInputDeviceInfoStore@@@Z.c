/*
 * XREFs of ?Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800A6D14
 * Callers:
 *     ?Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x1800A6F3C (-Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionComponent::Initialize(
        InputRedirectionComponent *this,
        struct IInputDeviceInfoStore *a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rcx
  int Descriptor; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  __int64 v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  char *v14; // rbp
  __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  char v20; // [rsp+50h] [rbp-28h]
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF

  v21 = 0;
  v19 = 0LL;
  v20 = 0;
  *((_QWORD *)this + 9) = a2;
  v3 = (__int64 *)((char *)this + 40);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Descriptor = CoreUICreate(v3);
  v7 = Descriptor;
  if ( Descriptor >= 0 )
  {
    Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v19, 8u, (__int64)L"System\\TouchInputRedirection");
    v7 = Descriptor;
    if ( Descriptor >= 0 )
    {
      v9 = *v3;
      v10 = (_QWORD *)((char *)this + 56);
      v11 = *((_QWORD *)this + 7);
      if ( v11 )
      {
        *v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v9 + 48LL))(
                     v9,
                     v19,
                     L"System\\TouchInputRedirection",
                     (char *)this + 56);
      v7 = Descriptor;
      if ( Descriptor >= 0 )
      {
        v12 = (_QWORD *)((char *)this + 48);
        v13 = *((_QWORD *)this + 6);
        if ( v13 )
        {
          *v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        Descriptor = CoreUIFactoryCreate((char *)this + 48);
        v7 = Descriptor;
        if ( Descriptor >= 0 )
        {
          Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v12 + 24LL))(
                         *v12,
                         &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb,
                         &v21);
          v7 = Descriptor;
          if ( Descriptor >= 0 )
          {
            v14 = (char *)this + 8;
            v15 = *v12;
            v16 = (__int64 *)((char *)this + 64);
            v17 = *v16;
            if ( *v16 )
            {
              *v16 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
            Descriptor = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(
                           v15,
                           v14,
                           0LL,
                           v21,
                           L"TouchInputRedirection",
                           *v10,
                           v16);
            v7 = Descriptor;
            if ( Descriptor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v8 = 75;
              goto LABEL_27;
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 67;
            goto LABEL_27;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 63;
          goto LABEL_27;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 61;
        goto LABEL_27;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 56;
      goto LABEL_27;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 52;
LABEL_27:
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, v8, Descriptor);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v19);
  return v7;
}
