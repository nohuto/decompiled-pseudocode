/*
 * XREFs of ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02A6800
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C012B20C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS24D16(struct BLTINFO *a1)
{
  int v1; // r14d
  XLATE *v2; // rbp
  int v3; // esi
  _WORD *v4; // rdi
  int v5; // r12d
  unsigned __int8 *v6; // rbx
  int v7; // r13d
  int v8; // ecx
  int v9; // r8d
  int v10; // r8d
  unsigned __int64 v11; // r9
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  int v15; // r8d
  int v16; // r8d
  unsigned __int64 v17; // r9
  int v18; // eax
  int v19; // edx
  __int64 (__fastcall *v20)(struct _XLATEOBJ *, unsigned int); // r13
  int v21; // r15d
  int v22; // [rsp+60h] [rbp+8h]
  __int64 (__fastcall *i)(struct _XLATEOBJ *, unsigned int); // [rsp+68h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  v5 = *((_DWORD *)a1 + 10) - 3 * v1;
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v7 = *((_DWORD *)a1 + 11) - 2 * v1;
  v22 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24LL) & 8) == 0 )
    goto LABEL_22;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 24LL);
  if ( (v8 & 0x400000) != 0 )
  {
    while ( 1 )
    {
      v9 = v1;
      if ( ((unsigned __int8)v4 & 2) != 0 )
      {
        v9 = v1 - 1;
        *v4++ = (*v6 >> 3) | (8 * (v6[1] & 0xFC | (32 * (v6[2] & 0xF8))));
        v6 += 3;
      }
      v10 = v9 - 2;
      if ( v10 >= 0 )
      {
        v11 = (unsigned __int64)(unsigned int)(v10 + 2) >> 1;
        v10 -= 2 * ((unsigned int)(v10 + 2) >> 1);
        do
        {
          v12 = v6[2] & 0xF8 | ((v6[4] & 0xFC) << 11);
          v13 = (8 * (v6[1] | ((v6[3] | (v6[5] << 11)) << 10))) & 0xF81F07E0;
          v14 = *v6;
          v6 += 6;
          *(_DWORD *)v4 = (v14 >> 3) | (v12 << 8) | v13;
          v4 += 2;
          --v11;
        }
        while ( v11 );
      }
      if ( (v10 & 1) != 0 )
      {
        *v4++ = (*v6 >> 3) | (8 * (v6[1] & 0xFC | (32 * (v6[2] & 0xF8))));
        v6 += 3;
      }
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (_WORD *)((char *)v4 + v7);
    }
    return;
  }
  if ( (v8 & 0x200000) == 0 )
  {
LABEL_22:
    v20 = XLATE::pfnXlateBetweenBitfields(v2);
    for ( i = v20; ; v20 = i )
    {
      v21 = v1;
      do
      {
        *v4 = v20((struct _XLATEOBJ *)v2, *v6 | (*(unsigned __int16 *)(v6 + 1) << 8));
        v6 += 3;
        ++v4;
        --v21;
      }
      while ( v21 );
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (_WORD *)((char *)v4 + v22);
    }
    return;
  }
  while ( 1 )
  {
    v15 = v1;
    if ( ((unsigned __int8)v4 & 2) != 0 )
    {
      v15 = v1 - 1;
      *v4++ = (*v6 >> 3) | (4 * (v6[1] & 0xF8 | (32 * (v6[2] & 0xF8))));
      v6 += 3;
    }
    v16 = v15 - 2;
    if ( v16 >= 0 )
    {
      v17 = (unsigned __int64)(unsigned int)(v16 + 2) >> 1;
      v16 -= 2 * ((unsigned int)(v16 + 2) >> 1);
      do
      {
        v18 = *v6 >> 3;
        v19 = 4
            * ((v6[1] | (v6[3] << 11)) & 0x1F07C0F8 | (32
                                                     * (((v6[5] & 0xF8) << 16) | (v6[2] | ((v6[4] & 0xF8) << 11)) & 0x7C0F8)));
        v6 += 6;
        *(_DWORD *)v4 = v18 | v19;
        v4 += 2;
        --v17;
      }
      while ( v17 );
    }
    if ( (v16 & 1) != 0 )
    {
      *v4++ = (*v6 >> 3) | (4 * (v6[1] & 0xF8 | (32 * (v6[2] & 0xF8))));
      v6 += 3;
    }
    if ( !--v3 )
      break;
    v6 += v5;
    v4 = (_WORD *)((char *)v4 + v7);
  }
}
