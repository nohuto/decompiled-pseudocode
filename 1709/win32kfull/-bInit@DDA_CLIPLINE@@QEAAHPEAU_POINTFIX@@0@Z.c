/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C012FA60
 * Callers:
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C012C3F8 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C012F5CC (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, struct _POINTFIX *a2, struct _POINTFIX *a3)
{
  int v3; // r11d
  FIX x; // r10d
  FIX v7; // eax
  bool v8; // sf
  FIX y; // r8d
  FIX v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  int v14; // r15d
  int v15; // r10d
  int v16; // eax
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r14
  int v21; // r13d
  __int64 v22; // r12
  int v23; // ebp
  unsigned int v24; // esi
  signed int v25; // edi
  int v26; // ebx
  signed int v27; // ebx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rax
  int v31; // ecx
  __int64 result; // rax
  FIX v33; // eax

  v3 = 0;
  *(_DWORD *)this = 0;
  x = a2->x;
  v7 = a3->x;
  *((_DWORD *)this + 4) = a3->x;
  if ( v7 < x )
  {
    x = -x;
    *(_DWORD *)this = 32;
    *((_DWORD *)this + 4) = -v7;
  }
  v8 = *((_DWORD *)this + 4) - x < 0;
  *((_DWORD *)this + 4) -= x;
  if ( v8 )
    return 0LL;
  y = a2->y;
  v10 = a3->y;
  *((_DWORD *)this + 3) = v10;
  if ( v10 < y )
  {
    y = -y;
    *(_DWORD *)this |= 8u;
    *((_DWORD *)this + 3) = -v10;
  }
  v8 = *((_DWORD *)this + 3) - y < 0;
  *((_DWORD *)this + 3) -= y;
  v11 = *((_DWORD *)this + 3);
  if ( v8 )
    return 0LL;
  v12 = *((_DWORD *)this + 4);
  if ( v11 >= v12 )
  {
    if ( v11 == v12 )
    {
      *(_DWORD *)this |= 0x10u;
    }
    else
    {
      *(_DWORD *)this |= 5u;
      *((_DWORD *)this + 4) = v11;
      v33 = x;
      x = y;
      *((_DWORD *)this + 3) = v12;
      y = v33;
    }
  }
  v13 = *((int *)this + 3);
  v14 = *(_DWORD *)this | gaflRound[(*(_DWORD *)this >> 2) & 0xF];
  *((_DWORD *)this + 1) = x >> 4;
  v15 = x & 0xF;
  v16 = y >> 4;
  v17 = y & 0xF;
  *((_DWORD *)this + 2) = v16;
  v18 = *((int *)this + 4);
  *(_DWORD *)this = v14;
  v19 = v18 * (unsigned int)(v17 + 8) - v13 * (unsigned int)v15;
  *((_QWORD *)this + 3) = v19;
  if ( (v14 & 0x8000) != 0 )
    *((_QWORD *)this + 3) = v19 - 1;
  *((__int64 *)this + 3) >>= 4;
  v20 = *((unsigned int *)this + 4);
  v21 = v13;
  v22 = *((_QWORD *)this + 3);
  v23 = ((_BYTE)v17 + (_BYTE)v13) & 0xF;
  v24 = (unsigned int)(v20 + v15) >> 4;
  v25 = v24 - 1;
  v26 = ((_BYTE)v20 + (_BYTE)v15) & 0xF;
  if ( (((_BYTE)v20 + (_BYTE)v15) & 0xF) != 0 )
  {
    if ( v23 )
    {
      if ( (int)abs32(v23 - 8) <= v26 )
        v25 = (unsigned int)(v20 + v15) >> 4;
    }
    else
    {
      if ( v26 - (unsigned int)((v14 & 0x80) != 0) + 8 < 0x10 )
        --v24;
      v25 = v24;
    }
  }
  if ( (v14 & 0x90) != 0x90 )
    goto LABEL_12;
  if ( (((_BYTE)v20 + (_BYTE)v15) & 0xF) != 0 && v23 == v26 + 8 )
    --v25;
  if ( v15 && v17 == v15 + 8 )
  {
    v27 = 0;
  }
  else
  {
LABEL_12:
    v27 = 0;
    if ( v15 )
    {
      if ( v17 )
        v27 = (int)abs32(v17 - 8) <= v15;
      else
        LOBYTE(v27) = v15 - (unsigned int)((v14 & 0x80) != 0) + 8 >= 0x10;
    }
  }
  if ( v22 >= 0 && (unsigned int)v22 >= (unsigned int)v20 - (v21 & -v27) )
    v3 = 1;
  if ( v25 < v27 )
    return 0LL;
  v28 = *((_DWORD *)this + 1);
  v29 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v28 + v27;
  *((_DWORD *)this + 10) = v28 + v25;
  *((_DWORD *)this + 9) = v29 + v3;
  v30 = v22 + v25 * (__int64)v21;
  if ( v30 >= 0xFFFFFFFFLL )
    v30 /= v20;
  else
    LODWORD(v30) = (unsigned int)v30 / (unsigned int)v20;
  v31 = v29 + v30;
  result = 1LL;
  *((_DWORD *)this + 11) = v31;
  return result;
}
