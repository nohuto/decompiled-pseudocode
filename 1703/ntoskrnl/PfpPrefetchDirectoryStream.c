/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x140463E10
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140463A54 (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400DD920 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x14010AF88 (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14053D234 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14053D344 (PfpGetPageListCount.c)
 *     PfpOpenHandleCreate @ 0x14053E568 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14053E6CC (PfpOpenHandleClose.c)
 */

__int64 PfpPrefetchDirectoryStream(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r12
  unsigned int *Src; // rsi
  unsigned __int64 v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  int v13; // ebx
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // r10d
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-80h]
  ULONG_PTR v22[2]; // [rsp+60h] [rbp-58h] BYREF
  HANDLE Handle[4]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v26; // [rsp+E0h] [rbp+28h]
  __int64 v27; // [rsp+E8h] [rbp+30h]
  va_list va1; // [rsp+F0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v3 = a1[5];
  memset(Handle, 0, sizeof(Handle));
  Src = (unsigned int *)a1[3];
  Handle[3] = (HANDLE)((unsigned __int64)Handle[3] | 0x200000000LL);
  v8 = 0LL;
  v9 = *(unsigned __int16 *)(*a1 + 30LL);
  v10 = *(_QWORD *)(v26 + 8);
  v11 = *(_QWORD *)(v26 + 16);
  *Src = 4;
  v12 = v27;
  *((_QWORD *)Src + 1) = (8 * (v9 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  v13 = PfpOpenHandleCreate((unsigned int)Handle, v3, v11, v10, 1048577, v12, 0, a2);
  if ( v13 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
      MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v14, (__int64 *)va);
    v15 = 0;
    while ( v15 < *(_DWORD *)(a3 + 16) )
    {
      Src[1] = 0;
      if ( v15 >= *(_DWORD *)(a3 + 16) )
        break;
      do
      {
        v16 = *(_QWORD *)(a3 + 24);
        v17 = *(_QWORD *)(v16 + 16LL * v15);
        v18 = v17 + *(unsigned int *)(v16 + 16LL * v15 + 8);
        if ( v17 < v8 )
          v17 = v8;
        while ( v17 < v18 )
        {
          *(_QWORD *)&Src[2 * Src[1]++ + 4] = v17;
          if ( Src[1] >= *((_DWORD *)a1 + 8) )
          {
            v8 = v17 + 4096;
            break;
          }
          v17 += 4096LL;
        }
        if ( Src[1] >= *((_DWORD *)a1 + 8) )
          break;
        ++v15;
      }
      while ( v15 < *(_DWORD *)(a3 + 16) );
      if ( !Src[1] )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v9)) < 0x80 )
      {
        v13 = -1073741248;
        goto LABEL_24;
      }
      LODWORD(NumberOfBytes) = 8 * v19 + 16;
      v13 = IopXxxControlFile(Handle[0], (__int64)v22, 590112, Src, NumberOfBytes, 0LL, 0, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
      if ( v13 < 0 )
      {
        if ( v13 == -1073741807 )
          break;
        goto LABEL_24;
      }
      if ( v13 == 259 )
        KeBugCheckEx(0x191u, 0x1486uLL, 0LL, 0LL, 0LL);
    }
    v13 = 0;
  }
LABEL_24:
  if ( ((unsigned __int64)Handle[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(Handle, v3);
  return (unsigned int)v13;
}
