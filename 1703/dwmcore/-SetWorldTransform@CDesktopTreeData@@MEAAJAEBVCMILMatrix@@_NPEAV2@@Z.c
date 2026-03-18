/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x18004F130
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800881FC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180012FFC (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18009A190 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     Template_xxffffffffffffffff @ 0x1800D4D44 (Template_xxffffffffffffffff.c)
 */

__int64 __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  __int64 v8; // rax
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // edx
  int *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r11
  CVisual *v16; // r8
  int v17; // edx
  int v18; // ecx
  int v19; // r11d
  _OWORD *v20; // rax
  int v21; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+10h]

  v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 208LL);
  if ( (*(_DWORD *)(v8 + 4) & 0x2000000) != 0 )
  {
    v12 = *(_DWORD *)(v8 + 12);
    v13 = (int *)(v8 + 12);
    if ( (v12 & 0x7F000000) != 0x7000000 )
    {
      do
      {
        v13 = (int *)((char *)v13 + (v12 & 0xFFFFFF) + 4);
        v12 = *v13;
      }
      while ( (*v13 & 0x7F000000) != 0x7000000 );
    }
    v22 = *(_QWORD *)(v13 + 1);
    if ( v22 )
    {
      v14 = *(_QWORD *)(v22 + 112);
      v15 = 0LL;
      if ( v14 )
        v15 = *(_QWORD *)(v14 + 64);
      if ( v15 && !(unsigned __int8)CMILMatrix::IsEqualTo<0>(a2, (char *)this + 40) )
      {
        CVisual::GetInputLuid(v16, &v21);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxffffffffffffffff(
            v18,
            v17,
            v19,
            v21,
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
        *((_BYTE *)this + 224) |= 4u;
      }
    }
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
  v9 = *((_DWORD *)a2 + 16);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * a3;
  *((_DWORD *)this + 26) = v9;
  if ( a4 )
  {
    v11 = *((_QWORD *)this + 14);
    if ( v11 )
    {
      *(_OWORD *)v11 = *(_OWORD *)a4;
      *(_OWORD *)(v11 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v11 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v11 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v11 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v20 = operator new(0x44uLL);
      if ( !v20 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
        return 2147942414LL;
      }
      *v20 = *(_OWORD *)a4;
      v20[1] = *((_OWORD *)a4 + 1);
      v20[2] = *((_OWORD *)a4 + 2);
      v20[3] = *((_OWORD *)a4 + 3);
      *((_DWORD *)v20 + 16) = *((_DWORD *)a4 + 16);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 14, (signed __int64)v20, 0LL) )
        WPF::ProcessHeapImpl::Free(v20);
    }
  }
  result = 0LL;
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 400LL);
  if ( *((_BYTE *)this + 212) )
    *((_QWORD *)this + 22) = 0LL;
  return result;
}
