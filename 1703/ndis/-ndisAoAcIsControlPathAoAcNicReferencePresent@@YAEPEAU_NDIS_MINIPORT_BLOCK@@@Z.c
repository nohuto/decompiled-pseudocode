/*
 * XREFs of ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070B90
 * Callers:
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D2C0 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisAoAcIsControlPathAoAcNicReferencePresent(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  char v2; // bl
  KIRQL v3; // dl
  int *ComponentRefCounts; // rcx
  unsigned int v5; // eax

  AoAc = a1->AoAc;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ComponentRefCounts = AoAc->ComponentRefCounts;
  v5 = 0;
  while ( v5 == 15 || v5 == 4 || *ComponentRefCounts <= 0 )
  {
    ++v5;
    ++ComponentRefCounts;
    if ( v5 >= 0x10 )
      goto LABEL_8;
  }
  v2 = 1;
LABEL_8:
  KeReleaseSpinLock(&AoAc->Lock, v3);
  return v2;
}
