/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___ @ 0x18001949C
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A960 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4135c6296786dedba9398dc027119617___ @ 0x18001BAE4 (Windows--Internal--ComTaskPool--QueueTask__lambda_4135c6296786dedba9398dc027119617___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rsi
  PVOID Ptr; // rbx
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rcx
  PVOID v11; // [rsp+28h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v11 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v8 = *a2;
    v12 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_4135c6296786dedba9398dc027119617___(
           v8,
           v7,
           LODWORD(v3[13].Ptr),
           &v11,
           -2LL);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 16LL))(v11);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v10 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v9;
  }
  else
  {
    v5 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return 2147943568LL;
  }
}
