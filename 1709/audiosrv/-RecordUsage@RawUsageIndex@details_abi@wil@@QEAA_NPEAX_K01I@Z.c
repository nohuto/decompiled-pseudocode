/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180005B18
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800072B0 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005510 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180005C3C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180006DFC (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned __int64 v11; // rdx
  void **v12; // rsi
  void *v13; // rbp
  void *v14; // rbx
  void *v15; // rcx
  void *v17[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF

  v6 = a6;
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), v11);
  }
  else
  {
    *(_OWORD *)v17 = 0LL;
    v18 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v17, v11 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(this, v17[0], 0LL, v18 - (unsigned __int64)v17[0]);
      v12 = (void **)((char *)this + 48);
      if ( (char *)this + 48 == (char *)&v18 + 8 )
      {
        v14 = (void *)*((_QWORD *)&v18 + 1);
      }
      else
      {
        v13 = (void *)*((_QWORD *)&v18 + 1);
        v14 = 0LL;
        v15 = *v12;
        if ( *((void **)&v18 + 1) != *v12 )
        {
          if ( v15 )
            operator delete(v15);
          *v12 = v13;
        }
      }
      v6 = a6;
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v14 = (void *)*((_QWORD *)&v18 + 1);
    }
    if ( v14 )
      operator delete(v14);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, v6);
}
