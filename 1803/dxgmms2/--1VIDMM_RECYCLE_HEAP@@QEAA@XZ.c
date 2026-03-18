/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C00712F0
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006E1C0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z @ 0x1C005E4B0 (-Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP(VIDMM_RECYCLE_HEAP *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v2 )
        {
          v5 = v2;
          v2 = (_QWORD *)*v2;
          *v5 = 0LL;
        }
        if ( !v2[1] )
          break;
        v6 = v2;
        v2 = (_QWORD *)v2[1];
        v6[1] = 0LL;
      }
      v7 = v2[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v2);
      v8 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 )
        break;
      v2 = (_QWORD *)v8;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v3 )
        {
          v9 = v3;
          v3 = (_QWORD *)*v3;
          *v9 = 0LL;
        }
        if ( !v3[1] )
          break;
        v10 = v3;
        v3 = (_QWORD *)v3[1];
        v10[1] = 0LL;
      }
      v11 = v3[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v3);
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        break;
      v3 = (_QWORD *)v12;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v4 )
        {
          v13 = v4;
          v4 = (_QWORD *)*v4;
          *v13 = 0LL;
        }
        if ( !v4[1] )
          break;
        v14 = v4;
        v4 = (_QWORD *)v4[1];
        v14[1] = 0LL;
      }
      v15 = v4[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v4);
      v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v16 )
        break;
      v4 = (_QWORD *)v16;
    }
  }
  *((_QWORD *)this + 8) = 0LL;
}
