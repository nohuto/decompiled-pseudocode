/*
 * XREFs of ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800A80C0
 * Callers:
 *     ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x1800A82DC (-ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800A9918 (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForOwner(CExpression *this)
{
  struct CBaseExpression *v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rcx
  CResource *v6; // rcx
  signed int v7; // eax
  signed int v8; // ebx

  v1 = (struct CBaseExpression *)*((_QWORD *)this + 49);
  if ( !v1 )
    v1 = this;
  v3 = 0LL;
  if ( *((_DWORD *)this + 96) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 47);
      v5 = *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * *(unsigned int *)(v4 + 24 * v3 + 20));
      if ( !v5 )
        goto LABEL_8;
      v6 = *(CResource **)(v5 + 8);
      if ( !v6 )
        goto LABEL_8;
      v7 = CResource::AddSourceAnimation(v6, v1, *(_DWORD *)(v4 + 24 * v3));
      v8 = v7;
      if ( v7 >= 0 )
        break;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1E0u);
LABEL_9:
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1B7u);
        return (unsigned int)v8;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 96) )
        return 0;
    }
    *((_BYTE *)this + 400) |= 2u;
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  return 0;
}
