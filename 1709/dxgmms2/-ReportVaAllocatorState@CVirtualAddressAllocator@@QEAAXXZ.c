/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A5DC4
 * Callers:
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009CD44 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0ppp @ 0x1C0021E8C (McTemplateK0ppp.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C0022F28 (McTemplateK0ppxxxxxqxx.c)
 *     McTemplateK0pqxx @ 0x1C0023024 (McTemplateK0pqxx.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00A5AEC (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbx
  __int64 i; // rbp
  __int64 *j; // rsi
  _QWORD *v8; // rax
  _QWORD *k; // rax
  _QWORD *v10; // rax
  VIDMM_PAGE_DIRECTORY *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-88h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  _BYTE v14[32]; // [rsp+70h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, (struct _KTHREAD **)this + 7);
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0ppp(
      v2,
      &ReportGpuVirtualAddressAllocator,
      *(_QWORD *)(*((_QWORD *)this + 11) + 32LL),
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 32LL) + 56LL),
      *(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v5 )
  {
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v12) = *(_DWORD *)(v5 + 72);
      McTemplateK0pqxx(v2, &ReportGpuVirtualAddressRange, v3, this, v12, *(_QWORD *)(v5 + 24), *(_QWORD *)(v5 + 32));
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 10) + 6416LL); i = (unsigned int)(i + 1) )
    {
      for ( j = *(__int64 **)(v5 + 24 * i + 96); j != (__int64 *)(v5 + 24 * (i + 4)); j = (__int64 *)*j )
      {
        if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          LODWORD(v13) = *((_DWORD *)j + 14);
          McTemplateK0ppxxxxxqxx(
            v2,
            &ReportGpuVirtualAddressRangeMapping,
            v3,
            this,
            j[6],
            j[8],
            j[11],
            j[12],
            j[10],
            j[9],
            v13,
            j[13],
            j[14]);
        }
      }
    }
    v8 = *(_QWORD **)(v5 + 8);
    v2 = v5;
    if ( v8 )
    {
      do
      {
        v5 = (unsigned __int64)v8;
        v8 = (_QWORD *)*v8;
      }
      while ( v8 );
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v2 )
          break;
        v2 = v5;
      }
    }
  }
  for ( k = (_QWORD *)*((_QWORD *)this + 5); k; k = (_QWORD *)*k )
    v5 = (unsigned __int64)k;
  while ( v5 )
  {
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v12) = *(_DWORD *)(v5 + 72);
      McTemplateK0pqxx(v2, &ReportGpuVirtualAddressRange, v3, this, v12, *(_QWORD *)(v5 + 24), *(_QWORD *)(v5 + 32));
    }
    v10 = *(_QWORD **)(v5 + 8);
    v2 = v5;
    if ( v10 )
    {
      do
      {
        v5 = (unsigned __int64)v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v2 )
          break;
        v2 = v5;
      }
    }
  }
  v11 = (VIDMM_PAGE_DIRECTORY *)**((_QWORD **)this + 14);
  if ( v11 )
    VIDMM_PAGE_DIRECTORY::ReportState(v11, this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
}
