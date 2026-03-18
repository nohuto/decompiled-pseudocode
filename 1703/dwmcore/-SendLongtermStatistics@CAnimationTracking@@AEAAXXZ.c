/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014236C
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800B96A8 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x1800BAC84 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800BAD20 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801420C8 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     Template_zqqqq @ 0x180142D0C (Template_zqqqq.c)
 *     Template_zqqqqq @ 0x180142DDC (Template_zqqqqq.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  _BYTE *i; // rbx
  _QWORD *v5; // rdi
  unsigned int v6; // r8d
  __int64 v7; // rcx
  _BYTE *j; // rbx
  unsigned __int16 *v9; // r14
  const struct _GUID *v10; // rcx
  unsigned __int64 v11; // r15
  int v12; // r9d
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  char v19; // al
  unsigned __int64 v20; // r15
  int v21; // r9d
  int v22; // r8d
  int v23; // edx
  int v24; // edx
  char v25; // al
  int v26; // r9d
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int16 *v29; // [rsp+40h] [rbp-188h] BYREF
  _QWORD *v30; // [rsp+50h] [rbp-178h]
  __int64 v31; // [rsp+58h] [rbp-170h]
  _QWORD *v32; // [rsp+70h] [rbp-158h]
  unsigned int v33[2]; // [rsp+88h] [rbp-140h]
  unsigned __int16 v34[128]; // [rsp+90h] [rbp-138h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 69);
  v32 = v2;
  if ( !v2 )
    goto LABEL_5;
  if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v2 = v32;
  v3 = (_QWORD *)*v2;
  if ( (*v2 & 1) != 0 )
  {
LABEL_5:
    for ( i = v2 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_10;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(_QWORD **)i;
  }
LABEL_10:
  while ( v3 )
  {
    v5 = v3;
    v6 = *((_DWORD *)this + 137);
    v30 = v3;
    v29 = (unsigned __int16 *)(v3[1] & (-1LL << (v6 & 0x1F)));
    v7 = *((_QWORD *)this + 69)
       + 8LL
       * ((37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
         + HIBYTE(v29)) & ((v6 >> 5) - 1));
    v31 = v7;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v7 = v31;
      v3 = v30;
    }
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(v7 + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
        {
          v3 = 0LL;
          goto LABEL_21;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v3 = *(_QWORD **)j;
    }
LABEL_21:
    v9 = (unsigned __int16 *)v5[2];
    v29 = 0LL;
    if ( !v9 )
    {
      if ( (int)CAnimationTracking::ScenarioNameFromGuid((const struct _GUID *)v5 + 2, (const unsigned __int16 **)&v29) >= 0 )
      {
        LODWORD(v9) = (_DWORD)v29;
      }
      else
      {
        CAnimationTracking::GuidToString(v10, v34);
        v9 = v34;
      }
    }
    v11 = *((unsigned int *)v5 + 14);
    v12 = 255;
    v13 = 255;
    v14 = 127;
    if ( *((_DWORD *)v5 + 30) < 0xFFu )
      v12 = *((_DWORD *)v5 + 30);
    if ( *((_DWORD *)v5 + 31) < 0xFFu )
      v13 = *((_DWORD *)v5 + 31);
    if ( (unsigned int)(v5[16] / v11) < 0x7F )
      v14 = v5[16] / v11;
    v15 = 255;
    if ( (unsigned int)(8LL * v5[17] / v11) < 0xFF )
      v15 = 8LL * v5[17] / v11;
    v16 = v14 | (v15 << 8);
    v17 = Microsoft_Windows_Dwm_CoreEnableBits;
    v18 = v12 | ((v13 | (v16 << 8)) << 8);
    v19 = v18;
    if ( !v5[2] )
      v19 = v18;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      Template_zqqqqq(
        Microsoft_Windows_Dwm_CoreEnableBits,
        v18,
        (_DWORD)v9,
        v11,
        100 * *((_DWORD *)v5 + 24) / (unsigned int)v11,
        100 * *((_DWORD *)v5 + 28) / (unsigned int)v11,
        v19,
        v5[16] / v11);
      v17 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    v20 = *((unsigned int *)v5 + 14);
    v21 = 255;
    v22 = 255;
    if ( *((_DWORD *)v5 + 30) < 0xFFu )
      v21 = *((_DWORD *)v5 + 30);
    if ( *((_DWORD *)v5 + 31) < 0xFFu )
      v22 = *((_DWORD *)v5 + 31);
    v23 = 255;
    if ( (unsigned int)(v5[18] / v20) < 0xFF )
      v23 = v5[18] / v20;
    v24 = v21 | ((v22 | (v23 << 8)) << 8);
    v25 = v24;
    if ( !v5[2] )
      v25 = v24;
    if ( (v17 & 0x400) != 0 )
      Template_zqqqq(
        v17,
        v24,
        (_DWORD)v9,
        v20,
        100 * *((_DWORD *)v5 + 17) / (unsigned int)v20,
        100 * *((_DWORD *)v5 + 21) / (unsigned int)v20,
        v25);
    v26 = *((_DWORD *)this + 137) >> 5;
    v29 = (unsigned __int16 *)(v5[1] & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
    v27 = (_QWORD *)(*((_QWORD *)this + 69)
                   + 8LL
                   * ((37
                     * (BYTE6(v29)
                      + 37
                      * (BYTE5(v29)
                       + 37
                       * (BYTE4(v29)
                        + 37
                        * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
                     + HIBYTE(v29)) & (unsigned int)(v26 - 1)));
    v28 = *v5 & 0x8000000000000002uLL;
    *(_QWORD *)v33 = v27;
    if ( v28 == 0x8000000000000002uLL )
      v27 = *(_QWORD **)v33;
    while ( (*v27 & 1) == 0 )
    {
      if ( (_QWORD *)*v27 == v5 )
      {
        *v27 = *v5;
        --*((_DWORD *)this + 136);
        *v5 |= 0x8000000000000002uLL;
        break;
      }
      v27 = (_QWORD *)*v27;
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v5);
  }
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
