/*
 * XREFs of VidSchQueryDmaHeader @ 0x1C00AD6DC
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00ACEE0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C00AD7C0 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchQueryDmaHeader(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v9; // r10d
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v13; // rdx
  unsigned int v14; // [rsp+44h] [rbp+1Ch]

  v14 = HIDWORD(a3);
  v6 = a3;
  VidSchiBlockDriverCallback(a1);
  v9 = *(_DWORD *)(a1 + 2436);
  v10 = 0;
  if ( !v9 )
    return 3221225485LL;
  v11 = a2 + 2904;
  while ( !a4 )
  {
    if ( *(_DWORD *)v11 != 3 )
      goto LABEL_7;
LABEL_8:
    ++v10;
    v11 += 224LL;
    if ( v10 >= v9 )
      return 3221225485LL;
  }
  if ( *(_DWORD *)v11 != 3 )
    goto LABEL_8;
LABEL_7:
  if ( *(_QWORD *)(v11 + 16) != __PAIR64__(v14, v6) )
    goto LABEL_8;
  v13 = 224LL * v10;
  *(_DWORD *)a5 = *(_DWORD *)(v13 + a2 + 2888);
  *(_QWORD *)(a5 + 8) = *(_QWORD *)(v13 + a2 + 2896);
  *(_DWORD *)(a5 + 16) = *(_DWORD *)(v13 + a2 + 2904);
  *(_DWORD *)(a5 + 20) = *(_DWORD *)(v13 + a2 + 2908);
  *(_DWORD *)(a5 + 24) = *(_DWORD *)(v13 + a2 + 2912);
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(v13 + a2 + 2920);
  return 0LL;
}
