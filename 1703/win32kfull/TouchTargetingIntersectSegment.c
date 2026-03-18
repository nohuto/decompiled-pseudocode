/*
 * XREFs of TouchTargetingIntersectSegment @ 0x1C023ACD0
 * Callers:
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C01CF27C (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     _TTUpdateRankWithSegment @ 0x1C023BE04 (_TTUpdateRankWithSegment.c)
 * Callees:
 *     _TTIntersectLine @ 0x1C023BAB4 (_TTIntersectLine.c)
 */

__int64 __fastcall TouchTargetingIntersectSegment(__int64 a1, __int64 a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // edi
  int v7; // ebx
  unsigned int v8; // r14d
  int v9; // edx
  int v10; // eax
  int v11; // r8d
  int v12; // ecx
  int v13; // r10d
  int v14; // ecx
  int v15; // eax
  int v16; // r11d
  int v17; // ecx
  int v18; // ebp
  int v19; // eax
  int v20; // r8d
  int v21; // ecx
  int v22; // eax
  int v23; // ebx
  int v24; // ebx
  int v25; // r9d
  int v26; // eax
  int v27; // r8d
  int v28; // r8d
  int v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+34h] [rbp-34h]
  int v32; // [rsp+38h] [rbp-30h] BYREF
  int v33; // [rsp+3Ch] [rbp-2Ch]
  int v34; // [rsp+74h] [rbp+Ch]
  int v35; // [rsp+7Ch] [rbp+14h]

  v35 = HIDWORD(a2);
  v34 = HIDWORD(a1);
  v6 = a2;
  v7 = a1;
  v8 = 0;
  if ( (unsigned int)TTIntersectLine(a1, a2, a3, (unsigned int)&v30, (__int64)&v32) )
  {
    v9 = v32;
    v10 = v6;
    v11 = v30;
    v12 = v32;
    if ( v30 < v32 )
      v12 = v30;
    if ( v7 < v6 )
      v10 = v7;
    if ( v12 <= v10 )
    {
      v13 = v6;
      if ( v7 < v6 )
        v13 = v7;
    }
    else
    {
      v13 = v32;
      if ( v30 < v32 )
        v13 = v30;
    }
    *a4 = v13;
    v14 = v9;
    v15 = v6;
    if ( v11 > v9 )
      v14 = v11;
    if ( v7 > v6 )
      v15 = v7;
    if ( v14 >= v15 )
    {
      v9 = v6;
      if ( v7 > v6 )
        v9 = v7;
    }
    else if ( v11 > v9 )
    {
      v9 = v11;
    }
    *a5 = v9;
    if ( v13 <= v9 )
    {
      v16 = v33;
      v17 = v33;
      v18 = v31;
      v19 = v35;
      if ( v31 < v33 )
        v17 = v31;
      if ( v34 < v35 )
        v19 = v34;
      if ( v17 <= v19 )
      {
        v20 = v35;
        if ( v34 < v35 )
          v20 = v34;
      }
      else
      {
        v20 = v33;
        if ( v31 < v33 )
          v20 = v31;
      }
      a4[1] = v20;
      v21 = v16;
      v22 = v35;
      if ( v18 > v16 )
        v21 = v18;
      if ( v34 > v35 )
        v22 = v34;
      if ( v21 >= v22 )
      {
        v16 = v35;
        if ( v34 > v35 )
          v16 = v34;
      }
      else if ( v18 > v16 )
      {
        v16 = v18;
      }
      a5[1] = v16;
      if ( v20 <= v16 )
      {
        v23 = v7 - v6;
        v8 = 1;
        if ( v23 <= 0 )
          v24 = v23 >> 31;
        else
          v24 = 1;
        if ( v34 - v35 <= 0 )
          v25 = (v34 - v35) >> 31;
        else
          v25 = 1;
        if ( v13 - v9 <= 0 )
          v26 = (v13 - v9) >> 31;
        else
          v26 = 1;
        v27 = v20 - v16;
        if ( v27 <= 0 )
          v28 = v27 >> 31;
        else
          v28 = 1;
        if ( v24 * v25 != v26 * v28 )
        {
          *a4 = v9;
          *a5 = v13;
        }
      }
    }
  }
  return v8;
}
