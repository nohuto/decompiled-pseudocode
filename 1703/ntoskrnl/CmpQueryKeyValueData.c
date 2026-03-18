/*
 * XREFs of CmpQueryKeyValueData @ 0x140503410
 * Callers:
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140662EF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpGetValueDataFromCache @ 0x140491A98 (CmpGetValueDataFromCache.c)
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 */

__int64 __fastcall CmpQueryKeyValueData(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        _DWORD *Src,
        unsigned int a6,
        int *a7)
{
  __int64 v9; // r11
  unsigned int v10; // r12d
  void *ValueDataFromCache; // rbx
  _DWORD *v12; // rsi
  unsigned __int16 v13; // cx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // r13d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r14d
  int v21; // r9d
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  size_t v24; // r8
  int v25; // edx
  unsigned int v26; // r14d
  unsigned int v27; // r13d
  unsigned int v28; // r8d
  unsigned int i; // eax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  _WORD *v33; // rcx
  int v34; // r9d
  unsigned int v35; // edx
  unsigned int v36; // ecx
  unsigned int v37; // r8d
  unsigned int v38; // r8d
  unsigned int v39; // r14d
  void *v40; // [rsp+48h] [rbp-60h] BYREF
  void *v41; // [rsp+50h] [rbp-58h]
  _DWORD v42[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v43; // [rsp+60h] [rbp-48h]
  __int64 v44; // [rsp+68h] [rbp-40h]
  __int64 v45; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+10h]
  int v47; // [rsp+C0h] [rbp+18h]
  char v48; // [rsp+C8h] [rbp+20h] BYREF

  v46 = a2;
  v45 = a1;
  v9 = a1;
  v10 = 0;
  ValueDataFromCache = 0LL;
  v41 = 0LL;
  v48 = 0;
  v42[0] = -1;
  v42[1] = 0;
  v44 = *(_QWORD *)(a1 + 24);
  v12 = Src;
  v43 = a3;
  v13 = *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    v13 *= 2;
  if ( a4 != 2 )
  {
    if ( !a4 )
    {
      v30 = v13;
      v16 = 0;
      *a7 = v13 + 12;
      v31 = a6;
      if ( a6 < 0xC )
      {
        v16 = -1073741789;
      }
      else
      {
        *v12 = 0;
        v12[1] = *(_DWORD *)(a3 + 12);
        v12[2] = v30;
        v32 = v31 - 12;
        if ( v32 < v30 )
        {
          v30 = v32;
          v16 = -2147483643;
        }
        v33 = v12 + 3;
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
          CmpCopyCompressedName(v33, v30, (unsigned __int8 *)(a3 + 20), *(unsigned __int16 *)(a3 + 2));
        else
          memmove(v33, (const void *)(a3 + 20), v30);
      }
      goto LABEL_20;
    }
    v21 = a4 - 1;
    if ( v21 )
    {
      v34 = v21 - 2;
      if ( v34 )
      {
        if ( v34 == 1 )
        {
          v35 = *(_DWORD *)(a3 + 4);
          if ( v35 < 0x80000000 )
            v36 = *(_DWORD *)(a3 + 4);
          else
            v36 = v35 + 0x80000000;
          v16 = 0;
          *a7 = v36 + 8;
          v37 = a6;
          if ( a6 < 8 )
          {
            v16 = -1073741789;
          }
          else
          {
            *v12 = *(_DWORD *)(a3 + 12);
            v12[1] = v36;
            v38 = v37 - 8;
            v39 = v36;
            if ( v38 < v36 )
            {
              v39 = v38;
              v16 = -2147483643;
            }
            if ( v36 )
            {
              if ( v35 < 0x80000000 )
              {
                ValueDataFromCache = (void *)CmpGetValueDataFromCache(v9, a2, a3, (__int64)&v48, (__int64)v42);
                v41 = ValueDataFromCache;
                if ( !ValueDataFromCache )
                  v16 = -1073741670;
              }
              else
              {
                ValueDataFromCache = (void *)(a3 + 8);
                v41 = (void *)(a3 + 8);
              }
              if ( ValueDataFromCache )
                memmove(v12 + 2, ValueDataFromCache, v39);
            }
          }
        }
        else
        {
          v16 = -1073741811;
        }
        goto LABEL_20;
      }
    }
    v22 = *(_DWORD *)(a3 + 4);
    LODWORD(v40) = v22;
    if ( v22 >= 0x80000000 )
    {
      v23 = v22 + 0x80000000;
      LODWORD(Src) = v22 + 0x80000000;
    }
    else
    {
      v23 = v22;
      LODWORD(Src) = v22;
    }
    v24 = v13;
    v25 = v13 + v23 + 20;
    v26 = 0;
    if ( v23 )
    {
      v26 = (v13 + 27) & 0xFFFFFFF8;
      if ( v26 > (unsigned int)v13 + 20 )
        v25 = v26 + v23;
    }
    v47 = 0;
    *a7 = v25;
    v27 = a6;
    if ( a6 < 0x14 )
    {
      v16 = -1073741789;
      goto LABEL_20;
    }
    *v12 = 0;
    v12[1] = *(_DWORD *)(a3 + 12);
    v12[3] = v23;
    v12[4] = v13;
    if ( v27 - 20 < v13 )
    {
      v24 = v27 - 20;
      v47 = -2147483643;
    }
    if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    {
      v28 = (unsigned int)v24 >> 1;
      if ( v28 >= *(unsigned __int16 *)(a3 + 2) )
        v28 = *(unsigned __int16 *)(a3 + 2);
      for ( i = 0; i < v28; ++i )
        *((_WORD *)v12 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
    }
    else
    {
      memmove(v12 + 5, (const void *)(a3 + 20), v24);
      v23 = (unsigned int)Src;
      v22 = (unsigned int)v40;
      v9 = v45;
    }
    if ( !v23 )
    {
      v12[2] = -1;
      v16 = v47;
      goto LABEL_20;
    }
    if ( v22 >= 0x80000000 )
    {
      ValueDataFromCache = (void *)(a3 + 8);
      v41 = (void *)(a3 + 8);
      goto LABEL_48;
    }
    if ( CmpGetValueData(
           *(_QWORD *)(v9 + 24),
           v46,
           a3,
           (unsigned int *)&v45,
           (__int64)&v40,
           (__int64)&v48,
           (__int64)v42) )
    {
      ValueDataFromCache = v40;
      v41 = v40;
      if ( v40 )
      {
LABEL_47:
        v23 = (unsigned int)Src;
LABEL_48:
        v12[2] = v26;
        if ( v27 >= v26 )
          v10 = v27 - v26;
        if ( v10 < v23 )
        {
          v23 = v10;
          v16 = -2147483643;
        }
        else
        {
          v16 = v47;
        }
        if ( ValueDataFromCache )
          memmove((char *)v12 + v26, ValueDataFromCache, v23);
        goto LABEL_20;
      }
    }
    else
    {
      ValueDataFromCache = 0LL;
      v41 = 0LL;
    }
    v47 = -1073741670;
    goto LABEL_47;
  }
  v14 = *(_DWORD *)(a3 + 4);
  if ( v14 >= 0x80000000 )
    v15 = v14 + 0x80000000;
  else
    v15 = *(_DWORD *)(a3 + 4);
  v16 = 0;
  *a7 = v15 + 12;
  v17 = a6;
  if ( a6 < 0xC )
  {
    v16 = -1073741789;
    goto LABEL_20;
  }
  *v12 = 0;
  v12[1] = *(_DWORD *)(a3 + 12);
  v12[2] = v15;
  v18 = v17 - 12;
  v19 = v15;
  if ( v18 < v15 )
  {
    v19 = v18;
    v16 = -2147483643;
  }
  if ( v15 )
  {
    if ( v14 >= 0x80000000 )
    {
      ValueDataFromCache = (void *)(a3 + 8);
      v41 = (void *)(a3 + 8);
    }
    else
    {
      if ( CmpGetValueData(
             *(_QWORD *)(v9 + 24),
             a2,
             a3,
             (unsigned int *)&v45,
             (__int64)&Src,
             (__int64)&v48,
             (__int64)v42) )
      {
        ValueDataFromCache = Src;
        v41 = Src;
        if ( Src )
        {
LABEL_13:
          memmove(v12 + 3, ValueDataFromCache, v19);
          goto LABEL_20;
        }
      }
      else
      {
        ValueDataFromCache = 0LL;
        v41 = 0LL;
      }
      v16 = -1073741670;
    }
    if ( !ValueDataFromCache )
      goto LABEL_20;
    goto LABEL_13;
  }
LABEL_20:
  if ( ValueDataFromCache && ValueDataFromCache != (void *)(a3 + 8) )
  {
    if ( v48 == 1 )
      ExFreePoolWithTag(ValueDataFromCache, 0);
    else
      (*(void (__fastcall **)(__int64, _DWORD *))(v44 + 16))(v44, v42);
  }
  return v16;
}
