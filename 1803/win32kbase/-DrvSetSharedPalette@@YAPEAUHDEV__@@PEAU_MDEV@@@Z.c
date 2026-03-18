/*
 * XREFs of ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00D0804
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 */

__int64 __fastcall DrvSetSharedPalette(struct _MDEV *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 i; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  struct OBJECT *v8; // rcx

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2164LL) & 0x100) != 0 )
    v2 = *(_QWORD *)(v1 + 1800);
  v4 = 0LL;
  for ( i = v1 & -(__int64)((*(_DWORD *)(*(_QWORD *)a1 + 2164LL) & 0x100) != 0);
        (unsigned int)v4 < *((_DWORD *)a1 + 5);
        v4 = (unsigned int)(v4 + 1) )
  {
    v6 = *((_QWORD *)a1 + 5 * v4 + 4);
    if ( (*(_DWORD *)(v6 + 2164) & 0x100) != 0 )
    {
      *(_QWORD *)(v6 + 1760) = MulSetPalette;
      if ( v2 )
      {
        v7 = *(_QWORD *)(v6 + 1800);
        if ( v7 != v2 )
        {
          v8 = *(struct OBJECT **)(v7 + 120);
          if ( v8 != (struct OBJECT *)v7 )
            HmgDecrementShareReferenceCountEx(v8, 0LL);
          HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v2);
          *(_DWORD *)(v7 + 28) = *(_DWORD *)(v2 + 28);
          *(_QWORD *)(v7 + 112) = *(_QWORD *)(v2 + 112);
          *(_QWORD *)(v7 + 120) = v2;
        }
      }
      else
      {
        v2 = *(_QWORD *)(v6 + 1800);
        i = v6;
      }
    }
  }
  return i;
}
