/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x140012704
 * Callers:
 *     LdrpAccessResourceData @ 0x14042A024 (LdrpAccessResourceData.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x1400136C0 (LdrpInitMuiCrits.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     LdrpGetMappingFromCacheEntry @ 0x140136160 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  int j; // edi
  PIMAGE_NT_HEADERS v10; // rax
  unsigned __int16 Magic; // cx
  __int64 SizeOfImage; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF

  v14 = 0LL;
  SizeOfImage = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == a1 )
    {
      if ( v14 )
      {
        for ( j = v7; j >= 0; --j )
        {
          if ( *((_QWORD *)AlternateResourceModules + 9 * j + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)j, a3, &v14, &SizeOfImage) )
          {
            v7 = j;
            break;
          }
        }
        if ( j < 0 )
          v7 = AlternateResourceModuleCount;
        break;
      }
      v14 = *((_QWORD *)AlternateResourceModules + 9 * i + 4);
      SizeOfImage = *((_QWORD *)AlternateResourceModules + 9 * i + 6);
      v7 = i;
    }
  }
  if ( v7 == AlternateResourceModuleCount )
  {
    v14 = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      v10 = RtlImageNtHeader((PVOID)(v14 & 0xFFFFFFFFFFFFFFFCuLL));
      if ( v10 )
      {
        Magic = v10->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = v10->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v14;
}
