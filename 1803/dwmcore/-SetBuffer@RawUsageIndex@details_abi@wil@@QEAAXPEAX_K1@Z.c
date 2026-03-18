/*
 * XREFs of ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800583C8
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180058360 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800BBEE4 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C93FC (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::SetBuffer(
        wil::details_abi::RawUsageIndex *this,
        char *a2,
        unsigned __int64 a3,
        const char *a4)
{
  wil::details *v8; // rcx
  bool v9; // cl
  char v10; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)a4 < 0xA )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC47,
      (unsigned int)"internal\\sdk\\inc\\wil\\staging.h",
      a4);
    __debugbreak();
  }
  v8 = (wil::details *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    wil::details::FreeProcessHeap(v8, a2);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = &a2[a3];
  *((_BYTE *)this + 57) = 0;
  *((_QWORD *)this + 5) = &a4[(_QWORD)a2];
  v9 = a3 >= 0xA;
  if ( a3 >= 0xA )
  {
    if ( *(_WORD *)a2 || (v10 = 0, *((_WORD *)a2 + 1) > *(_WORD *)this) )
      v10 = 1;
    *((_BYTE *)this + 57) = v10;
    if ( *(_WORD *)a2
      || *((_WORD *)a2 + 1) != *(_WORD *)this
      || *((_WORD *)a2 + 2) != *((_WORD *)this + 1)
      || a2[8] != *((_BYTE *)this + 4)
      || *((_WORD *)a2 + 3) != *((_WORD *)this + 3)
      || a2[9] != *((_BYTE *)this + 8) )
    {
      v9 = 0;
    }
  }
  if ( !v9 )
  {
    *(_WORD *)a2 = 0;
    *((_WORD *)a2 + 1) = *(_WORD *)this;
    *((_WORD *)a2 + 2) = *((_WORD *)this + 1);
    a2[8] = *((_BYTE *)this + 4);
    *((_WORD *)a2 + 3) = *((_WORD *)this + 3);
    a2[9] = *((_BYTE *)this + 8);
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3) + 10LL;
  }
}
