/*
 * XREFs of ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x1801492D4
 * Callers:
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C69E0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDebugVisualRenderer::GetPixelInfo(struct CComposition *a1, struct PixelFormatInfo *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v8; // ebx
  __int64 v10; // rcx

  v2 = *((_QWORD *)a1 + 4);
  v3 = 0LL;
  if ( !*(_DWORD *)(v2 + 80) )
    goto LABEL_4;
  while ( 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * v3);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 264LL))(v5) )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 80) )
      goto LABEL_4;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * v3);
  if ( v10 )
    (*(void (__fastcall **)(__int64, struct PixelFormatInfo *))(*(_QWORD *)v10 + 24LL))(v10, a2);
  else
LABEL_4:
    *(_DWORD *)a2 = 87;
  *((_DWORD *)a2 + 1) = (unsigned int)HasAlphaChannel(*(_DWORD *)a2) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v6, (enum DXGI_COLOR_SPACE_TYPE *)a2 + 2);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0x4Fu);
  return v8;
}
