/*
 * XREFs of ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1801216A0
 * Callers:
 *     ?RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1801214D0 (-RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@ViewM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800216CC (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::RegisterForViewEventsWithOptions(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        HSTRING a3,
        HSTRING a4,
        int a5,
        _QWORD *a6)
{
  char *v10; // rax
  char *v11; // r14
  int v12; // edi
  HRESULT v13; // eax
  HSTRING v14; // rcx
  HSTRING v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r12
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rdi
  UINT32 v20; // ebx
  const WCHAR *v21; // rax
  __int64 v22; // rcx
  char *v23; // rbx
  unsigned __int128 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  PVOID Ptr; // rcx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  HSTRING newString; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v34[5]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v34[1] = -2LL;
  v10 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    memset(v10 + 8, 0, 0x28uLL);
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    *(_QWORD *)v11 = &CRefCountedObject<ViewEventRegistration>::`vftable';
    *((_DWORD *)v11 + 12) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v34[2] = v11;
  if ( !v11 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D1,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_49;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v11);
  v13 = WindowsDuplicateString(a3, &newString);
  v12 = v13;
  if ( v13 < 0 )
  {
    v16 = 2002LL;
    goto LABEL_48;
  }
  v14 = (HSTRING)*((_QWORD *)v11 + 1);
  *((_QWORD *)v11 + 1) = newString;
  WindowsDeleteString(v14);
  v13 = WindowsDuplicateString(a4, &newString);
  v12 = v13;
  if ( v13 < 0 )
  {
    v16 = 2003LL;
    goto LABEL_48;
  }
  v15 = (HSTRING)*((_QWORD *)v11 + 2);
  *((_QWORD *)v11 + 2) = newString;
  WindowsDeleteString(v15);
  *((_DWORD *)v11 + 6) = a5;
  v13 = AgileGitPtr::Initialize((AgileGitPtr *)(v11 + 32), &GUID_d1b9407f_a351_5319_bce5_178ee5585391, a2);
  v12 = v13;
  if ( v13 < 0 )
  {
    v16 = 2005LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_49;
  }
  AcquireSRWLockExclusive(a1 + 35);
  v34[3] = a1 + 35;
  v17 = 0LL;
  if ( a1[41].Ptr )
  {
    while ( 1 )
    {
      StringLen = WindowsGetStringLen(*((HSTRING *)v11 + 1));
      StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v11 + 1), 0LL);
      v20 = WindowsGetStringLen(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v17) + 8LL));
      v21 = WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v17) + 8LL), 0LL);
      if ( CompareStringOrdinal(v21, v20, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v17) + 16LL)) )
          break;
        if ( WindowsIsStringEmpty(*((HSTRING *)v11 + 2)) )
          break;
        v22 = *((_QWORD *)a1[40].Ptr + v17);
        LODWORD(newString) = 0;
        WindowsCompareStringOrdinal(*(HSTRING *)(v22 + 16), *((HSTRING *)v11 + 2), (INT32 *)&newString);
        if ( !(_DWORD)newString )
          break;
      }
      if ( (PVOID)++v17 >= a1[41].Ptr )
        goto LABEL_19;
    }
    v12 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F2,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x80070057LL);
    goto LABEL_44;
  }
LABEL_19:
  *((RTL_SRWLOCK *)v11 + 5) = a1[39];
  ++a1[39].Ptr;
  v23 = v11;
  v34[0] = v11;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = 0;
  Ptr = a1[41].Ptr;
  v28 = (unsigned __int64)a1[43].Ptr;
  if ( Ptr != (PVOID)v28 )
    goto LABEL_36;
  v29 = (unsigned __int64)Ptr + 1;
  v12 = -2147024774;
  if ( v29 <= 0xFFFFFFFE )
  {
    v12 = 0;
    if ( v29 > v28 )
    {
      v24 = v28 * (unsigned __int128)2u;
      v25 = 2 * v28;
      v26 = 2147942934LL;
      if ( !is_mul_ok(v28, 2uLL) )
      {
        v25 = -1LL;
        v12 = -2147024362;
      }
      if ( v12 < 0 )
        goto LABEL_39;
      v30 = v25 - v28;
      v31 = v28 + 4096;
      if ( v30 <= 0x1000 )
        v31 = v25;
      if ( v29 > v31 )
        v31 = v29;
      if ( v31 > 0xFFFFFFFE )
        v31 = 4294967294LL;
      newString = 0LL;
      v24 = v31 * (unsigned __int128)8uLL;
      if ( is_mul_ok(v31, 8uLL) )
      {
        v12 = CTCoAllocPolicy::Realloc(
                (IMalloc *)&newString,
                *((__int64 *)&v24 + 1),
                a1[40].Ptr,
                8 * v31,
                (void **)&newString);
        if ( v12 >= 0 )
        {
          a1[43].Ptr = (PVOID)v31;
          a1[40].Ptr = newString;
        }
      }
      else
      {
        v12 = -2147024362;
      }
    }
  }
  if ( v12 >= 0 )
  {
LABEL_36:
    *((_QWORD *)&v24 + 1) = (char *)a1[40].Ptr + 8 * (__int64)a1[41].Ptr++;
    if ( *((_QWORD *)&v24 + 1) )
    {
      **((_QWORD **)&v24 + 1) = 0LL;
      if ( *((_QWORD **)&v24 + 1) != v34 )
      {
        **((_QWORD **)&v24 + 1) = v11;
        v23 = 0LL;
      }
    }
  }
LABEL_39:
  if ( v23 )
    (*(void (__fastcall **)(char *, _QWORD, __int64, __int64))(*(_QWORD *)v23 + 16LL))(
      v23,
      *((_QWORD *)&v24 + 1),
      v25,
      v26);
  if ( v12 >= 0 )
  {
    *a6 = *((_QWORD *)v11 + 5);
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7F8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v12);
  }
LABEL_44:
  if ( a1 != (RTL_SRWLOCK *)-280LL )
    ReleaseSRWLockExclusive(a1 + 35);
LABEL_49:
  if ( v11 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v12;
}
