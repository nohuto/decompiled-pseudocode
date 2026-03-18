/*
 * XREFs of ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02A5EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C012B20C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D16(XLATE **a1)
{
  XLATE *v1; // r14
  int v2; // r12d
  int v3; // ebp
  int v4; // r9d
  _WORD *v5; // rdi
  int v6; // r13d
  _WORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  int v12; // r8d
  unsigned __int64 v13; // r9
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // edx
  int v17; // edx
  unsigned __int64 v18; // r8
  int v19; // eax
  int v20; // ecx
  __int64 (__fastcall *v21)(struct _XLATEOBJ *, unsigned int); // r15
  int v22; // esi
  int v23; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *((_DWORD *)a1 + 11) - 2 * v2;
  v5 = (_WORD *)((char *)a1[1] + 2 * *((_DWORD *)a1 + 12));
  v6 = *((_DWORD *)a1 + 10) - 2 * v2;
  v7 = (_WORD *)((char *)a1[2] + 2 * *((_DWORD *)a1 + 14));
  v8 = *((_QWORD *)*a1 + 5);
  v9 = *((_QWORD *)*a1 + 6);
  v23 = v4;
  v10 = *(_DWORD *)(v8 + 24);
  if ( (v10 & 0x200000) != 0 && (*(_DWORD *)(v9 + 24) & 0x400000) != 0 )
  {
    while ( 1 )
    {
      v11 = v2;
      if ( ((unsigned __int8)v7 & 2) != 0 )
      {
        v11 = v2 - 1;
        *v7++ = *v5 & 0x1F | (2 * (*v5 & 0xFFE0)) | (*v5 >> 4) & 0x20;
        ++v5;
      }
      v12 = v11 - 2;
      if ( v12 >= 0 )
      {
        v13 = (unsigned __int64)(unsigned int)(v12 + 2) >> 1;
        v12 -= 2 * ((unsigned int)(v12 + 2) >> 1);
        do
        {
          v14 = *(_DWORD *)v5 & 0x1F001F;
          v15 = (2 * (*(_DWORD *)v5 & 0xFFE07FE0)) | (*(_DWORD *)v5 >> 4) & 0x200020;
          v5 += 2;
          *(_DWORD *)v7 = v14 | v15;
          v7 += 2;
          --v13;
        }
        while ( v13 );
        v4 = v23;
      }
      if ( (v12 & 1) != 0 )
      {
        *v7++ = *v5 & 0x1F | (2 * (*v5 & 0xFFE0)) | (*v5 >> 4) & 0x20;
        ++v5;
      }
      if ( !--v3 )
        break;
      v5 = (_WORD *)((char *)v5 + v6);
      v7 = (_WORD *)((char *)v7 + v4);
    }
  }
  else if ( (v10 & 0x400000) != 0 && (*(_DWORD *)(v9 + 24) & 0x200000) != 0 )
  {
    while ( 1 )
    {
      v16 = v2;
      if ( ((unsigned __int8)v7 & 2) != 0 )
      {
        v16 = v2 - 1;
        *v7++ = *v5 & 0x1F | (*v5 >> 1) & 0x7FE0;
        ++v5;
      }
      v17 = v16 - 2;
      if ( v17 >= 0 )
      {
        v18 = (unsigned __int64)(unsigned int)(v17 + 2) >> 1;
        v17 -= 2 * ((unsigned int)(v17 + 2) >> 1);
        do
        {
          v19 = *(_DWORD *)v5 & 0x1F001F;
          v20 = (*(_DWORD *)v5 >> 1) & 0x7FE07FE0;
          v5 += 2;
          *(_DWORD *)v7 = v19 | v20;
          v7 += 2;
          --v18;
        }
        while ( v18 );
      }
      if ( (v17 & 1) != 0 )
      {
        *v7++ = *v5 & 0x1F | (*v5 >> 1) & 0x7FE0;
        ++v5;
      }
      if ( !--v3 )
        break;
      v5 = (_WORD *)((char *)v5 + v6);
      v7 = (_WORD *)((char *)v7 + v4);
    }
  }
  else
  {
    v21 = XLATE::pfnXlateBetweenBitfields(v1);
    while ( 1 )
    {
      v22 = v2;
      do
      {
        *v7++ = v21((struct _XLATEOBJ *)v1, (unsigned __int16)*v5++);
        --v22;
      }
      while ( v22 );
      if ( !--v3 )
        break;
      v5 = (_WORD *)((char *)v5 + v6);
      v7 = (_WORD *)((char *)v7 + v23);
    }
  }
}
