/*
 * XREFs of ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800AF814
 * Callers:
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007F2B0 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 * Callees:
 *     ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800AFB28 (-Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800AFD1C (-AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContextualProcessorManager::OnFocusRequest(
        ContextualProcessorManager *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct ContextualProcessorBuffer *v7; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  int v10; // edi
  int v11; // ecx
  struct IInputTarget *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct IInputTarget *v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h]
  struct ContextualProcessorBuffer *v23; // [rsp+90h] [rbp+30h] BYREF
  struct IInputTarget *v24; // [rsp+A8h] [rbp+48h] BYREF

  v24 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v8 = (_QWORD *)*((_QWORD *)this + 2);
  v9 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v8 == v9 )
  {
LABEL_31:
    v10 = -2147467259;
  }
  else
  {
    while ( 1 )
    {
      v20 = 0LL;
      v19 = 0LL;
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v8 + 32LL))(
              *v8,
              a2,
              a3,
              &v19);
      if ( v10 < 0 )
      {
LABEL_27:
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
        v16 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        goto LABEL_32;
      }
      v11 = v19;
      if ( (unsigned int)(v19 - 1) <= 2 )
      {
        if ( !v7 )
        {
          v10 = ContextualProcessorBuffer::Create(a3, 0LL, &v23);
          if ( v10 < 0 )
          {
            if ( IsDebuggerPresent() )
              __debugbreak();
            RaiseFailFastException(0LL, 0LL, 0);
            v14 = v20;
            if ( v20 )
            {
              v20 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            }
            v7 = v23;
            goto LABEL_32;
          }
          v12 = v24;
          if ( v24 )
          {
            v24 = 0LL;
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v12 + 16LL))(v12);
          }
          v7 = v23;
          v10 = (**(__int64 (__fastcall ***)(struct ContextualProcessorBuffer *, GUID *, struct IInputTarget **))v23)(
                  v23,
                  &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
                  &v24);
          if ( v10 < 0 )
            goto LABEL_27;
          v11 = v19;
        }
        v21 = v11;
        v22 = v20;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v10 = ContextualProcessorBuffer::AddProcessor(v7, *v8, &v21);
        if ( v10 < 0 )
          goto LABEL_27;
        if ( (_DWORD)v19 == 2 )
          break;
      }
      v13 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( ++v8 == v9 )
        goto LABEL_25;
    }
    v15 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
LABEL_25:
    if ( !v24 )
      goto LABEL_31;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v24 + 8LL))(v24);
    *a5 = v24;
    v10 = 0;
  }
LABEL_32:
  if ( v7 )
    (*(void (__fastcall **)(struct ContextualProcessorBuffer *))(*(_QWORD *)v7 + 16LL))(v7);
  v17 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v10;
}
