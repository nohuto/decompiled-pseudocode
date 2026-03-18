/*
 * XREFs of ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x18014C1A8
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18014C184 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CAnimationTracking::ClearAllLongtermScenarios(CAnimationTracking *this)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 *i; // rdx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 *v8; // rcx
  unsigned __int64 *j; // rdx
  unsigned __int64 v10; // r9
  _QWORD *k; // rdx

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
        goto LABEL_24;
    }
    v3 = 0LL;
  }
LABEL_24:
  while ( v3 )
  {
    v5 = v3;
    v6 = *(_QWORD *)(v3 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    v7 = *((_QWORD *)this + 69)
       + 8
       * ((HIBYTE(v6)
         + 37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6)
            + 37
            * (((*(_DWORD *)(v3 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*(_DWORD *)(v3 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v3 + 8) & (-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 8)
               + 37 * ((unsigned __int8)v6 + 11623883)))))))) & ((*((_DWORD *)this + 137) >> 5) - 1));
    v8 = (unsigned __int64 *)v3;
    v3 = *(_QWORD *)v3;
    if ( (v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = *v8;
    if ( (v3 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v7 + 8);
            (unsigned __int64)j < *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
            ++j )
      {
        v3 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_18;
      }
      v3 = 0LL;
    }
LABEL_18:
    v10 = *(_QWORD *)(v5 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8
                       * ((HIBYTE(v10)
                         + 37
                         * (BYTE6(v10)
                          + 37
                          * (BYTE5(v10)
                           + 37
                           * (BYTE4(v10)
                            + 37
                            * (((*(_DWORD *)(v5 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)((*(_DWORD *)(v5 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v5 + 8) & (-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v10 + 11623883)))))))) & ((*((_DWORD *)this + 137) >> 5) - 1)));
          (*k & 1) == 0;
          k = (_QWORD *)*k )
    {
      if ( *k == v5 )
      {
        *k = *(_QWORD *)v5;
        --*((_DWORD *)this + 136);
        *(_QWORD *)v5 |= 0x8000000000000002uLL;
        break;
      }
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v5);
  }
}
