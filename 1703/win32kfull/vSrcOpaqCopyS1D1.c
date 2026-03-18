/*
 * XREFs of vSrcOpaqCopyS1D1 @ 0x1C01371D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcOpaqCopyS1D1(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  unsigned __int32 v10; // r10d
  int v11; // esi
  unsigned int v12; // r14d
  __int64 v13; // r11
  int v14; // edi
  unsigned __int32 v16; // r9d
  unsigned int v17; // r12d
  _DWORD *v18; // r8
  unsigned int *v19; // rdx
  __int64 v20; // r13
  unsigned int *v21; // rbp
  __int64 v22; // r12
  unsigned int *v23; // rsi
  int v24; // ecx
  __int64 result; // rax
  __int64 v26; // rdi
  __int64 v27; // rbx
  unsigned int *v28; // r11
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rbx
  unsigned int *v32; // r11
  int v33; // r9d
  int v34; // r9d
  int v35; // ecx
  int v36; // ebx
  int v37; // ebx
  int v38; // edi
  int v39; // edi
  __int64 v40; // r14
  __int64 v41; // rbp
  unsigned int *v42; // r11
  unsigned int v43; // eax
  int v44; // r9d
  int v45; // ecx

  v10 = -1;
  v11 = a2 + a6 - a5;
  v12 = ((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F;
  v13 = a3;
  v14 = a10 & 1;
  v16 = -1;
  v17 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v16 = _byteswap_ulong(0xFFFFFFFF >> v17);
  if ( (((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F) != 0 )
    v10 = _byteswap_ulong(-1 << (32 - v12));
  v18 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v19 = (unsigned int *)(a1 + (((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v20 = v17;
  v21 = (unsigned int *)(a1 + (((__int64)v11 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v22 = v12;
  v23 = (unsigned int *)((char *)v19 + v13 * a8);
  v24 = (_DWORD)v21 - (_DWORD)v19;
  if ( (a9 & 1) == 0 )
  {
    if ( (a10 & 1) != 0 )
    {
      if ( v19 == v21 )
      {
        v34 = v10 & v16;
        do
        {
          result = *v18 & (unsigned int)~v34;
          v35 = v34 & ~*v19;
          v19 = (unsigned int *)((char *)v19 + v13);
          *v18 = result | v35;
          v18 = (_DWORD *)((char *)v18 + a7);
        }
        while ( v19 != v23 );
      }
      else
      {
        result = (unsigned int)(a7 - v24);
        v26 = (int)result;
        v27 = (int)v13 - v24;
        do
        {
          v28 = (unsigned int *)((char *)v19 + v24);
          if ( v20 )
          {
            result = *v18 & ~v16;
            *v18++ = result | v16 & ~*v19++;
          }
          while ( v19 != v28 )
          {
            v29 = *v19++;
            result = (unsigned int)~v29;
            *v18++ = result;
          }
          if ( v12 )
          {
            result = *v18 & ~v10;
            *v18 = result | v10 & ~*v19;
          }
          v19 = (unsigned int *)((char *)v19 + v27);
          v18 = (_DWORD *)((char *)v18 + v26);
        }
        while ( v19 != v23 );
      }
      return result;
    }
    goto LABEL_35;
  }
  if ( (a10 & 1) != 0 )
  {
LABEL_35:
    v36 = (unsigned __int8)-(v14 != (a9 & 1)) | ((unsigned __int8)-(v14 != (a9 & 1)) << 8);
    v37 = (v36 << 16) | v36;
    v38 = (unsigned __int8)-(v14 != 0) | ((unsigned __int8)-(v14 != 0) << 8);
    v39 = (v38 << 16) | v38;
    if ( v19 == v21 )
    {
      v44 = v10 & v16;
      do
      {
        result = *v18 & (unsigned int)~v44;
        v45 = v39 ^ v37 & *v19;
        v19 = (unsigned int *)((char *)v19 + v13);
        *v18 = result | v44 & v45;
        v18 = (_DWORD *)((char *)v18 + a7);
      }
      while ( v19 != v23 );
    }
    else
    {
      result = (unsigned int)(a7 - v24);
      v40 = (int)result;
      v41 = (int)v13 - v24;
      do
      {
        v42 = (unsigned int *)((char *)v19 + v24);
        if ( v20 )
        {
          result = *v18 & ~v16;
          *v18++ = result | v16 & (v39 ^ v37 & *v19++);
        }
        while ( v19 != v42 )
        {
          v43 = *v19++;
          result = v39 ^ v37 & v43;
          *v18++ = result;
        }
        if ( v22 )
        {
          result = *v18 & ~v10;
          *v18 = result | v10 & (v39 ^ v37 & *v19);
        }
        v19 = (unsigned int *)((char *)v19 + v41);
        v18 = (_DWORD *)((char *)v18 + v40);
      }
      while ( v19 != v23 );
    }
    return result;
  }
  if ( v19 == v21 )
  {
    v33 = v10 & v16;
    do
    {
      result = v33 & *v19;
      v19 = (unsigned int *)((char *)v19 + v13);
      *v18 = result | *v18 & ~v33;
      v18 = (_DWORD *)((char *)v18 + a7);
    }
    while ( v19 != v23 );
  }
  else
  {
    result = (unsigned int)(a7 - v24);
    v30 = (int)result;
    v31 = (int)v13 - v24;
    do
    {
      v32 = (unsigned int *)((char *)v19 + v24);
      if ( v20 )
      {
        result = v16 & *v19;
        *v18 = result | *v18 & ~v16;
        ++v18;
        ++v19;
      }
      while ( v19 != v32 )
      {
        result = *v19++;
        *v18++ = result;
      }
      if ( v12 )
      {
        result = v10 & *v19;
        *v18 = result | *v18 & ~v10;
      }
      v19 = (unsigned int *)((char *)v19 + v31);
      v18 = (_DWORD *)((char *)v18 + v30);
    }
    while ( v19 != v23 );
  }
  return result;
}
