/*
 * XREFs of ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0023844
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000F330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002A5B8 (VidSchDdiNotifyDpcWorker.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C009FF04 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0025ED0 (-CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ApertureCorruptionCheck(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int8 v4; // bp
  VIDMM_APERTURE_SEGMENT *v6; // rcx
  int v7; // esi
  __int64 v9; // rbx
  _QWORD *v10; // rax
  unsigned int *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  if ( !*((_DWORD *)this + 926) )
    return 0LL;
  while ( 1 )
  {
    v6 = *(VIDMM_APERTURE_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v3);
    v7 = (*((_DWORD *)v6 + 20) & 1) != 0 ? VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(v6, &v11, v4) : 0;
    if ( v7 < 0 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *((_DWORD *)this + 926) )
      return 0LL;
  }
  if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
  {
    v9 = *((_QWORD *)this + 3);
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, a3);
    v10[6] = (unsigned int)v3;
    v10[7] = v11;
    v10[3] = 270LL;
    v10[4] = 37LL;
    v10[5] = v9;
    WdLogEvent5_WdCriticalError(v10);
  }
  return (unsigned int)v7;
}
