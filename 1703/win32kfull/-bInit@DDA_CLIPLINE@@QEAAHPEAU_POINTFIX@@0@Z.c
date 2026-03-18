/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C0129C50
 * Callers:
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C0123BEC (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C0129940 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
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
  int v13; // r14d
  int v14; // r10d
  int v15; // eax
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r15d
  int v20; // r12d
  __int64 v21; // r13
  unsigned int v22; // esi
  int v23; // ebp
  signed int v24; // edi
  int v25; // ebx
  signed int v26; // ebx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  int v30; // ecx
  __int64 result; // rax
  FIX v32; // eax

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
      v32 = x;
      x = y;
      *((_DWORD *)this + 3) = v12;
      y = v32;
    }
  }
  v13 = *(_DWORD *)this | gaflRound[(*(_DWORD *)this >> 2) & 0xF];
  *((_DWORD *)this + 1) = x >> 4;
  v14 = x & 0xF;
  v15 = y >> 4;
  v16 = y & 0xF;
  *((_DWORD *)this + 2) = v15;
  v17 = *((int *)this + 4);
  *(_DWORD *)this = v13;
  v18 = v17 * (unsigned int)(v16 + 8) - (unsigned int)v14 * (__int64)*((int *)this + 3);
  *((_QWORD *)this + 3) = v18;
  if ( (v13 & 0x8000) != 0 )
    *((_QWORD *)this + 3) = v18 - 1;
  *((__int64 *)this + 3) >>= 4;
  v19 = *((_DWORD *)this + 4);
  v20 = *((_DWORD *)this + 3);
  v21 = *((_QWORD *)this + 3);
  v22 = (unsigned int)(v19 + v14) >> 4;
  v23 = ((_BYTE)v20 + (_BYTE)v16) & 0xF;
  v24 = v22 - 1;
  v25 = ((_BYTE)v19 + (_BYTE)v14) & 0xF;
  if ( (((_BYTE)v19 + (_BYTE)v14) & 0xF) != 0 )
  {
    if ( (((_BYTE)v20 + (_BYTE)v16) & 0xF) != 0 )
    {
      if ( (int)abs32(v23 - 8) <= v25 )
        v24 = (unsigned int)(v19 + v14) >> 4;
    }
    else
    {
      if ( v25 - (unsigned int)((v13 & 0x80) != 0) + 8 < 0x10 )
        --v22;
      v24 = v22;
    }
  }
  if ( (v13 & 0x90) != 0x90 )
    goto LABEL_12;
  if ( (((_BYTE)v19 + (_BYTE)v14) & 0xF) != 0 && v23 == v25 + 8 )
    --v24;
  if ( v14 && v16 == v14 + 8 )
  {
    v26 = 0;
  }
  else
  {
LABEL_12:
    v26 = 0;
    if ( v14 )
    {
      if ( v16 )
        v26 = (int)abs32(v16 - 8) <= v14;
      else
        LOBYTE(v26) = v14 - (unsigned int)((v13 & 0x80) != 0) + 8 >= 0x10;
    }
  }
  if ( v21 >= 0 && (unsigned int)v21 >= v19 - (v20 & (unsigned int)-v26) )
    v3 = 1;
  if ( v24 < v26 )
    return 0LL;
  v27 = *((_DWORD *)this + 1);
  v28 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v27 + v26;
  *((_DWORD *)this + 10) = v27 + v24;
  *((_DWORD *)this + 9) = v28 + v3;
  v29 = v21 + v24 * (__int64)*((int *)this + 3);
  if ( v29 >= 0xFFFFFFFFLL )
    v29 /= (unsigned __int64)*((unsigned int *)this + 4);
  else
    LODWORD(v29) = (unsigned int)v29 / *((_DWORD *)this + 4);
  v30 = v28 + v29;
  result = 1LL;
  *((_DWORD *)this + 11) = v30;
  return result;
}
