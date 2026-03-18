/*
 * XREFs of MiSelectImageBase @ 0x1404F1960
 * Callers:
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MiGetImageBitMapInfo @ 0x14006C8AC (MiGetImageBitMapInfo.c)
 *     MiSetControlAreaSystemVa @ 0x140163814 (MiSetControlAreaSystemVa.c)
 *     MiSelectBitMapForImage @ 0x1404F1C00 (MiSelectBitMapForImage.c)
 *     MiObtainRelocationBits @ 0x1404F1C44 (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x1404F1D2C (MiSelectRelocationStartHint.c)
 *     MiSelectSystemImageAddress @ 0x1405F680C (MiSelectSystemImageAddress.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbx
  int v10; // eax
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rdx
  unsigned int v14; // ebp
  unsigned int v15; // r14d
  __int64 v16; // r8
  unsigned __int64 v17; // rdi
  unsigned int started; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned int v22; // r8d
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  _QWORD v28[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(a2 + 56);
  v10 = MiSelectBitMapForImage(a2);
  MiGetImageBitMapInfo(v10, v28, &v29, &v30);
  *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v11 << 21)) & 0x600000;
  v13 = *(unsigned int *)(a2 + 8);
  if ( a3 )
  {
    v22 = ((unsigned int)dword_14044B1C8 >> 12) + v13 + ((dword_14044B1C8 & 0xFFF) != 0);
    if ( v22 < (unsigned int)v13 )
      return 3221225503LL;
    v13 = v22;
  }
  v14 = (unsigned int)(v13 + 15) >> 4;
  v15 = -1;
  if ( v12 == 1 )
  {
    *(_DWORD *)(v5 + 88) = -1;
    *(_WORD *)(v5 + 92) = 0;
    v20 = *(_QWORD *)(a2 + 32);
    goto LABEL_10;
  }
  v16 = *(_QWORD *)(a1 + 40);
  v17 = *(_QWORD *)(a2 + 32) - v16;
  if ( !a3 )
  {
    if ( (*(_WORD *)(v7 + 44) & 0x2000) != 0 )
    {
      started = MiSelectRelocationStartHint(v28, (unsigned __int16)v14, v30, 0LL);
      if ( started != -1 )
      {
        v19 = MiObtainRelocationBits(v28, (unsigned __int16)v14, started, 0LL);
        v15 = v19;
        if ( v19 != -1 )
        {
          v20 = v29 - (((unsigned __int16)v14 + (unsigned __int64)v19) << 16);
          if ( v20 == v17 )
          {
            v27 = MiObtainRelocationBits(v28, (unsigned __int16)v14, v19 + (unsigned __int16)v14, 1LL);
            if ( v27 != -1 )
              v15 = v27;
            v20 = v29 - (((unsigned __int16)v14 + (unsigned __int64)v15) << 16);
          }
          if ( v15 != -1 )
            goto LABEL_9;
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
LABEL_9:
        *(_DWORD *)(v5 + 88) = v15;
        *(_WORD *)(v5 + 92) = v14;
LABEL_10:
        *a5 = v20;
        return 0LL;
      }
    }
    v24 = (unsigned int)ExGenRandom(1);
    v25 = (unsigned __int16)v14 << 16;
    if ( v17 <= 0x7FFFFFFEFFFFLL && v25 + v17 > v17 && v25 + v17 <= 0x7FFFFFFF0000LL )
    {
      v26 = ((unsigned int)v24
           - 254
           * (unsigned int)((unsigned __int64)(((v24 * (unsigned __int128)0x204081020408103uLL) >> 64)
                                             + ((unsigned __int64)((unsigned int)v24
                                                                 - ((v24 * (unsigned __int128)0x204081020408103uLL) >> 64)) >> 1)) >> 7)
           + 1) << 16;
      if ( v26 + *(_QWORD *)(a1 + 40) )
      {
        if ( v17 <= v26 )
        {
          v20 = v26 + v17;
          if ( v26 + v17 >= v17 && v20 + v25 >= v20 && v20 + v25 <= 0x7FFFFFFF0000LL )
            goto LABEL_28;
          return 3221225595LL;
        }
        v20 = v17 - v26;
      }
      else
      {
        v20 = *(_QWORD *)(a2 + 32);
      }
LABEL_28:
      v15 = -1;
      goto LABEL_9;
    }
    return 3221225595LL;
  }
  v23 = MiSelectSystemImageAddress(a3, v13, v16, 0LL);
  v20 = v23;
  if ( v23 )
  {
    *(_WORD *)(v5 + 92) = v14;
    *(_DWORD *)(v5 + 88) = (unsigned __int64)(v23 + 0x800000000000LL) >> 16;
    MiSetControlAreaSystemVa(v5, a3);
    goto LABEL_10;
  }
  return 3221225626LL;
}
