/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1400DD510
 * Callers:
 *     LdrpAccessResourceData @ 0x140516204 (LdrpAccessResourceData.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x1400DC158 (LdrpInitMuiCrits.c)
 *     LdrpGetMappingFromCacheEntry @ 0x140130A80 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  int j; // edi
  bool v10; // sf
  PIMAGE_NT_HEADERS v11; // rax
  unsigned __int16 Magic; // cx
  __int64 SizeOfImage; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF

  v15 = 0LL;
  SizeOfImage = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == a1 )
    {
      if ( v15 )
      {
        for ( j = v7; ; --j )
        {
          v10 = j < 0;
          if ( j < 0 )
            break;
          if ( *((_QWORD *)AlternateResourceModules + 9 * j + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)j, a3, &v15, &SizeOfImage) )
          {
            v7 = j;
            v10 = j < 0;
            break;
          }
        }
        if ( v10 )
          v7 = AlternateResourceModuleCount;
        break;
      }
      v15 = *((_QWORD *)AlternateResourceModules + 9 * i + 4);
      SizeOfImage = *((_QWORD *)AlternateResourceModules + 9 * i + 6);
      v7 = i;
    }
  }
  if ( v7 == AlternateResourceModuleCount )
  {
    v15 = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      v11 = RtlImageNtHeader((PVOID)(v15 & 0xFFFFFFFFFFFFFFFCuLL));
      if ( v11 )
      {
        Magic = v11->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = v11->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v15;
}
