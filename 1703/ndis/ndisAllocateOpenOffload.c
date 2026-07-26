/*
 * XREFs of ndisAllocateOpenOffload @ 0x1C00BBA80
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C001FB9C (ndisOidPreOpenSetEncapsulation.c)
 *     ndisOidPreTaskOffload @ 0x1C00D2620 (ndisOidPreTaskOffload.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x52u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 792) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x53u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, *(_QWORD *)(a1 + 792));
  return v2;
}
