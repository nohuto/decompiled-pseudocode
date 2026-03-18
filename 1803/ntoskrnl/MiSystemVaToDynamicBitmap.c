/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x140049920
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x140049550 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     MiInitializeKernelStacks @ 0x1408AB5F0 (MiInitializeKernelStacks.c)
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1408AC630 (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 *     MiInitializeDynamicRegion @ 0x1408AC9B4 (MiInitializeDynamicRegion.c)
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
    return &qword_1403CB930;
  v2 = v1 - 1;
  if ( !v2 )
    return &qword_1403CB9C0;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_1403CBA08;
  v4 = v3 - 1;
  if ( !v4 )
    return &qword_1403CB858;
  v6 = v4 - 2;
  if ( !v6 )
    return (__int64 *)&unk_1403CB8E8;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_1403CB8A0;
  v8 = v7 - 1;
  if ( !v8 )
    return (__int64 *)&unk_1403CB978;
  v9 = v8 - 1;
  if ( !v9 )
    return &qword_1403CB858;
  if ( v9 == 1 )
    return &qword_1403CB810;
  else
    return 0LL;
}
