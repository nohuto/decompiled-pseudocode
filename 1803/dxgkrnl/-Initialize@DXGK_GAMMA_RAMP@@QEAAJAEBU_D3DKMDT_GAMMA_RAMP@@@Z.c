/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0045B3C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0045590 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000BBD0 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, const struct _D3DKMDT_GAMMA_RAMP *a2)
{
  __int64 Type; // rcx
  _QWORD *v5; // rax
  SIZE_T SizeFromGammaRampType; // rax
  __int64 v8; // rcx
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  Type = (unsigned int)a2->Type;
  if ( (unsigned int)(Type - 1) > 3 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(Type);
    v5[3] = a2->Type;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType(Type);
  *((_QWORD *)this + 3) = SizeFromGammaRampType;
  if ( SizeFromGammaRampType != a2->DataSize )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v5[3] = a2->Type;
    v5[4] = a2->DataSize;
    v5[5] = -1073741811LL;
    goto LABEL_3;
  }
  if ( SizeFromGammaRampType )
  {
    if ( !a2->Data.pRgb256x3x16 )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v5[3] = 411LL;
      goto LABEL_3;
    }
    v9 = operator new[](SizeFromGammaRampType, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 4) = v9;
    if ( !v9 )
    {
      v11 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v11 + 24) = *((_QWORD *)this + 3);
      WdLogEvent5_WdLowResource(v11);
      return 3221225495LL;
    }
    memmove(v9, a2->Data.pRgb256x3x16, *((_QWORD *)this + 3));
  }
  *((_DWORD *)this + 4) = a2->Type;
  return 0LL;
}
