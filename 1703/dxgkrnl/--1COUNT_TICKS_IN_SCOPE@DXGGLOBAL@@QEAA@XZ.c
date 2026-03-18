/*
 * XREFs of ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0003840
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00F5F70 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE(DXGGLOBAL::COUNT_TICKS_IN_SCOPE *this)
{
  ULONG v2; // eax
  ULONG v3; // edx
  unsigned int v4; // eax
  ULONG UserTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = KeQueryRuntimeThread(KeGetCurrentThread(), &UserTime);
  v3 = *((_DWORD *)this + 2);
  if ( v3 > v2 )
    v4 = v2 - v3 - 1;
  else
    v4 = v2 - v3;
  _InterlockedExchangeAdd64(*(volatile signed __int64 **)this, v4);
}
