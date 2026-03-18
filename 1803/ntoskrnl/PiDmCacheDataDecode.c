/*
 * XREFs of PiDmCacheDataDecode @ 0x140507D4C
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405078E8 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectProcessPropertyChange @ 0x1405D2E6C (PiDmObjectProcessPropertyChange.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405EA3FC (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 */

__int64 __fastcall PiDmCacheDataDecode(__int64 a1, _DWORD *a2, GUID *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // edx
  size_t v10; // r8
  const void *v11; // rdx
  unsigned int v13; // edx
  unsigned int v14; // edx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      return (unsigned int)-1073741275;
    case 3:
      *a2 = *(_DWORD *)(a1 + 8);
      v13 = *(_DWORD *)(a1 + 12);
      *a5 = v13;
      if ( a4 >= v13 )
      {
        v10 = v13;
        v11 = (const void *)(a1 + 16);
        goto LABEL_12;
      }
      return (unsigned int)-1073741789;
    case 4:
      *a2 = 13;
      *a5 = 16;
      if ( a4 >= 0x10 )
      {
        *a3 = *(GUID *)(a1 + 8);
        return v5;
      }
      return (unsigned int)-1073741789;
    case 5:
      *a2 = *(_DWORD *)(a1 + 8);
      v14 = *(_DWORD *)(a1 + 12);
      *a5 = v14;
      if ( a4 >= v14 )
      {
        v10 = v14;
        v11 = *(const void **)(a1 + 16);
        goto LABEL_12;
      }
      return (unsigned int)-1073741789;
  }
  if ( *(_DWORD *)a1 != 6 )
    return (unsigned int)-1073741595;
  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 == 13 )
  {
    *a2 = 13;
    *a5 = 16;
    if ( a4 >= 0x10 )
    {
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(*(_QWORD *)(a1 + 16) + 16LL));
      return (unsigned int)RtlGUIDFromString(&DestinationString, a3);
    }
    return (unsigned int)-1073741789;
  }
  if ( v7 != 18 )
    return (unsigned int)-1073741595;
  *a2 = 18;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2 * v8) );
  v9 = 2 * v8 + 2;
  *a5 = v9;
  if ( a4 < v9 )
    return (unsigned int)-1073741789;
  v10 = v9;
  v11 = *(const void **)(*(_QWORD *)(a1 + 16) + 16LL);
LABEL_12:
  memmove(a3, v11, v10);
  return v5;
}
