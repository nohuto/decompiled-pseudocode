/*
 * XREFs of ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C000E718
 * Callers:
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C0042E88 (MNIsOwnerDrawItem.c)
 *     IsMDIItem @ 0x1C021789C (IsMDIItem.c)
 */

void __fastcall MBC_RightJustifyMenu(struct tagMENU *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  struct tagMENU *v4; // r9
  __int64 v5; // rbx
  int v6; // r11d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  int v12; // esi
  int v13; // r10d
  int v14; // r11d
  __int64 i; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // r14d
  int v20; // edi
  unsigned int v21; // ebp
  __int64 v22; // rbx
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r10
  int v28; // ebx
  __int64 v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8

  v2 = *((int *)a1 + 17);
  v3 = 0LL;
  v4 = a1;
  if ( !(_DWORD)v2 )
    return;
  v5 = *((_QWORD *)a1 + 12);
  v6 = 0;
  v7 = *((_DWORD *)a1 + 14);
  v8 = v5;
  if ( (v7 & 0x20) != 0 )
  {
    v9 = *((_QWORD *)v4 + 11);
    if ( v9 )
    {
      v10 = *(_BYTE *)(v9 + 61) & 2;
      if ( (int)v2 > 0 )
      {
        while ( !v10 )
        {
          if ( (*(_DWORD *)v8 & 4) == 0 )
          {
            v11 = MNIsOwnerDrawItem(v4, v8);
            goto LABEL_12;
          }
          if ( *(_QWORD *)(v8 + 104) > 0xCuLL )
            goto LABEL_14;
LABEL_13:
          v8 = v5 + 152LL * ++v6;
          if ( v6 >= (int)v2 )
            goto LABEL_14;
        }
        if ( v6 )
          goto LABEL_14;
        v11 = IsMDIItem(v8, a2, v3);
LABEL_12:
        if ( !v11 )
          goto LABEL_14;
        goto LABEL_13;
      }
LABEL_14:
      v12 = v6 - 1;
      if ( v6 != (_DWORD)v2 )
        v12 = v6;
      v13 = v2 - 1;
      v14 = v13;
      for ( i = 152LL * v13; ; i = 152LL * v14 )
      {
        v17 = (_DWORD *)(v5 + i);
        if ( v14 <= v12 )
        {
LABEL_24:
          v18 = *((_DWORD *)v4 + 18);
          v19 = v18;
          v20 = *(_DWORD *)(v5 + 76);
          v21 = *(_DWORD *)(152LL * v12 + v5 + 72);
          if ( v13 > (__int64)v14 )
          {
            v22 = 152LL * v13;
            v23 = v13 - (__int64)v14;
            do
            {
              v24 = *((_QWORD *)v4 + 12);
              v18 -= *(_DWORD *)(v22 + v24 + 80);
              *(_DWORD *)(v22 + v24 + 72) = v18;
              *(_DWORD *)(v22 + v24 + 76) = v20;
              v22 -= 152LL;
              --v23;
            }
            while ( v23 );
          }
          if ( v12 <= (__int64)v14 )
          {
            v25 = 152LL * v12;
            v26 = v14 - (__int64)v12 + 1;
            do
            {
              v27 = *((_QWORD *)v4 + 12);
              v28 = *(_DWORD *)(v25 + v27 + 80);
              v18 -= v28;
              if ( v18 <= v21 )
              {
                v21 = v3;
                v18 = v19 - v28;
                v20 += *(_DWORD *)(v25 + v27 + 84);
              }
              *(_DWORD *)(v25 + v27 + 72) = v18;
              *(_DWORD *)(v25 + v27 + 76) = v20;
              v25 += 152LL;
              --v26;
            }
            while ( v26 );
          }
          return;
        }
        if ( v10 )
        {
          v16 = IsMDIItem(v17, a2, v3);
        }
        else
        {
          if ( (*v17 & 4) != 0 )
            goto LABEL_22;
          v16 = MNIsOwnerDrawItem(v4, v17);
        }
        if ( !v16 )
          goto LABEL_24;
LABEL_22:
        --v14;
      }
    }
  }
  if ( (int)v2 <= 0 )
    return;
  v29 = 0LL;
  while ( (*(_DWORD *)v8 & 0x4000) == 0 )
  {
    LODWORD(v3) = v3 + 1;
    ++v29;
    v8 += 152LL;
    if ( v29 >= v2 )
      return;
  }
  v30 = *((_DWORD *)v4 + 18) + *(_DWORD *)(v5 + 72);
  if ( (int)v2 - 1 >= (__int64)(int)v3 )
  {
    v31 = 152LL * ((int)v2 - 1);
    v32 = (int)v2 - 1 - (__int64)(int)v3 + 1;
    do
    {
      v33 = *((_QWORD *)v4 + 12);
      v30 -= *(_DWORD *)(v31 + v33 + 80);
      if ( *(_DWORD *)(v31 + v33 + 72) < v30 )
        *(_DWORD *)(v31 + v33 + 72) = v30;
      v31 -= 152LL;
      --v32;
    }
    while ( v32 );
  }
}
