/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x1400F739C
 * Callers:
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiMakeSystemRangeAvailable @ 0x1400F6D54 (MiMakeSystemRangeAvailable.c)
 *     MiInitializeDynamicRegion @ 0x14082D78C (MiInitializeDynamicRegion.c)
 *     MiInitializeKernelStacks @ 0x14082EA74 (MiInitializeKernelStacks.c)
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 *     MiInitializeSystemPtes @ 0x14082F554 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x14082F958 (MiBuildPagedPool.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = a1 - 6;
  if ( !v1 )
    return &qword_140388730;
  v2 = v1 - 1;
  if ( !v2 )
    return &qword_1403887C0;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140388808;
  v4 = v3 - 1;
  if ( !v4 )
    return &qword_140388658;
  v6 = v4 - 2;
  if ( !v6 )
    return (__int64 *)&unk_1403886E8;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_1403886A0;
  v8 = v7 - 1;
  if ( !v8 )
    return (__int64 *)&unk_140388778;
  v9 = v8 - 1;
  if ( !v9 )
    return &qword_140388658;
  if ( v9 == 1 )
    return (__int64 *)&unk_140388610;
  else
    return 0LL;
}
