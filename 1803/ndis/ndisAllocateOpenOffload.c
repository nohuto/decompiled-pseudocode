/*
 * XREFs of ndisAllocateOpenOffload @ 0x1C00C74A0
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C0021934 (ndisOidPreOpenSetEncapsulation.c)
 *     ndisOidPreTaskOffload @ 0x1C00DEB40 (ndisOidPreTaskOffload.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x52u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 792) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x53u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, *(_QWORD *)(a1 + 792));
  return v2;
}
