/*
 * XREFs of ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x18012BCA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18002F14C (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800584C0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CInjectionAnimation::ProcessSetInjectionData(
        CInjectionAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_INJECTIONANIMATION_SETINJECTIONDATA *a3)
{
  unsigned int v6; // edx
  CSharedSection *Resource; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  const void *v10; // rbx
  void *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 28) || (v6 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v13 = 64;
    goto LABEL_13;
  }
  Resource = (CSharedSection *)CResourceTable::GetResource((__int64)a2, v6, 0x64u);
  if ( !Resource )
  {
    v13 = 70;
LABEL_13:
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v13);
    return v9;
  }
  *((_DWORD *)this + 59) = *((_DWORD *)a3 + 4) / 0x84u;
  v8 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4Eu);
  }
  else
  {
    v10 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( !v10 )
    {
      v13 = 88;
      goto LABEL_13;
    }
    v11 = operator new(saturated_mul(*((int *)this + 59), 0x84uLL));
    *((_QWORD *)this + 28) = v11;
    if ( v11 )
    {
      memcpy_0(v11, v10, *((unsigned int *)a3 + 4));
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 376LL) |= 2u;
      return 0;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x62u);
    }
  }
  return v9;
}
