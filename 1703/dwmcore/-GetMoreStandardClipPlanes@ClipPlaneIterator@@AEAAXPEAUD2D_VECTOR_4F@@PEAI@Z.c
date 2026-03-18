/*
 * XREFs of ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x1801569E0
 * Callers:
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18015711C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x180156508 (-CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4.c)
 */

void __fastcall ClipPlaneIterator::GetMoreStandardClipPlanes(
        ClipPlaneIterator *this,
        struct D2D_VECTOR_4F *a2,
        unsigned int *a3)
{
  __int64 v3; // r10
  int v7; // r11d
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  unsigned int v10; // edi
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v21[7]; // [rsp+28h] [rbp-70h]

  v3 = *((unsigned int *)this + 2);
  v7 = 1;
  v8 = *((_DWORD *)this + 12) - v3;
  v9 = 3 - ((_DWORD)v3 != 0);
  v10 = v9;
  if ( v9 >= v8 )
    v10 = *((_DWORD *)this + 12) - v3;
  if ( v10 + (unsigned int)v3 >= *((_DWORD *)this + 12) - 1 )
  {
    v7 = 0;
    v10 = *((_DWORD *)this + 12) - v3;
    if ( v9 + 1 < v8 )
      v10 = v9 + 1;
  }
  v11 = 0LL;
  v12 = v7 + v10 + ((_DWORD)v3 != 0);
  if ( (_DWORD)v3 )
  {
    v13 = (__int64 *)*((_QWORD *)this + 3);
    v11 = 1LL;
    v20 = *v13;
    v21[0] = v13[2 * v3];
  }
  v14 = 0;
  if ( v10 )
  {
    v15 = *((_QWORD *)this + 3);
    do
    {
      v16 = 2LL * ((unsigned int)v3 + v14);
      v17 = 2LL * (unsigned int)v11;
      v11 = (unsigned int)(v11 + 1);
      ++v14;
      *(_OWORD *)&v21[v17 - 1] = *(_OWORD *)(v15 + 8 * v16);
    }
    while ( v14 < v10 );
  }
  if ( v7 )
  {
    v18 = (_QWORD *)*((_QWORD *)this + 3);
    v19 = 2 * v11;
    v21[v19] = *v18;
    v21[v19 - 1] = v18[2 * v10 - 1 + 2 * (_DWORD)v3];
  }
  ClipPlaneIterator::CalculateClipPlanesFromLineSegments(this, (struct ClipPlaneIterator::LineSegment *)&v20, v12, a2);
  *a3 = v12;
  *((_DWORD *)this + 2) += v10;
  if ( *((_DWORD *)this + 2) >= *((_DWORD *)this + 12) )
    *((_DWORD *)this + 1) = 1;
}
