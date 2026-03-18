/*
 * XREFs of ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800BA02C
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800187B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B340 (-QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceManager::ProcessRestoreContent(
        CCompositionSurfaceManager *this,
        struct IRenderTargetDisplay *a2)
{
  DWORD v2; // ebx
  struct _RTL_GENERIC_TABLE *v3; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rax
  CBitmapRealization *v7; // rcx
  __int64 (__fastcall *v8)(CBitmapRealization *, const struct _GUID *, void **); // rax
  int v9; // eax
  signed int v11; // eax
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    v6 = v5[1];
    v2 = 0;
    v12 = 0LL;
    v7 = *(CBitmapRealization **)(v6 + 120);
    if ( v7 )
    {
      v8 = **(__int64 (__fastcall ***)(CBitmapRealization *, const struct _GUID *, void **))v7;
      if ( v8 == CBitmapRealization::QueryInterface )
        v9 = CBitmapRealization::QueryInterface(v7, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v12);
      else
        v9 = v8(v7, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v12);
      if ( v9 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(void *, struct IRenderTargetDisplay *))(*(_QWORD *)v12 + 56LL))(v12, a2);
        v2 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xCFu);
      }
      if ( v12 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0xBDu);
      return v2;
    }
  }
  return v2;
}
