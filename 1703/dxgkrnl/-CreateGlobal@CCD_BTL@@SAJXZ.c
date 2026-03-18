/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C011CF28
 * Callers:
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_BTL@@AEAA@XZ @ 0x1C011CF7C (--0CCD_BTL@@AEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CCD_BTL *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( CCD_BTL::m_pGlobalBtl )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
    return 3221225473LL;
  }
  else
  {
    v4 = (CCD_BTL *)operator new(0x90uLL, 0x63644356u, PagedPool);
    if ( v4 )
      v4 = CCD_BTL::CCD_BTL(v4);
    CCD_BTL::m_pGlobalBtl = v4;
    if ( v4 )
    {
      return 0LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdLowResource(v5);
      *(_QWORD *)(v8 + 24) = 144LL;
      WdLogEvent5_WdLowResource(v8);
      return 3221225495LL;
    }
  }
}
