/*
 * XREFs of ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C00DF978
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0008C28 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0008E60 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00A2B34 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetGammaRamp(
        DMMVIDPNPRESENTPATH *this,
        const struct _D3DKMDT_GAMMA_RAMP *a2,
        __int64 a3,
        __int64 a4)
{
  D3DDDI_GAMMARAMP_TYPE Type; // eax
  PVOID v7; // rdi
  void *v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  Type = a2->Type;
  if ( (a2->Type != D3DDDI_GAMMARAMP_RGB256x3x16 || !a2->DataSize || !a2->Data.pRgb256x3x16)
    && (Type != D3DDDI_GAMMARAMP_DXGI_1 || !a2->DataSize || !a2->Data.pRgb256x3x16)
    && (Type != D3DDDI_GAMMARAMP_DEFAULT || a2->DataSize || a2->Data.pRgb256x3x16) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = 0LL;
  if ( !a2->Data.pRgb256x3x16 || (v7 = operator new(a2->DataSize, 0x4E506456u, PagedPool)) != 0LL )
  {
    v8 = (void *)*((_QWORD *)this + 25);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)this + 25) = 0LL;
      *((_QWORD *)this + 24) = 0LL;
    }
    if ( v7 )
    {
      if ( a2->Data.pRgb256x3x16 )
        goto LABEL_18;
    }
    else if ( !a2->Data.pRgb256x3x16 )
    {
LABEL_11:
      *((_QWORD *)this + 25) = v7;
      *((_QWORD *)this + 24) = a2->DataSize;
      *((_DWORD *)this + 46) = a2->Type;
      return 0LL;
    }
    v13 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
LABEL_18:
    if ( v7 )
      memmove(v7, a2->Data.pRgb256x3x16, a2->DataSize);
    goto LABEL_11;
  }
  v12 = WdLogNewEntry5_WdLowResource(v10);
  *(_QWORD *)(v12 + 24) = a2->DataSize;
  WdLogEvent5_WdLowResource(v12);
  return 3221225495LL;
}
