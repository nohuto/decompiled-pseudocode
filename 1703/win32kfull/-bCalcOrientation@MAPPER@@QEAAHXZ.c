/*
 * XREFs of ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0057A14
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0056BD0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0057B78 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall MAPPER::bCalcOrientation(__int64 **this)
{
  int v1; // r8d
  int v3; // r11d
  int v4; // r9d
  __int64 result; // rax
  __int64 v6; // r10
  float v7; // xmm0_4
  bool v8; // dl
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  int v12; // r9d
  int v13; // r8d
  int v14; // r10d
  int v15; // edi
  int v16; // esi
  unsigned int v17; // edx
  int v18; // r8d
  float *v19; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 63);
  if ( (v1 & 0x1000) != 0 )
  {
    v3 = 0;
    v4 = *((_DWORD *)this[1] + 2);
    *((_DWORD *)this + 44) = v4;
    if ( v4 )
    {
      v6 = **this;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL) & 0x1002) == 2 )
      {
        v7 = *(float *)(v6 + 336);
        v8 = v7 > 0.0;
        v9 = v7 > 0.0;
        v10 = v7 == 0.0;
        v11 = *(float *)(v6 + 348);
        LOBYTE(v3) = v11 < 0.0;
        if ( v8 - (!v9 && !v10) != (v11 > 0.0) - v3 )
          *((_DWORD *)this + 44) = -v4;
      }
    }
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**this + 80) + 352LL) & 0x802) == 0x802 || (v1 & 0x40) != 0 )
  {
    *((_DWORD *)this + 44) = *((_DWORD *)this[1] + 3);
LABEL_3:
    result = 1LL;
    *((_DWORD *)this + 63) = v1 | 0x80000;
    return result;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)*this, 0x204u);
  v14 = (__PAIR64__(v19[2] > 0.0, *((_DWORD *)v19 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v15 = (__PAIR64__(v19[3] > 0.0, *((_DWORD *)v19 + 3)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (*(_DWORD *)(*(_QWORD *)(**this + 80) + 352LL) & 0x40) != 0 )
  {
    v14 = -v14;
    v15 = -v15;
  }
  v16 = *((_DWORD *)this[1] + 3);
  if ( v16 != 900 * (v16 / 900) )
    return 0;
  v17 = 1;
  v13 = (__PAIR64__(v19[1] > 0.0, *((_DWORD *)v19 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v12 = (__PAIR64__(*v19 > 0.0, *v19) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (v14 + v13) | (v12 - v15) | (v12 ^ ~v13) & 1 )
  {
    return 0;
  }
  else
  {
    v18 = (v14 & 0xA8C)
        + v16
        + (((__PAIR64__(*v19 > 0.0, *v19) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708)
        + (((__PAIR64__(v19[1] > 0.0, *((_DWORD *)v19 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x384);
    *((_DWORD *)this + 44) = v18;
    if ( v18 >= 3600 )
      *((_DWORD *)this + 44) = v18 - 3600;
    *((_DWORD *)this + 63) |= 0x80000u;
  }
  return v17;
}
