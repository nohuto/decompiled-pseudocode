/*
 * XREFs of ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C02226D0
 * Callers:
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00BD6A0 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(DMMVIDPN *this, int a2)
{
  char *v2; // r9
  char *v3; // rcx
  char *v4; // r8
  char *v5; // rax

  v2 = (char *)this + 120;
  v3 = (char *)*((_QWORD *)this + 15);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( 1 )
  {
    if ( !v4 )
      return 0;
    if ( *(_DWORD *)(*((_QWORD *)v4 + 11) + 24LL) == a2
      && (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 12) + 96LL) + 84LL) - 15) <= 1 )
    {
      break;
    }
    v5 = (char *)*((_QWORD *)v4 + 1);
    v4 = v5 - 8;
    if ( v5 == v2 )
      v4 = 0LL;
  }
  return 1;
}
