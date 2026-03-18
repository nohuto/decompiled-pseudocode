/*
 * XREFs of ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C000B06C
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00A3A90 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     DmmGetMostImportantClientVidPnPathTargetsFromSource @ 0x1C01D557C (DmmGetMostImportantClientVidPnPathTargetsFromSource.c)
 */

void __fastcall ADAPTER_DISPLAY::SetContentRect(ADAPTER_DISPLAY *this, __int64 a2, const struct tagRECT *const a3)
{
  *(struct tagRECT *)(3208LL * (unsigned int)a2 + *((_QWORD *)this + 14) + 628) = *a3;
  if ( *((_DWORD *)this + 32) && a3->right > a3->left )
  {
    if ( a3->left || a3->top )
    {
      if ( (_DWORD)a2 == *((_DWORD *)this + 30) )
        *((_DWORD *)this + 32) = 2;
    }
    else
    {
      *((_DWORD *)this + 32) = 1;
      if ( (_DWORD)a2 != *((_DWORD *)this + 30) )
      {
        *((_DWORD *)this + 30) = a2;
        if ( (int)DmmGetMostImportantClientVidPnPathTargetsFromSource(*((_QWORD *)this + 2), a2, (char *)this + 124) < 0 )
          *((_DWORD *)this + 32) = 3;
      }
    }
  }
}
