/*
 * XREFs of ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800AFE60
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAAEAUInputSample@ContextualProcessorBuffer@@$$QEAU23@@Z @ 0x1800B0BA0 (--$emplace_back@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@ContextualProcess.c)
 *     ??4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B151C (--4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContextualProcessorBuffer::DeliverInput(
        ContextualProcessorBuffer *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // esi
  __int64 v7; // rbx
  char v8; // r15
  _QWORD *v9; // rdi
  _QWORD *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // r15
  __int64 i; // rdi
  __int64 j; // r12
  __int64 *v19; // r12
  __int64 *k; // r15
  __int64 v21; // rcx
  __int64 v22; // rcx
  size_t v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  _QWORD *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rcx
  void *Block; // [rsp+38h] [rbp-18h] BYREF
  __int128 v35; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v37; // [rsp+90h] [rbp+40h]
  char v38; // [rsp+A0h] [rbp+50h]

  v6 = 0;
  v7 = 0LL;
  v38 = 0;
  v8 = 0;
  v37 = 0;
  v9 = (_QWORD *)*((_QWORD *)this + 3);
  v10 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v9 == v10 )
    goto LABEL_54;
  do
  {
    if ( (unsigned int)(*((_DWORD *)v9 + 2) - 1) > 2 )
    {
      v6 = -2147418113;
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      goto LABEL_92;
    }
    v35 = 0LL;
    Block = 0LL;
    if ( v7 )
      goto LABEL_17;
    v11 = v9[2];
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(v9[2]);
      v12 = v35;
      *(_QWORD *)&v35 = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    *(_DWORD *)(*((_QWORD *)this + 9) + 32LL) = *((_DWORD *)v9 + 3);
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, _QWORD, void **))(*(_QWORD *)*v9 + 40LL))(
           *v9,
           a2,
           *((_QWORD *)this + 9),
           &Block);
    if ( v6 < 0 )
    {
      LODWORD(Block) = 0;
      v6 = 0;
LABEL_17:
      if ( *((_DWORD *)v9 + 2) == 2 )
        goto LABEL_59;
      *((_DWORD *)v9 + 2) = 0;
      v8 = 1;
      goto LABEL_25;
    }
    v13 = (int)Block;
    *((_DWORD *)v9 + 3) = (_DWORD)Block;
    if ( (unsigned int)(v13 - 2) > 1 )
    {
      if ( v13 == 1 )
      {
        if ( (unsigned int)(*((_DWORD *)v9 + 2) - 2) <= 1 )
          goto LABEL_59;
        *((_DWORD *)v9 + 2) = 1;
        v38 = 1;
        goto LABEL_25;
      }
      if ( v13 == 4 )
      {
        if ( *((_DWORD *)v9 + 2) == 2 )
          goto LABEL_59;
        *((_DWORD *)v9 + 2) = 3;
        goto LABEL_25;
      }
      if ( v13 )
        goto LABEL_59;
      goto LABEL_17;
    }
    if ( *((_DWORD *)v9 + 2) == 3 )
    {
LABEL_59:
      v6 = -2147418113;
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      v24 = *((_QWORD *)&v35 + 1);
      if ( *((_QWORD *)&v35 + 1) )
      {
        *((_QWORD *)&v35 + 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = v35;
      if ( (_QWORD)v35 )
      {
        *(_QWORD *)&v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      goto LABEL_92;
    }
    if ( v13 == 3 )
    {
      v37 = 1;
    }
    else if ( *((_QWORD *)&v35 + 1) )
    {
      v7 = *((_QWORD *)&v35 + 1);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v35 + 1) + 8LL))(*((_QWORD *)&v35 + 1));
    }
    *((_DWORD *)v9 + 2) = 2;
LABEL_25:
    v14 = *((_QWORD *)&v35 + 1);
    if ( *((_QWORD *)&v35 + 1) )
    {
      *((_QWORD *)&v35 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v35;
    if ( (_QWORD)v35 )
    {
      *(_QWORD *)&v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v9 += 3;
  }
  while ( v9 != v10 );
  if ( v8 )
  {
    v16 = (__int64 *)*((_QWORD *)this + 4);
    for ( i = *((_QWORD *)this + 3); (__int64 *)i != v16 && *(_DWORD *)(i + 8); i += 24LL )
      ;
    if ( (__int64 *)i != v16 )
    {
      for ( j = i + 24; (__int64 *)j != v16; j += 24LL )
      {
        if ( *(_DWORD *)(j + 8) )
        {
          ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(i, j);
          i += 24LL;
        }
      }
      if ( (__int64 *)i != v16 )
      {
        v19 = (__int64 *)*((_QWORD *)this + 4);
        if ( v16 != v19 )
        {
          do
          {
            ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(i, v16);
            i += 24LL;
            v16 += 3;
          }
          while ( v16 != v19 );
          v19 = (__int64 *)*((_QWORD *)this + 4);
        }
        for ( k = (__int64 *)i; k != v19; k += 3 )
        {
          v21 = k[2];
          if ( v21 )
          {
            k[2] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          v22 = *k;
          if ( *k )
          {
            *k = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
        *((_QWORD *)this + 4) = i;
      }
    }
  }
  if ( v7 || v37 )
    goto LABEL_56;
LABEL_54:
  if ( *((_QWORD *)this + 10) )
  {
    v7 = *((_QWORD *)this + 10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
LABEL_56:
  if ( v38 )
  {
    Block = 0LL;
    v23 = *((int *)a2 + 6);
    if ( v23 < 0x20 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1CE,
        (__int64)"internal\\onecoreuapwindows\\inc\\moderncore\\rawinput\\rawinput.h",
        a4);
      JUMPOUT(0x1800B031DLL);
    }
    Block = operator new[](*((int *)a2 + 6));
    memcpy_0(Block, a2, v23);
    *(_QWORD *)&v35 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    std::vector<ContextualProcessorBuffer::InputSample>::emplace_back<ContextualProcessorBuffer::InputSample>(
      (char *)this + 48,
      &Block);
    if ( (_QWORD)v35 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 16LL))(v35);
    if ( Block )
      operator delete(Block);
  }
  else
  {
    v26 = (_QWORD *)*((_QWORD *)this + 6);
    v27 = (_QWORD *)*((_QWORD *)this + 7);
    if ( v26 != v27 )
    {
      do
      {
        v28 = *((_QWORD *)this + 11);
        if ( v28 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 24LL))(v28, *v26, v7);
        }
        else if ( v7 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, *v26);
        }
        v26 += 2;
      }
      while ( v26 != v27 );
      v29 = *((_QWORD *)this + 7);
      v30 = *((_QWORD *)this + 6);
      if ( v30 != v29 )
      {
        do
        {
          v31 = *(_QWORD *)(v30 + 8);
          if ( v31 )
          {
            *(_QWORD *)(v30 + 8) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          if ( *(_QWORD *)v30 )
            operator delete(*(void **)v30);
          v30 += 16LL;
        }
        while ( v30 != v29 );
        v30 = *((_QWORD *)this + 6);
      }
      *((_QWORD *)this + 7) = v30;
    }
    v32 = *((_QWORD *)this + 11);
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64, struct InputInfo *, __int64))(*(_QWORD *)v32 + 24LL))(v32, a2, v7);
    }
    else if ( v7 )
    {
      (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v7 + 24LL))(v7, a2);
    }
  }
LABEL_92:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
