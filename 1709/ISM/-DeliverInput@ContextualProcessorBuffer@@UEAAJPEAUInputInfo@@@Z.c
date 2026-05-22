/*
 * XREFs of ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x180084F80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAX$$QEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x180085980 (--$emplace_back@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@ContextualProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContextualProcessorBuffer::DeliverInput(ContextualProcessorBuffer *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // r12
  ContextualProcessorBuffer *v3; // r14
  int v4; // r15d
  __int64 v5; // rbx
  char v6; // r13
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r9d
  char *v14; // rdi
  __int64 j; // rsi
  __int64 *v16; // r12
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // r13
  char *v23; // rdi
  __int64 v24; // rdx
  char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  char *v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // r13
  __int64 *k; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  _OWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // r9d
  __int64 v45; // rsi
  __int64 i; // rdi
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v51; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v52; // [rsp+38h] [rbp-C8h]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  _BYTE v54[2848]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+B70h] [rbp+A70h]
  char v56; // [rsp+BD0h] [rbp+AD0h]
  __int64 v58; // [rsp+BE0h] [rbp+AE0h] BYREF
  __int64 v59; // [rsp+BE8h] [rbp+AE8h]

  v53 = -2LL;
  v2 = a2;
  v3 = this;
  v4 = 0;
  v5 = 0LL;
  v59 = 0LL;
  v56 = 0;
  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)this + 3);
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v7 == v8 )
  {
LABEL_92:
    if ( *((_QWORD *)v3 + 10) )
    {
      v5 = *((_QWORD *)v3 + 10);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v59 = v5;
    }
LABEL_94:
    v36 = *((_QWORD *)v3 + 7);
    if ( *((_QWORD *)v3 + 6) != v36 )
    {
      v37 = *((_QWORD *)v3 + 6);
      v38 = *((_QWORD *)v3 + 7);
      if ( v37 != v36 )
      {
        while ( 1 )
        {
          if ( !*(_QWORD *)(v37 + 2848) )
          {
            if ( v5 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
              v39 = *(_QWORD *)(v37 + 2848);
              *(_QWORD *)(v37 + 2848) = v5;
              if ( v39 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            }
          }
          v40 = *(_QWORD *)(v37 + 2848);
          v41 = *((_QWORD *)v3 + 11);
          v42 = v41
              ? (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v41 + 24LL))(v41, v37, v40)
              : (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v40 + 24LL))(*(_QWORD *)(v37 + 2848), v37);
          LOBYTE(v4) = v42;
          if ( v42 < 0 )
            break;
          v37 += 2856LL;
          if ( v37 == v38 )
            goto LABEL_108;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v44 = 289;
LABEL_120:
          McTemplateU0qqq(v43, &MinInput_Warning_CheckResult, 0, v44, v4);
          goto LABEL_121;
        }
        goto LABEL_121;
      }
LABEL_108:
      v45 = *((_QWORD *)v3 + 7);
      for ( i = *((_QWORD *)v3 + 6); i != v45; i += 2856LL )
      {
        v47 = *(_QWORD *)(i + 2848);
        if ( v47 )
        {
          *(_QWORD *)(i + 2848) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
      *((_QWORD *)v3 + 7) = *((_QWORD *)v3 + 6);
    }
    v48 = *((_QWORD *)v3 + 11);
    if ( v48 )
      v49 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *, __int64))(*(_QWORD *)v48 + 24LL))(v48, v2, v5);
    else
      v49 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v5 + 24LL))(v5, v2);
    v4 = v49;
    if ( v49 >= 0 )
      goto LABEL_124;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v44 = 297;
      goto LABEL_120;
    }
LABEL_121:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  do
  {
    if ( (unsigned int)(*((_DWORD *)v7 + 2) - 1) > 2 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 235, 255);
      goto LABEL_121;
    }
    v52 = 0LL;
    v51 = 0LL;
    if ( v5 )
      goto LABEL_18;
    v9 = v7[2];
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(v7[2]);
      v10 = v52;
      *(_QWORD *)&v52 = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    *(_DWORD *)(*((_QWORD *)v3 + 9) + 16LL) = *((_DWORD *)v7 + 3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, _QWORD, __int64 *))(*(_QWORD *)*v7 + 32LL))(
           *v7,
           v2,
           *((_QWORD *)v3 + 9),
           &v51);
    if ( v4 < 0 )
    {
      LODWORD(v51) = 0;
      v4 = 0;
LABEL_18:
      if ( *((_DWORD *)v7 + 2) != 2 )
      {
        *((_DWORD *)v7 + 2) = 0;
        v6 = 1;
        goto LABEL_20;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v13 = 218;
        goto LABEL_33;
      }
      goto LABEL_34;
    }
    v11 = v51;
    *((_DWORD *)v7 + 3) = v51;
    if ( v11 != 2 )
    {
      if ( v11 != 3 )
      {
        if ( v11 == 1 )
        {
          if ( (unsigned int)(*((_DWORD *)v7 + 2) - 2) <= 1 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_34;
            v13 = 189;
            goto LABEL_33;
          }
          *((_DWORD *)v7 + 2) = 1;
          v56 = 1;
        }
        else
        {
          if ( v11 != 4 )
          {
            if ( v11 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v13 = 230;
                goto LABEL_33;
              }
              goto LABEL_34;
            }
            goto LABEL_18;
          }
          if ( *((_DWORD *)v7 + 2) == 2 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v13 = 204;
LABEL_33:
              McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v13, 255);
            }
LABEL_34:
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          *((_DWORD *)v7 + 2) = 3;
        }
LABEL_20:
        v12 = *((_QWORD *)&v52 + 1);
        goto LABEL_25;
      }
      goto LABEL_23;
    }
    v12 = *((_QWORD *)&v52 + 1);
    if ( *((_QWORD *)&v52 + 1) )
    {
      v5 = *((_QWORD *)&v52 + 1);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v52 + 1) + 8LL))(*((_QWORD *)&v52 + 1));
      v59 = v5;
LABEL_23:
      v12 = *((_QWORD *)&v52 + 1);
    }
    *((_DWORD *)v7 + 2) = 2;
LABEL_25:
    if ( v12 )
    {
      *((_QWORD *)&v52 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    this = (ContextualProcessorBuffer *)v52;
    if ( (_QWORD)v52 )
    {
      *(_QWORD *)&v52 = 0LL;
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 16LL))(this);
    }
    v7 += 3;
  }
  while ( v7 != v8 );
  if ( v6 )
  {
    LOBYTE(v58) = 0;
    v14 = (char *)*((_QWORD *)v3 + 4);
    for ( j = *((_QWORD *)v3 + 3); (char *)j != v14 && *(_DWORD *)(j + 8); j += 24LL )
      ;
    if ( (char *)j != v14 )
    {
      v16 = (__int64 *)(j + 24);
      if ( (char *)(j + 24) != v14 )
      {
        v17 = (__int64 *)(j + 40);
        do
        {
          if ( *((_DWORD *)v17 - 2) )
          {
            v18 = 0LL;
            if ( &v58 != v16 )
            {
              v18 = *v16;
              *v16 = 0LL;
            }
            v19 = *(_QWORD *)j;
            *(_QWORD *)j = v18;
            if ( v19 )
            {
              v58 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            }
            *(_DWORD *)(j + 8) = *((_DWORD *)v17 - 2);
            *(_DWORD *)(j + 12) = *((_DWORD *)v17 - 1);
            v20 = 0LL;
            if ( &v58 != v17 )
            {
              v20 = *v17;
              *v17 = 0LL;
            }
            v21 = *(_QWORD *)(j + 16);
            *(_QWORD *)(j + 16) = v20;
            if ( v21 )
            {
              v58 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            }
            j += 24LL;
          }
          v16 += 3;
          v17 += 3;
        }
        while ( v16 != (__int64 *)v14 );
      }
      v2 = a2;
      if ( (char *)j != v14 )
      {
        v22 = (char *)*((_QWORD *)v3 + 4);
        LOBYTE(v58) = 0;
        if ( v14 != v22 )
        {
          v23 = &v14[-j];
          do
          {
            v24 = 0LL;
            v25 = &v23[j];
            if ( &v58 != (__int64 *)&v23[j] )
            {
              v24 = *(_QWORD *)v25;
              *(_QWORD *)v25 = 0LL;
            }
            v26 = *(_QWORD *)j;
            *(_QWORD *)j = v24;
            if ( v26 )
            {
              v58 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            }
            *(_DWORD *)(j + 8) = *(_DWORD *)&v23[j + 8];
            *(_DWORD *)(j + 12) = *(_DWORD *)&v23[j + 12];
            v27 = 0LL;
            v28 = &v23[j + 16];
            if ( &v58 != (__int64 *)v28 )
            {
              v27 = *(_QWORD *)v28;
              *(_QWORD *)v28 = 0LL;
            }
            v29 = *(_QWORD *)(j + 16);
            *(_QWORD *)(j + 16) = v27;
            if ( v29 )
            {
              v58 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            }
            j += 24LL;
          }
          while ( &v23[j] != v22 );
        }
        v30 = (__int64 *)*((_QWORD *)v3 + 4);
        for ( k = (__int64 *)j; k != v30; k += 3 )
        {
          v32 = k[2];
          if ( v32 )
          {
            k[2] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v33 = *k;
          if ( *k )
          {
            *k = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
        *((_QWORD *)v3 + 4) = j;
      }
    }
  }
  if ( !v56 )
  {
    if ( v5 )
      goto LABEL_94;
    goto LABEL_92;
  }
  v34 = v54;
  v35 = 22LL;
  do
  {
    *v34 = *(_OWORD *)v2;
    v34[1] = *((_OWORD *)v2 + 1);
    v34[2] = *((_OWORD *)v2 + 2);
    v34[3] = *((_OWORD *)v2 + 3);
    v34[4] = *((_OWORD *)v2 + 4);
    v34[5] = *((_OWORD *)v2 + 5);
    v34[6] = *((_OWORD *)v2 + 6);
    v34 += 8;
    *(v34 - 1) = *((_OWORD *)v2 + 7);
    v2 = (struct InputInfo *)((char *)v2 + 128);
    --v35;
  }
  while ( v35 );
  *v34 = *(_OWORD *)v2;
  v34[1] = *((_OWORD *)v2 + 1);
  v55 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, 128LL);
  std::vector<ContextualProcessorBuffer::InputSample>::emplace_back<ContextualProcessorBuffer::InputSample>(
    (char *)v3 + 48,
    v54);
  if ( v55 )
    (*(void (**)(void))(*(_QWORD *)v55 + 16LL))();
LABEL_124:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v4;
}
