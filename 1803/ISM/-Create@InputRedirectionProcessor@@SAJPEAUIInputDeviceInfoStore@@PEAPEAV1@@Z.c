/*
 * XREFs of ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x1800B4C9C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::Create(
        struct IInputDeviceInfoStore *a1,
        struct InputRedirectionProcessor **a2)
{
  int Descriptor; // edi
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  _QWORD *v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  char v19; // [rsp+50h] [rbp-28h]
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = (__int64 *)malloc(0x90uLL);
    v6 = v5;
    if ( v5 )
      memset_0(v5, 0, 0x90uLL);
    if ( v6 )
    {
      memset_0(v6, 0, 0x90uLL);
      v6[3] = (__int64)&RefCountedObject::`vftable';
      *((_DWORD *)v6 + 8) = 1;
      *v6 = (__int64)&InputRedirectionProcessor::`vftable'{for `IContextualProcessor'};
      v6[1] = (__int64)&InputRedirectionProcessor::`vftable'{for `IRemoteInputRedirection'};
      v6[2] = (__int64)&InputRedirectionProcessor::`vftable'{for `IMessageObjectOwner'};
      v6[3] = (__int64)&InputRedirectionProcessor::`vftable'{for `RefCountedObject'};
      v6[5] = 0LL;
      v6[6] = 0LL;
      v6[7] = 0LL;
      v6[8] = 0LL;
      memset_0(v6 + 10, 0, 0x40uLL);
      v20 = 0;
      v18 = 0LL;
      v19 = 0;
      v6[9] = (__int64)a1;
      v7 = v6 + 5;
      v8 = v6[5];
      if ( v8 )
      {
        *v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      Descriptor = CoreUICreate(v6 + 5);
      if ( Descriptor >= 0 )
      {
        Descriptor = InputSecurityDescriptor::QueryDescriptor(
                       (__int64)&v18,
                       v9,
                       (__int64)L"System\\TouchInputRedirection");
        if ( Descriptor >= 0 )
        {
          v10 = *v7;
          v11 = v6 + 7;
          v12 = v6[7];
          if ( v12 )
          {
            *v11 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)v10 + 48LL))(
                         v10,
                         v18,
                         L"System\\TouchInputRedirection",
                         v6 + 7);
          if ( Descriptor >= 0 )
          {
            v13 = v6 + 6;
            v14 = v6[6];
            if ( v14 )
            {
              *v13 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            }
            Descriptor = CoreUIFactoryCreate(v6 + 6);
            if ( Descriptor >= 0 )
            {
              Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v13 + 24LL))(
                             *v13,
                             &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb,
                             &v20);
              if ( Descriptor >= 0 )
              {
                v15 = *v13;
                v16 = v6[8];
                if ( v16 )
                {
                  v6[8] = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                }
                Descriptor = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(
                               v15,
                               v6 + 1,
                               0LL,
                               v20,
                               L"TouchInputRedirection",
                               *v11,
                               v6 + 8);
              }
            }
          }
        }
      }
      InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v18);
      if ( Descriptor < 0 )
        (*(void (__fastcall **)(__int64 *, __int64))(v6[3] + 24))(v6 + 3, 1LL);
      else
        *a2 = (struct InputRedirectionProcessor *)v6;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)Descriptor;
}
