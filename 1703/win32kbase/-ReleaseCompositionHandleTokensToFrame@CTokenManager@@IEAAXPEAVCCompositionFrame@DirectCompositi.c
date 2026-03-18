/*
 * XREFs of ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0029D88
 * Callers:
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0029E48 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ReleaseCompositionHandleTokensToFrame(
        CTokenManager *this,
        struct DirectComposition::CCompositionFrame *a2)
{
  char *v2; // rbx
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rdi
  __int64 v7; // rsi
  struct DirectComposition::CCompositionFrame *v8; // rax
  struct DirectComposition::CCompositionFrame **v9; // rdx
  struct DirectComposition::CCompositionFrame **v10; // rcx
  char *v11; // rax
  char *v12; // rcx
  char **v13; // rcx
  char *v14; // [rsp+20h] [rbp-10h] BYREF
  struct DirectComposition::CCompositionFrame **v15; // [rsp+28h] [rbp-8h]
  char v16; // [rsp+50h] [rbp+20h] BYREF

  v2 = (char *)this + 200;
  v15 = (struct DirectComposition::CCompositionFrame **)&v14;
  v14 = (char *)&v14;
  v4 = (char *)*((_QWORD *)this + 25);
  v5 = *(_QWORD *)v4;
  if ( *((char **)v4 + 1) != v2 || *(char **)(v5 + 8) != v4 )
    __fastfail(3u);
  while ( 1 )
  {
    *(_QWORD *)v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    if ( v4 == v2 )
      break;
    v6 = v4 - 40;
    v7 = (__int64)(v4 - 8);
    if ( (*(int (__fastcall **)(__int64, struct DirectComposition::CCompositionFrame *, char *))(*(_QWORD *)v7 + 32LL))(
           v7,
           a2,
           &v16) < 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
      ObfDereferenceObject(v6);
    }
    else
    {
      v8 = (struct DirectComposition::CCompositionFrame *)(v6 + 40);
      if ( v16 )
      {
        v9 = (struct DirectComposition::CCompositionFrame **)*((_QWORD *)a2 + 21);
        if ( *v9 != (struct DirectComposition::CCompositionFrame *)((char *)a2 + 160) )
          __fastfail(3u);
        *(_QWORD *)v8 = (char *)a2 + 160;
        *((_QWORD *)v6 + 6) = v9;
        *v9 = v8;
        *((_QWORD *)a2 + 21) = v8;
      }
      else
      {
        v10 = v15;
        if ( *v15 != (struct DirectComposition::CCompositionFrame *)&v14 )
          __fastfail(3u);
        *((_QWORD *)v6 + 6) = v15;
        *(_QWORD *)v8 = &v14;
        *v10 = v8;
        v15 = (struct DirectComposition::CCompositionFrame **)(v6 + 40);
      }
    }
    v4 = *(char **)v2;
    v5 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(char **)(v5 + 8) != v4 )
      __fastfail(3u);
  }
  v11 = v14;
  if ( v14 != (char *)&v14 )
  {
    v12 = *(char **)v14;
    if ( *((char ***)v14 + 1) != &v14 || *((char **)v12 + 1) != v14 )
      __fastfail(3u);
    while ( 1 )
    {
      v14 = v12;
      *((_QWORD *)v12 + 1) = &v14;
      if ( v11 == (char *)&v14 )
        break;
      v13 = (char **)*((_QWORD *)v2 + 1);
      if ( *v13 != v2 )
        __fastfail(3u);
      *(_QWORD *)v11 = v2;
      *((_QWORD *)v11 + 1) = v13;
      *v13 = v11;
      *((_QWORD *)v2 + 1) = v11;
      v11 = v14;
      v12 = *(char **)v14;
      if ( *((char ***)v14 + 1) != &v14 || *((char **)v12 + 1) != v14 )
        __fastfail(3u);
    }
  }
}
