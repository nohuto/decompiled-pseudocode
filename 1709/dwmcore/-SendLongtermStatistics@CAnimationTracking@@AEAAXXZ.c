/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18012E1DC
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180002E7C (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x180004468 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180004510 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18012DF4C (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     McTemplateU0zqqqq @ 0x18012EC48 (McTemplateU0zqqqq.c)
 *     McTemplateU0zqqqqq @ 0x18012ED18 (McTemplateU0zqqqqq.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  _BYTE *i; // rbx
  _QWORD *v5; // rdi
  int v6; // r8d
  _BYTE *j; // rbx
  unsigned __int16 *v8; // r14
  unsigned __int64 v9; // r15
  int v10; // r9d
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  char v17; // al
  unsigned __int64 v18; // r15
  int v19; // r9d
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  char v23; // al
  int v24; // r9d
  _QWORD *k; // rdx
  unsigned __int16 *v26; // [rsp+40h] [rbp-148h] BYREF
  unsigned __int16 v27[128]; // [rsp+50h] [rbp-138h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 69);
  if ( !v2 || (v3 = (_QWORD *)*v2, (*v2 & 1) != 0) )
  {
    for ( i = v2 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_8;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(_QWORD **)i;
  }
LABEL_8:
  while ( v3 )
  {
    v5 = v3;
    v6 = *((_DWORD *)this + 137) >> 5;
    v26 = (unsigned __int16 *)(v3[1] & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(*((_QWORD *)this + 69)
                        + 8LL
                        * ((37
                          * (BYTE6(v26)
                           + 37
                           * (BYTE5(v26)
                            + 37
                            * (BYTE4(v26)
                             + 37
                             * (BYTE3(v26)
                              + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                          + HIBYTE(v26)) & (unsigned int)(v6 - 1))
                        + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
        {
          v3 = 0LL;
          goto LABEL_17;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v3 = *(_QWORD **)j;
    }
LABEL_17:
    v8 = (unsigned __int16 *)v5[2];
    v26 = 0LL;
    if ( !v8 )
    {
      if ( (int)CAnimationTracking::ScenarioNameFromGuid((const struct _GUID *)v5 + 2, (const unsigned __int16 **)&v26) >= 0 )
      {
        LODWORD(v8) = (_DWORD)v26;
      }
      else
      {
        CAnimationTracking::GuidToString((const struct _GUID *)v5 + 2, v27);
        v8 = v27;
      }
    }
    v9 = *((unsigned int *)v5 + 14);
    v10 = 255;
    v11 = 255;
    v12 = 127;
    if ( *((_DWORD *)v5 + 30) < 0xFFu )
      v10 = *((_DWORD *)v5 + 30);
    if ( *((_DWORD *)v5 + 31) < 0xFFu )
      v11 = *((_DWORD *)v5 + 31);
    if ( (unsigned int)(v5[16] / v9) < 0x7F )
      v12 = v5[16] / v9;
    v13 = 255;
    if ( (unsigned int)(8LL * v5[17] / v9) < 0xFF )
      v13 = 8LL * v5[17] / v9;
    v14 = v12 | (v13 << 8);
    v15 = Microsoft_Windows_Dwm_CoreEnableBits;
    v16 = v10 | ((v11 | (v14 << 8)) << 8);
    v17 = v16;
    if ( !v5[2] )
      v17 = v16;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      McTemplateU0zqqqqq(
        Microsoft_Windows_Dwm_CoreEnableBits,
        v16,
        (_DWORD)v8,
        v9,
        100 * *((_DWORD *)v5 + 24) / (unsigned int)v9,
        100 * *((_DWORD *)v5 + 28) / (unsigned int)v9,
        v17,
        v5[16] / v9);
      v15 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    v18 = *((unsigned int *)v5 + 14);
    v19 = 255;
    v20 = 255;
    if ( *((_DWORD *)v5 + 30) < 0xFFu )
      v19 = *((_DWORD *)v5 + 30);
    if ( *((_DWORD *)v5 + 31) < 0xFFu )
      v20 = *((_DWORD *)v5 + 31);
    v21 = 255;
    if ( (unsigned int)(v5[18] / v18) < 0xFF )
      v21 = v5[18] / v18;
    v22 = v19 | ((v20 | (v21 << 8)) << 8);
    v23 = v22;
    if ( !v5[2] )
      v23 = v22;
    if ( (v15 & 0x400) != 0 )
      McTemplateU0zqqqq(
        v15,
        v22,
        (_DWORD)v8,
        v18,
        100 * *((_DWORD *)v5 + 17) / (unsigned int)v18,
        100 * *((_DWORD *)v5 + 21) / (unsigned int)v18,
        v23);
    v24 = *((_DWORD *)this + 137) >> 5;
    v26 = (unsigned __int16 *)(v5[1] & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8LL
                       * ((37
                         * (BYTE6(v26)
                          + 37
                          * (BYTE5(v26)
                           + 37
                           * (BYTE4(v26)
                            + 37
                            * (BYTE3(v26)
                             + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                         + HIBYTE(v26)) & (unsigned int)(v24 - 1))); (*k & 1) == 0; k = (_QWORD *)*k )
    {
      if ( (_QWORD *)*k == v5 )
      {
        *k = *v5;
        --*((_DWORD *)this + 136);
        *v5 |= 0x8000000000000002uLL;
        break;
      }
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v5);
  }
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
