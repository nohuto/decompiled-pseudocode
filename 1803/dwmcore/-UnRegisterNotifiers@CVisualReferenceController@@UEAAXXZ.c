/*
 * XREFs of ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x180027FD0
 * Callers:
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x180028050 (--1CVisualReferenceController@@MEAA@XZ.c)
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x180028078 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECO.c)
 * Callees:
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180034E00 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 */

void __fastcall CVisualReferenceController::UnRegisterNotifiers(CVisualReferenceController *this)
{
  char *v1; // r10
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // edx
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = (char *)this + 64;
  v2 = 0;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 40);
    v5 = *(_QWORD *)(v3 + 16);
    if ( v4 )
    {
      do
      {
        if ( this == *(CVisualReferenceController **)(v5 + 8LL * v2) )
          break;
        ++v2;
      }
      while ( v2 < v4 );
    }
    if ( v2 < v4 )
    {
      while ( v2 < v4 - 1 )
      {
        v6 = v2;
        v7 = *(_QWORD *)(v5 + 8LL * ++v2);
        *(_QWORD *)(v5 + 8 * v6) = v7;
        v4 = *(_DWORD *)(v3 + 40);
      }
      *(_DWORD *)(v3 + 40) = v4 - 1;
    }
    ReleaseInterface<CWeakReference<CVisual>>(v1);
  }
}
