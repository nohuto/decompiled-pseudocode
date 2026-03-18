/*
 * XREFs of CmpQueryKeyValueData @ 0x14047DAE0
 * Callers:
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x14047442C (CmpCopyCompressedName.c)
 *     CmpGetValueDataFromCache @ 0x140477D78 (CmpGetValueDataFromCache.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 */

__int64 __fastcall CmpQueryKeyValueData(__int64 a1, int a2, __int64 a3, int a4, _DWORD *Src, unsigned int a6, int *a7)
{
  __int64 v9; // r11
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  void *ValueDataFromCache; // rsi
  _DWORD *v13; // rdi
  unsigned __int16 v14; // cx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  int v20; // r9d
  unsigned int v21; // eax
  unsigned int v22; // r10d
  int v23; // edx
  unsigned int v24; // eax
  size_t v25; // r8
  unsigned int v26; // r8d
  unsigned int i; // eax
  __int64 v28; // rcx
  unsigned int v29; // r10d
  _WORD *v30; // rcx
  int v31; // r9d
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // r14d
  void *v36; // [rsp+48h] [rbp-60h] BYREF
  void *v37; // [rsp+50h] [rbp-58h]
  _DWORD v38[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v39; // [rsp+60h] [rbp-48h]
  __int64 v40; // [rsp+68h] [rbp-40h]
  __int64 v41; // [rsp+B0h] [rbp+8h] BYREF
  int v42; // [rsp+B8h] [rbp+10h]
  unsigned int v43; // [rsp+C0h] [rbp+18h]
  char v44; // [rsp+C8h] [rbp+20h] BYREF

  v42 = a2;
  v41 = a1;
  v9 = a1;
  v10 = a6;
  v11 = 0;
  ValueDataFromCache = 0LL;
  v37 = 0LL;
  v44 = 0;
  v38[0] = -1;
  v38[1] = 0;
  v40 = *(_QWORD *)(a1 + 24);
  v13 = Src;
  v39 = a3;
  v14 = *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    v14 *= 2;
  if ( a4 == 2 )
  {
    v15 = *(_DWORD *)(a3 + 4);
    if ( v15 >= 0x80000000 )
      v16 = v15 + 0x80000000;
    else
      v16 = *(_DWORD *)(a3 + 4);
    v17 = 0;
    *a7 = v16 + 12;
    if ( v10 < 0xC )
    {
      v17 = -1073741789;
      goto LABEL_21;
    }
    *v13 = 0;
    v13[1] = *(_DWORD *)(a3 + 12);
    v13[2] = v16;
    v18 = v10 - 12;
    if ( v18 >= v16 )
      v18 = v16;
    else
      v17 = -2147483643;
    if ( !v16 )
      goto LABEL_21;
    if ( v15 >= 0x80000000 )
    {
      ValueDataFromCache = (void *)(a3 + 8);
      v37 = (void *)(a3 + 8);
    }
    else
    {
      if ( (unsigned __int8)CmpGetValueData(
                              *(_QWORD *)(v9 + 24),
                              a2,
                              a3,
                              (unsigned int)&v41,
                              (__int64)&Src,
                              (__int64)&v44,
                              (__int64)v38) )
      {
        ValueDataFromCache = Src;
        v37 = Src;
        if ( Src )
        {
LABEL_14:
          memmove(v13 + 3, ValueDataFromCache, v18);
          goto LABEL_21;
        }
      }
      else
      {
        ValueDataFromCache = 0LL;
        v37 = 0LL;
      }
      v17 = -1073741670;
    }
    if ( !ValueDataFromCache )
      goto LABEL_21;
    goto LABEL_14;
  }
  if ( !a4 )
  {
    v17 = 0;
    *a7 = v14 + 12;
    if ( v10 < 0xC )
    {
      v17 = -1073741789;
    }
    else
    {
      *v13 = 0;
      v13[1] = *(_DWORD *)(a3 + 12);
      v13[2] = v14;
      v29 = v10 - 12;
      if ( v10 - 12 >= v14 )
        v29 = v14;
      else
        v17 = -2147483643;
      v30 = v13 + 3;
      if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        CmpCopyCompressedName(v30, v29, (unsigned __int8 *)(a3 + 20), *(unsigned __int16 *)(a3 + 2));
      else
        memmove(v30, (const void *)(a3 + 20), v29);
    }
    goto LABEL_21;
  }
  v20 = a4 - 1;
  if ( v20 )
  {
    v31 = v20 - 2;
    if ( v31 )
    {
      if ( v31 == 1 )
      {
        v32 = *(_DWORD *)(a3 + 4);
        if ( v32 < 0x80000000 )
          v33 = *(_DWORD *)(a3 + 4);
        else
          v33 = v32 + 0x80000000;
        v17 = 0;
        *a7 = v33 + 8;
        if ( v10 < 8 )
        {
          v17 = -1073741789;
        }
        else
        {
          *v13 = *(_DWORD *)(a3 + 12);
          v13[1] = v33;
          v34 = v10 - 8;
          v35 = v33;
          if ( v34 < v33 )
          {
            v35 = v34;
            v17 = -2147483643;
          }
          if ( v33 )
          {
            if ( v32 < 0x80000000 )
            {
              ValueDataFromCache = (void *)CmpGetValueDataFromCache(v9, a2, a3, (__int64)&v44, (__int64)v38);
              v37 = ValueDataFromCache;
              if ( !ValueDataFromCache )
                v17 = -1073741670;
            }
            else
            {
              ValueDataFromCache = (void *)(a3 + 8);
              v37 = (void *)(a3 + 8);
            }
            if ( ValueDataFromCache )
              memmove(v13 + 2, ValueDataFromCache, v35);
          }
        }
      }
      else
      {
        v17 = -1073741811;
      }
      goto LABEL_21;
    }
  }
  v21 = *(_DWORD *)(a3 + 4);
  LODWORD(v36) = v21;
  if ( v21 >= 0x80000000 )
    v22 = v21 + 0x80000000;
  else
    v22 = v21;
  LODWORD(Src) = v22;
  v23 = v14 + v22 + 20;
  v43 = 0;
  if ( v22 )
  {
    v24 = (v14 + 27) & 0xFFFFFFF8;
    v43 = v24;
    if ( v24 > (unsigned int)v14 + 20 )
      v23 = v24 + v22;
  }
  v17 = 0;
  *a7 = v23;
  if ( v10 < 0x14 )
  {
    v17 = -1073741789;
    goto LABEL_21;
  }
  *v13 = 0;
  v13[1] = *(_DWORD *)(a3 + 12);
  v13[3] = v22;
  v13[4] = v14;
  v25 = v10 - 20;
  if ( (unsigned int)v25 >= v14 )
    v25 = v14;
  else
    v17 = -2147483643;
  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
  {
    v26 = (unsigned int)v25 >> 1;
    if ( v26 >= *(unsigned __int16 *)(a3 + 2) )
      v26 = *(unsigned __int16 *)(a3 + 2);
    for ( i = 0; i < v26; ++i )
      *((_WORD *)v13 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
  }
  else
  {
    memmove(v13 + 5, (const void *)(a3 + 20), v25);
    v22 = (unsigned int)Src;
    v9 = v41;
  }
  if ( !v22 )
  {
    v13[2] = -1;
    goto LABEL_21;
  }
  if ( (unsigned int)v36 >= 0x80000000 )
  {
    ValueDataFromCache = (void *)(a3 + 8);
    v37 = (void *)(a3 + 8);
    goto LABEL_50;
  }
  if ( !(unsigned __int8)CmpGetValueData(
                           *(_QWORD *)(v9 + 24),
                           v42,
                           a3,
                           (unsigned int)&v41,
                           (__int64)&v36,
                           (__int64)&v44,
                           (__int64)v38) )
  {
    ValueDataFromCache = 0LL;
    v37 = 0LL;
    goto LABEL_61;
  }
  ValueDataFromCache = v36;
  v37 = v36;
  if ( !v36 )
LABEL_61:
    v17 = -1073741670;
  v22 = (unsigned int)Src;
LABEL_50:
  v28 = v43;
  v13[2] = v43;
  if ( v10 >= (unsigned int)v28 )
    v11 = v10 - v28;
  if ( v11 >= v22 )
    v11 = v22;
  else
    v17 = -2147483643;
  if ( ValueDataFromCache )
    memmove((char *)v13 + v28, ValueDataFromCache, v11);
LABEL_21:
  if ( ValueDataFromCache && ValueDataFromCache != (void *)(a3 + 8) )
  {
    if ( v44 == 1 )
      ExFreePoolWithTag(ValueDataFromCache, 0);
    else
      (*(void (__fastcall **)(__int64, _DWORD *))(v40 + 16))(v40, v38);
  }
  return v17;
}
