/*
 * XREFs of ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180032200
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180031434 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180031FD8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180036B40 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800685AC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::SetBuffer(
        wil::details_abi::RawUsageIndex *this,
        char *a2,
        unsigned __int64 a3,
        const char *a4)
{
  void *v8; // rcx
  bool v9; // cl
  char v10; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)a4 < 0xA )
  {
    wil::details::in1diag3::_FailFast_Unexpected(retaddr, a2, a3, a4);
    __debugbreak();
  }
  v8 = (void *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    MemoryFree(v8);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = &a2[a3];
  *((_BYTE *)this + 57) = 0;
  v9 = a3 >= 0xA;
  *((_QWORD *)this + 5) = &a4[(_QWORD)a2];
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
