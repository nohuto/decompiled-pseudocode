/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180058360
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800C6730 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800DCD88 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180057E50 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800583C8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800BC200 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C78F0 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C93FC (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        unsigned __int64 a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  unsigned __int64 v11; // rdx
  void *v12; // rdx
  void *v13[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details *v14[2]; // [rsp+40h] [rbp-28h] BYREF

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal((unsigned __int64)this, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), v11);
  }
  else
  {
    *(_OWORD *)v13 = 0LL;
    *(_OWORD *)v14 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v13, v11 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(this, v13[0], 0LL, (char *)v14[0] - (char *)v13[0]);
      wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)this + 48, &v14[1]);
      *((_BYTE *)this + 58) = 1;
    }
    if ( v14[1] )
      wil::details::FreeProcessHeap(v14[1], v12);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal((unsigned __int64)this, a2, a3, a4, a5, a6);
}
