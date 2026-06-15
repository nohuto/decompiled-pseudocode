/*
 * XREFs of ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180006F18
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800064D0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180006790 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x180006EF0 (-AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z.c)
 * Callees:
 *     memcpy_s @ 0x180015EBC (memcpy_s.c)
 */

void __fastcall wil::details_abi::UsageIndexProperty::UpdateCount(wil::details_abi::UsageIndexProperty *this, int a2)
{
  __int16 *p_Source; // r8
  char v3; // al
  rsize_t v4; // r9
  rsize_t v5; // rdx
  __int16 Source; // [rsp+38h] [rbp+10h] BYREF

  p_Source = (__int16 *)((char *)this + 4);
  if ( *((_DWORD *)this + 1) != a2 )
  {
    v3 = *((_BYTE *)this + 2);
    *(_DWORD *)p_Source = a2;
    if ( v3 == 1 )
    {
      v4 = 2LL;
      Source = a2;
      v5 = 2LL;
      p_Source = &Source;
LABEL_4:
      memcpy_s(*((void *const *)this + 2), v5, p_Source, v4);
      return;
    }
    if ( v3 == 2 )
    {
      v5 = 4LL;
      v4 = 4LL;
      goto LABEL_4;
    }
  }
}
