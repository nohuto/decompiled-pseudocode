/*
 * XREFs of PfSnPrefetchFileMetadata @ 0x140465D90
 * Callers:
 *     PfSnPrefetchMetadata @ 0x1404658C0 (PfSnPrefetchMetadata.c)
 *     PfSnGetSectionObject @ 0x14053DFD0 (PfSnGetSectionObject.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     NtResetEvent @ 0x140465EAC (NtResetEvent.c)
 *     NtWaitForSingleObject @ 0x140527B30 (NtWaitForSingleObject.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 */

__int64 __fastcall PfSnPrefetchFileMetadata(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        HANDLE EventHandle)
{
  unsigned int v9; // r10d
  unsigned int v10; // ebp
  unsigned int v11; // eax
  _QWORD *v13; // r14
  unsigned int v14; // r12d
  void *v15; // r9
  int v16; // r13d
  int v17; // ebx
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-60h]
  _DWORD v19[4]; // [rsp+60h] [rbp-38h] BYREF

  v9 = 0;
  if ( a5 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( v10 <= a4 || v10 - a4 < a5 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 96) & 7 | (8 * (*(_DWORD *)(a1 + 100) & 7 | 8));
      if ( a4 || a5 > 0x300 )
      {
        v13 = *(_QWORD **)(a1 + 80);
        v14 = 0;
        *v13 = 3LL;
        v13[1] = v11;
        v15 = v13 + 2;
        do
        {
          v16 = 768;
          if ( a5 - v14 < 0x300 )
            v16 = a5 - v14;
          *((_DWORD *)v13 + 1) = v16;
          memmove(v15, (const void *)(a3 + 8 * (v14 + a4 + 2LL)), (unsigned int)(8 * v16));
          v17 = 8 * *((_DWORD *)v13 + 1) + 16;
          NtResetEvent(EventHandle, 0LL);
          LODWORD(NumberOfBytes) = v17;
          v9 = IopXxxControlFile(a2, (__int64)v19, 590112, v13, NumberOfBytes, 0LL, 0, 0);
          if ( v9 == 259 )
          {
            NtWaitForSingleObject(EventHandle, 0, 0LL);
            v9 = v19[0];
          }
          if ( (v9 & 0xC0000000) == 0xC0000000 )
            break;
          v14 += v16;
          v15 = v13 + 2;
        }
        while ( v14 < a5 );
      }
      else
      {
        *(_DWORD *)(a3 + 4) = a5;
        *(_QWORD *)(a3 + 8) = v11;
        NtResetEvent(EventHandle, 0LL);
        LODWORD(NumberOfBytes) = 8 * a5 + 16;
        v9 = IopXxxControlFile(a2, (__int64)v19, 590112, (void *)a3, NumberOfBytes, 0LL, 0, 0);
        if ( v9 == 259 )
        {
          NtWaitForSingleObject(EventHandle, 0, 0LL);
          v9 = v19[0];
        }
        *(_DWORD *)(a3 + 4) = v10;
      }
    }
  }
  return v9;
}
