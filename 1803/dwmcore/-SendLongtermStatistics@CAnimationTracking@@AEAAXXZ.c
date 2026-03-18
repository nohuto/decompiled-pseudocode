/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014C448
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800D0538 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x1800D17FC (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800D1874 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18014C184 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     McTemplateU0zqqqq @ 0x18014CCE4 (McTemplateU0zqqqq.c)
 *     McTemplateU0zqqqqq @ 0x18014CDB4 (McTemplateU0zqqqqq.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 *i; // rdx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 *j; // rdx
  unsigned __int16 *v11; // r14
  unsigned __int64 v12; // r11
  int v13; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // r10d
  unsigned int v16; // r13d
  int v17; // r8d
  int v18; // ecx
  int v19; // edx
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  char v23; // r8
  int v24; // r9d
  int v25; // r8d
  int v26; // edx
  int v27; // edx
  char v28; // al
  unsigned __int64 v29; // r9
  _QWORD *k; // rdx
  unsigned __int16 *v31; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-150h]
  __int64 v33; // [rsp+50h] [rbp-148h]
  unsigned __int16 v34[128]; // [rsp+60h] [rbp-138h] BYREF

  v1 = (unsigned __int64 *)*((_QWORD *)this + 69);
  if ( !v1 )
    goto LABEL_5;
  v3 = *v1;
  if ( (*v1 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = *v1;
  if ( (v3 & 1) != 0 )
  {
LABEL_5:
    for ( i = v1 + 1;
          (unsigned __int64)i < *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
          ++i )
    {
      v3 = *i;
      if ( (*i & 1) == 0 )
        goto LABEL_10;
    }
    v3 = 0LL;
  }
LABEL_10:
  while ( v3 )
  {
    v5 = v3;
    v6 = v3;
    v7 = *(_QWORD *)(v3 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    v8 = *((_QWORD *)this + 69)
       + 8
       * ((HIBYTE(v7)
         + 37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7)
            + 37
            * (((*(_DWORD *)(v3 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*(_DWORD *)(v3 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 16)
              + 37
              * (37 * ((unsigned __int8)v7 + 11623883)
               + (unsigned __int8)((unsigned __int16)(*(_WORD *)(v3 + 8) & (-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 8)))))))) & ((*((_DWORD *)this + 137) >> 5) - 1));
    v9 = (unsigned __int64 *)v3;
    v3 = *(_QWORD *)v3;
    if ( (v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = *v9;
    if ( (v3 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v8 + 8);
            (unsigned __int64)j < *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
            ++j )
      {
        v3 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_19;
      }
      v3 = 0LL;
    }
LABEL_19:
    v11 = *(unsigned __int16 **)(v6 + 16);
    v31 = 0LL;
    if ( !v11 )
    {
      if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                  (const struct _GUID *)(v6 + 32),
                  (const unsigned __int16 **)&v31) >= 0 )
      {
        LODWORD(v11) = (_DWORD)v31;
      }
      else
      {
        CAnimationTracking::GuidToString((const struct _GUID *)(v6 + 32), v34);
        v11 = v34;
      }
    }
    v12 = *(unsigned int *)(v6 + 56);
    v13 = 255;
    v14 = *(_DWORD *)(v6 + 120);
    v15 = (100 * *(_DWORD *)(v6 + 96) / (unsigned int)v12) | (((100 * *(_DWORD *)(v6 + 100) / (unsigned int)v12) | (((100 * *(_DWORD *)(v6 + 104) / (unsigned int)v12) | ((100 * *(_DWORD *)(v6 + 108) / (unsigned int)v12) << 8)) << 8)) << 8);
    LODWORD(v31) = (100 * *(_DWORD *)(v6 + 112) / (unsigned int)v12) | (((100 * *(_DWORD *)(v6 + 116) / (unsigned int)v12) | (((100 * *(_DWORD *)(v6 + 64) / (unsigned int)v12) | ((100 * *(_DWORD *)(v6 + 60) / (unsigned int)v12) << 8)) << 8)) << 8);
    v16 = *(_DWORD *)(v6 + 124);
    v17 = 255;
    if ( v14 < 0xFF )
      v13 = v14;
    v18 = 127;
    if ( v16 < 0xFF )
      v17 = *(_DWORD *)(v6 + 124);
    v32 = *(_QWORD *)(v6 + 128) / v12;
    if ( (unsigned int)v32 < 0x7F )
      v18 = v32;
    v19 = 255;
    if ( (unsigned int)(8LL * *(_QWORD *)(v6 + 136) / v12) < 0xFF )
      v19 = 8LL * *(_QWORD *)(v6 + 136) / v12;
    v20 = v18 | (v19 << 8);
    v33 = *(_QWORD *)(v6 + 16);
    v21 = Microsoft_Windows_Dwm_CoreEnableBits;
    v22 = v13 | ((v17 | (v20 << 8)) << 8);
    v23 = v22;
    if ( !v33 )
      v23 = v22;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      McTemplateU0zqqqqq(Microsoft_Windows_Dwm_CoreEnableBits, v22, (_DWORD)v11, v12, v15, (char)v31, v23, v32);
      LODWORD(v12) = *(_DWORD *)(v5 + 56);
      v14 = *(_DWORD *)(v6 + 120);
      v16 = *(_DWORD *)(v6 + 124);
      v21 = Microsoft_Windows_Dwm_CoreEnableBits;
      v33 = *(_QWORD *)(v5 + 16);
    }
    v32 = (unsigned int)v12;
    v24 = 255;
    v25 = 255;
    if ( v14 < 0xFF )
      v24 = v14;
    if ( v16 < 0xFF )
      v25 = v16;
    v26 = 255;
    if ( (unsigned int)(*(_QWORD *)(v6 + 144) / (unsigned __int64)(unsigned int)v12) < 0xFF )
      v26 = *(_QWORD *)(v6 + 144) / (unsigned __int64)(unsigned int)v12;
    v27 = v24 | ((v25 | (v26 << 8)) << 8);
    v28 = v27;
    if ( !v33 )
      v28 = v27;
    if ( (v21 & 0x400) != 0 )
      McTemplateU0zqqqq(
        v21,
        v27,
        (_DWORD)v11,
        v12,
        100 * *(_DWORD *)(v6 + 68) / (unsigned int)v12,
        100 * *(_DWORD *)(v6 + 84) / (unsigned int)v12,
        v28);
    v29 = *(_QWORD *)(v6 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8
                       * ((HIBYTE(v29)
                         + 37
                         * (BYTE6(v29)
                          + 37
                          * (BYTE5(v29)
                           + 37
                           * (BYTE4(v29)
                            + 37
                            * (((*(_DWORD *)(v6 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)((*(_DWORD *)(v6 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v6 + 8) & (-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v29 + 11623883)))))))) & ((*((_DWORD *)this + 137) >> 5) - 1)));
          (*k & 1) == 0;
          k = (_QWORD *)*k )
    {
      if ( *k == v6 )
      {
        *k = *(_QWORD *)v6;
        --*((_DWORD *)this + 136);
        *(_QWORD *)v6 |= 0x8000000000000002uLL;
        break;
      }
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v6);
  }
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
