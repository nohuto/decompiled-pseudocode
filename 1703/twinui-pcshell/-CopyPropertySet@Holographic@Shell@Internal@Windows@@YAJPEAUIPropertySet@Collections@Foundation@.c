/*
 * XREFs of ?CopyPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@0@Z @ 0x1800E552C
 * Callers:
 *     ?SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E6960 (-SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@F.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::Shell::Holographic::CopyPropertySet(
        Windows::Internal::Shell::Holographic *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v29; // [rsp+88h] [rbp+28h] BYREF
  char v30; // [rsp+90h] [rbp+30h] BYREF
  __int64 v31; // [rsp+98h] [rbp+38h] BYREF

  v27[1] = -2LL;
  v27[0] = 0LL;
  v4 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         v27);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4C,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_35;
  }
  v26 = 0LL;
  v31 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *))this)(
         this,
         &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204,
         &v26);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v29 = 0;
    v8 = v26;
    v9 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v31);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 56LL))(v31, &v29);
      v5 = v6;
      if ( v6 >= 0 )
      {
        while ( 1 )
        {
          if ( !v29 )
          {
            v5 = 0;
            goto LABEL_31;
          }
          v24 = 0LL;
          v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v24);
          v5 = v10;
          if ( v10 < 0 )
            break;
          v30 = 0;
          string = 0LL;
          v11 = v24;
          WindowsDeleteString(0LL);
          string = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 48LL))(v11, &string);
          v5 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x60,
              (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
              (const char *)(unsigned int)v12);
            goto LABEL_27;
          }
          v25 = 0LL;
          v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v25);
          v5 = v13;
          if ( v13 < 0 )
          {
            v16 = 98LL;
            goto LABEL_24;
          }
          (*(void (__fastcall **)(_QWORD, HSTRING, __int64, char *))(*(_QWORD *)v27[0] + 80LL))(
            v27[0],
            string,
            v25,
            &v30);
          v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 64LL))(v31, &v29);
          v5 = v13;
          if ( v13 < 0 )
          {
            v16 = 102LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v16,
              (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
              (const char *)(unsigned int)v13);
            v17 = v25;
            if ( v25 )
            {
              v25 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
LABEL_27:
            WindowsDeleteString(string);
            string = 0LL;
            goto LABEL_29;
          }
          v14 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          WindowsDeleteString(string);
          string = 0LL;
          v15 = v24;
          if ( v24 )
          {
            v24 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x5B,
          (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
          (const char *)(unsigned int)v10);
LABEL_29:
        v18 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_31;
      }
      v7 = 85LL;
    }
    else
    {
      v7 = 84LL;
    }
  }
  else
  {
    v7 = 81LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
    (const char *)(unsigned int)v6);
LABEL_31:
  v19 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_35:
  v21 = v27[0];
  if ( v27[0] )
  {
    v27[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v5;
}
