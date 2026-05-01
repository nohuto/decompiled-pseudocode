/*
 * XREFs of ?GetIdentifier@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z @ 0x1800EE1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::GetIdentifier(
        PenWorkspace::Discover::UTMRecentItem *this,
        unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  PCWSTR StringRawBuffer; // rax
  int v8; // eax
  void *v9; // rcx
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HSTRING string; // [rsp+50h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF

  v15 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3), &v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    string = 0LL;
    v5 = v15;
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 56LL))(v5, &string);
    v4 = v6;
    if ( v6 >= 0 )
    {
      memset(v12, 0, sizeof(v12));
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             (__int64)v12,
             (__int64)StringRawBuffer,
             0xFFFFFFFFFFFFFFFFuLL);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v9 = 0LL;
        *a2 = (unsigned __int16 *)v12[0];
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x4D,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
          (const char *)(unsigned int)v8);
        v9 = (void *)v12[0];
      }
      if ( v9 )
        CoTaskMemFree(v9);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x4A,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
        (const char *)(unsigned int)v6);
    }
    WindowsDeleteString(string);
    string = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x47,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
      (const char *)(unsigned int)v3);
  }
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v4;
}
