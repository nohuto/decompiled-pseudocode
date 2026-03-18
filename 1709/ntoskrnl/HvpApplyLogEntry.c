/*
 * XREFs of HvpApplyLogEntry @ 0x1406A2C58
 * Callers:
 *     HvApplyLegacyLogFile @ 0x1406A257C (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x1406A2770 (HvApplyLogFile.c)
 * Callees:
 *     HvViewMapPinFile @ 0x1401E5050 (HvViewMapPinFile.c)
 *     HvpValidateLoadedBin @ 0x14047D86C (HvpValidateLoadedBin.c)
 *     HvpExpandMap @ 0x1404E585C (HvpExpandMap.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     HvpAddDummyBinToHive @ 0x1406A29E0 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406A2B74 (HvpAddLoadedBinToHive.c)
 *     HvpCopyModifiedData @ 0x1406A2F00 (HvpCopyModifiedData.c)
 */

__int64 __fastcall HvpApplyLogEntry(
        ULONG_PTR BugCheckParameter2,
        _DWORD *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        int *a6)
{
  __int64 v6; // r10
  __int64 v7; // rdi
  int v8; // eax
  unsigned int *v10; // r12
  int v13; // esi
  unsigned int v14; // r15d
  unsigned int v15; // ecx
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  int v25; // r9d
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  bool v28; // al
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // ebx
  int i; // ebx
  __int64 v33; // rbx
  __int64 v35; // [rsp+20h] [rbp-48h]
  int v36; // [rsp+70h] [rbp+8h]
  unsigned int *v37; // [rsp+78h] [rbp+10h] BYREF
  unsigned int *v38; // [rsp+88h] [rbp+20h]

  v38 = a4;
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  v7 = 0LL;
  v8 = a2[4];
  v10 = a4;
  a5 = 0;
  *(_DWORD *)(v6 + 40) = v8;
  v13 = 0;
  v14 = *(_DWORD *)(BugCheckParameter2 + 1400);
  v15 = a2[4];
  if ( v14 >= v15 )
    goto LABEL_40;
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0 )
  {
    v16 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v15, 1);
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
  {
    v16 = HvViewMapPinFile((volatile signed __int64 *)(BugCheckParameter2 + 200));
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  v16 = HvpExpandMap(BugCheckParameter2, 0, v14, a2[4]);
  if ( v16 < 0 )
    return (unsigned int)v16;
  v17 = 0;
  *(_DWORD *)(BugCheckParameter2 + 1400) = a2[4];
  v18 = 0;
  v36 = 0;
  if ( !a2[5] )
  {
LABEL_33:
    v31 = a2[4];
    if ( v18 < v14 )
      v18 = v14;
    if ( v31 > v18 )
    {
      for ( i = v31 - v18; i; i -= 4096 )
      {
        v16 = HvpAddDummyBinToHive(BugCheckParameter2, 0LL, a2[4] - i, &v37);
        if ( v16 < 0 )
          return (unsigned int)v16;
      }
    }
    v10 = v38;
LABEL_40:
    if ( a2[5] )
    {
      do
      {
        if ( *(_DWORD *)(a3 + 8 * v7) >= v14 )
          break;
        v33 = *(unsigned int *)(a3 + 8 * v7 + 4);
        HvpCopyModifiedData(BugCheckParameter2);
        v10 = (unsigned int *)((char *)v10 + v33);
        v13 += v33;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < a2[5] );
    }
    if ( (a2[2] & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
    v16 = 1073741833;
    *a6 = v13;
    return (unsigned int)v16;
  }
  while ( 1 )
  {
    v19 = v17;
    v35 = v17;
    v20 = *(unsigned int *)(a3 + 8LL * v17 + 4);
    v21 = *(_DWORD *)(a3 + 8LL * v17);
    v18 = v20 + v21;
    if ( (unsigned int)v20 + v21 <= v14 )
    {
      v10 = (unsigned int *)((char *)v10 + v20);
      goto LABEL_31;
    }
    if ( v21 < v14 )
    {
      v22 = v14 - v21;
      v21 = v14;
      v10 = (unsigned int *)((char *)v10 + v22);
    }
    if ( v17 && (v23 = v17 - 1, v24 = *(_DWORD *)(a3 + 8 * v23 + 4), v25 = *(_DWORD *)(a3 + 8 * v23), v24 + v25 >= v14) )
      v26 = v21 - v24 - v25;
    else
      v26 = v21 - v14;
    if ( v26 )
      break;
LABEL_20:
    v27 = *(_DWORD *)(a3 + 8 * v19) + *(_DWORD *)(a3 + 8 * v19 + 4);
    if ( v21 < v27 )
    {
      while ( 1 )
      {
        v28 = HvpValidateLoadedBin(v10, v21, a2[4]);
        if ( !v28 )
          goto LABEL_26;
        if ( v10[2] > v27 - v21 )
          v28 = 0;
        if ( v28 )
          v29 = HvpAddLoadedBinToHive(BugCheckParameter2, v10, v21, &v37);
        else
LABEL_26:
          v29 = HvpAddDummyBinToHive(BugCheckParameter2, v10, v21, &v37);
        v16 = v29;
        if ( v29 < 0 )
          return (unsigned int)v16;
        v30 = v37[2];
        a5 += v30;
        v21 += v30;
        v10 = (unsigned int *)((char *)v10 + v30);
        if ( v21 >= v27 )
        {
          v19 = v35;
          break;
        }
      }
    }
    v18 = *(_DWORD *)(a3 + 8 * v19) + *(_DWORD *)(a3 + 8 * v19 + 4);
    v17 = v36;
LABEL_31:
    v36 = ++v17;
    if ( v17 >= a2[5] )
    {
      v13 = a5;
      goto LABEL_33;
    }
  }
  while ( 1 )
  {
    v16 = HvpAddDummyBinToHive(BugCheckParameter2, 0LL, v21 - v26, &v37);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v26 -= 4096;
    if ( !v26 )
    {
      v19 = v35;
      goto LABEL_20;
    }
  }
}
