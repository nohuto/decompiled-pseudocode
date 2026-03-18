/*
 * XREFs of ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C007D7CC
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     AdjustBoundingBox @ 0x1C0007560 (AdjustBoundingBox.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
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
  int v13; // r11d
  int v14; // r8d
  int v15; // r14d
  int v16; // edx
  int v17; // esi
  int v18; // r15d
  int v19; // ecx
  int v20; // eax
  int v21; // r8d
  int v22; // r12d
  int v23; // edx
  int v24; // ecx
  int v25; // r12d
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // r8
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
        v29 = *((_QWORD *)this + 7);
        v31 = *(_QWORD *)(*(_QWORD *)v29 + 728LL);
        break;
      case 2:
        if ( !*((_DWORD *)this + 64) )
          goto LABEL_9;
        v29 = *((_QWORD *)this + 7);
        v31 = *(_QWORD *)(*(_QWORD *)v29 + 736LL);
        break;
      case 3:
        if ( !*((_DWORD *)this + 65) )
          goto LABEL_9;
        v29 = *((_QWORD *)this + 7);
        v31 = *(_QWORD *)(*(_QWORD *)v29 + 744LL);
        break;
      default:
        v10 = *((_QWORD *)this + 34);
        if ( v10 )
        {
          if ( *(_DWORD *)(v9 + v10) )
          {
            v29 = *((_QWORD *)this + 7);
            v30 = *(_QWORD *)(*(_QWORD *)v29 + 752LL);
            if ( v30 )
            {
              if ( *(_QWORD *)(v30 + 8LL * (unsigned int)(v8 - 4)) )
              {
                *(_QWORD *)&v32 = *(_QWORD *)(v30 + 8LL * (unsigned int)(v8 - 4));
LABEL_32:
                AdjustBoundingBox(v29, (__int64)&v32, &v36, &v35, (int *)&v34, (int *)&v33);
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
      goto LABEL_32;
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
    v13 = v33;
    v14 = v33;
    v15 = v34;
    v16 = v33;
    v17 = HIDWORD(v33);
    v18 = HIDWORD(v34);
    v19 = HIDWORD(v33);
    if ( (int)v34 < (int)v33 )
      v14 = v34;
    v20 = HIDWORD(v33);
    v21 = v14 >> 4;
    v22 = _mm_cvtsi128_si32(*(__m128i *)((char *)this + 12));
    v32 = *(_OWORD *)((char *)this + 12);
    if ( (int)v34 > (int)v33 )
      v16 = v34;
    v23 = (v16 + 15) >> 4;
    if ( SHIDWORD(v34) < SHIDWORD(v33) )
      v19 = HIDWORD(v34);
    v24 = v19 >> 4;
    if ( SHIDWORD(v34) > SHIDWORD(v33) )
      v20 = HIDWORD(v34);
    v25 = v21 + v22;
    v26 = v23 + DWORD2(v32);
    v27 = v24 + DWORD1(v32);
    v28 = ((v20 + 15) >> 4) + HIDWORD(v32);
    if ( v27 < *((_DWORD *)this + 4) )
      *((_DWORD *)this + 4) = v27;
    if ( v28 > *((_DWORD *)this + 6) )
      *((_DWORD *)this + 6) = v28;
    if ( v25 < *((_DWORD *)this + 3) )
      *((_DWORD *)this + 3) = v25;
    if ( v26 > *((_DWORD *)this + 5) )
      *((_DWORD *)this + 5) = v26;
    if ( a3 )
    {
      if ( v11 )
      {
        a2->x += v15;
        a2->y += v18;
        a2[1].x += v15;
        a2[1].y += v18;
      }
      if ( v12 )
      {
        a2[2].x += v13;
        a2[2].y += v17;
        a2[3].x += v13;
        a2[3].y += v17;
      }
    }
  }
}
