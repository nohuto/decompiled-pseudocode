/*
 * XREFs of ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0024B08
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     AdjustBoundingBox @ 0x1C000CCF4 (AdjustBoundingBox.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall ESTROBJ::vEudcOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, int a3)
{
  __int64 *v3; // rax
  __int64 v7; // r8
  int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // r10d
  int v12; // r9d
  __int64 v13; // r8
  int v14; // r11d
  int v15; // r8d
  int v16; // r14d
  int v17; // edx
  int v18; // esi
  int v19; // r15d
  int v20; // ecx
  int v21; // eax
  int v22; // r8d
  int v23; // r12d
  int v24; // edx
  int v25; // ecx
  int v26; // r12d
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int128 v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+40h] [rbp-10h] BYREF
  __int64 v34; // [rsp+48h] [rbp-8h] BYREF
  int v35; // [rsp+90h] [rbp+40h] BYREF
  int v36; // [rsp+A8h] [rbp+58h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 7);
  v36 = 0;
  v35 = 0;
  v34 = 0LL;
  v7 = *v3;
  v8 = 0;
  v33 = 0LL;
  if ( *(_DWORD *)(v7 + 848) + 4 <= 0 )
    return;
  v9 = -16LL;
  do
  {
    switch ( v8 )
    {
      case 0:
        goto LABEL_9;
      case 1:
        if ( !*((_DWORD *)this + 63) )
          goto LABEL_9;
        v30 = *((_QWORD *)this + 7);
        v31 = *(_QWORD *)(*(_QWORD *)v30 + 728LL);
        break;
      case 2:
        if ( !*((_DWORD *)this + 64) )
          goto LABEL_9;
        v30 = *((_QWORD *)this + 7);
        v31 = *(_QWORD *)(*(_QWORD *)v30 + 736LL);
        break;
      case 3:
        if ( !*((_DWORD *)this + 65) )
          goto LABEL_9;
        v30 = *((_QWORD *)this + 7);
        v31 = *(_QWORD *)(*(_QWORD *)v30 + 744LL);
        break;
      default:
        v10 = *((_QWORD *)this + 34);
        if ( v10 )
        {
          if ( *(_DWORD *)(v9 + v10) )
          {
            v30 = *((_QWORD *)this + 7);
            v13 = *(_QWORD *)(*(_QWORD *)v30 + 752LL);
            if ( v13 )
            {
              if ( *(_QWORD *)(v13 + 8LL * (unsigned int)(v8 - 4)) )
              {
                *(_QWORD *)&v32 = *(_QWORD *)(v13 + 8LL * (unsigned int)(v8 - 4));
LABEL_22:
                AdjustBoundingBox(v30, (__int64)&v32, &v36, &v35, (int *)&v34, (int *)&v33);
                goto LABEL_9;
              }
            }
          }
        }
        goto LABEL_9;
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = v31;
      goto LABEL_22;
    }
LABEL_9:
    *(_QWORD *)&v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
    ++v8;
    v9 += 4LL;
  }
  while ( v8 < *(_DWORD *)(**((_QWORD **)this + 7) + 848LL) + 4 );
  v11 = v36;
  v12 = v35;
  if ( v36 || v35 )
  {
    v14 = v33;
    v15 = v33;
    v16 = v34;
    v17 = v33;
    v18 = HIDWORD(v33);
    v19 = HIDWORD(v34);
    v20 = HIDWORD(v33);
    if ( (int)v34 < (int)v33 )
      v15 = v34;
    v21 = HIDWORD(v33);
    v22 = v15 >> 4;
    v23 = _mm_cvtsi128_si32(*(__m128i *)((char *)this + 12));
    v32 = *(_OWORD *)((char *)this + 12);
    if ( (int)v34 > (int)v33 )
      v17 = v34;
    v24 = (v17 + 15) >> 4;
    if ( SHIDWORD(v34) < SHIDWORD(v33) )
      v20 = HIDWORD(v34);
    v25 = v20 >> 4;
    if ( SHIDWORD(v34) > SHIDWORD(v33) )
      v21 = HIDWORD(v34);
    v26 = v22 + v23;
    v27 = v24 + DWORD2(v32);
    v28 = v25 + DWORD1(v32);
    v29 = ((v21 + 15) >> 4) + HIDWORD(v32);
    if ( v28 < *((_DWORD *)this + 4) )
      *((_DWORD *)this + 4) = v28;
    if ( v29 > *((_DWORD *)this + 6) )
      *((_DWORD *)this + 6) = v29;
    if ( v26 < *((_DWORD *)this + 3) )
      *((_DWORD *)this + 3) = v26;
    if ( v27 > *((_DWORD *)this + 5) )
      *((_DWORD *)this + 5) = v27;
    if ( a3 )
    {
      if ( v11 )
      {
        a2->x += v16;
        a2->y += v19;
        a2[1].x += v16;
        a2[1].y += v19;
      }
      if ( v12 )
      {
        a2[2].x += v14;
        a2[2].y += v18;
        a2[3].x += v14;
        a2[3].y += v18;
      }
    }
  }
}
