/*
 * XREFs of ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00ACF74
 * Callers:
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00ACEBC (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001625C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     McTemplateK0pppppppppppp @ 0x1C0024068 (McTemplateK0pppppppppppp.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::ReportState(VIDMM_PAGE_TABLE_BASE *this, struct CVirtualAddressAllocator *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  unsigned int v5; // r9d
  char v6; // r11
  int v7; // r9d
  __int64 *v8; // rdx
  int v9; // [rsp+48h] [rbp-F0h]
  int v10; // [rsp+60h] [rbp-D8h]

  v2 = *((_QWORD *)this + 1);
  v3 = *((_QWORD *)a2 + 10);
  if ( v2 )
  {
    if ( bTracingEnabled )
    {
      v5 = *(_DWORD *)(v2 + 76);
      v6 = v5 & 0x3F;
      v7 = (v5 >> 8) & 1;
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
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
          v9,
          *(_DWORD *)(v2 + 68),
          *(_DWORD *)(v2 + 72),
          v10,
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
          v6,
          v7);
    }
  }
  v8 = (__int64 *)*((_QWORD *)this + 2);
  if ( v8 && bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0pppppppppppp(
      *v8,
      &EventReportDeviceAllocation,
      v2,
      *(_QWORD *)(*(_QWORD *)(v8[1] + 8) + 8LL),
      0LL,
      *(_QWORD *)(v3 + 24),
      v8,
      *((_QWORD *)this + 1),
      0LL,
      0LL,
      0LL,
      0LL,
      0LL,
      *(_QWORD *)(*v8 + 16),
      *(_QWORD *)(*v8 + 24));
}
