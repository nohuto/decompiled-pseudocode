/*
 * XREFs of ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0035F78
 * Callers:
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0036214 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ReleaseCompositionHandleTokensToFrame(
        CTokenManager *this,
        struct DirectComposition::CCompositionFrame *a2)
{
  CTokenManager ***v3; // rbx
  CTokenManager **v4; // rax
  CTokenManager *v5; // rcx
  CTokenManager ****v6; // rax
  CTokenManager **v7; // rdi
  __int64 v8; // rsi
  struct DirectComposition::CCompositionFrame *v9; // rax
  struct DirectComposition::CCompositionFrame **v10; // rdx
  struct DirectComposition::CCompositionFrame **v11; // rcx
  CTokenManager ***v12; // rcx
  CTokenManager ****v13; // rcx
  CTokenManager ****v14; // [rsp+20h] [rbp-10h] BYREF
  struct DirectComposition::CCompositionFrame **v15; // [rsp+28h] [rbp-8h]
  char v16; // [rsp+50h] [rbp+20h] BYREF

  v15 = (struct DirectComposition::CCompositionFrame **)&v14;
  v3 = (CTokenManager ***)((char *)this + 208);
  v14 = (CTokenManager ****)&v14;
  v4 = (CTokenManager **)*((_QWORD *)this + 26);
  if ( v4[1] != (CTokenManager *)((char *)this + 208) || (v5 = *v4, *((CTokenManager ***)*v4 + 1) != v4) )
    __fastfail(3u);
  while ( 1 )
  {
    *v3 = (CTokenManager **)v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 == (CTokenManager **)v3 )
      break;
    v7 = v4 - 5;
    v8 = (__int64)(v4 - 1);
    if ( (*(int (__fastcall **)(__int64, struct DirectComposition::CCompositionFrame *, char *))(*(_QWORD *)v8 + 32LL))(
           v8,
           a2,
           &v16) < 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
      ObfDereferenceObject(v7);
    }
    else
    {
      v9 = (struct DirectComposition::CCompositionFrame *)(v7 + 5);
      if ( v16 )
      {
        v10 = (struct DirectComposition::CCompositionFrame **)*((_QWORD *)a2 + 21);
        if ( *v10 != (struct DirectComposition::CCompositionFrame *)((char *)a2 + 160) )
          __fastfail(3u);
        *(_QWORD *)v9 = (char *)a2 + 160;
        v7[6] = (CTokenManager *)v10;
        *v10 = v9;
        *((_QWORD *)a2 + 21) = v9;
      }
      else
      {
        v11 = v15;
        if ( *v15 != (struct DirectComposition::CCompositionFrame *)&v14 )
          __fastfail(3u);
        v7[6] = (CTokenManager *)v15;
        *(_QWORD *)v9 = &v14;
        *v11 = v9;
        v15 = v7 + 5;
      }
    }
    v4 = *v3;
    if ( (*v3)[1] == (CTokenManager *)v3 )
    {
      v5 = *v4;
      if ( *((CTokenManager ***)*v4 + 1) == v4 )
        continue;
    }
    __fastfail(3u);
  }
  v6 = v14;
  if ( v14 != (CTokenManager ****)&v14 )
  {
    v12 = *v14;
    if ( v14[1] != (CTokenManager ***)&v14 || v12[1] != (CTokenManager **)v14 )
      __fastfail(3u);
    while ( 1 )
    {
      v14 = (CTokenManager ****)v12;
      v12[1] = (CTokenManager **)&v14;
      if ( v6 == (CTokenManager ****)&v14 )
        break;
      v13 = (CTokenManager ****)v3[1];
      if ( *v13 != v3 )
        __fastfail(3u);
      v6[1] = (CTokenManager ***)v13;
      *v6 = v3;
      *v13 = (CTokenManager ***)v6;
      v3[1] = (CTokenManager **)v6;
      v6 = v14;
      if ( v14[1] == (CTokenManager ***)&v14 )
      {
        v12 = *v14;
        if ( (*v14)[1] == (CTokenManager **)v14 )
          continue;
      }
      __fastfail(3u);
    }
  }
}
