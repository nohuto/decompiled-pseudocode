/*
 * XREFs of ?deallocate@?$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z @ 0x18005E980
 * Callers:
 *     _std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::emplace_back_LegacyInputInfo_&___ptr64__::_1_::catch$103 @ 0x1800E6AAB (_std--vector_LegacyInputInfo_std--allocator_LegacyInputInfo___--emplace_back_LegacyInputInfo_-__.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<LegacyInputInfo>::deallocate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x25C04B8097012ELL )
    goto LABEL_8;
  if ( 1736 * a3 >= 0x1000 )
  {
    if ( (a2 & 0x1F) == 0 )
    {
      v3 = *(_QWORD *)(a2 - 8);
      if ( v3 < a2 )
      {
        a2 = a2 - v3 - 8;
        if ( a2 <= 0x1F )
        {
          a2 = v3;
          goto LABEL_7;
        }
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    JUMPOUT(0x18005E9D2LL);
  }
LABEL_7:
  operator delete((void *)a2);
}
