/*
 * XREFs of ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C009D880
 * Callers:
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C009D7C8 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001447C (Template_pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     Template_pppppppppppp @ 0x1C001F644 (Template_pppppppppppp.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::ReportState(VIDMM_PAGE_TABLE_BASE *this, struct CVirtualAddressAllocator *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  _QWORD *v5; // rcx
  int v6; // [rsp+48h] [rbp-F0h]
  int v7; // [rsp+60h] [rbp-D8h]

  v2 = *((_QWORD *)this + 1);
  v3 = *((_QWORD *)a2 + 10);
  if ( v2 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    Template_pppqxqqqqqqqpppqqqqqqqqqqtpht(
      *(unsigned int *)(v2 + 32),
      &EventReportAdapterAllocation,
      v2,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 104) + 8LL) + 8LL),
      0,
      *(_QWORD *)(v3 + 24),
      **(_DWORD **)(v2 + 520),
      *(_QWORD *)(v2 + 16),
      *(_DWORD *)(v2 + 32),
      v6,
      *(_DWORD *)(v2 + 68),
      *(_DWORD *)(v2 + 72),
      v7,
      *(_DWORD *)(v2 + 64),
      *(_DWORD *)(v2 + 408),
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
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v5 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    Template_pppppppppppp(
      (__int64)v5,
      &EventReportDeviceAllocation,
      v2,
      *(_QWORD *)(*(_QWORD *)(v5[1] + 8LL) + 8LL),
      0LL,
      *(_QWORD *)(v3 + 24),
      v5,
      *((_QWORD *)this + 1),
      0LL,
      0LL,
      0LL,
      0LL,
      0LL,
      *(_QWORD *)(*v5 + 16LL),
      *(_QWORD *)(*v5 + 24LL));
}
