/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180006014
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006280 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005510 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180005C3C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180006CCC (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180006DFC (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 */

char __fastcall wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        int a2,
        int a3)
{
  char v3; // si
  void **v5; // r14
  void *v6; // r15
  void *v7; // rdi
  void *v8; // rcx
  void *v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF
  int v13; // [rsp+90h] [rbp+40h] BYREF

  v13 = a3;
  v12 = a2;
  v3 = 1;
  if ( !wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &v12, 4uLL, &v13, 4uLL, 1u) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)this + 58) )
        wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), 0x28uLL);
    }
    else
    {
      *(_OWORD *)v10 = 0LL;
      v11 = 0LL;
      if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)v10, 0x32uLL) )
      {
        wil::details_abi::RawUsageIndex::SetBuffer(
          this,
          (_WORD *)v10[0],
          0LL,
          (const char *)(v11 - (unsigned __int64)v10[0]));
        v5 = (void **)((char *)this + 48);
        if ( (char *)this + 48 == (char *)&v11 + 8 )
        {
          v7 = (void *)*((_QWORD *)&v11 + 1);
        }
        else
        {
          v6 = (void *)*((_QWORD *)&v11 + 1);
          v7 = 0LL;
          v8 = *v5;
          if ( *((void **)&v11 + 1) != *v5 )
          {
            if ( v8 )
              operator delete(v8);
            *v5 = v6;
          }
        }
        *((_BYTE *)this + 58) = 1;
      }
      else
      {
        v7 = (void *)*((_QWORD *)&v11 + 1);
      }
      if ( v7 )
        operator delete(v7);
    }
    return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &v12, 4uLL, &v13, 4uLL, 1u);
  }
  return v3;
}
