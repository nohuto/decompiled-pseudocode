/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C02279A8
 * Callers:
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_BTL@@AEAA@XZ @ 0x1C022727C (--0CCD_BTL@@AEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1)
{
  __int64 v1; // rax
  CCD_BTL *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( CCD_BTL::m_pGlobalBtl )
  {
    v1 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v1);
    return 3221225473LL;
  }
  else
  {
    v3 = (CCD_BTL *)operator new[](0x90uLL, 0x63644356u, PagedPool);
    if ( v3 )
      v3 = CCD_BTL::CCD_BTL(v3);
    CCD_BTL::m_pGlobalBtl = v3;
    if ( v3 )
    {
      return 0LL;
    }
    else
    {
      v5 = WdLogNewEntry5_WdLowResource(v4);
      *(_QWORD *)(v5 + 24) = 144LL;
      WdLogEvent5_WdLowResource(v5);
      return 3221225495LL;
    }
  }
}
