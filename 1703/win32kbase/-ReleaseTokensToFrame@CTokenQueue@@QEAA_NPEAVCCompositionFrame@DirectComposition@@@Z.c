/*
 * XREFs of ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C00292C4
 * Callers:
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0029E48 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CTokenQueue::ReleaseTokensToFrame(CTokenQueue *this, struct DirectComposition::CCompositionFrame *a2)
{
  bool v2; // si
  CTokenQueue **v6; // rdi
  CTokenQueue **v7; // rax
  CTokenQueue ***v8; // rcx
  struct DirectComposition::CCompositionFrame *v9; // rdi
  struct DirectComposition::CCompositionFrame **v10; // rcx
  CTokenQueue **v11; // rcx
  CTokenQueue *v12; // rax
  int v13; // edx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(CTokenQueue **)this == this )
  {
    ++*((_DWORD *)this + 4);
  }
  else
  {
    v7 = (CTokenQueue **)*((_QWORD *)this + 1);
    v8 = (CTokenQueue ***)v7[1];
    if ( *v7 != this || *v8 != v7 )
      __fastfail(3u);
    while ( 1 )
    {
      *((_QWORD *)this + 1) = v8;
      *v8 = (CTokenQueue **)this;
      if ( v7 == (CTokenQueue **)this )
        break;
      v6 = v7 - 1;
      if ( (*((int (__fastcall **)(CTokenQueue **, struct DirectComposition::CCompositionFrame *, char *))*(v7 - 1) + 4))(
             v7 - 1,
             a2,
             &v14) < 0 )
      {
        (*((void (__fastcall **)(CTokenQueue **))*v6 + 7))(v6);
        (*(void (__fastcall **)(CTokenQueue **, __int64))*v6)(v6, 1LL);
      }
      else
      {
        if ( !v14 )
        {
          v11 = (CTokenQueue **)*((_QWORD *)this + 1);
          v12 = (CTokenQueue *)(v6 + 1);
          v13 = *((_DWORD *)v6 + 6);
          if ( *v11 != this )
            __fastfail(3u);
          *(_QWORD *)v12 = this;
          v6[2] = (CTokenQueue *)v11;
          *v11 = v12;
          v2 = v13 == 2;
          *((_QWORD *)this + 1) = v12;
          return v2;
        }
        v9 = (struct DirectComposition::CCompositionFrame *)(v6 + 1);
        v10 = (struct DirectComposition::CCompositionFrame **)*((_QWORD *)a2 + 19);
        if ( *v10 != (struct DirectComposition::CCompositionFrame *)((char *)a2 + 144) )
          __fastfail(3u);
        *(_QWORD *)v9 = (char *)a2 + 144;
        *((_QWORD *)v9 + 1) = v10;
        *v10 = v9;
        *((_QWORD *)a2 + 19) = v9;
      }
      v7 = (CTokenQueue **)*((_QWORD *)this + 1);
      v8 = (CTokenQueue ***)v7[1];
      if ( *v7 != this || *v8 != v7 )
        __fastfail(3u);
    }
  }
  return v2;
}
