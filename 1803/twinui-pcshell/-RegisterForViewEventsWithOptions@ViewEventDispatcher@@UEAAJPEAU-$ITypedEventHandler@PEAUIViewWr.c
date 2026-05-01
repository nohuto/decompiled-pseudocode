/*
 * XREFs of ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1801CC950
 * Callers:
 *     ?RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1801CC900 (-RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@ViewM.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180087644 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$CreateRefCountedObj@UViewEventRegistration@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@XZ @ 0x1801C66D8 (--$CreateRefCountedObj@UViewEventRegistration@@@@YA-AV-$ComPtr@V-$CRefCountedObject@UViewEventRe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 ViewEventDispatcher::RegisterForViewEventsWithOptions(RTL_SRWLOCK *a1, __int64 a2, ...)
{
  char *v4; // rbx
  int AgileReference; // edi
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r9
  int v9; // eax
  __int64 *v10; // rsi
  __int64 v11; // rcx
  RTL_SRWLOCK *v12; // r13
  __int64 v13; // r12
  UINT32 StringLen; // r14d
  const WCHAR *StringRawBuffer; // rsi
  UINT32 v16; // edi
  const WCHAR *v17; // rax
  __int64 v18; // rcx
  void *v19; // r8
  RTL_SRWLOCK *v20; // r15
  PVOID Ptr; // rdx
  INT32 *v22; // rdx
  __int64 v23; // rdx
  INT32 result[2]; // [rsp+30h] [rbp-20h] BYREF
  void *v26[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HSTRING v28; // [rsp+A0h] [rbp+50h] BYREF
  va_list va; // [rsp+A0h] [rbp+50h]
  HSTRING v30; // [rsp+A8h] [rbp+58h] BYREF
  va_list va1; // [rsp+A8h] [rbp+58h]
  __int64 v32; // [rsp+B0h] [rbp+60h]
  _QWORD *v33; // [rsp+B8h] [rbp+68h]
  va_list va2; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v28 = va_arg(va1, HSTRING);
  va_copy(va2, va1);
  v30 = va_arg(va2, HSTRING);
  v32 = va_arg(va2, _QWORD);
  v33 = va_arg(va2, _QWORD *);
  v26[1] = (void *)-2LL;
  CreateRefCountedObj<ViewEventRegistration>((__int64 *)v26);
  v4 = (char *)v26[0];
  if ( !v26[0] )
  {
    AgileReference = -2147024882;
    v6 = 1564LL;
LABEL_12:
    v8 = (unsigned int)AgileReference;
    goto LABEL_13;
  }
  v7 = Windows::Internal::String::Initialize((HSTRING *)v26[0] + 1, (HSTRING *)va);
  AgileReference = v7;
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v6 = 1565LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v8);
    goto LABEL_32;
  }
  v9 = Windows::Internal::String::Initialize((HSTRING *)v4 + 2, (HSTRING *)va1);
  AgileReference = v9;
  if ( v9 < 0 )
  {
    v8 = (unsigned int)v9;
    v6 = 1566LL;
    goto LABEL_13;
  }
  *((_DWORD *)v4 + 6) = v32;
  v10 = (__int64 *)(v4 + 32);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v4 + 4);
  if ( a2 )
  {
    *(_QWORD *)result = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)result);
    AgileReference = RoGetAgileReference(0LL, &GUID_d1b9407f_a351_5319_bce5_178ee5585391, a2, result);
    if ( AgileReference >= 0 )
    {
      v11 = *v10;
      *v10 = *(_QWORD *)result;
      *(_QWORD *)result = v11;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)result);
    if ( AgileReference < 0 )
    {
      v6 = 1568LL;
      goto LABEL_12;
    }
  }
  v12 = a1 + 35;
  AcquireSRWLockExclusive(a1 + 35);
  v26[2] = &a1[35];
  v13 = 0LL;
  if ( a1[41].Ptr )
  {
    while ( 1 )
    {
      StringLen = WindowsGetStringLen(*((HSTRING *)v4 + 1));
      StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v4 + 1), 0LL);
      v16 = WindowsGetStringLen(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v13) + 8LL));
      v17 = WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v13) + 8LL), 0LL);
      if ( CompareStringOrdinal(v17, v16, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v13) + 16LL)) )
          break;
        if ( WindowsIsStringEmpty(*((HSTRING *)v4 + 2)) )
          break;
        v18 = *((_QWORD *)a1[40].Ptr + v13);
        result[0] = 0;
        WindowsCompareStringOrdinal(*(HSTRING *)(v18 + 16), *((HSTRING *)v4 + 2), result);
        if ( !result[0] )
          break;
      }
      if ( (PVOID)++v13 >= a1[41].Ptr )
        goto LABEL_20;
    }
    AgileReference = -2147024809;
    v23 = 1597LL;
    goto LABEL_27;
  }
LABEL_20:
  *((RTL_SRWLOCK *)v4 + 5) = a1[39];
  ++a1[39].Ptr;
  *(_QWORD *)result = v4;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)result);
  v20 = a1 + 40;
  AgileReference = 0;
  Ptr = v20[1].Ptr;
  if ( Ptr != v20[3].Ptr
    || (AgileReference = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                           (__int64)v20,
                           (unsigned __int64)Ptr + 1,
                           v19),
        AgileReference >= 0) )
  {
    v22 = (INT32 *)((char *)v20->Ptr + 8 * (__int64)v20[1].Ptr++);
    if ( v22 )
    {
      *(_QWORD *)v22 = 0LL;
      if ( v22 != result )
      {
        *(_QWORD *)v22 = v4;
        *(_QWORD *)result = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)result);
  if ( AgileReference < 0 )
  {
    v23 = 1603LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)AgileReference);
    goto LABEL_30;
  }
  *v33 = *((_QWORD *)v4 + 5);
  AgileReference = 0;
LABEL_30:
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
LABEL_32:
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(v26);
  return (unsigned int)AgileReference;
}
