/*
 * XREFs of ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18001245C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180012104 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ??$emplace_back@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAX$$QEAPEAVCColorGradientStop@@@Z @ 0x180012DB4 (--$emplace_back@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColo.c)
 *     ?IsOfType@CColorGradientStop@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180012EA0 (-IsOfType@CColorGradientStop@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetColorStops(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_GRADIENTBRUSH_SETCOLORSTOPS *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  CResourceTable *v8; // rax
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  struct CResource *ResourceWithoutType; // rsi
  __int64 (__fastcall *v13)(struct CResource *, __int64); // rax
  void *v15; // rbx
  char v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-40h]
  __int64 v19[2]; // [rsp+30h] [rbp-30h] BYREF
  void *lpMem[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  struct CResource *v23; // [rsp+B0h] [rbp+50h] BYREF

  v5 = 0;
  v21 = 0LL;
  v8 = a2;
  *(_OWORD *)lpMem = 0LL;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v18 = 166;
  }
  else
  {
    v10 = 0;
    v11 = a5 >> 2;
    if ( !(a5 >> 2) )
    {
LABEL_8:
      v15 = lpMem[0];
      v19[1] = (__int64)lpMem[0];
      v16 = *((_DWORD *)a3 + 2) != 0;
      v19[0] = (int)(((char *)lpMem[1] - (char *)lpMem[0]) >> 3);
      CGradientBrush::SetStops(this, v19, v16);
      goto LABEL_9;
    }
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v8, *a4);
      v13 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( !((char *)v13 == (char *)CColorGradientStop::IsOfType
           ? CColorGradientStop::IsOfType(ResourceWithoutType, 19LL)
           : (unsigned __int8)v13(ResourceWithoutType, 19LL)) )
        break;
      v23 = ResourceWithoutType;
      std::vector<CColorGradientStop *>::emplace_back<CColorGradientStop *>(lpMem, &v23);
      v8 = a2;
      ++v10;
      ++a4;
      if ( v10 >= v11 )
        goto LABEL_8;
    }
    v18 = 175;
  }
  v5 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, v18);
  v15 = lpMem[0];
LABEL_9:
  if ( v15 )
    std::_Deallocate(v15, (v21 - (__int64)v15) >> 3, 8uLL);
  return v5;
}
