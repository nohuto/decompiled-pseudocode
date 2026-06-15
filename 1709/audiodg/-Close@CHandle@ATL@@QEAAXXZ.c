/*
 * XREFs of ?Close@CHandle@ATL@@QEAAXXZ @ 0x140034F38
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001BC94 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ??1CHandle@ATL@@QEAA@XZ @ 0x140034D3C (--1CHandle@ATL@@QEAA@XZ.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x14005A508 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14005A790 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x1400618F0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::Close(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
