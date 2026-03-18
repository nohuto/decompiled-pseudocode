/*
 * XREFs of ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00A5BA4
 * Callers:
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00A5AEC (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001696C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     McTemplateK0pppppppppppp @ 0x1C002171C (McTemplateK0pppppppppppp.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::ReportState(VIDMM_PAGE_TABLE_BASE *this, struct CVirtualAddressAllocator *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 *v5; // rdx
  int v6; // [rsp+48h] [rbp-F0h]
  int v7; // [rsp+60h] [rbp-D8h]

  v2 = *((_QWORD *)this + 1);
  v3 = *((_QWORD *)a2 + 10);
  if ( v2 && bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
      *(unsigned int *)(v2 + 32),
      (__int64)&EventReportAdapterAllocation,
      v2,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 104) + 8LL) + 8LL),
      0,
      *(_QWORD *)(v3 + 24),
      **(_DWORD **)(v2 + 504),
      *(_QWORD *)(v2 + 16),
      *(_DWORD *)(v2 + 32),
      v6,
      *(_DWORD *)(v2 + 68),
      *(_DWORD *)(v2 + 72),
      v7,
      *(_DWORD *)(v2 + 64),
      *(_DWORD *)(v2 + 376),
      v2,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      (*(_DWORD *)(v2 + 84) & 2) != 0,
      *(_QWORD *)(v2 + 360),
      *(_BYTE *)(v2 + 76) & 0x3F,
      BYTE1(*(_DWORD *)(v2 + 76)) & 1);
  v5 = (__int64 *)*((_QWORD *)this + 2);
  if ( v5 && bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0pppppppppppp(
      *v5,
      &EventReportDeviceAllocation,
      v2,
      *(_QWORD *)(*(_QWORD *)(v5[1] + 8) + 8LL),
      0LL,
      *(_QWORD *)(v3 + 24),
      v5,
      *((_QWORD *)this + 1),
      0LL,
      0LL,
      0LL,
      0LL,
      0LL,
      *(_QWORD *)(*v5 + 16),
      *(_QWORD *)(*v5 + 24));
}
