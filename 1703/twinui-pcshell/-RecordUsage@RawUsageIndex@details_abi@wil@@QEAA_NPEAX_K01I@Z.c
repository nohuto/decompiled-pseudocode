/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180027B80
 * Callers:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180028C70 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180029BA8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180029BD8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18002A330 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001D640 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180027A50 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180027FC4 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebp
  void *v9; // rsi
  unsigned __int64 v12; // rdx
  void **v13; // r14
  void *v14; // rbp
  void *v15; // rbx
  void *v16; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v18; // rax
  unsigned __int64 v19; // r8
  void *v20[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF

  v6 = a6;
  v9 = a2;
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6) )
    return 1;
  v12 = a3 + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
    {
      v19 = *((_QWORD *)this + 5) - *((_QWORD *)this + 3);
      if ( v12 + *((_QWORD *)this + 4) - *((_QWORD *)this + 3) >= v19 )
      {
        if ( v12 < 2 * v19 )
          v12 = 2 * v19;
        wil::details_abi::heap_buffer::reserve((wil::details_abi::RawUsageIndex *)((char *)this + 24), v12);
      }
    }
  }
  else
  {
    *(_OWORD *)v20 = 0LL;
    v21 = 0LL;
    if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)v20, v12 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        this,
        (_WORD *)v20[0],
        0LL,
        (const char *)(v21 - (unsigned __int64)v20[0]));
      v13 = (void **)((char *)this + 48);
      if ( (char *)this + 48 == (char *)&v21 + 8 )
      {
        v15 = (void *)*((_QWORD *)&v21 + 1);
      }
      else
      {
        v14 = (void *)*((_QWORD *)&v21 + 1);
        v15 = 0LL;
        v16 = *v13;
        if ( *((void **)&v21 + 1) != *v13 )
        {
          if ( v16 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v16);
          }
          *v13 = v14;
        }
        v6 = a6;
        v9 = a2;
      }
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v15 = (void *)*((_QWORD *)&v21 + 1);
    }
    if ( v15 )
    {
      v18 = GetProcessHeap();
      HeapFree(v18, 0, v15);
    }
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, v9, a3, a4, a5, v6);
}
