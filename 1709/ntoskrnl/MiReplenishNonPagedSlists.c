/*
 * XREFs of MiReplenishNonPagedSlists @ 0x1400C2980
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x1400C1F00 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
 *     MiAllocatingNonPagedPoolVa @ 0x1400C2F94 (MiAllocatingNonPagedPoolVa.c)
 *     InterlockedPushListSList @ 0x140189020 (InterlockedPushListSList.c)
 */

__int64 __fastcall MiReplenishNonPagedSlists(
        __int128 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r12
  unsigned int Alignment_low; // r8d
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int16 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // r14
  _SLIST_ENTRY *v14; // rsi
  _SLIST_ENTRY *v15; // rax
  unsigned int v16; // r10d
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r11
  __int64 v23; // r9
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rbx
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 *v29; // rdx
  unsigned int v30; // r9d
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  bool v33; // sf
  __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned __int64 v42; // r10
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r8
  unsigned __int64 v49; // rbx
  _SLIST_ENTRY *v50; // [rsp+20h] [rbp-88h]
  _SLIST_ENTRY *v51; // [rsp+28h] [rbp-80h]
  unsigned __int64 v52; // [rsp+30h] [rbp-78h]
  _SLIST_HEADER *v53; // [rsp+38h] [rbp-70h]
  _SLIST_ENTRY *v54; // [rsp+40h] [rbp-68h]
  _SLIST_ENTRY *v55; // [rsp+48h] [rbp-60h]
  _SLIST_HEADER *ListHead; // [rsp+50h] [rbp-58h]
  __int128 v57; // [rsp+58h] [rbp-50h] BYREF
  __int16 v58; // [rsp+B8h] [rbp+10h]
  __int64 v60; // [rsp+D0h] [rbp+28h]

  v6 = a4;
  v53 = &qword_140388510[25 * a2];
  ListHead = &v53[a5 + 3];
  Alignment_low = LOWORD(ListHead->Alignment);
  if ( Alignment_low >= (unsigned int)dword_140388008[a5 - 1] >> 1 )
    return 0LL;
  v9 = a4 & 0xFFFFFFFFFFFFFE00uLL;
  v57 = *a1;
  v52 = a4 & 0xFFFFFFFFFFFFFE00uLL;
  if ( a4 + 2 * a5 > (unsigned __int64)v57 + (a4 & 0xFFFFFFFFFFFFFE00uLL) )
    return 0LL;
  v10 = v57 - v9;
  v11 = LOWORD(dword_140388008[a5 - 1]) - Alignment_low;
  *((_QWORD *)&v57 + 1) += 8 * (v9 >> 6);
  if ( (unsigned __int64)v57 - v9 > 0x200 )
    v10 = 512LL;
  v12 = 0LL;
  v13 = 0LL;
  v60 = 0LL;
  v14 = 0LL;
  *(_QWORD *)&v57 = v10;
  v15 = 0LL;
  while ( 2 )
  {
    v51 = v15;
    v16 = 64;
    v50 = v14;
    v58 = v11;
    v55 = v15;
    v54 = v14;
    if ( !v11 )
      goto LABEL_90;
    v17 = v6;
    if ( v6 >= (unsigned __int64)v57 )
      v17 = 0LL;
    v18 = v57 - 1;
    if ( !a5 )
    {
      v19 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_85;
    }
    while ( 1 )
    {
      if ( v18 - v17 + 1 < a5 )
        goto LABEL_14;
      v21 = v18 - a5 + 1;
      v22 = *((_QWORD *)&v57 + 1) + 8 * (v21 >> 6);
      v23 = *(_QWORD *)(*((_QWORD *)&v57 + 1) + 8 * (v17 >> 6)) | ((1LL << (v17 & 0x3F)) - 1);
      v24 = (unsigned __int64 *)(*((_QWORD *)&v57 + 1) + 8 * (v17 >> 6));
      if ( a5 <= 0x7F )
      {
        if ( a5 < 0x40 )
        {
          if ( a5 > 1 )
          {
            v38 = 0LL;
            v39 = *((_QWORD *)&v57 + 1) + 8 * (v18 >> 6);
            while ( v23 != -1 )
            {
LABEL_65:
              v26 = !_BitScanForward64((unsigned __int64 *)&v40, v23);
              if ( v26 )
                LODWORD(v40) = 64;
              if ( (unsigned int)(v38 + v40) >= a5 )
              {
                v43 = -v38;
LABEL_77:
                v45 = ((__int64)v24 - *((_QWORD *)&v57 + 1)) >> 3 << 6;
                goto LABEL_78;
              }
              v41 = a5;
              v42 = ~v23;
              while ( 1 )
              {
                v42 &= v42 >> (v41 >> 1);
                if ( !v42 )
                  break;
                v41 -= v41 >> 1;
                if ( v41 <= 1 )
                {
                  _BitScanForward64((unsigned __int64 *)&v43, v42);
                  goto LABEL_77;
                }
              }
              if ( v24 == (unsigned __int64 *)v39 )
                goto LABEL_14;
              v26 = !_BitScanReverse64((unsigned __int64 *)&v44, v23);
              v23 = v24[1];
              if ( v26 )
              {
                ++v24;
                v38 = 64LL;
              }
              else
              {
                v38 = (unsigned int)(63 - v44);
                ++v24;
              }
            }
            while ( 1 )
            {
              if ( (unsigned __int64)++v24 > v22 )
                goto LABEL_14;
              v23 = *v24;
              if ( *v24 != -1LL )
              {
                v38 = 0LL;
                goto LABEL_65;
              }
            }
          }
          if ( v23 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v24 > v22 )
                goto LABEL_14;
              v23 = *v24;
            }
            while ( *v24 == -1LL );
          }
          _BitScanForward64(&v46, ~v23);
          v47 = ((__int64)v24 - *((_QWORD *)&v57 + 1)) >> 3;
          v45 = (unsigned int)v46;
          v43 = v47 << 6;
LABEL_78:
          v20 = v45 + v43;
          if ( v20 > v21 )
          {
            v20 = -1LL;
            goto LABEL_37;
          }
        }
        else
        {
          while ( 2 )
          {
            v33 = v23 < 0;
            while ( 1 )
            {
              if ( v33 )
              {
                do
                {
                  if ( (unsigned __int64)++v24 > v22 )
                    goto LABEL_14;
                  v23 = *v24;
                }
                while ( (*v24 & 0x8000000000000000uLL) != 0LL );
              }
              v26 = !_BitScanReverse64((unsigned __int64 *)&v34, v23);
              if ( v26 )
                v35 = 64;
              else
                v35 = 63 - v34;
              v20 = (((((__int64)v24 - *((_QWORD *)&v57 + 1)) >> 3) + 1) << 6) - v35;
              if ( v20 > v21 )
                goto LABEL_14;
              v36 = a5 - v35;
              if ( a5 == v35 )
                goto LABEL_36;
              v23 = v24[1];
              ++v24;
              if ( v36 < 0x40 )
                break;
              v33 = v23 < 0;
              if ( !v23 )
              {
                v36 -= 64LL;
                if ( !v36 )
                  goto LABEL_36;
                v23 = v24[1];
                ++v24;
                break;
              }
            }
            v26 = !_BitScanForward64(&v37, v23);
            if ( v26 )
              v37 = 64LL;
            if ( v37 < v36 )
              continue;
            break;
          }
        }
      }
      else
      {
        v25 = v22 + 8;
        if ( (v21 & 0x3F) == 0 )
          v25 = *((_QWORD *)&v57 + 1) + 8 * ((v18 - a5 + 1) >> 6);
        if ( v23 )
        {
          if ( *++v24 )
            goto LABEL_24;
          v26 = !_BitScanReverse64((unsigned __int64 *)&v27, v23);
          if ( !v26 )
            v16 = 63 - v27;
        }
        else
        {
          v16 = 0;
        }
LABEL_28:
        v20 = (((__int64)v24 - *((_QWORD *)&v57 + 1)) >> 3 << 6) - v16;
        if ( v20 > v21 )
          goto LABEL_14;
        v29 = &v24[(a5 - v16) >> 6];
        for ( ++v24; v24 != v29; ++v24 )
        {
          if ( *v24 )
          {
            v16 = 64;
            goto LABEL_24;
          }
        }
        v30 = ((_BYTE)a5 - (_BYTE)v16) & 0x3F;
        if ( (((_BYTE)a5 - (_BYTE)v16) & 0x3F) != 0 )
        {
          v16 = 64;
          v26 = !_BitScanForward64((unsigned __int64 *)&v31, *v24);
          if ( v26 )
            LODWORD(v31) = 64;
          if ( (unsigned int)v31 < v30 )
          {
LABEL_24:
            while ( (unsigned __int64)v24 <= v25 )
            {
              if ( !*++v24 )
              {
                v26 = !_BitScanReverse64((unsigned __int64 *)&v28, *(v24 - 1));
                if ( !v26 )
                  v16 = 63 - v28;
                goto LABEL_28;
              }
            }
LABEL_14:
            v20 = -1LL;
            goto LABEL_37;
          }
        }
      }
LABEL_36:
      if ( v20 != -1LL )
        break;
LABEL_37:
      if ( !v17 )
        break;
      v32 = v6 + a5;
      v17 = 0LL;
      v16 = 64;
      if ( v6 + a5 > (unsigned __int64)v57 )
        v32 = v57;
      v18 = v32 - 1;
    }
    v15 = v51;
    v19 = v20;
    v14 = v50;
    v9 = v52;
LABEL_85:
    if ( v19 != -1LL )
    {
      RtlSetBitsEx(&v57, v19, a5);
      v48 = a3 + v19 + v9;
      v49 = v53[20].Alignment + (v48 << 12);
      MiAllocatingNonPagedPoolVa(v53, 0LL, v48, a5);
      v6 = v19 + a5;
      v13 = v60 + 1;
      *(_QWORD *)v49 = v49 ^ qword_140389280;
      v15 = (_SLIST_ENTRY *)(v49 + 16);
      v9 = v52;
      v15->Next = v14;
      v11 = v58 - 1;
      v14 = v15;
      ++v60;
      if ( v54 )
        v15 = v55;
      continue;
    }
    break;
  }
  v13 = v60;
LABEL_90:
  if ( v14 )
  {
    InterlockedPushListSList(ListHead, v14, v15, v13);
    return a5 * v13;
  }
  return v12;
}
