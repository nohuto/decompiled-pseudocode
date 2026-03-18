/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x140491FC0
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140491BC8 (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1400466E0 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140106490 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PfpOpenHandleCreate @ 0x1404A2488 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1404A25EC (PfpOpenHandleClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404BB98C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1404BBA90 (PfpGetPageListCount.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 */

__int64 __fastcall PfpPrefetchDirectoryStream(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  unsigned int *Src; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r8
  int v15; // eax
  int v16; // ebx
  __int64 v17; // r9
  unsigned int v18; // esi
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r10
  int v25; // r10d
  SIZE_T Length; // [rsp+48h] [rbp-70h]
  ULONG_PTR v28[2]; // [rsp+60h] [rbp-58h] BYREF
  HANDLE Handle[4]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+20h]

  v6 = a1[5];
  memset(Handle, 0, sizeof(Handle));
  Src = (unsigned int *)a1[3];
  v11 = 0LL;
  Handle[3] = (HANDLE)0x200000000LL;
  v12 = *(_QWORD *)(a5 + 8);
  v13 = *(unsigned __int16 *)(*a1 + 30LL);
  v14 = *(_QWORD *)(a5 + 16);
  *Src = 4;
  v30 = v13;
  v15 = a6;
  *((_QWORD *)Src + 1) = (8 * (v13 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  v16 = PfpOpenHandleCreate((unsigned int)Handle, v6, v14, v12, 1048577, v15, 0, a2);
  if ( v16 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
      MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v17, &a5);
    v18 = 0;
    while ( v18 < *(_DWORD *)(a3 + 16) )
    {
      Src[1] = 0;
      if ( v18 >= *(_DWORD *)(a3 + 16) )
        break;
      v19 = *((_DWORD *)a1 + 8);
      v20 = 0;
      do
      {
        v21 = *(_QWORD *)(a3 + 24);
        v22 = *(_QWORD *)(v21 + 16LL * v18);
        v23 = v11;
        v24 = v22 + *(unsigned int *)(v21 + 16LL * v18 + 8);
        if ( v22 >= v11 )
          v23 = *(_QWORD *)(v21 + 16LL * v18);
        while ( v23 < v24 )
        {
          *(_QWORD *)&Src[2 * Src[1] + 4] = v23;
          v23 += 4096LL;
          v20 = Src[1] + 1;
          Src[1] = v20;
          v19 = *((_DWORD *)a1 + 8);
          if ( v20 >= v19 )
          {
            v11 = v23;
            break;
          }
        }
        if ( v20 >= v19 )
          break;
        ++v18;
      }
      while ( v18 < *(_DWORD *)(a3 + 16) );
      if ( !v20 )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v30)) < 0x80 )
      {
        v16 = -1073741248;
        goto LABEL_24;
      }
      LODWORD(Length) = 0;
      v16 = IopXxxControlFile(Handle[0], (__int64)v28, 590112, Src, 8 * v25 + 16, 0LL, Length, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
      if ( v16 < 0 )
      {
        if ( v16 == -1073741807 )
          break;
        goto LABEL_24;
      }
      if ( v16 == 259 )
        KeBugCheckEx(0x191u, 0x14A6uLL, 0LL, 0LL, 0LL);
    }
    v16 = 0;
  }
LABEL_24:
  if ( ((unsigned __int64)Handle[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(Handle, v6);
  return (unsigned int)v16;
}
