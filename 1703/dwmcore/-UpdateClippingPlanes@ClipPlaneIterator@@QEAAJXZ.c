/*
 * XREFs of ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18015711C
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18015692C (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x1801569E0 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x180156B1C (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 */

__int64 __fastcall ClipPlaneIterator::UpdateClippingPlanes(ClipPlaneIterator *this)
{
  unsigned int v1; // ebx
  LPVOID v3; // rax
  _DWORD *v4; // rcx
  unsigned int v5; // r9d
  D2D_VECTOR_4F *v6; // rax
  float *v7; // rdx
  _DWORD *v8; // r8
  float x; // xmm2_4
  bool v10; // cc
  float v11; // xmm0_4
  __int64 v12; // r9
  unsigned int v14[4]; // [rsp+30h] [rbp-68h] BYREF
  D2D_VECTOR_4F v15; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  v14[0] = 0;
  if ( *(_BYTE *)this || !ClipPlaneIterator::HasMoreClipPlanes(this) )
  {
    *(_QWORD *)(*((_QWORD *)this + 15) + 256LL) = 0LL;
  }
  else
  {
    if ( *((_DWORD *)this + 1) )
      ClipPlaneIterator::GetMorePlaceholderClipPlanes(this, &v15, v14);
    else
      ClipPlaneIterator::GetMoreStandardClipPlanes(this, &v15, v14);
    v3 = operator new(0x60uLL);
    v4 = v3;
    if ( v3 )
    {
      *(_QWORD *)v3 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v3 = &ClipPlaneInfoRef::`vftable';
      *((_DWORD *)v3 + 2) = 0;
      _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      v5 = 0;
      if ( !v14[0] )
        goto LABEL_21;
      v5 = v14[0];
      v6 = &v15;
      v7 = (float *)(v4 + 20);
      v8 = (_DWORD *)v14[0];
      do
      {
        x = v6->x;
        *(D2D_VECTOR_4F *)((char *)v6 + (char *)v4 - (char *)&v15.y + 20) = *v6;
        if ( x == 0.0 )
          v10 = v6->y <= 0.0;
        else
          v10 = x <= 0.0;
        if ( v10 )
          v11 = 0.0;
        else
          v11 = FLOAT_0_5;
        *v7 = v11;
        ++v6;
        ++v7;
        v8 = (_DWORD *)((char *)v8 - 1);
      }
      while ( v8 );
      if ( v5 < 4 )
      {
LABEL_21:
        v7 = (float *)&v4[4 * v5 + 4];
        v8 = &v4[v5 + 20];
        v12 = 4 - v5;
        do
        {
          *(_OWORD *)v7 = 0LL;
          *v8++ = 0;
          v7 += 4;
          --v12;
        }
        while ( v12 );
      }
      *(_QWORD *)(*((_QWORD *)this + 15) + 256LL) = v4;
      (**(void (__fastcall ***)(_DWORD *, float *, _DWORD *))v4)(v4, v7, v8);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2B6u);
    }
  }
  return v1;
}
