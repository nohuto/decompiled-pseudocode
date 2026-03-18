/*
 * XREFs of ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x1801420EC
 * Callers:
 *     ??1CAnimationTracking@@QEAA@XZ @ 0x18013B548 (--1CAnimationTracking@@QEAA@XZ.c)
 * Callees:
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801420C8 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CAnimationTracking::ClearAllLongtermScenarios(CAnimationTracking *this)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rbx
  _BYTE *i; // rbx
  _QWORD *v5; // r10
  __int64 v6; // rcx
  _BYTE *j; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+90h] [rbp+20h]
  __int64 v10; // [rsp+90h] [rbp+20h]

  v2 = (_QWORD **)*((_QWORD *)this + 69);
  if ( !v2 || (v3 = *v2, ((unsigned __int8)*v2 & 1) != 0) )
  {
    for ( i = v2 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_25;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(_QWORD **)i;
  }
LABEL_25:
  while ( v3 )
  {
    v5 = v3;
    v9 = v3[1] & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    v6 = *((_QWORD *)this + 69)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1));
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *((_QWORD *)this + 69)
         + 8LL
         * ((37
           * (BYTE6(v9)
            + 37
            * (BYTE5(v9)
             + 37
             * (BYTE4(v9)
              + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
           + HIBYTE(v9)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1));
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(v6 + 8); ; j += 8 )
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
    v10 = v5[1] & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    v8 = (_QWORD *)(*((_QWORD *)this + 69)
                  + 8LL
                  * ((37
                    * (BYTE6(v10)
                     + 37
                     * (BYTE5(v10)
                      + 37
                      * (BYTE4(v10)
                       + 37
                       * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                    + HIBYTE(v10)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1)));
    if ( (*v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v8 = (_QWORD *)(*((_QWORD *)this + 69)
                    + 8LL
                    * ((37
                      * (BYTE6(v10)
                       + 37
                       * (BYTE5(v10)
                        + 37
                        * (BYTE4(v10)
                         + 37
                         * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                      + HIBYTE(v10)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1)));
    while ( (*v8 & 1) == 0 )
    {
      if ( (_QWORD *)*v8 == v5 )
      {
        *v8 = *v5;
        --*((_DWORD *)this + 136);
        *v5 |= 0x8000000000000002uLL;
        break;
      }
      v8 = (_QWORD *)*v8;
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v5);
  }
}
