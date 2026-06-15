/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800069A0
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180006F90 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180007024 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800B2F38 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800064D0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180006AC8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180015DE4 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned __int64 v12; // rdx
  void **v13; // rsi
  void *v14; // rbp
  void *v15; // rbx
  void *v16; // rcx
  void *v17[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF

  v6 = a6;
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal((unsigned __int64)this, Buf1, Size, a4, a5, a6) )
    return 1;
  v12 = Size + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), v12);
  }
  else
  {
    *(_OWORD *)v17 = 0LL;
    v18 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v17, v12 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(this, v17[0], 0LL, v18 - (unsigned __int64)v17[0]);
      v13 = (void **)((char *)this + 48);
      if ( (char *)this + 48 == (char *)&v18 + 8 )
      {
        v15 = (void *)*((_QWORD *)&v18 + 1);
      }
      else
      {
        v14 = (void *)*((_QWORD *)&v18 + 1);
        v15 = 0LL;
        v16 = *v13;
        if ( *((void **)&v18 + 1) != *v13 )
        {
          if ( v16 )
            operator delete(v16);
          *v13 = v14;
        }
      }
      v6 = a6;
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v15 = (void *)*((_QWORD *)&v18 + 1);
    }
    if ( v15 )
      operator delete(v15);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal((unsigned __int64)this, Buf1, Size, a4, a5, v6);
}
