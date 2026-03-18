/*
 * XREFs of ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0037988
 * Callers:
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0036214 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C00386B4 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CTokenQueue::ReleaseTokensToFrame(CTokenQueue *this, struct DirectComposition::CCompositionFrame *a2)
{
  bool v2; // si
  CTokenQueue **v5; // rax
  CTokenQueue ***v6; // rcx
  CTokenQueue **v7; // rdi
  CTokenQueue **v8; // rax
  int v9; // ecx
  CTokenQueue *v10; // rdi
  struct DirectComposition::CCompositionFrame *v12; // rdi
  struct DirectComposition::CCompositionFrame **v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(CTokenQueue **)this == this )
  {
    ++*((_DWORD *)this + 6);
  }
  else
  {
    v5 = (CTokenQueue **)*((_QWORD *)this + 1);
    if ( *v5 != this || (v6 = (CTokenQueue ***)v5[1], *v6 != v5) )
      __fastfail(3u);
    while ( 1 )
    {
      *((_QWORD *)this + 1) = v6;
      *v6 = (CTokenQueue **)this;
      if ( v5 == (CTokenQueue **)this )
        break;
      v7 = v5 - 1;
      if ( *((_QWORD *)this + 2) )
      {
        CompositionSurfaceObject::SetSyncRefreshCount(v7[4], 0);
        if ( *((CTokenQueue ***)this + 2) == v7 )
          *((_QWORD *)this + 2) = 0LL;
      }
      if ( (*((int (__fastcall **)(CTokenQueue **, struct DirectComposition::CCompositionFrame *, char *))*v7 + 4))(
             v7,
             a2,
             &v14) < 0 )
      {
        (*((void (__fastcall **)(CTokenQueue **))*v7 + 7))(v7);
        (*(void (__fastcall **)(CTokenQueue **, __int64))*v7)(v7, 1LL);
      }
      else
      {
        if ( !v14 )
        {
          v8 = (CTokenQueue **)*((_QWORD *)this + 1);
          v9 = *((_DWORD *)v7 + 6);
          v10 = (CTokenQueue *)(v7 + 1);
          if ( *v8 != this )
            __fastfail(3u);
          *(_QWORD *)v10 = this;
          *((_QWORD *)v10 + 1) = v8;
          *v8 = v10;
          v2 = v9 == 2;
          *((_QWORD *)this + 1) = v10;
          return v2;
        }
        v12 = (struct DirectComposition::CCompositionFrame *)(v7 + 1);
        v13 = (struct DirectComposition::CCompositionFrame **)*((_QWORD *)a2 + 19);
        if ( *v13 != (struct DirectComposition::CCompositionFrame *)((char *)a2 + 144) )
          __fastfail(3u);
        *(_QWORD *)v12 = (char *)a2 + 144;
        *((_QWORD *)v12 + 1) = v13;
        *v13 = v12;
        *((_QWORD *)a2 + 19) = v12;
      }
      v5 = (CTokenQueue **)*((_QWORD *)this + 1);
      if ( *v5 == this )
      {
        v6 = (CTokenQueue ***)v5[1];
        if ( *v6 == v5 )
          continue;
      }
      __fastfail(3u);
    }
  }
  return v2;
}
