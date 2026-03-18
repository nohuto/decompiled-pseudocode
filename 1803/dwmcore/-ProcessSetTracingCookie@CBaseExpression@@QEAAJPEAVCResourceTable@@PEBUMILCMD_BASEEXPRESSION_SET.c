/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x18003CCF0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18003B008 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTracingCookie(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *a3)
{
  int TracingCookie; // eax
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // ecx
  char **v7; // rcx
  __int64 v9; // rcx
  struct CResourceTable *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  TracingCookie = CBaseExpression::GetTracingCookie(this);
  v6 = *(_DWORD *)(v5 + 8);
  if ( TracingCookie )
  {
    if ( !v6 )
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 240LL) + 168LL);
  }
  else if ( v6 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 240LL);
    ++*(_DWORD *)(v9 + 168);
    *(_BYTE *)(v9 + 424) |= 2u;
  }
  v7 = (char **)(v4 + 280);
  LODWORD(v10) = *(_DWORD *)(v5 + 8);
  if ( (_DWORD)v10 == `CVisual::SetVisualDesktopId'::`2'::sc_defaultValue )
    *((_DWORD *)*v7 + 1) &= ~0x40000000u;
  else
    CSparseStorage::SetData(v7, 2, 4u, &v10);
  return 0LL;
}
