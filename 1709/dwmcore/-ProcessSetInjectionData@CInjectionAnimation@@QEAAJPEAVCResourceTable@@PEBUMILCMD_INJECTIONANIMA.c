/*
 * XREFs of ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x1801682C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x180084B60 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800A1DBC (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CInjectionAnimation::ProcessSetInjectionData(
        CInjectionAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_INJECTIONANIMATION_SETINJECTIONDATA *a3)
{
  unsigned int v6; // edx
  CSharedSection *Resource; // rbp
  signed int v8; // eax
  unsigned int v9; // ebx
  const void *v10; // rbx
  void *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 34) || (v6 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v13 = 64;
    goto LABEL_13;
  }
  Resource = (CSharedSection *)CResourceTable::GetResource((__int64)a2, v6, 0x76u);
  if ( !Resource )
  {
    v13 = 70;
LABEL_13:
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, v13);
    return v9;
  }
  *((_DWORD *)this + 71) = *((_DWORD *)a3 + 4) / 0x84u;
  v8 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x4Eu);
  }
  else
  {
    v10 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( !v10 )
    {
      v13 = 88;
      goto LABEL_13;
    }
    v11 = operator new(saturated_mul(*((int *)this + 71), 0x84uLL));
    *((_QWORD *)this + 34) = v11;
    if ( v11 )
    {
      memcpy_0(v11, v10, *((unsigned int *)a3 + 4));
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 376LL) |= 2u;
      return 0;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x62u);
    }
  }
  return v9;
}
