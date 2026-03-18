/*
 * XREFs of HvpMapHiveImage @ 0x14048DA2C
 * Callers:
 *     HvpMapHiveImageFromFile @ 0x14043B2E8 (HvpMapHiveImageFromFile.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     HvpInitMap @ 0x140451794 (HvpInitMap.c)
 *     HvpProtectBin @ 0x14048DBFC (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x14048DC6C (HvpAllocateBin.c)
 *     HvpValidateLoadedBin @ 0x14048DDFC (HvpValidateLoadedBin.c)
 *     HvpFreeBin @ 0x1404D289C (HvpFreeBin.c)
 *     HvpReadHiveDataFromFile @ 0x1404D3E74 (HvpReadHiveDataFromFile.c)
 *     HvpPointMapEntriesToBuffer @ 0x140515304 (HvpPointMapEntriesToBuffer.c)
 */

__int64 __fastcall HvpMapHiveImage(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v9; // rsi
  int v10; // r15d
  unsigned int v11; // r12d
  char *v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int Bin; // eax
  __int64 v18; // rax
  char v19; // cl
  int v20; // eax
  unsigned int v21; // edi
  char *v22; // [rsp+40h] [rbp-38h]
  char *v23; // [rsp+48h] [rbp-30h] BYREF
  char *v24; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-20h]
  __int64 v26[3]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+50h]
  unsigned int v29; // [rsp+D0h] [rbp+58h]
  __int64 v30; // [rsp+D8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v5 = *(_QWORD *)(BugCheckParameter2 + 56);
  v6 = 0;
  LODWORD(v30) = 0;
  v25 = v5;
  result = HvpInitMap(BugCheckParameter2, a2);
  if ( (int)result >= 0 )
  {
    v22 = 0LL;
    v9 = 0LL;
    v10 = 0;
    v23 = 0LL;
    v11 = 0;
    v12 = 0LL;
    v24 = 0LL;
LABEL_3:
    while ( 1 )
    {
      v13 = HvpReadHiveDataFromFile(a5, v26, &v27);
      v14 = v13;
      if ( v13 < 0 )
        break;
      v15 = 0;
      v29 = 0;
      if ( v27 )
      {
        while ( 1 )
        {
          if ( v11 )
            goto LABEL_14;
          v10 = 4096;
          if ( (unsigned __int8)HvpValidateLoadedBin(v26[0] + v15, v6, v28) )
            v10 = *(_DWORD *)(v16 + 8);
          Bin = HvpAllocateBin(BugCheckParameter2, v10, 0, v6, 825445699, (__int64)&v24, (__int64)&v23);
          v14 = Bin;
          if ( Bin < 0 )
          {
            SetFailureLocation(v25, 0, 7, Bin, 16);
            v9 = (__int64)v23;
            v12 = v24;
            goto LABEL_22;
          }
          v9 = (__int64)v23;
          v12 = v24;
          if ( v23 )
            break;
          v18 = (__int64)v24;
          v22 = v24;
          if ( !v24 )
            goto LABEL_27;
          v19 = 0;
LABEL_12:
          v20 = HvpProtectBin(BugCheckParameter2, v10, 0, v6, v18, v19);
          v14 = v20;
          if ( v20 < 0 )
          {
            SetFailureLocation(v25, 0, 7, v20, 32);
            goto LABEL_22;
          }
          v15 = v29;
          v11 = v10;
LABEL_14:
          v21 = v27 - v15;
          if ( v11 <= v27 - v15 )
            v21 = v11;
          memmove(v22, (const void *)(v26[0] + v15), v21);
          v22 += v21;
          v15 = v21 + v29;
          v11 -= v21;
          v29 += v21;
          v6 = v30;
          if ( !v11 )
          {
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v30, 0LL);
            v15 = v29;
            v12 = 0LL;
            v9 = 0LL;
            v24 = 0LL;
            v6 += v10;
            v23 = 0LL;
            LODWORD(v30) = v6;
          }
          if ( v15 >= v27 )
            goto LABEL_3;
        }
        v18 = (__int64)v23;
        v22 = v23;
LABEL_27:
        v19 = 1;
        goto LABEL_12;
      }
    }
    if ( v13 == -1073741807 )
      v14 = 0;
    else
      SetFailureLocation(v25, 0, 7, v13, 0);
LABEL_22:
    if ( v12 || v9 )
      HvpFreeBin(BugCheckParameter2, v10, 0, (_DWORD)v12, v9);
    return v14;
  }
  return result;
}
