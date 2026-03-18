/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180092630
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180054C94 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0xxffffffffffffffff @ 0x1801489A8 (McTemplateU0xxffffffffffffffff.c)
 */

__int64 __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  unsigned int v6; // edi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // rcx
  __int64 i; // rcx
  __int64 v14; // rax
  __int64 v15; // r11
  CVisual *v16; // r8
  int v17; // edx
  int v18; // ecx
  int v19; // r11d
  _OWORD *v20; // rax
  void *v21; // rcx
  int v22; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+10h]

  v6 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 208LL);
  if ( (*(_DWORD *)(v9 + 4) & 0x2000000) != 0 )
  {
    for ( i = v9 + 12; (*(_DWORD *)i & 0x7F000000) != 0x7000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v23 = *(_QWORD *)(i + 4);
    if ( v23 )
    {
      v14 = *(_QWORD *)(v23 + 128);
      v15 = 0LL;
      if ( v14 )
        v15 = *(_QWORD *)(v14 + 96);
      if ( v15 )
      {
        if ( !CMILMatrix::IsEqualTo<0>((float *)a2, (float *)this + 10) )
        {
          CVisual::GetInputLuid(v16, &v22);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0xxffffffffffffffff(
              v18,
              v17,
              v19,
              v22,
              *(_DWORD *)a2,
              *((_DWORD *)a2 + 1),
              *((_DWORD *)a2 + 2),
              *((_DWORD *)a2 + 3),
              *((_DWORD *)a2 + 4),
              *((_DWORD *)a2 + 5),
              *((_DWORD *)a2 + 6),
              *((_DWORD *)a2 + 7),
              *((_DWORD *)a2 + 8),
              *((_DWORD *)a2 + 9),
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 12),
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((_DWORD *)a2 + 15));
        }
      }
    }
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
  v10 = *((_DWORD *)a2 + 16);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * a3;
  *((_DWORD *)this + 26) = v10;
  if ( a4 )
  {
    v12 = *((_QWORD *)this + 14);
    if ( v12 )
    {
      *(_OWORD *)v12 = *(_OWORD *)a4;
      *(_OWORD *)(v12 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v12 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v12 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v12 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v20 = operator new(0x44uLL);
      v21 = v20;
      if ( v20 )
      {
        *v20 = *(_OWORD *)a4;
        v20[1] = *((_OWORD *)a4 + 1);
        v20[2] = *((_OWORD *)a4 + 2);
        v20[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v20 + 16) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v21 = 0LL;
      }
      if ( !v21 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x3Eu);
        return v6;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 14, (signed __int64)v21, 0LL) )
        WPF::ProcessHeapImpl::Free(v21);
    }
  }
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 360LL);
  if ( *((_BYTE *)this + 212) )
    *((_QWORD *)this + 22) = 0LL;
  return v6;
}
