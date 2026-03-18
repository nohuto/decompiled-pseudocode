/*
 * XREFs of ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0128540
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C012880C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D24(struct BLTINFO *a1)
{
  unsigned int v1; // r13d
  int v2; // edi
  __int64 v3; // r12
  unsigned __int16 *v4; // rsi
  __int64 v5; // r14
  unsigned int (*v6)(struct _XLATEOBJ *, unsigned int); // rbp
  __int64 v7; // r9
  int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // r13d
  __int64 (__fastcall *v11)(struct _XLATEOBJ *, unsigned int); // r8
  unsigned int v12; // ecx
  int v13; // r13d
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // ebx
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rax
  unsigned int v28; // [rsp+20h] [rbp-58h]
  unsigned int v29; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+88h] [rbp+10h]
  int v31; // [rsp+90h] [rbp+18h]
  unsigned int v32; // [rsp+98h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v31 = v2;
  v5 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v29 = *((_DWORD *)a1 + 10) - 2 * v1;
  v30 = *((_DWORD *)a1 + 11) - 3 * v1;
  v6 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v9 = v5 & 3;
  v32 = v9;
  if ( v9 > v1 )
  {
    v9 = v1;
    v32 = v1;
  }
  v10 = v1 - v9;
  v11 = iXlate555ToBGR;
  v12 = v10 >> 2;
  v28 = v10 >> 2;
  v13 = v10 & 3;
  while ( 1 )
  {
    v14 = v9;
    if ( v9 )
    {
      do
      {
        v27 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int)))v6)(
                v3,
                *v4,
                v11);
        *(_BYTE *)v5 = v27;
        ++v4;
        *(_BYTE *)(v5 + 1) = BYTE1(v27);
        *(_BYTE *)(v5 + 2) = BYTE2(v27);
        v5 += 3LL;
        --v14;
      }
      while ( v14 );
      v12 = v28;
      v11 = iXlate555ToBGR;
      v7 = v29;
      v8 = v30;
    }
    v15 = v12;
    if ( v12 )
    {
      do
      {
        v16 = *v4;
        if ( (char *)v6 == (char *)iXlate555ToBGR )
        {
          v17 = ((unsigned int)v16 >> 2) & 7 | (2
                                              * (v16 & 0x380 | (4
                                                              * (v16 & 0x1F | (2
                                                                             * (v16 & 0x7000 | (4
                                                                                              * (v16 & 0x3E0 | (8 * (v16 & 0x7C00))))))))));
        }
        else
        {
          v17 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                  v3,
                  v16,
                  iXlate555ToBGR,
                  v7);
          v11 = iXlate555ToBGR;
        }
        v18 = v4[1];
        if ( (char *)v6 == (char *)iXlate555ToBGR )
        {
          v19 = ((unsigned int)v18 >> 2) & 7 | (2
                                              * (v18 & 0x380 | (4
                                                              * (v18 & 0x1F | (2
                                                                             * (v18 & 0x7000 | (4
                                                                                              * (v18 & 0x3E0 | (8 * (v18 & 0x7C00))))))))));
        }
        else
        {
          v19 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                  v3,
                  v18,
                  iXlate555ToBGR,
                  v7);
          v11 = iXlate555ToBGR;
        }
        *(_DWORD *)v5 = v17 | (v19 << 24);
        v20 = v4[2];
        if ( (char *)v6 == (char *)iXlate555ToBGR )
        {
          v21 = ((unsigned int)v20 >> 2) & 7 | (2
                                              * (v20 & 0x380 | (4
                                                              * (v20 & 0x1F | (2
                                                                             * (v20 & 0x7000 | (4
                                                                                              * (v20 & 0x3E0 | (8 * (v20 & 0x7C00))))))))));
        }
        else
        {
          v21 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                  v3,
                  v20,
                  iXlate555ToBGR,
                  v7);
          v11 = iXlate555ToBGR;
        }
        *(_DWORD *)(v5 + 4) = (v21 << 16) | (v19 >> 8);
        v22 = v4[3];
        if ( (char *)v6 == (char *)iXlate555ToBGR )
        {
          v23 = ((unsigned int)v22 >> 2) & 7 | (2
                                              * (v22 & 0x380 | (4
                                                              * (v22 & 0x1F | (2
                                                                             * (v22 & 0x7000 | (4
                                                                                              * (v22 & 0x3E0 | (8 * (v22 & 0x7C00))))))))));
        }
        else
        {
          v23 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                  v3,
                  v22,
                  iXlate555ToBGR,
                  v7);
          v11 = iXlate555ToBGR;
        }
        v4 += 4;
        *(_DWORD *)(v5 + 8) = HIWORD(v21) | (v23 << 8);
        v5 += 12LL;
        --v15;
      }
      while ( v15 );
      v2 = v31;
      v7 = v29;
      v8 = v30;
    }
    v24 = v13;
    if ( v13 )
    {
      do
      {
        v25 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                v3,
                *v4,
                v11,
                v7);
        *(_BYTE *)v5 = v25;
        ++v4;
        *(_BYTE *)(v5 + 1) = BYTE1(v25);
        *(_BYTE *)(v5 + 2) = BYTE2(v25);
        v5 += 3LL;
        --v24;
      }
      while ( v24 );
      v7 = v29;
      v11 = iXlate555ToBGR;
      v8 = v30;
    }
    v26 = v2-- == 1;
    v31 = v2;
    if ( v26 )
      break;
    v12 = v28;
    v4 = (unsigned __int16 *)((char *)v4 + (int)v7);
    v5 += v8;
    v9 = v32;
  }
}
