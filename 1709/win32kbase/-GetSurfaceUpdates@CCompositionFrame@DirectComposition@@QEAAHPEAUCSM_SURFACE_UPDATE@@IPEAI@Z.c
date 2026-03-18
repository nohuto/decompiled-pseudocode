/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0035298
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00368E0 (NtDCompositionGetFrameSurfaceUpdates.c)
 * Callees:
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C003876C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C00802D4 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C00891F0 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionFrame::GetSurfaceUpdates(
        DirectComposition::CCompositionFrame *this,
        struct CSM_SURFACE_UPDATE *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v4; // r14d
  _QWORD *v9; // rax
  unsigned int v10; // edi
  bool v11; // zf
  _QWORD *v12; // rax
  __int64 result; // rax
  CompositionSurfaceObject *v14; // rdi
  const struct CFlipToken *v15; // rax
  DirectComposition::CCompositionFrame *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  __int64 v22; // rcx
  DirectComposition::CCompositionFrame *v23; // rcx

  v4 = 0;
  if ( *((_DWORD *)this + 34) )
    goto LABEL_6;
  if ( !*((_QWORD *)this + 14) )
  {
    v9 = (_QWORD *)((char *)this + 144);
    if ( (_QWORD *)*v9 != v9 )
    {
      v17 = *v9 - 8LL;
      *((_DWORD *)this + 32) = 1;
      *((_QWORD *)this + 14) = v17;
    }
  }
  v10 = *((_DWORD *)this + 32);
  if ( !v10 )
    goto LABEL_6;
  do
  {
    if ( !a3 )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 72LL))(*((_QWORD *)this + 14)) )
    {
      v14 = *(CompositionSurfaceObject **)(*((_QWORD *)this + 14) + 32LL);
      if ( CompositionSurfaceObject::GetSurfaceUpdate(v14, *((_QWORD *)this + 9), a2) >= 0 )
      {
        v15 = CFlipToken::FromToken(*((const struct CToken **)this + 14));
        if ( v15 )
          EtwTraceCompositionSurfaceObjectUpdateEvent(v14, *((unsigned int *)v15 + 23));
        a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
        --a3;
        ++v4;
      }
    }
    v16 = *(DirectComposition::CCompositionFrame **)(*((_QWORD *)this + 14) + 8LL);
    if ( v16 == (DirectComposition::CCompositionFrame *)((char *)this + 144) )
    {
      *((_DWORD *)this + 32) = 0;
      *((_QWORD *)this + 14) = 0LL;
    }
    else
    {
      *((_QWORD *)this + 14) = (char *)v16 - 8;
    }
    v10 = *((_DWORD *)this + 32);
  }
  while ( v10 );
  if ( !v10 )
  {
LABEL_6:
    v11 = *((_QWORD *)this + 15) == 0LL;
    *((_DWORD *)this + 34) = 1;
    if ( v11 )
    {
      v12 = (_QWORD *)((char *)this + 160);
      if ( (_QWORD *)*v12 != v12 )
      {
        *((_QWORD *)this + 15) = *v12;
        *((_DWORD *)this + 33) = 1;
      }
    }
    v10 = *((_DWORD *)this + 33);
    if ( !v10 )
      goto LABEL_10;
    do
    {
      if ( !a3 )
        break;
      v18 = *((_QWORD *)this + 15);
      v19 = 0LL;
      v20 = *(_DWORD *)(v18 + 64);
      if ( *(_DWORD *)(v18 + 80) == v20 )
        *(_DWORD *)(v18 + 80) = 0;
      v21 = *(_DWORD *)(v18 + 80);
      if ( v21 < v20 )
        v19 = *(_QWORD *)(v18 + 56) + 32LL * v21;
      if ( v19 )
      {
        do
        {
          if ( !a3 )
            break;
          if ( CompositionSurfaceObject::GetSurfaceUpdate(
                 *(CompositionSurfaceObject **)(v19 + 8),
                 *((_QWORD *)this + 9),
                 a2) >= 0 )
          {
            a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
            --a3;
            ++v4;
          }
          ++*(_DWORD *)(v18 + 80);
          v19 = 0LL;
          v22 = *(unsigned int *)(v18 + 80);
          if ( (unsigned int)v22 < *(_DWORD *)(v18 + 64) )
            v19 = *(_QWORD *)(v18 + 56) + 32 * v22;
        }
        while ( v19 );
        if ( v19 && !a3 )
          break;
      }
      v23 = (DirectComposition::CCompositionFrame *)**((_QWORD **)this + 15);
      if ( v23 == (DirectComposition::CCompositionFrame *)((char *)this + 160) )
      {
        *((_DWORD *)this + 33) = 0;
        *((_QWORD *)this + 15) = 0LL;
      }
      else
      {
        *((_QWORD *)this + 15) = v23;
      }
      v10 = *((_DWORD *)this + 33);
    }
    while ( v10 );
    if ( !v10 )
LABEL_10:
      *((_DWORD *)this + 34) = 0;
  }
  result = v10;
  *a4 = v4;
  return result;
}
