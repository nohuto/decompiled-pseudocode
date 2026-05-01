/*
 * XREFs of ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x1800E5840
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800D9E64 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewBackedViewHostItem::RuntimeClassInitialize(
        ApplicationViewBackedViewHostItem *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  int v13; // eax
  HSTRING *v14; // r14
  const WCHAR *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  PCNZWCH sourceString; // [rsp+28h] [rbp-18h] BYREF
  __int64 v22; // [rsp+30h] [rbp-10h]
  __int64 v23; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF
  __int64 v26; // [rsp+78h] [rbp+38h] BYREF

  if ( *((struct IApplicationView **)this + 9) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v26 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9))(
         *((_QWORD *)this + 9),
         &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
         &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 38LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_30;
  }
  v8 = v26;
  v9 = (_QWORD *)((char *)this + 80);
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 80);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 39LL;
    goto LABEL_12;
  }
  sourceString = 0LL;
  v11 = *((_QWORD *)this + 9);
  v12 = -1LL;
  v22 = -1LL;
  v23 = -1LL;
  v13 = (*(__int64 (__fastcall **)(__int64, PCNZWCH *))(*(_QWORD *)v11 + 112LL))(v11, &sourceString);
  v6 = v13;
  if ( v13 >= 0 )
  {
    v14 = (HSTRING *)((char *)this + 96);
    v15 = sourceString;
    if ( sourceString )
    {
      do
        ++v12;
      while ( sourceString[v12] );
      if ( v12 <= 0xFFFFFFFF )
      {
        WindowsDeleteString(*v14);
        *v14 = 0LL;
        WindowsCreateString(v15, v12, (HSTRING *)this + 12);
      }
    }
    v25 = 0LL;
    v16 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v9)(
            *v9,
            &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
            &v25);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 32LL))(v25, (char *)this + 24);
      v6 = v16;
      if ( v16 >= 0 )
      {
        v6 = 0;
LABEL_25:
        v18 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_27;
      }
      v17 = 48LL;
    }
    else
    {
      v17 = 47LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2A,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v13);
LABEL_27:
  if ( sourceString )
  {
    CoTaskMemFree((LPVOID)sourceString);
    sourceString = 0LL;
  }
  v22 = 0LL;
  v23 = 0LL;
LABEL_30:
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v6;
}
