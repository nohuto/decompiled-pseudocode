/*
 * XREFs of ?vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00D2690
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C012B20C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS24D32(struct BLTINFO *a1)
{
  int v1; // r12d
  XLATE *v2; // rsi
  int v3; // r15d
  int *v4; // rdi
  int v5; // r13d
  unsigned __int8 *v6; // rbx
  int v7; // r8d
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  unsigned int (*v11)(struct _XLATEOBJ *, unsigned int); // r14
  int v12; // ebp
  int v13; // [rsp+50h] [rbp+8h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (int *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  v5 = *((_DWORD *)a1 + 10) - 3 * v1;
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v7 = *((_DWORD *)a1 + 11) - 4 * v1;
  v13 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24LL) & 8) != 0
    && (*(_DWORD *)(*((_QWORD *)v2 + 6) + 24LL) & 8) != 0 )
  {
    while ( 1 )
    {
      v8 = v1;
      do
      {
        v9 = *v6;
        v10 = *(unsigned __int16 *)(v6 + 1) << 8;
        v6 += 3;
        *v4++ = v9 | v10;
        --v8;
      }
      while ( v8 );
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (int *)((char *)v4 + v7);
    }
  }
  else
  {
    v11 = XLATE::pfnXlateBetweenBitfields(v2);
    while ( 1 )
    {
      v12 = v1;
      do
      {
        *v4 = ((__int64 (__fastcall *)(XLATE *, _QWORD))v11)(v2, *v6 | (*(unsigned __int16 *)(v6 + 1) << 8));
        v6 += 3;
        ++v4;
        --v12;
      }
      while ( v12 );
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (int *)((char *)v4 + v13);
    }
  }
}
