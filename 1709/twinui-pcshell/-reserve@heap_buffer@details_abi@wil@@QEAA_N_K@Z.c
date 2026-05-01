/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001E11C
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18001E228 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180028788 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180029AD0 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 */

bool __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  SIZE_T v3; // rdi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rsi
  __int64 v7; // rbp
  size_t v8; // r14
  char *v9; // rbp
  HANDLE v10; // rax

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this >= a2 )
  {
LABEL_17:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)this;
    v8 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    if ( v8 )
    {
      if ( !v7 || v3 < v8 )
      {
        memset(v5, 0, v3);
        if ( v7 )
        {
          if ( v3 >= v8 )
            goto LABEL_12;
          *(_DWORD *)_o__errno() = 34;
        }
        else
        {
          *(_DWORD *)_o__errno() = 22;
        }
        invalid_parameter_noinfo();
        goto LABEL_12;
      }
      memcpy_0(v5, *(const void **)this, v8);
    }
LABEL_12:
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
    goto LABEL_17;
  }
  return (char)v5;
}
