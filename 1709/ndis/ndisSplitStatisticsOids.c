/*
 * XREFs of ndisSplitStatisticsOids @ 0x1C00AE99C
 * Callers:
 *     ndisQueryOidList @ 0x1C00AE87C (ndisQueryOidList.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSplitStatisticsOids(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  int v5; // edi
  __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned int v10; // edx
  int *v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  bool v14; // cl
  int v15; // eax
  int *v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  bool v19; // cl
  int v20; // eax
  __int64 v21; // r15
  _DWORD *PoolWithTag; // rax
  unsigned int v23; // r9d
  __int64 v24; // r10
  unsigned int v25; // r8d
  __int64 v27; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = 0;
  v6 = a3;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x15u, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v3);
  v10 = *(_DWORD *)(v3 + 3424) >> 2;
  if ( (_DWORD)v6 )
  {
    v11 = a2;
    v12 = v6;
    do
    {
      v13 = *v11;
      v14 = (*v11++ & 0xFF0000) == 0x20000 && (v13 & 0xFF000000) != 0xFF000000 && v13 != 131613;
      v15 = v5 + 1;
      if ( !v14 )
        v15 = v5;
      v5 = v15;
      --v12;
    }
    while ( v12 );
  }
  if ( v10 )
  {
    v16 = *(int **)(v3 + 3416);
    v17 = v10;
    do
    {
      v18 = *v16;
      v19 = (*v16++ & 0xFF0000) == 0x20000 && (v18 & 0xFF000000) != 0xFF000000 && v18 != 131613;
      v20 = v5 + 1;
      if ( !v19 )
        v20 = v5;
      v5 = v20;
      --v17;
    }
    while ( v17 );
  }
  v21 = v10 + (unsigned int)v6;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)(v21 + v5) + 24, 0x616F444Eu);
  *(_QWORD *)(a1 + 24) = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = v21;
    v23 = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(a1 + 24) + 24LL;
    **(_DWORD **)(a1 + 24) = v5;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 4 * v21;
    if ( (_DWORD)v21 )
    {
      v24 = 0LL;
      do
      {
        if ( v23 >= (unsigned int)v6 )
          v25 = *(_DWORD *)(*(_QWORD *)(v3 + 3416) + 4LL * (v23 - (unsigned int)v6));
        else
          v25 = *a2;
        if ( (v25 & 0xFF0000) == 0x20000 && (v25 & 0xFF000000) != 0xFF000000 && v25 != 131613 )
        {
          v27 = v4++;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 4 * v27) = v25;
          if ( v25 <= 0x20207 )
          {
            if ( v25 == 131591 )
            {
              *(_DWORD *)(v3 + 2696) |= 0x800u;
            }
            else if ( v25 <= 0x20201 )
            {
              switch ( v25 )
              {
                case 0x20201u:
                  *(_DWORD *)(v3 + 2696) |= 0x20u;
                  break;
                case 0x20101u:
                  *(_DWORD *)(v3 + 2696) |= 1u;
                  break;
                case 0x20102u:
                  *(_DWORD *)(v3 + 2696) |= 2u;
                  break;
                case 0x20103u:
                  *(_DWORD *)(v3 + 2696) |= 4u;
                  break;
                case 0x20104u:
                  *(_DWORD *)(v3 + 2696) |= 8u;
                  break;
                case 0x20105u:
                  *(_DWORD *)(v3 + 2696) |= 0x10u;
                  break;
                case 0x20106u:
                  *(_DWORD *)(v3 + 2696) |= 0x400000u;
                  break;
              }
            }
            else
            {
              switch ( v25 )
              {
                case 0x20202u:
                  *(_DWORD *)(v3 + 2696) |= 0x40u;
                  break;
                case 0x20203u:
                  *(_DWORD *)(v3 + 2696) |= 0x80u;
                  break;
                case 0x20204u:
                  *(_DWORD *)(v3 + 2696) |= 0x100u;
                  break;
                case 0x20205u:
                  *(_DWORD *)(v3 + 2696) |= 0x200u;
                  break;
                default:
                  *(_DWORD *)(v3 + 2696) |= 0x400u;
                  break;
              }
            }
          }
          else if ( v25 <= 0x2020D )
          {
            switch ( v25 )
            {
              case 0x2020Du:
                *(_DWORD *)(v3 + 2696) |= 0x20000u;
                break;
              case 0x20208u:
                *(_DWORD *)(v3 + 2696) |= 0x1000u;
                break;
              case 0x20209u:
                *(_DWORD *)(v3 + 2696) |= 0x2000u;
                break;
              case 0x2020Au:
                *(_DWORD *)(v3 + 2696) |= 0x4000u;
                break;
              case 0x2020Bu:
                *(_DWORD *)(v3 + 2696) |= 0x8000u;
                break;
              default:
                *(_DWORD *)(v3 + 2696) |= 0x10000u;
                break;
            }
          }
          else
          {
            switch ( v25 )
            {
              case 0x2020Eu:
                *(_DWORD *)(v3 + 2696) |= 0x40000u;
                break;
              case 0x20219u:
                *(_DWORD *)(v3 + 2696) |= 0x80000u;
                break;
              case 0x2021Au:
                *(_DWORD *)(v3 + 2696) |= 0x100000u;
                break;
              case 0x2021Bu:
                *(_DWORD *)(v3 + 2696) |= 0x200000u;
                break;
              case 0x2021Cu:
                *(_DWORD *)(v3 + 2696) |= 0x8000000u;
                break;
            }
          }
        }
        ++v23;
        ++a2;
        *(_DWORD *)(v24 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)) = v25;
        v24 += 4LL;
      }
      while ( v23 < (unsigned int)v21 );
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1776LL) = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x16u, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v3, v7);
  return v7;
}
