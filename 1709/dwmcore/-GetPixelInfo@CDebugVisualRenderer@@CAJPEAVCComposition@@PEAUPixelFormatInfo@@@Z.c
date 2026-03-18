/*
 * XREFs of ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x18013A2BC
 * Callers:
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18013A398 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800823B4 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDebugVisualRenderer::GetPixelInfo(struct CComposition *a1, struct PixelFormatInfo *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v6; // rcx
  signed int PixelFormatColorSpace; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 9);
  v3 = 0;
  v4 = 0LL;
  if ( !*(_DWORD *)(v2 + 80) )
    goto LABEL_4;
  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * v4);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 272LL))(v6) )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *(_DWORD *)(v2 + 80) )
      goto LABEL_4;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * v4);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 24LL))(v9, v11);
    *(_QWORD *)a2 = *(_QWORD *)v10;
    *((_DWORD *)a2 + 2) = *(_DWORD *)(v10 + 8);
  }
  else
  {
LABEL_4:
    *((_DWORD *)a2 + 1) = 1;
    *(_DWORD *)a2 = 87;
    PixelFormatColorSpace = GetPixelFormatColorSpace(87, (enum DXGI_COLOR_SPACE_TYPE *)a2 + 2);
    v3 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PixelFormatColorSpace, 0x51u);
  }
  return v3;
}
