/*
 * XREFs of ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C007CEAC
 * Callers:
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C0098288 (MNIsOwnerDrawItem.c)
 *     IsMDIItem @ 0x1C0218A20 (IsMDIItem.c)
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
  int v12; // ebp
  int v13; // r11d
  __int64 v14; // rsi
  __int64 v15; // r14
  _DWORD *i; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r12d
  int v20; // edi
  __int64 v21; // r10
  unsigned int v22; // r15d
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  unsigned int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8

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
            v11 = MNIsOwnerDrawItem(v4, v8, v3);
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
      v14 = (int)v2 - 1;
      v15 = 152 * v14;
      for ( i = (_DWORD *)(152 * v14 + v5); ; i = (_DWORD *)(v5 + 152LL * v13) )
      {
        if ( v13 <= v12 )
        {
LABEL_24:
          v18 = *((_DWORD *)v4 + 18);
          v19 = v18;
          v20 = *(_DWORD *)(v5 + 76);
          v21 = 152LL * v12;
          v22 = *(_DWORD *)(v21 + v5 + 72);
          if ( v14 > v13 )
          {
            v23 = v14 - v13;
            do
            {
              v24 = *((_QWORD *)v4 + 12);
              v18 -= *(_DWORD *)(v15 + v24 + 80);
              *(_DWORD *)(v15 + v24 + 72) = v18;
              *(_DWORD *)(v15 + v24 + 76) = v20;
              v15 -= 152LL;
              --v23;
            }
            while ( v23 );
          }
          if ( v12 <= (__int64)v13 )
          {
            v25 = v13 - (__int64)v12 + 1;
            do
            {
              v26 = *((_QWORD *)v4 + 12);
              v27 = *(_DWORD *)(v21 + v26 + 80);
              v18 -= v27;
              if ( v18 <= v22 )
              {
                v22 = v3;
                v18 = v19 - v27;
                v20 += *(_DWORD *)(v21 + v26 + 84);
              }
              *(_DWORD *)(v21 + v26 + 72) = v18;
              *(_DWORD *)(v21 + v26 + 76) = v20;
              v21 += 152LL;
              --v25;
            }
            while ( v25 );
          }
          return;
        }
        if ( v10 )
        {
          v17 = IsMDIItem(i, a2, v3);
        }
        else
        {
          if ( (*i & 4) != 0 )
            goto LABEL_22;
          v17 = MNIsOwnerDrawItem(v4, i, v3);
        }
        if ( !v17 )
          goto LABEL_24;
LABEL_22:
        --v13;
      }
    }
  }
  if ( (int)v2 <= 0 )
    return;
  v28 = 0LL;
  while ( (*(_DWORD *)v8 & 0x4000) == 0 )
  {
    LODWORD(v3) = v3 + 1;
    ++v28;
    v8 += 152LL;
    if ( v28 >= v2 )
      return;
  }
  v29 = *((_DWORD *)v4 + 18) + *(_DWORD *)(v5 + 72);
  if ( (int)v2 - 1 >= (__int64)(int)v3 )
  {
    v30 = 152LL * ((int)v2 - 1);
    v31 = (int)v2 - 1 - (__int64)(int)v3 + 1;
    do
    {
      v32 = *((_QWORD *)v4 + 12);
      v29 -= *(_DWORD *)(v30 + v32 + 80);
      if ( *(_DWORD *)(v30 + v32 + 72) < v29 )
        *(_DWORD *)(v30 + v32 + 72) = v29;
      v30 -= 152LL;
      --v31;
    }
    while ( v31 );
  }
}
