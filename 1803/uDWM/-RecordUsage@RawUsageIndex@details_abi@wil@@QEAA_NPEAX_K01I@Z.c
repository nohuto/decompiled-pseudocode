/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180035F20
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800053B4 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180036590 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x18006E410 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180035C18 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180036148 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180036534 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036684 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180039708 (-MemoryFree@@YAXPEAX@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v11; // rdx
  void *v12[2]; // [rsp+30h] [rbp-38h] BYREF
  void *v13[2]; // [rsp+40h] [rbp-28h] BYREF

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
    *(_OWORD *)v12 = 0LL;
    *(_OWORD *)v13 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v12, v11 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(this, v12[0], 0LL, (char *)v13[0] - (char *)v12[0]);
      wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)this + 48, &v13[1]);
      *((_BYTE *)this + 58) = 1;
    }
    if ( v13[1] )
      MemoryFree(v13[1]);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6);
}
