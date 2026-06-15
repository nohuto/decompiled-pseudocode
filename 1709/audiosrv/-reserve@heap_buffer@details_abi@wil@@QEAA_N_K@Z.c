/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180006CCC
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180006014 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180006DFC (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

bool __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  SIZE_T v3; // r14
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rdi
  __int64 v7; // rbp
  size_t v8; // rsi
  char *v9; // rbp
  HANDLE v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
    v6 = v5;
    if ( !v5 )
      return (char)v5;
    v7 = *(_QWORD *)this;
    v8 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    if ( !v8 )
      goto LABEL_4;
    if ( v7 && v3 >= v8 )
    {
      memcpy_0(v5, *(const void **)this, v8);
LABEL_4:
      v9 = (char *)*((_QWORD *)this + 3);
      if ( v6 != v9 )
      {
        if ( v9 )
        {
          v10 = GetProcessHeap();
          HeapFree(v10, 0, v9);
        }
        *((_QWORD *)this + 3) = v6;
      }
      *(_QWORD *)this = v6;
      *((_QWORD *)this + 1) = &v6[v8];
      *((_QWORD *)this + 2) = &v6[v3];
      goto LABEL_9;
    }
    memset(v5, 0, v3);
    if ( v7 )
    {
      if ( v3 >= v8 )
        goto LABEL_4;
      *(_DWORD *)_o__errno(v12, v11) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v12, v11) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_4;
  }
LABEL_9:
  LOBYTE(v5) = 1;
  return (char)v5;
}
