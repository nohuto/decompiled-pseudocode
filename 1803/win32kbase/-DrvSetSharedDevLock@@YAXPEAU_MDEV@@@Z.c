/*
 * XREFs of ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00D0784
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x1C00348B0 (GreDeleteSemaphore.c)
 */

void __fastcall DrvSetSharedDevLock(struct _MDEV *a1)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  struct _ERESOURCE *v5; // rcx
  signed __int32 v6; // ett

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 5); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)a1;
    v4 = (_QWORD *)*((_QWORD *)a1 + 5 * i + 4);
    v5 = (struct _ERESOURCE *)v4[6];
    v4[3] = *(_QWORD *)a1;
    if ( v5 != *(struct _ERESOURCE **)(v3 + 48) )
    {
      if ( (v4[5] & 0x10000) == 0 )
      {
        GreDeleteSemaphore(v5);
        _m_prefetchw(v4 + 5);
        do
          v6 = *((_DWORD *)v4 + 10);
        while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)v4 + 10, v6 | 0x10000, v6) );
        v3 = v4[3];
      }
      v4[6] = *(_QWORD *)(v3 + 48);
    }
  }
}
