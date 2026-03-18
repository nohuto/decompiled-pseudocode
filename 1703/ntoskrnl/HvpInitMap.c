/*
 * XREFs of HvpInitMap @ 0x140451794
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401E1AC0 (HvpMapHiveImageFromSystemCache.c)
 *     HvpMapHiveImage @ 0x14048DA2C (HvpMapHiveImage.c)
 *     HvpBuildMapForLoaderHive @ 0x1405BD558 (HvpBuildMapForLoaderHive.c)
 *     HvpBuildMap @ 0x14067673C (HvpBuildMap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     HvpAllocateMap @ 0x140451930 (HvpAllocateMap.c)
 *     HvpFreeMap @ 0x140459130 (HvpFreeMap.c)
 */

__int64 __fastcall HvpInitMap(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r13
  void *v4; // r12
  void *v5; // r14
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // rax
  void *v13; // rax
  void *v14; // rbx
  void *v16; // rax
  void *v17; // rsi
  unsigned int v18; // ebx
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (v7 & 0xFFF) != 0 )
  {
    v18 = -1073741492;
    SetFailureLocation(v3, 0, 5, -1073741492, 0);
  }
  else
  {
    v8 = v7 >> 12;
    if ( v7 >> 12 )
      v9 = (v8 - 1) >> 9;
    else
      v9 = 0;
    *(_DWORD *)(a1 + 1400) = v7;
    if ( *(_QWORD *)(a1 + 80) )
      goto LABEL_10;
    v2 = (v8 + 3) & 0xFFFFFFFC;
    LOBYTE(a2) = 1;
    if ( !v2 )
      v2 = 4;
    v4 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v2, a2, 926043459LL);
    if ( v4 )
    {
      LOBYTE(v10) = 1;
      v5 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v2, v10, 926043459LL);
      if ( !v5 )
      {
        v19 = -1073741801;
        goto LABEL_23;
      }
      memset(v4, 0, v2);
      memset(v5, 0, v2);
      *(_QWORD *)(a1 + 80) = v4;
      v11 = v7 >> 9;
      *(_DWORD *)(a1 + 72) = v11;
      *(_DWORD *)(a1 + 96) = v11;
      *(_QWORD *)(a1 + 104) = v5;
      *(_DWORD *)(a1 + 92) = v2;
LABEL_10:
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24);
      if ( v9 )
      {
        v16 = (void *)v12(0x2000LL, 0LL, 942820675LL);
        v17 = v16;
        if ( v16 )
        {
          memset(v16, 0, 0x2000uLL);
          if ( (unsigned __int8)HvpAllocateMap(a1, v17, 0LL, v9) )
          {
            *(_QWORD *)(a1 + 1416) = 0LL;
            *(_QWORD *)(a1 + 1408) = v17;
            return 0LL;
          }
          v18 = -1073741670;
          SetFailureLocation(v3, 0, 5, -1073741670, 64);
          HvpFreeMap(a1, v17, 0LL, v9);
          (*(void (__fastcall **)(void *, __int64))(a1 + 32))(v17, 0x2000LL);
          goto LABEL_27;
        }
        v19 = -1073741670;
        v20 = 48;
LABEL_25:
        v18 = v19;
        SetFailureLocation(v3, 0, 5, v19, v20);
LABEL_27:
        if ( v4 )
        {
          if ( *(void **)(a1 + 80) == v4 )
            *(_QWORD *)(a1 + 80) = 0LL;
          (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v4, v2);
        }
        if ( v5 )
        {
          if ( *(void **)(a1 + 104) == v5 )
            *(_QWORD *)(a1 + 104) = 0LL;
          (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v5, v2);
        }
        return v18;
      }
      v13 = (void *)v12(20480LL, 0LL, 909266243LL);
      v14 = v13;
      if ( v13 )
      {
        memset(v13, 0, 0x5000uLL);
        *(_QWORD *)(a1 + 1408) = a1 + 1416;
        *(_QWORD *)(a1 + 1416) = v14;
        return 0LL;
      }
      v19 = -1073741670;
LABEL_23:
      v20 = 32;
      goto LABEL_25;
    }
    v18 = -1073741801;
    SetFailureLocation(v3, 0, 5, -1073741801, 16);
  }
  return v18;
}
