/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1800A25A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
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
  if ( (unsigned int)CBaseExpression::GetTracingCookie(this) )
  {
    if ( !*(_DWORD *)(v4 + 8) )
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 216LL) + 168LL);
  }
  else if ( *(_DWORD *)(v4 + 8) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 216LL);
    ++*(_DWORD *)(v6 + 168);
    *(_BYTE *)(v6 + 376) |= 2u;
  }
  LODWORD(v7) = *(_DWORD *)(v4 + 8);
  if ( (_DWORD)v7 == `CBaseExpression::SetTargetObjectHandle'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)(v3 + 264) + 4LL) &= ~0x40000000u;
  else
    CSparseStorage::SetData((CSparseStorage *)(v3 + 264), 2u, 4u, &v7);
  return 0LL;
}
