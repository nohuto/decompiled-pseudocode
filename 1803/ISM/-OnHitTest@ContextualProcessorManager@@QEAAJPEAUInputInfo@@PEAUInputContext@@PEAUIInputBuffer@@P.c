/*
 * XREFs of ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800AF5B8
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?DoConvergedInputTargeting@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18007FD00 (-DoConvergedInputTargeting@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffe.c)
 * Callees:
 *     ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800AFB28 (-Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800AFD1C (-AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContextualProcessorManager::OnHitTest(
        ContextualProcessorManager *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct ContextualProcessorBuffer *v8; // rbx
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  int v11; // edi
  int v12; // ecx
  struct IInputTarget *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct IInputTarget *v18; // rcx
  struct ContextualProcessorBuffer *v20[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp-20h]
  int v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  struct IInputTarget *v25; // [rsp+A0h] [rbp+30h] BYREF

  v20[1] = (struct ContextualProcessorBuffer *)-2LL;
  v25 = 0LL;
  v8 = 0LL;
  v20[0] = 0LL;
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  v10 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v9 == v10 )
  {
LABEL_31:
    v11 = -2147467259;
  }
  else
  {
    while ( 1 )
    {
      v22 = 0LL;
      v21 = 0LL;
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v9 + 24LL))(
              *v9,
              a2,
              a3,
              &v21);
      if ( v11 < 0 )
      {
LABEL_27:
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
        v17 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        goto LABEL_32;
      }
      v12 = v21;
      if ( (unsigned int)(v21 - 1) <= 2 )
      {
        if ( !v8 )
        {
          v11 = ContextualProcessorBuffer::Create(a3, a4, v20);
          if ( v11 < 0 )
          {
            if ( IsDebuggerPresent() )
              __debugbreak();
            RaiseFailFastException(0LL, 0LL, 0);
            v15 = v22;
            if ( v22 )
            {
              v22 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            }
            v8 = v20[0];
            goto LABEL_32;
          }
          v13 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v13 + 16LL))(v13);
          }
          v8 = v20[0];
          v11 = (**(__int64 (__fastcall ***)(struct ContextualProcessorBuffer *, GUID *, struct IInputTarget **))v20[0])(
                  v20[0],
                  &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
                  &v25);
          if ( v11 < 0 )
            goto LABEL_27;
          v12 = v21;
        }
        v23 = v12;
        v24 = v22;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        v11 = ContextualProcessorBuffer::AddProcessor(v8, *v9, &v23);
        if ( v11 < 0 )
          goto LABEL_27;
        if ( (_DWORD)v21 == 2 )
          break;
      }
      v14 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( ++v9 == v10 )
        goto LABEL_25;
    }
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_25:
    if ( !v25 )
      goto LABEL_31;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 8LL))(v25);
    *a5 = v25;
    v11 = 0;
  }
LABEL_32:
  if ( v8 )
    (*(void (__fastcall **)(struct ContextualProcessorBuffer *))(*(_QWORD *)v8 + 16LL))(v8);
  v18 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v11;
}
