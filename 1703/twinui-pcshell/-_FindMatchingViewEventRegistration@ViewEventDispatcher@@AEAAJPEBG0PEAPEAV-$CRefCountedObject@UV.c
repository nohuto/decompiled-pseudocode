/*
 * XREFs of ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8FFC
 * Callers:
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindMatchingViewEventRegistration(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  char v10; // r14
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax
  UINT32 v13; // edi
  const WCHAR *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // edi

  *a4 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( !*(_QWORD *)(a1 + 272) )
  {
LABEL_20:
    v19 = -2147023728;
    goto LABEL_21;
  }
  while ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v5) + 8LL)) || v4 )
  {
    v10 = 0;
    StringLen = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v5) + 8LL));
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v5) + 8LL), 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, StringLen, a2, -1, 1) == 2 )
      goto LABEL_6;
LABEL_14:
    if ( (unsigned __int64)++v5 >= *(_QWORD *)(a1 + 272) )
      goto LABEL_15;
  }
  v10 = 1;
LABEL_6:
  if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v5) + 16LL)) )
  {
    v13 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v5) + 16LL));
    v14 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v5) + 16LL), 0LL);
    if ( CompareStringOrdinal(v14, v13, a3, -1, 0) != 2 )
      goto LABEL_14;
  }
  if ( v10 )
  {
    v15 = *(_QWORD *)(a1 + 264);
    v16 = *(_QWORD *)(v15 + 8 * v5);
    if ( v4 != v16 )
    {
      if ( v16 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*(_QWORD *)(v15 + 8 * v5));
      v17 = v4;
      v4 = v16;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    goto LABEL_14;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v5);
  if ( v18 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v5));
    goto LABEL_17;
  }
LABEL_15:
  if ( !v4 )
    goto LABEL_20;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v18 = v4;
LABEL_17:
  *a4 = v18;
  v19 = 0;
LABEL_21:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v19;
}
