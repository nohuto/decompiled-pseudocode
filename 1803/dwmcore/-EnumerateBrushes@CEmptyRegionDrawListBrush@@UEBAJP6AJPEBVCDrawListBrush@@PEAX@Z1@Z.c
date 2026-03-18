/*
 * XREFs of ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180218010
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::EnumerateBrushes(
        CEmptyRegionDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  __int64 v3; // rax
  __int64 i; // rax
  __int64 v8; // rax
  __int128 v9; // xmm0
  int v10; // eax
  FastRegion::Internal::CRgnData *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-29h]
  _BYTE v17[8]; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-11h]
  _DWORD *v19; // [rsp+50h] [rbp-9h]
  __int64 v20; // [rsp+58h] [rbp-1h]
  int v21; // [rsp+60h] [rbp+7h]
  _DWORD v22[4]; // [rsp+70h] [rbp+17h]

  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *(_OWORD *)(v3 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v3 + 24) = *((_QWORD *)this + 3);
    FastRegion::Internal::CRgnData::BeginIterator(
      *((FastRegion::Internal::CRgnData **)this + 9),
      (struct FastRegion::CRegion::Iterator *)v17);
    while ( (unsigned __int64)v19 < v18 )
    {
      v22[1] = *v19;
      v22[3] = v19[2];
      v22[0] = *(_DWORD *)(v20 + 8LL * v21);
      v22[2] = *(_DWORD *)(v20 + 4LL * (2 * v21 + 1));
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v17[i * 4 - 16] = (float)(int)v22[i];
      v8 = *((_QWORD *)this + 8);
      v9 = v16;
      *(_DWORD *)(v8 + 48) = 0;
      *(_BYTE *)(v8 + 52) = 1;
      *(_OWORD *)(v8 + 32) = v9;
      v10 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 8), a3);
      v12 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x93u);
        return v12;
      }
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v17);
    }
  }
  v13 = *((_QWORD *)this + 7);
  *(_OWORD *)(v13 + 8) = *(_OWORD *)((char *)this + 8);
  *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 3);
  v14 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 7), a3);
  v12 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x99u);
  return v12;
}
