/*
 * XREFs of ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1800F64C0
 * Callers:
 *     ?RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1800F62F0 (-RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@ViewM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180020BE8 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$CreateRefCountedObj@UViewEventRegistration@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@XZ @ 0x1800FED98 (--$CreateRefCountedObj@UViewEventRegistration@@@@YA-AV-$ComPtr@V-$CRefCountedObject@UViewEventRe.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rbx
  int v11; // esi
  HRESULT v12; // eax
  HSTRING v13; // rcx
  HSTRING v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r12
  UINT32 StringLen; // r14d
  const WCHAR *StringRawBuffer; // rsi
  UINT32 v19; // edi
  const WCHAR *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned __int128 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  PVOID Ptr; // rcx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r14
  HSTRING newString; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  __int64 v34; // [rsp+40h] [rbp-20h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  CreateRefCountedObj<ViewEventRegistration>(&v33);
  v10 = v33;
  if ( !v33 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x795,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_45;
  }
  v12 = WindowsDuplicateString(a3, &newString);
  v11 = v12;
  if ( v12 < 0 )
  {
    v15 = 1942LL;
    goto LABEL_44;
  }
  v13 = *(HSTRING *)(v10 + 8);
  *(_QWORD *)(v10 + 8) = newString;
  WindowsDeleteString(v13);
  v12 = WindowsDuplicateString(a4, &newString);
  v11 = v12;
  if ( v12 < 0 )
  {
    v15 = 1943LL;
    goto LABEL_44;
  }
  v14 = *(HSTRING *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = newString;
  WindowsDeleteString(v14);
  *(_DWORD *)(v10 + 24) = a5;
  v12 = AgileGitPtr::Initialize((AgileGitPtr *)(v10 + 32), &GUID_d1b9407f_a351_5319_bce5_178ee5585391, a2);
  v11 = v12;
  if ( v12 < 0 )
  {
    v15 = 1945LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_45;
  }
  wil::srwlock::lock_exclusive(a1 + 26, SRWLock);
  v16 = 0LL;
  if ( a1[32].Ptr )
  {
    while ( 1 )
    {
      StringLen = WindowsGetStringLen(*(HSTRING *)(v10 + 8));
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v10 + 8), 0LL);
      v19 = WindowsGetStringLen(*(HSTRING *)(*((_QWORD *)a1[31].Ptr + v16) + 8LL));
      v20 = WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)a1[31].Ptr + v16) + 8LL), 0LL);
      if ( CompareStringOrdinal(v20, v19, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty(*(HSTRING *)(*((_QWORD *)a1[31].Ptr + v16) + 16LL)) )
          break;
        if ( WindowsIsStringEmpty(*(HSTRING *)(v10 + 16)) )
          break;
        v21 = *((_QWORD *)a1[31].Ptr + v16);
        LODWORD(newString) = 0;
        WindowsCompareStringOrdinal(*(HSTRING *)(v21 + 16), *(HSTRING *)(v10 + 16), (INT32 *)&newString);
        if ( !(_DWORD)newString )
          break;
      }
      if ( (PVOID)++v16 >= a1[32].Ptr )
        goto LABEL_15;
    }
    v11 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x80070057LL);
    goto LABEL_40;
  }
LABEL_15:
  *(RTL_SRWLOCK *)(v10 + 40) = a1[30];
  ++a1[30].Ptr;
  v22 = v10;
  v34 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = 0;
  Ptr = a1[32].Ptr;
  v27 = (unsigned __int64)a1[34].Ptr;
  if ( Ptr != (PVOID)v27 )
    goto LABEL_32;
  v28 = (unsigned __int64)Ptr + 1;
  v11 = -2147024774;
  if ( v28 <= 0xFFFFFFFE )
  {
    v11 = 0;
    if ( v28 > v27 )
    {
      v23 = v27 * (unsigned __int128)2u;
      v24 = 2 * v27;
      v25 = 2147942934LL;
      if ( !is_mul_ok(v27, 2uLL) )
      {
        v24 = -1LL;
        v11 = -2147024362;
      }
      if ( v11 < 0 )
        goto LABEL_35;
      v29 = v24 - v27;
      v30 = v27 + 4096;
      if ( v29 <= 0x1000 )
        v30 = v24;
      if ( v28 > v30 )
        v30 = v28;
      if ( v30 > 0xFFFFFFFE )
        v30 = 4294967294LL;
      newString = 0LL;
      v23 = v30 * (unsigned __int128)8uLL;
      if ( is_mul_ok(v30, 8uLL) )
      {
        v11 = CTCoAllocPolicy::Realloc(
                (IMalloc *)&newString,
                *((__int64 *)&v23 + 1),
                a1[31].Ptr,
                8 * v30,
                (void **)&newString);
        if ( v11 >= 0 )
        {
          a1[34].Ptr = (PVOID)v30;
          a1[31].Ptr = newString;
        }
      }
      else
      {
        v11 = -2147024362;
      }
    }
  }
  if ( v11 >= 0 )
  {
LABEL_32:
    *((_QWORD *)&v23 + 1) = (char *)a1[31].Ptr + 8 * (__int64)a1[32].Ptr++;
    if ( *((_QWORD *)&v23 + 1) )
    {
      **((_QWORD **)&v23 + 1) = 0LL;
      if ( *((__int64 **)&v23 + 1) != &v34 )
      {
        **((_QWORD **)&v23 + 1) = v10;
        v22 = 0LL;
      }
    }
  }
LABEL_35:
  if ( v22 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v22 + 16LL))(
      v22,
      *((_QWORD *)&v23 + 1),
      v24,
      v25);
  if ( v11 >= 0 )
  {
    *a6 = *(_QWORD *)(v10 + 40);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7BC,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v11);
  }
LABEL_40:
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
LABEL_45:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v11;
}
