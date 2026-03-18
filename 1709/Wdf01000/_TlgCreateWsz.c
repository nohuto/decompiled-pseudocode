/*
 * XREFs of _TlgCreateWsz @ 0x1C007A018
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 *     LogDriverInfoStream @ 0x1C0085914 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall TlgCreateWsz(_EVENT_DATA_DESCRIPTOR *pDesc, const wchar_t *pwsz)
{
  const wchar_t *v2; // r8
  __int64 v3; // rax

  v2 = (const wchar_t *)&unk_1C00AD9A0;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (unsigned __int64)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
