/*
 * XREFs of ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007F2B0
 * Callers:
 *     ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180084D00 (-GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 * Callees:
 *     ??A?$unordered_map@KUInputContext@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@@std@@QEAAAEAUInputContext@@AEBK@Z @ 0x180080EDC (--A-$unordered_map@KUInputContext@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUInp.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800AF814 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetTargetWithFocus(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v7; // r15
  int v8; // edi
  __int64 v9; // rsi
  struct IInputBuffer *v10; // r9
  struct IInputTarget *v11; // rcx
  __int64 v12; // rdi
  struct IInputDisplay *v13; // rdi
  struct IInputDisplay *v14; // rcx
  int v15; // eax
  struct IInputTarget **v16; // rdi
  struct IInputTarget *v17; // rcx
  struct IInputTarget *v18; // rcx
  struct IInputDisplay *v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  v7 = a5;
  if ( !a5 )
    return (unsigned int)-2147467261;
  if ( !a3 )
  {
    v18 = (struct IInputTarget *)*((_QWORD *)this + 34);
    if ( v18 )
    {
      (*(void (__fastcall **)(struct IInputTarget *, struct IInputDisplay *, _QWORD, struct IInputTarget *))(*(_QWORD *)v18 + 8LL))(
        v18,
        a2,
        0LL,
        a4);
      v18 = (struct IInputTarget *)*((_QWORD *)this + 34);
    }
    *v7 = v18;
    return 0;
  }
  a5 = 0LL;
  v9 = std::unordered_map<unsigned long,InputContext>::operator[]((char *)this + 624, a3);
  v11 = *(struct IInputTarget **)v9;
  v12 = *((_QWORD *)this + 34);
  if ( *(_QWORD *)v9 != v12 )
  {
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)this + 34));
      v11 = *(struct IInputTarget **)v9;
    }
    *(_QWORD *)v9 = v12;
    if ( v11 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v13 = v20;
  if ( v20 )
  {
LABEL_15:
    v14 = *(struct IInputDisplay **)(v9 + 8);
    if ( v14 != v13 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v13 + 8LL))(v13);
        v14 = *(struct IInputDisplay **)(v9 + 8);
      }
      *(_QWORD *)(v9 + 8) = v13;
      if ( v14 )
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = ContextualProcessorManager::OnFocusRequest(
            *((ContextualProcessorManager **)this + 32),
            a3,
            (struct InputContext *)v9,
            v10,
            (struct IInputTarget **)&a5);
    v16 = a5;
    if ( v15 >= 0 )
    {
      if ( a5 )
        (*((void (__fastcall **)(struct IInputTarget **))*a5 + 1))(a5);
      *v7 = (struct IInputTarget *)v16;
    }
    else
    {
      v17 = *(struct IInputTarget **)v9;
      if ( *(_QWORD *)v9 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 8LL))(v17);
        v17 = *(struct IInputTarget **)v9;
      }
      *v7 = v17;
    }
    if ( v16 )
      (*((void (__fastcall **)(struct IInputTarget **))*v16 + 2))(v16);
    return 0;
  }
  v8 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct DeviceInfo *, struct IInputDisplay **))(*(_QWORD *)this + 80LL))(
         this,
         a3,
         &v20);
  if ( v8 >= 0 )
  {
    v13 = v20;
    goto LABEL_15;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)v8;
}
