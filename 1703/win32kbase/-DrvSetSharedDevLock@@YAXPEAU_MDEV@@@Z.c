/*
 * XREFs of ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00F73DC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x1C0054980 (GreDeleteSemaphore.c)
 */

void __fastcall DrvSetSharedDevLock(struct _MDEV *a1)
{
  __int64 i; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rbx
  struct _ERESOURCE *v5; // rcx
  signed __int32 v6; // ett

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 5); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)a1;
    v4 = (_QWORD *)*((_QWORD *)a1 + 5 * i + 4);
    v5 = (struct _ERESOURCE *)v4[5];
    v4[2] = *(_QWORD *)a1;
    if ( v5 != *(struct _ERESOURCE **)(v3 + 40) )
    {
      if ( (v4[4] & 0x10000) == 0 )
      {
        GreDeleteSemaphore(v5);
        _m_prefetchw(v4 + 4);
        do
          v6 = *((_DWORD *)v4 + 8);
        while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)v4 + 8, v6 | 0x10000, v6) );
      }
      v4[5] = *(_QWORD *)(v4[2] + 40LL);
    }
  }
}
