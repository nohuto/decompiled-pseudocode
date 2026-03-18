/*
 * XREFs of MiSelectImageBase @ 0x140495CE8
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 * Callees:
 *     MiSetControlAreaSystemVa @ 0x140038C44 (MiSetControlAreaSystemVa.c)
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiGetImageBitMapInfo @ 0x14005EC64 (MiGetImageBitMapInfo.c)
 *     MiSelectBitMapForImage @ 0x140495F78 (MiSelectBitMapForImage.c)
 *     MiObtainRelocationBits @ 0x140495FBC (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x1404960A4 (MiSelectRelocationStartHint.c)
 *     MiSelectSystemImageAddress @ 0x14055D080 (MiSelectSystemImageAddress.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbx
  int v10; // eax
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rdx
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  __int64 v16; // r8
  unsigned __int64 v17; // rdi
  unsigned int started; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  _QWORD v29[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(a2 + 56);
  v10 = MiSelectBitMapForImage(a2);
  MiGetImageBitMapInfo(v10, v29, &v30, &v31);
  *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v11 << 21)) & 0x600000;
  v13 = *(unsigned int *)(a2 + 8);
  if ( a3 )
    v13 = ((dword_1403E3168 & 0xFFF) != 0) + ((unsigned int)dword_1403E3168 >> 12) + (unsigned int)v13;
  v14 = (unsigned int)(v13 + 15) >> 4;
  v15 = -1;
  if ( v12 == 1 )
  {
    *(_DWORD *)(v5 + 88) = -1;
    *(_WORD *)(v5 + 92) = 0;
    v20 = *(_QWORD *)(a2 + 32);
    goto LABEL_11;
  }
  v16 = *(_QWORD *)(a1 + 40);
  v17 = *(_QWORD *)(a2 + 32) - v16;
  if ( !a3 )
  {
    if ( (*(_WORD *)(v7 + 44) & 0x2000) != 0 )
    {
      started = MiSelectRelocationStartHint(v29, (unsigned __int16)v14, v31, 0LL);
      if ( started != -1 )
      {
        v19 = MiObtainRelocationBits(v29, (unsigned __int16)v14, started, 0LL);
        v15 = v19;
        if ( v19 != -1 )
        {
          v20 = v30 - (((unsigned __int16)v14 + (unsigned __int64)v19) << 16);
          if ( v20 == v17 )
          {
            v28 = MiObtainRelocationBits(v29, (unsigned __int16)v14, v19 + (unsigned __int16)v14, 1LL);
            if ( v28 != -1 )
              v15 = v28;
            v20 = v30 - (((unsigned __int16)v14 + (unsigned __int64)v15) << 16);
          }
          if ( v15 != -1 )
            goto LABEL_10;
        }
      }
    }
    else
    {
      if ( v16 )
      {
        *a5 = *(_QWORD *)(a2 + 32);
        return 0LL;
      }
      if ( v11 == 2 )
      {
        v20 = ((unsigned int)ExGenRandom(1) % (131073 - (unsigned __int64)(unsigned __int16)v14) + 2146828288) << 16;
LABEL_10:
        *(_DWORD *)(v5 + 88) = v15;
        *(_WORD *)(v5 + 92) = v14;
LABEL_11:
        *a5 = v20;
        return 0LL;
      }
    }
    v23 = (unsigned int)ExGenRandom(1) % 0xFE;
    v24 = (unsigned __int16)v14 << 16;
    v25 = (v23 + 1) << 16;
    if ( v17 <= 0x7FFFFFFEFFFFLL )
    {
      v26 = v24 + v17;
      if ( v24 + v17 > v17 && v26 <= 0x7FFFFFFEFFFFLL )
      {
        if ( v25 + *(_QWORD *)(a1 + 40) )
        {
          if ( v17 <= v25 )
          {
            v20 = v25 + v17;
            if ( v20 >= v17 )
            {
              v27 = v20 + v24;
              if ( v27 <= 0x7FFFFFFDFFFFLL && v27 >= v26 )
                goto LABEL_27;
            }
            return 3221225595LL;
          }
          v20 = v17 - v25;
        }
        else
        {
          v20 = *(_QWORD *)(a2 + 32);
        }
LABEL_27:
        v15 = -1;
        goto LABEL_10;
      }
    }
    return 3221225595LL;
  }
  v22 = MiSelectSystemImageAddress(a3, v13, v16, 0LL);
  v20 = v22;
  if ( v22 )
  {
    *(_WORD *)(v5 + 92) = v14;
    *(_DWORD *)(v5 + 88) = (unsigned __int64)(v22 + 0x800000000000LL) >> 16;
    MiSetControlAreaSystemVa(v5, a3);
    goto LABEL_11;
  }
  return 3221225626LL;
}
