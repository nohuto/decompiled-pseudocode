/*
 * XREFs of _TlgCreateSz @ 0x1C0079FE4
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 *     LogDriverInfoStream @ 0x1C0085914 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall TlgCreateSz(_EVENT_DATA_DESCRIPTOR *pDesc, const char *psz)
{
  __int64 v2; // rax
  const char *v3; // r8

  LODWORD(v2) = 0;
  v3 = a5;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (unsigned __int64)v3;
}
