/*
 * XREFs of ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18012BB0C
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@QEAAJXZ @ 0x18016ACC0 (-RegisterSourcesForOwner@CExpression@@QEAAJXZ.c)
 * Callees:
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x180034CFC (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourceForAnimation(
        CExpression *this,
        struct CBaseExpression *a2,
        const struct ExpressionReferenceInfo *a3)
{
  __int64 v4; // rcx
  CResource *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx

  v4 = *(_QWORD *)(*((_QWORD *)this + 39) + 8LL * *((unsigned int *)a3 + 5));
  if ( v4 )
  {
    v5 = *(CResource **)(v4 + 8);
    if ( v5 )
    {
      v6 = CResource::AddSourceAnimation(v5, a2, *(_DWORD *)a3);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x18Fu);
        return v7;
      }
      *((_BYTE *)this + 512) |= 2u;
    }
  }
  return 0;
}
