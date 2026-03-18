/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801BA9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // rsi
  char v5; // di
  __int64 v6; // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 16LL) + 8LL) )
  {
    v5 = 1;
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 40LL)
                     + 8LL * *(unsigned int *)(**(_QWORD **)(*((_QWORD *)this + 18) + 16LL) + 144 * v2 + 40));
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v8);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 72LL))(v6, &v8) >= 0
        && a2 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8) )
      {
        break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 16LL) + 8LL) )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v8);
  return v5;
}
