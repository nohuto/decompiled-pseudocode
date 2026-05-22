/*
 * XREFs of ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180084964
 * Callers:
 *     ?DoConvergedInputTargeting@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001B1F0 (-DoConvergedInputTargeting@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffe.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAXAEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@Z @ 0x180085AA4 (--$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UContextual.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContextualProcessorManager::OnHitTest(
        ContextualProcessorManager *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  __int64 *v6; // r12
  int v7; // edi
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  _QWORD *v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  char v17; // al
  struct IInputTarget *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r9d
  __int64 v26; // rcx
  unsigned int v27; // ebx
  struct IInputTarget *v28; // rcx
  __int64 v30; // [rsp+48h] [rbp-70h] BYREF
  __int64 v31; // [rsp+50h] [rbp-68h]
  unsigned int v32; // [rsp+58h] [rbp-60h]
  __int64 v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+68h] [rbp-50h] BYREF
  __int64 v35; // [rsp+70h] [rbp-48h]
  __int64 v36; // [rsp+78h] [rbp-40h]
  struct IInputTarget *v37; // [rsp+C0h] [rbp+8h] BYREF
  struct InputInfo *v38; // [rsp+C8h] [rbp+10h]
  struct InputContext *v39; // [rsp+D0h] [rbp+18h]

  v39 = a3;
  v38 = a2;
  v6 = (__int64 *)a3;
  v7 = 0;
  v37 = 0LL;
  v8 = 0LL;
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  v10 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v9 == v10 )
    goto LABEL_55;
  while ( 1 )
  {
    v31 = 0LL;
    v30 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, __int64 *, __int64 *))(*(_QWORD *)*v9 + 24LL))(
            *v9,
            a2,
            v6,
            &v30);
    if ( v11 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v25 = 106;
LABEL_51:
        McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, v25, v11);
      }
LABEL_52:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v13 = v30;
    if ( (unsigned int)(v30 - 1) <= 2 )
      break;
LABEL_35:
    v24 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( ++v9 == v10 )
      goto LABEL_47;
    a2 = v38;
  }
  if ( !v8 )
  {
    v14 = malloc(0x60uLL);
    v16 = v14;
    if ( v14 )
      memset(v14, 0, 0x60uLL);
    if ( v16 )
    {
      v15 = *v6;
      v16[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v16 + 4) = 1;
      *v16 = &ContextualProcessorBuffer::`vftable'{for `IInputTarget'};
      v16[1] = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
      v16[3] = 0LL;
      v16[4] = 0LL;
      v16[5] = 0LL;
      v16[6] = 0LL;
      v16[7] = 0LL;
      v16[8] = 0LL;
      v16[9] = v6;
      v16[10] = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v16[11] = a4;
      if ( a4 )
        (*(void (__fastcall **)(struct IInputBuffer *))(*(_QWORD *)a4 + 8LL))(a4);
    }
    v17 = Microsoft_OneCore_MinInputEnableBits;
    if ( v16 )
    {
      v8 = v16;
    }
    else
    {
      v7 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 46, 14);
        v17 = Microsoft_OneCore_MinInputEnableBits;
LABEL_42:
        if ( (v17 & 2) != 0 )
          McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 121, v7);
        goto LABEL_52;
      }
    }
    if ( v7 < 0 )
      goto LABEL_42;
    v18 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IInputTarget **))*v8)(
            v8,
            &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
            &v37);
    if ( v11 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v25 = 123;
        goto LABEL_51;
      }
      goto LABEL_52;
    }
    v13 = v30;
  }
  v32 = v13;
  v19 = v31;
  v33 = v31;
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    v19 = v33;
  }
  v20 = *v9;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v19 = v33;
    v34 = v20;
  }
  v35 = v32;
  v7 = 0;
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v36 = v19;
  }
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::emplace_back<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
    v8 + 3,
    &v34);
  v21 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( (_DWORD)v30 != 2 )
  {
    v6 = (__int64 *)v39;
    goto LABEL_35;
  }
  v26 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
LABEL_47:
  if ( v37 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v37 + 8LL))(v37);
    *a5 = v37;
    v27 = 0;
    goto LABEL_56;
  }
LABEL_55:
  v27 = -2147467259;
LABEL_56:
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  v28 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return v27;
}
