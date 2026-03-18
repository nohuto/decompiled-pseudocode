/*
 * XREFs of ?Render@CDebugVisualRenderer@@SAXPEAVCComposition@@@Z @ 0x180149388
 * Callers:
 *     ?Compose@CComposition@@QEAAJPEA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180131B7C (-Compose@CComposition@@QEAAJPEA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 */

void __fastcall CDebugVisualRenderer::Render(struct CComposition *a1, struct CVisual *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( CDebugVisualRenderer::s_fEnableDebug )
  {
    if ( !CDebugVisualRenderer::s_pVisual )
    {
      v3 = *((_QWORD *)a1 + 4);
      v4 = 0LL;
      v5 = 0LL;
      if ( *(_DWORD *)(v3 + 80) )
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8 * v5);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6) )
            break;
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *(_DWORD *)(v3 + 80) )
            goto LABEL_8;
        }
        v4 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8 * v5);
      }
LABEL_8:
      v7 = v4 - 32;
      if ( !v4 )
        v7 = 80LL;
      CDebugVisualRenderer::s_pVisual = *(CVisual **)(*(_QWORD *)v7 + 24LL);
    }
    CDebugVisualRenderer::RenderVisual(a1, a2);
  }
}
