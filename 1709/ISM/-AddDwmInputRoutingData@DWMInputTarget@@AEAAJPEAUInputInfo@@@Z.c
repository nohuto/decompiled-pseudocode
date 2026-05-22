/*
 * XREFs of ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180022128
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180021AF0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x180009424 (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall DWMInputTarget::AddDwmInputRoutingData(DWMInputTarget *this, struct InputInfo *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  int CompositionInputQueueAndTransform; // eax
  __int64 v7; // rcx
  int v8; // r9d
  int IsImplicit; // eax
  __int128 v10; // xmm2
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int PointersFromInput; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  float v16; // xmm6_4
  int *v17; // r8
  float v18; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm9_4
  float v21; // xmm4_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm5_4
  float v25; // xmm8_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  unsigned int v30[4]; // [rsp+38h] [rbp-69h] BYREF
  struct Pointer *v31[2]; // [rsp+48h] [rbp-59h] BYREF
  __int128 v32; // [rsp+58h] [rbp-49h]
  __int128 v33; // [rsp+68h] [rbp-39h]
  float v34[8]; // [rsp+78h] [rbp-29h]

  v2 = 0;
  if ( *((_BYTE *)this + 152) )
  {
LABEL_14:
    v10 = *((_OWORD *)a2 + 35);
    v11 = *((_OWORD *)a2 + 37);
    v32 = *((_OWORD *)a2 + 36);
    v12 = *((_OWORD *)a2 + 38);
    *(_OWORD *)v31 = v10;
    *(_OWORD *)v34 = v12;
    v33 = v11;
    if ( *(float *)&v10 != 1.0
      || *((float *)v31 + 1) != 0.0
      || *(float *)&v31[1] != 0.0
      || *((float *)&v31[1] + 1) != 0.0
      || *(float *)&v32 != 0.0
      || *((float *)&v32 + 1) != 1.0
      || *((float *)&v32 + 2) != 0.0
      || *((float *)&v32 + 3) != 0.0
      || *(float *)&v33 != 0.0
      || *((float *)&v33 + 1) != 0.0
      || *((float *)&v33 + 2) != 1.0
      || *((float *)&v33 + 3) != 0.0
      || v34[0] != 0.0
      || v34[1] != 0.0
      || v34[2] != 0.0
      || v34[3] != 1.0 )
    {
      v30[0] = 0;
      PointersFromInput = GetPointersFromInput(a2, (__int64)a2, v31, v30);
      v2 = PointersFromInput;
      if ( PointersFromInput >= 0 )
      {
        v7 = v30[0];
        if ( v30[0] )
        {
          v15 = 0LL;
          while ( 1 )
          {
            v16 = *((float *)a2 + 143);
            v17 = (int *)v31[v15];
            v18 = *((float *)a2 + 147);
            v19 = (float)v17[4];
            v20 = (float)v17[3];
            v21 = (float)(v16 * v19) - *((float *)a2 + 141);
            v22 = (float)(v16 * v20) - *((float *)a2 + 140);
            v23 = (float)(v20 * v18) - *((float *)a2 + 144);
            v24 = (float)(v18 * v19) - *((float *)a2 + 145);
            if ( (float)(v22 * v24) == (float)(v21 * v23) )
              break;
            v25 = (float)(v22 * v24) - (float)(v21 * v23);
            v26 = *((float *)a2 + 155);
            v27 = (float)(v26 * v19) - *((float *)a2 + 153);
            v28 = (float)(v26 * v20) - *((float *)a2 + 152);
            v17[5] = (int)(float)((float)((float)(v27 * v23) - (float)(v28 * v24)) / v25);
            v17[6] = (int)(float)((float)((float)(v28 * v21) - (float)(v27 * v22)) / v25);
            v2 = 0;
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= (unsigned int)v7 )
              return v2;
          }
          v2 = -2147418113;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 771;
            goto LABEL_42;
          }
        }
        else
        {
          v2 = -2147024809;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 759;
            goto LABEL_42;
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 3, 755, PointersFromInput);
      }
    }
    return v2;
  }
  v30[0] = 0;
  if ( (*(_BYTE *)a2 & 0x28) != 0 )
  {
    v5 = 3LL;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v5 = 4LL;
  }
  else
  {
    v5 = (*(unsigned __int8 *)a2 >> 1) & 1;
  }
  CompositionInputQueueAndTransform = NtQueryCompositionInputQueueAndTransform(
                                        *((_QWORD *)this + 10),
                                        v5,
                                        v31,
                                        (char *)a2 + 560);
  if ( CompositionInputQueueAndTransform < 0 )
  {
    v2 = CompositionInputQueueAndTransform | 0x10000000;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 730;
LABEL_42:
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 3, v8, v2);
      return v2;
    }
    return v2;
  }
  *((struct Pointer **)a2 + 69) = v31[1];
  IsImplicit = NtQueryCompositionInputIsImplicit(*((_QWORD *)this + 10), v30);
  if ( IsImplicit >= 0 )
  {
    *((_DWORD *)a2 + 156) = v30[0];
    goto LABEL_14;
  }
  v2 = IsImplicit | 0x10000000;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 736;
    goto LABEL_42;
  }
  return v2;
}
