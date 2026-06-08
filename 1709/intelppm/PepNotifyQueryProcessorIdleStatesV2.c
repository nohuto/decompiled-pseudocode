/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0032360
 * Callers:
 *     InitPepIdleStates @ 0x1C0031724 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000829C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008840 (WPP_RECORDER_SF_d.c)
 *     PepQueryName @ 0x1C0032848 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // r14
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  char v9; // dl
  int *v10; // rbp
  __int64 v11; // rcx
  int v12; // ecx
  unsigned __int16 v13; // r9
  unsigned int v14; // edx
  unsigned int *v15; // r13
  unsigned int v16; // eax
  unsigned __int16 v17; // r9
  unsigned int v18; // eax
  char *v19; // rax
  char *v20; // rbx
  unsigned int v21; // edi
  char *v22; // rsi
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+80h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 1100);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 12 * v2 + 4, 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 12 * v2 + 4);
  *v5 = v2;
  v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 18LL, v5);
  v6 = v7;
  if ( v7 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xDu,
      (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids,
      v7);
    goto LABEL_49;
  }
  v8 = 0;
  v9 = 0;
  v6 = -1073741811;
  if ( !v2 )
    goto LABEL_48;
  v10 = (int *)(v5 + 1);
  do
  {
    v11 = *(_QWORD *)(a1 + 264);
    if ( (v11 & 0x200000000LL) == 0 && (*v10 & 0x78) == 0 )
    {
      v13 = 14;
      goto LABEL_36;
    }
    if ( (v11 & 0x200) == 0 && (*v10 & 0x78) != 0 )
    {
      v13 = 15;
      goto LABEL_36;
    }
    v12 = *v10;
    if ( (*v10 & 0x78) != 0 )
    {
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 2) != 0 )
        {
          if ( (v12 & 4) != 0 )
          {
            if ( (v12 & 0x80u) == 0 )
            {
              v13 = 19;
              goto LABEL_36;
            }
            goto LABEL_18;
          }
          v13 = 18;
        }
        else
        {
          v13 = 17;
        }
      }
      else
      {
        v13 = 16;
      }
LABEL_36:
      LODWORD(v24) = v8;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v13,
        (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids,
        v24);
      goto LABEL_49;
    }
    if ( v10[1] == -1 )
    {
      v13 = 20;
      goto LABEL_36;
    }
LABEL_18:
    if ( (v12 & 0x81) == 0x80 )
    {
      v6 = -1073741637;
      v13 = 21;
      goto LABEL_36;
    }
    if ( (v12 & 1) != 0 )
      v9 = 1;
    v26 = v9;
    if ( v8 )
    {
      v14 = v10[1];
      v15 = &v5[3 * v8 - 3];
      if ( v14 == -1 )
      {
        if ( v15[2] != -1 )
        {
          v16 = v8 - 1;
          v17 = 22;
LABEL_25:
          LODWORD(v25) = v16;
          LODWORD(v24) = v8;
          WPP_RECORDER_SF_dd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v17,
            (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids,
            v24,
            v25);
          goto LABEL_49;
        }
      }
      else
      {
        v18 = v15[2];
        if ( v14 < v18 )
        {
          v16 = v8 - 1;
          v17 = 23;
          goto LABEL_25;
        }
        if ( v18 == -1 )
        {
          LODWORD(v25) = v8 - 1;
          LODWORD(v24) = v8;
          WPP_RECORDER_SF_dd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x18u,
            (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids,
            v24,
            v25);
        }
      }
      if ( v10[2] < v15[3] )
      {
        v6 = -1073741637;
        v16 = v8 - 1;
        v17 = 25;
        goto LABEL_25;
      }
      v9 = v26;
    }
    ++v8;
    v10 += 3;
  }
  while ( v8 < v2 );
  if ( v9 )
  {
    v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v2, 0x72637250u);
    v20 = v19;
    if ( v19 )
    {
      memset(v19, 0, 16 * v2);
      v21 = 0;
      v22 = v20;
      do
      {
        PepQueryName(a1, v21++, 28LL, v22);
        v22 += 16;
      }
      while ( v21 < v2 );
      *(_QWORD *)(a1 + 1128) = v20;
      *a2 = v5;
      v5 = 0LL;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
    goto LABEL_49;
  }
LABEL_48:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    0x1Au,
    (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids);
  v6 = -1073741637;
LABEL_49:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  return v6;
}
