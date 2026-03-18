/*
 * XREFs of ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00F8284
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 */

__int64 __fastcall DrvSetSharedPalette(struct _MDEV *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  __int64 i; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  struct OBJECT *v7; // rcx

  v1 = 0LL;
  v2 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2188LL) & 0x100) != 0 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 1824LL);
    v1 = *(_QWORD *)a1;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 5); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)a1 + 5 * i + 4);
    if ( (*(_DWORD *)(v5 + 2188) & 0x100) != 0 )
    {
      *(_QWORD *)(v5 + 1784) = MulSetPalette;
      if ( v2 )
      {
        v6 = *(_QWORD *)(v5 + 1824);
        if ( v6 != v2 )
        {
          v7 = *(struct OBJECT **)(v6 + 128);
          if ( v7 != (struct OBJECT *)v6 )
            HmgDecrementShareReferenceCountEx(v7, 0LL);
          HmgIncrementShareReferenceCount((struct OBJECT *)v2);
          *(_DWORD *)(v6 + 28) = *(_DWORD *)(v2 + 28);
          *(_QWORD *)(v6 + 120) = *(_QWORD *)(v2 + 120);
          *(_QWORD *)(v6 + 128) = v2;
        }
      }
      else
      {
        v2 = *(_QWORD *)(v5 + 1824);
        v1 = v5;
      }
    }
  }
  return v1;
}
