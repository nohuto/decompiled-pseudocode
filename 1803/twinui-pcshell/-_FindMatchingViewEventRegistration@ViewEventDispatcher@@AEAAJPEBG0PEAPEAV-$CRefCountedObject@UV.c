/*
 * XREFs of ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800322F0
 * Callers:
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 * Callees:
 *     ?Release@?$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ @ 0x180031500 (-Release@-$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092008 (--4-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindMatchingViewEventRegistration(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        _QWORD *a4)
{
  void *v4; // rsi
  void *v5; // rbx
  unsigned __int64 i; // rbp
  char v10; // r15
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(void *); // rax
  UINT32 v16; // edi
  const WCHAR *v17; // rax
  _QWORD *v18; // rdx
  void *v19; // rdi
  void *v20; // rcx
  void *v21; // [rsp+70h] [rbp+8h] BYREF
  LPCWCH lpString2; // [rsp+78h] [rbp+10h]

  lpString2 = a2;
  *a4 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  for ( i = 0LL; i < *(_QWORD *)(a1 + 344); ++i )
  {
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * i) + 8LL)) || v5 )
    {
      v10 = 0;
      StringLen = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * i) + 8LL));
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * i) + 8LL), 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, StringLen, lpString2, -1, 1) != 2 )
        continue;
    }
    else
    {
      v10 = 1;
    }
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * i) + 16LL)) )
    {
      v16 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * i) + 16LL));
      v17 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * i) + 16LL), 0LL);
      if ( CompareStringOrdinal(v17, v16, a3, -1, 0) != 2 )
        continue;
    }
    v18 = (_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * i);
    if ( !v10 )
    {
      Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::operator=(&v21, v18);
      v4 = v21;
      if ( !v21 )
        break;
LABEL_8:
      *a4 = v4;
      v13 = 0;
      goto LABEL_9;
    }
    v19 = (void *)*v18;
    if ( v5 != (void *)*v18 )
    {
      if ( v19 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(*v18);
      v20 = v5;
      v5 = v19;
      if ( v20 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
    v4 = v5;
  }
  if ( v4 )
    goto LABEL_8;
  v13 = -2147023728;
LABEL_9:
  if ( v5 )
  {
    v14 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL);
    if ( v14 == CRefCountedObject<ViewEventRegistration>::Release )
      CRefCountedObject<ViewEventRegistration>::Release(v5);
    else
      v14(v5);
  }
  return v13;
}
