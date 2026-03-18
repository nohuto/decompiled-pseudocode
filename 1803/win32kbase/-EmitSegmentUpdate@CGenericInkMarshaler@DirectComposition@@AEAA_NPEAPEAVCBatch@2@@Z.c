/*
 * XREFs of ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148718
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148890 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C0148958 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 *     ?NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ @ 0x1C0148974 (-NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CGenericInkMarshaler *v4; // rcx
  unsigned int SegmentCount; // ebp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  unsigned int v12; // ebx
  char *v13; // r9
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // [rsp+50h] [rbp+18h] BYREF
  void *v19; // [rsp+58h] [rbp+20h] BYREF

  if ( !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this) )
    return 1;
  SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(v4);
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 15) + 28LL;
    v8 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    v18 = v8;
    if ( v8 < v7 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v18) )
        return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
      v8 = v18;
    }
    v9 = *((_QWORD *)this + 15);
    v10 = (v8 - 28) / v9;
    v11 = SegmentCount - *((_DWORD *)this + 33);
    if ( v11 >= (unsigned int)v10 )
      v11 = v10;
    v12 = v9 * v11 + 28;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, v12, &v19) )
      break;
    v13 = (char *)v19;
    *(_DWORD *)v19 = v12;
    v14 = *((_DWORD *)this + 33);
    *(_QWORD *)(v13 + 4) = 0LL;
    v15 = v11 + v14;
    *(_QWORD *)(v13 + 12) = 0LL;
    *(_QWORD *)(v13 + 20) = 0LL;
    *((_DWORD *)v13 + 1) = 168;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v13 + 3) = *((_DWORD *)this + 33);
    *((_DWORD *)v13 + 4) = v11;
    *((_DWORD *)v13 + 6) = *((_DWORD *)this + 35);
    v16 = *((_DWORD *)this + 32);
    v17 = v16;
    if ( v16 <= v15 )
      v17 = v15;
    *((_DWORD *)v13 + 5) = v17 - v16;
    memmove(
      v13 + 28,
      (const void *)(*((_QWORD *)this + 10)
                   + *((_QWORD *)this + 15) * *((_QWORD *)this + 14) * *((unsigned int *)this + 33)),
      *((_QWORD *)this + 15) * *((_QWORD *)this + 14) * v11);
    *((_BYTE *)this + 136) = 0;
    *((_DWORD *)this + 33) = v15;
    if ( v15 == SegmentCount )
    {
      *((_DWORD *)this + 4) |= 0x40u;
      return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
    }
  }
  return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
}
