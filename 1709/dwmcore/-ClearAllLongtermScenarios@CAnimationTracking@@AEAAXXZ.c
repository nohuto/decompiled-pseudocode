/*
 * XREFs of ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x18012DF70
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18012DF4C (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CAnimationTracking::ClearAllLongtermScenarios(CAnimationTracking *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  _BYTE *i; // rbx
  _QWORD *v5; // r10
  _BYTE *j; // rbx
  _QWORD *k; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h]
  __int64 v9; // [rsp+30h] [rbp+8h]

  v2 = (_QWORD *)*((_QWORD *)this + 69);
  if ( !v2 || (v3 = (_QWORD *)*v2, (*v2 & 1) != 0) )
  {
    for ( i = v2 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_22;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(_QWORD **)i;
  }
LABEL_22:
  while ( v3 )
  {
    v5 = v3;
    v8 = v3[1] & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(*((_QWORD *)this + 69)
                        + 8LL
                        * ((37
                          * (BYTE6(v8)
                           + 37
                           * (BYTE5(v8)
                            + 37
                            * (BYTE4(v8)
                             + 37
                             * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                          + HIBYTE(v8)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1))
                        + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
        {
          v3 = 0LL;
          goto LABEL_15;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v3 = *(_QWORD **)j;
    }
LABEL_15:
    v9 = v5[1] & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8LL
                       * ((37
                         * (BYTE6(v9)
                          + 37
                          * (BYTE5(v9)
                           + 37
                           * (BYTE4(v9)
                            + 37
                            * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                         + HIBYTE(v9)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1)));
          (*k & 1) == 0;
          k = (_QWORD *)*k )
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
}
