/*
 * XREFs of HvpMapHiveImage @ 0x1406F8484
 * Callers:
 *     HvpMapHiveImageFromFile @ 0x1406F8648 (HvpMapHiveImageFromFile.c)
 * Callees:
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     HvpAllocateBin @ 0x140517824 (HvpAllocateBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405667B8 (HvpPointMapEntriesToBuffer.c)
 *     HvpProtectBin @ 0x140566C48 (HvpProtectBin.c)
 *     HvpFreeBin @ 0x1405840EC (HvpFreeBin.c)
 *     HvpReadHiveDataFromFile @ 0x1406F8C70 (HvpReadHiveDataFromFile.c)
 */

__int64 __fastcall HvpMapHiveImage(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  int v7; // r12d
  int v8; // r15d
  int v9; // eax
  int Bin; // ebx
  unsigned int v11; // ebp
  _OWORD *v12; // rsi
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v18 = a3;
  v19 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 56);
  v7 = 0;
  v8 = 32;
  do
  {
LABEL_2:
    v9 = HvpReadHiveDataFromFile(a5, &v17, &v18);
    Bin = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741807 )
        return 0;
      else
        SetFailureLocation(v6, 0, 7, v9, 0);
      return (unsigned int)Bin;
    }
    v11 = 0;
  }
  while ( !v18 );
  while ( 1 )
  {
    v12 = (_OWORD *)(v17 + v11);
    Bin = HvpAllocateBin(BugCheckParameter2, 4096LL, 0, 0x31334D43u, (__int64 *)&v19);
    if ( Bin < 0 )
      break;
    v13 = (_OWORD *)v19;
    v14 = 32LL;
    do
    {
      *v13 = *v12;
      v13[1] = v12[1];
      v13[2] = v12[2];
      v13[3] = v12[3];
      v13[4] = v12[4];
      v13[5] = v12[5];
      v13[6] = v12[6];
      v13 += 8;
      v15 = v12[7];
      v12 += 8;
      *(v13 - 1) = v15;
      --v14;
    }
    while ( v14 );
    Bin = HvpProtectBin(0LL, 0x1000u, v19, 0);
    if ( Bin < 0 )
      goto LABEL_11;
    HvpPointMapEntriesToBuffer(BugCheckParameter2, v19, 4096, v7, 1, 0LL);
    v19 = 0LL;
    v7 += 4096;
    v11 += 4096;
    if ( v11 >= v18 )
      goto LABEL_2;
  }
  v8 = 16;
LABEL_11:
  SetFailureLocation(v6, 0, 7, Bin, v8);
  if ( v19 )
    HvpFreeBin(BugCheckParameter2, 0x1000u, v19);
  return (unsigned int)Bin;
}
