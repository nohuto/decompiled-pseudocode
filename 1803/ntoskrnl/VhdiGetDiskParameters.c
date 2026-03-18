/*
 * XREFs of VhdiGetDiskParameters @ 0x1408E227C
 * Callers:
 *     IopGetBootDiskInformationLite @ 0x1408A9998 (IopGetBootDiskInformationLite.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall VhdiGetDiskParameters(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  int v10; // eax

  v8 = -1073741811;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          if ( *(_DWORD *)(a1 + 4) == 6 && *(_DWORD *)(a1 + 36) == 6 )
          {
            v9 = *(_DWORD *)(a1 + 12);
            if ( v9 >= 0x5C
              && v9 >= *(_DWORD *)(a1 + 68) + 56
              && !*(_DWORD *)(a1 + 60)
              && *(_DWORD *)(a1 + 76) == 5
              && *(_DWORD *)(a1 + 88) == 5
              && *(_DWORD *)(a1 + 92) == 6
              && !*(_DWORD *)(a1 + 124) )
            {
              memset(a2, 0, 0x90uLL);
              a2[6] = *(_DWORD *)a1;
              v10 = *(_DWORD *)(a1 + 128);
              if ( v10 == 1 )
              {
                *a2 = 0;
                *((_QWORD *)a2 + 1) = *(_QWORD *)(a1 + 108);
LABEL_18:
                *a3 = a1 + 132;
                *a4 = a1 + 92 + *(unsigned int *)(a1 + 100);
                return 0;
              }
              if ( !v10 )
              {
                *a2 = 1;
                *((_OWORD *)a2 + 3) = *(_OWORD *)(a1 + 108);
                goto LABEL_18;
              }
            }
          }
        }
      }
    }
  }
  return v8;
}
