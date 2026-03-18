/*
 * XREFs of ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C01DCEDC
 * Callers:
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0091900 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(DMMVIDPN *this, int a2)
{
  DMMVIDPN *v3; // r8
  _QWORD *v4; // r8
  DMMVIDPN *v5; // rcx

  v3 = (DMMVIDPN *)*((_QWORD *)this + 15);
  if ( v3 == (DMMVIDPN *)((char *)this + 120) )
    return 0;
  v4 = (_QWORD *)((char *)v3 - 8);
  if ( !v4 )
    return 0;
  while ( *(_DWORD *)(v4[11] + 24LL) != a2 || (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4[12] + 96LL) + 84LL) - 15) > 1 )
  {
    v5 = (DMMVIDPN *)v4[1];
    v4 = (_QWORD *)((char *)v5 - 8);
    if ( v5 == (DMMVIDPN *)((char *)this + 120) )
      v4 = 0LL;
    if ( !v4 )
      return 0;
  }
  return 1;
}
