/*
 * XREFs of PiDqPnPGetObjectPropertyKeys @ 0x1406C46E4
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1406C3A68 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1406C3CF4 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405A48C8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetObjectPropertyKeys @ 0x140781FAC (_PnpGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyKeys(int a1, int a2, int a3, __int64 a4, PVOID *a5, unsigned int *a6)
{
  SIZE_T v9; // rbx
  PVOID PoolWithTag; // rax
  unsigned __int64 v11; // rdx
  signed int ObjectPropertyKeys; // eax
  int v13; // ebx
  int v15; // [rsp+20h] [rbp-48h]

  v9 = 6000LL;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x58706E50u);
    *a5 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *a6 = 0;
    v11 = v9 / 0x14;
    if ( a2 )
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(
                             PiPnpRtlCtx,
                             a1,
                             a2,
                             a3,
                             v15,
                             1,
                             (__int64)PoolWithTag,
                             v11,
                             (__int64)a6);
    else
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(
                             *(__int64 **)&PiPnpRtlCtx,
                             a3,
                             0LL,
                             1,
                             (__int64)PoolWithTag,
                             v11,
                             a6);
    v13 = ObjectPropertyKeys;
    if ( ObjectPropertyKeys != -1073741789 )
      goto LABEL_11;
    v9 = 20 * *a6;
  }
  v13 = -1073741670;
LABEL_11:
  if ( v13 < 0 )
    *a6 = 0;
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return (unsigned int)v13;
}
