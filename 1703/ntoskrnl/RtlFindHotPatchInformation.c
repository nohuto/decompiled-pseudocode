/*
 * XREFs of RtlFindHotPatchInformation @ 0x1406EF054
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1406B5468 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14008B8F0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     RtlFindHotPatchBase @ 0x1406EF020 (RtlFindHotPatchBase.c)
 */

unsigned int *__fastcall RtlFindHotPatchInformation(char *BaseAddress)
{
  PIMAGE_NT_HEADERS v2; // rdi
  char *v3; // rax
  char *v4; // rdx
  char *v5; // rcx
  char *v6; // rax
  __int64 v7; // rax
  unsigned int SizeOfImage; // r8d
  unsigned int *v9; // r9
  unsigned int v10; // edx
  unsigned int v11; // r11d
  unsigned int v12; // r8d
  unsigned int v13; // ebx
  unsigned int v14; // r10d
  char *HotPatchBase; // rax
  int v16; // r10d
  unsigned int v17; // r11d
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  v2 = RtlImageNtHeader(BaseAddress);
  v3 = (char *)RtlImageDirectoryEntryToData(BaseAddress, 1u, 0xAu, &Size);
  v4 = v3;
  if ( v3 )
  {
    if ( Size > 4 && Size == *(_DWORD *)v3 && Size >= 0xF4 )
    {
      v5 = &v3[Size];
      if ( v5 >= v3 )
      {
        v6 = &BaseAddress[v2->OptionalHeader.SizeOfImage];
        if ( v4 < v6 && v5 <= v6 )
        {
          _mm_lfence();
          v7 = *((unsigned int *)v4 + 60);
          if ( (unsigned int)v7 < 0xFFFFFFF8 && (_DWORD)v7 != 0 )
          {
            SizeOfImage = v2->OptionalHeader.SizeOfImage;
            if ( (int)v7 + 8 <= SizeOfImage )
            {
              v9 = (unsigned int *)&BaseAddress[v7];
              if ( *(_DWORD *)&BaseAddress[v7] == 1 )
              {
                v10 = v9[1];
                if ( v10 >= 0x14 && (v10 & 3) == 0 )
                {
                  if ( v9[2] )
                  {
                    if ( v10 + (unsigned int)v7 > v10 && v10 + (unsigned int)v7 <= SizeOfImage )
                    {
                      v11 = v9[4];
                      if ( v11 <= 0x3FFFFFFB )
                      {
                        v12 = 4 * v11 + v9[3];
                        if ( v12 > 4 * v11 && v12 <= v10 )
                        {
                          v13 = 0;
                          v14 = 0;
                          if ( !v11 )
                            return v9;
                          while ( 1 )
                          {
                            HotPatchBase = RtlFindHotPatchBase(v9, v14);
                            if ( !HotPatchBase || v16 && *(_DWORD *)HotPatchBase <= v13 )
                              break;
                            v13 = *(_DWORD *)HotPatchBase;
                            v14 = v16 + 1;
                            if ( v14 >= v17 )
                              return v9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
