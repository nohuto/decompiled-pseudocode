/*
 * XREFs of ?vComputeSubspaces@@YAPEAU_VERTEX_DATA@@KPEAU1@@Z @ 0x1C0267738
 * Callers:
 *     EngDitherColor @ 0x1C0267F80 (EngDitherColor.c)
 * Callees:
 *     <none>
 */

struct _VERTEX_DATA *__fastcall vComputeSubspaces(unsigned int a1, struct _VERTEX_DATA *a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // r10d
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // edi
  unsigned int v12; // r11d
  unsigned int v13; // esi
  int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // r11d
  int v17; // r9d
  __int64 v18; // rax
  int v19; // esi
  unsigned int v20; // r11d
  unsigned int v21; // ebx
  unsigned int v22; // r9d
  int v23; // ebx
  int v24; // r11d
  int v25; // edi
  unsigned int v26; // r9d
  int v27; // ebx
  int v28; // r11d
  int v29; // edi
  unsigned int v30; // r9d

  v2 = (unsigned __int8)a1;
  v3 = 0;
  v4 = a1 >> 8;
  v5 = BYTE2(a1);
  v6 = (unsigned __int8)v4;
  if ( v5 > v2 )
  {
    v7 = v5;
    v3 = 4;
    v5 = v2;
    v2 = v7;
  }
  if ( v5 > v6 )
  {
    v8 = v5;
    v3 |= 2u;
    v5 = v6;
    v6 = v8;
  }
  if ( v6 > v2 )
  {
    v9 = v6;
    v3 |= 1u;
    v6 = v2;
    v2 = v9;
  }
  v10 = (unsigned int)(16 * v3);
  v11 = (v6 + 1) >> 2;
  v12 = (v2 + 1) >> 2;
  v13 = (v5 + 1) >> 2;
  if ( v6 + v2 <= 0x100 )
  {
    if ( v2 <= 0x80 )
    {
      v27 = 2 * (32 - v12);
      if ( v27 )
      {
        *((_DWORD *)a2 + 1) = jSwapSubSpace[v10];
        *(_DWORD *)a2 = v27;
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v28 = 2 * (v12 - v11);
      if ( v28 )
      {
        *(_DWORD *)a2 = v28;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 1)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v29 = 2 * v13;
      v30 = 64 - v28 - 2 * v13 - v27;
      if ( v30 )
      {
        *(_DWORD *)a2 = v30;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 3)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v29 )
      {
        *(_DWORD *)a2 = v29;
        v18 = (unsigned int)(v10 + 7);
        goto LABEL_42;
      }
    }
    else
    {
      v23 = 2 * (64 - v11 - v12);
      if ( v23 )
      {
        *(_DWORD *)a2 = v23;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 1)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v24 = 2 * v12 - 64;
      v25 = 2 * v13;
      v26 = 64 - v24 - 2 * v13 - v23;
      if ( v26 )
      {
        *(_DWORD *)a2 = v26;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 3)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v25 )
      {
        *(_DWORD *)a2 = v25;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 7)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v24 )
      {
        *(_DWORD *)a2 = v24;
        v18 = (unsigned int)(v10 + 9);
        goto LABEL_42;
      }
    }
  }
  else if ( v5 + v2 <= 0x100 )
  {
    v19 = 2 * v13;
    v20 = v11 + v12 - 64;
    v21 = ((v2 + 1) >> 2) - v11;
    v22 = 64 - v19 - v20 - v21;
    if ( v22 )
    {
      *(_DWORD *)a2 = v22;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 3)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v19 )
    {
      *(_DWORD *)a2 = v19;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 7)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v21 )
    {
      *(_DWORD *)a2 = v21;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 9)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v20 )
    {
      *(_DWORD *)a2 = v20;
      v18 = (unsigned int)(v10 + 11);
      goto LABEL_42;
    }
  }
  else
  {
    v14 = 2 * (64 - v12);
    if ( v14 )
    {
      *(_DWORD *)a2 = v14;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 7)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    v15 = v11 - v13;
    v16 = v13 + v12 - 64;
    v17 = 64 - v16 - v15 - v14;
    if ( v17 )
    {
      *(_DWORD *)a2 = v17;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 9)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v15 )
    {
      *(_DWORD *)a2 = v15;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v10 + 11)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v16 )
    {
      *(_DWORD *)a2 = v16;
      v18 = (unsigned int)(v10 + 15);
LABEL_42:
      *((_DWORD *)a2 + 1) = jSwapSubSpace[v18];
      return (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
  }
  return a2;
}
