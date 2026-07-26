/*
 * XREFs of ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C0040E28
 * Callers:
 *     ndisIfDeletePersistedInterface @ 0x1C0044BC0 (ndisIfDeletePersistedInterface.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_dL @ 0x1C0044424 (WPP_SF_dL_ea_1C0044424.c)
 *     WPP_SF_llL @ 0x1C0044468 (WPP_SF_llL.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00BF2D0 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfDeletePersistedInterfaceIsolationInfo(union _NET_LUID_LH a1, __int64 a2)
{
  char *v3; // rsi
  int v4; // eax
  __int64 v5; // rdx
  int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // r14d
  char *PoolWithTag; // rax
  unsigned int v10; // r14d
  __int64 i; // r13
  _QWORD v13[14]; // [rsp+38h] [rbp-89h] BYREF
  _QWORD v14[10]; // [rsp+A8h] [rbp-19h] BYREF

  v3 = 0LL;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_dL(197LL, a2, *((unsigned __int16 *)&a1.Info + 3), (a1.Value >> 24) & 0xFFFFFF);
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[3]) = 15;
  v13[2] = &NPI_MS_NDIS_MODULEID;
  v13[4] = 0x100000000LL;
  v13[5] = 0LL;
  LODWORD(v13[6]) = 16;
  v13[7] = 0LL;
  LODWORD(v13[8]) = 32;
  v4 = NsiEnumerateObjectsAllParametersEx(v13);
  v6 = v4;
  if ( LODWORD(v13[13]) )
  {
    while ( v4 == 261 )
    {
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      v7 = (16 * LODWORD(v13[13]) + 7) & 0xFFFFFFF8;
      v8 = v7 + 32 * LODWORD(v13[13]);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x6669444Eu);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v6 = -1073741670;
        break;
      }
      memset(PoolWithTag, 0, v8);
      v13[5] = v3;
      v13[7] = &v3[v7];
      LODWORD(v13[6]) = 16;
      LODWORD(v13[8]) = 32;
      v4 = NsiEnumerateObjectsAllParametersEx(v13);
      v6 = v4;
    }
    if ( v6 >= 0 )
    {
      v10 = 0;
      v3 = (char *)v13[5];
      for ( i = v13[7]; v10 < LODWORD(v13[13]); ++v10 )
      {
        if ( *(_QWORD *)&v3[16 * v10] == a1.Value )
        {
          memset(v14, 0, 0x48uLL);
          v14[5] = &v3[16 * v10];
          v14[0] = 0LL;
          v14[2] = &NPI_MS_NDIS_MODULEID;
          LODWORD(v14[1]) = 0;
          LODWORD(v14[3]) = 15;
          v14[4] = 0x300000000LL;
          LODWORD(v14[6]) = 16;
          v14[7] = 0LL;
          LODWORD(v14[8]) = 0;
          v6 = NsiSetAllParametersEx(v14);
          if ( v6 >= 0 )
            NdisIfFreeNetLuidIndex(*(_WORD *)(32LL * v10 + i + 14), (*(_QWORD *)(32LL * v10 + i + 8) >> 24) & 0xFFFFFF);
        }
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  else
  {
    v6 = 0;
  }
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_llL(198LL, v5, HIWORD(a1.Value), (a1.Value >> 24) & 0xFFFFFF, v6);
  return (unsigned int)v6;
}
