/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x18002D90C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18002EC04 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTracingCookie(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v6; // rcx
  struct CResourceTable *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( CBaseExpression::GetTracingCookie(this) )
  {
    if ( !*(_DWORD *)(v4 + 8) )
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 240LL) + 168LL);
  }
  else if ( *(_DWORD *)(v4 + 8) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 240LL);
    ++*(_DWORD *)(v6 + 168);
    *(_BYTE *)(v6 + 376) |= 2u;
  }
  LODWORD(v7) = *(_DWORD *)(v4 + 8);
  if ( (_DWORD)v7 == `CBaseExpression::SetTracingCookie'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)(v3 + 200) + 4LL) &= ~0x40000000u;
  else
    CSparseStorage::SetData((CSparseStorage *)(v3 + 200), 2u, 4u, &v7);
  return 0LL;
}
