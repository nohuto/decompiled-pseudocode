/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C0D64
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B8B0 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfCreateFilterInterface @ 0x1C001CE90 (ndisIfCreateFilterInterface.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001D2F4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0042630 (ndisIfCreatePersistedInterface.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00DD340 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00DD360 (NdisIfAllocateNetLuidIndexEx.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00DD388 (ndisIfCreateInterfaceForiScsi.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_dL @ 0x1C0041F84 (WPP_SF_dL.c)
 *     WPP_SF_dllL @ 0x1C00420D0 (WPP_SF_dllL.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00DCE64 (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(
        unsigned __int16 a1,
        unsigned int *a2,
        unsigned __int8 a3,
        char a4)
{
  int v4; // r13d
  unsigned int v5; // ebx
  struct _NDIS_IF_TYPE *v6; // r14
  char *v7; // r15
  unsigned int v8; // r12d
  unsigned int v9; // edi
  struct _NDIS_IF_TYPE *v11; // rcx
  __int64 v12; // r9
  unsigned __int16 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  _BYTE *v18; // rdx
  char *v19; // r11
  __int64 v20; // r10
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  char v24; // bp
  size_t v25; // rbx
  int v26; // r15d
  char *PoolWithTag; // rax
  char *v28; // rsi
  __int64 v29; // rax
  char *v30; // rcx
  __int64 v31; // rcx
  struct _NDIS_IF_TYPE **v32; // rax
  struct _NDIS_IF_TYPE *v33; // rax
  char v34; // [rsp+30h] [rbp-58h]
  _BYTE *v35; // [rsp+38h] [rbp-50h]
  unsigned int *v37; // [rsp+98h] [rbp+10h]

  v37 = a2;
  v4 = 0;
  v5 = 0;
  v35 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v34 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    WPP_SF_dL(0x25u, (__int64)a2, a1, a3);
    a2 = v37;
  }
  if ( a3 )
  {
    *a2 = 0;
LABEL_5:
    KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
    v11 = ndisIfTypesList;
    if ( ndisIfTypesList != (struct _NDIS_IF_TYPE *)&ndisIfTypesList )
    {
      while ( *((_WORD *)v11 + 8) != a1 )
      {
        v11 = *(struct _NDIS_IF_TYPE **)v11;
        if ( v11 == (struct _NDIS_IF_TYPE *)&ndisIfTypesList )
          goto LABEL_26;
      }
      v6 = v11;
      v12 = *((_QWORD *)v11 + 6);
      v8 = *((_DWORD *)v11 + 10);
      if ( !a3 )
      {
        if ( v8 >= (v5 >> 3) + 1 )
        {
          if ( ((unsigned __int8)(1 << (v5 & 7)) & *(_BYTE *)(((unsigned __int64)v5 >> 3) + v12)) != 0 )
            goto LABEL_10;
          if ( (unsigned __int8)byte_1C009961D >= 3u )
            WPP_SF_dL(0x27u, a1, a1, v5);
        }
        v9 = -1073741072;
LABEL_10:
        v13 = a1;
        if ( !v6 )
          v9 = -1073741072;
        goto LABEL_12;
      }
      v17 = 0LL;
      if ( !v8 )
        goto LABEL_33;
      v18 = (_BYTE *)*((_QWORD *)v11 + 6);
      while ( *v18 == 0xFF )
      {
        v4 += 8;
        v17 = (unsigned int)(v17 + 1);
        ++v18;
        if ( (unsigned int)v17 >= v8 )
          goto LABEL_33;
      }
      v19 = (char *)(v17 + v12);
      v20 = (unsigned int)v17;
      v21 = *(unsigned __int8 *)(v17 + v12);
      v22 = 1;
      v23 = 0;
      while ( (v21 & v22) != 0 )
      {
        v22 *= 2;
        if ( (unsigned int)++v23 >= 8 )
          goto LABEL_33;
      }
      v34 = v23;
      v4 += v23;
      *v19 = v22 | v21;
      v7 = v19;
      if ( a4 )
      {
        *(_BYTE *)(*((_QWORD *)v11 + 7) + v20) |= v22;
        v35 = (_BYTE *)(v20 + *((_QWORD *)v11 + 7));
      }
      if ( !v19 )
      {
LABEL_33:
        if ( 8 * v8 + 1 >= 0x1001 )
          v9 = -1073741670;
      }
    }
LABEL_26:
    if ( !a3 )
      goto LABEL_10;
    if ( !v9 )
    {
      if ( v7 )
      {
        v24 = v34;
        v13 = a1;
LABEL_30:
        if ( a4 && (v9 = ndisIfWriteRegistry(v6)) != 0 )
        {
          if ( v7 )
            *v7 &= ~(1 << v24);
          if ( v35 )
            *v35 &= ~(1 << v24);
        }
        else
        {
          *v37 = v4;
        }
        goto LABEL_12;
      }
      v25 = v6 != 0LL ? v8 : 0;
      v4 = 8 * (v6 != 0LL ? v8 : 0);
      v26 = v25 + 1;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * (v25 + 1) + 64), 0x6669444Eu);
      v28 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        v13 = a1;
        *((_WORD *)v28 + 8) = a1;
        *((_QWORD *)v28 + 7) = &v28[v26 + 64];
        *((_DWORD *)v28 + 10) = v26;
        *((_QWORD *)v28 + 6) = v28 + 64;
        v28[(unsigned int)v25 + 64] = 1;
        v29 = *((_QWORD *)v28 + 7);
        if ( a4 )
        {
          *(_BYTE *)((unsigned int)v25 + v29) = 1;
          v35 = (_BYTE *)((unsigned int)v25 + *((_QWORD *)v28 + 7));
        }
        else
        {
          *(_BYTE *)((unsigned int)v25 + v29) = 0;
        }
        v30 = (char *)*((_QWORD *)v28 + 6);
        v24 = 0;
        v7 = &v30[(unsigned int)v25];
        if ( v6 )
        {
          memmove(v30, *((const void **)v6 + 6), v25);
          memmove(*((void **)v28 + 7), *((const void **)v6 + 7), v25);
          v31 = *(_QWORD *)v6;
          if ( *(struct _NDIS_IF_TYPE **)(*(_QWORD *)v6 + 8LL) != v6
            || (v32 = (struct _NDIS_IF_TYPE **)*((_QWORD *)v6 + 1), *v32 != v6) )
          {
            __fastfail(3u);
          }
          *v32 = (struct _NDIS_IF_TYPE *)v31;
          *(_QWORD *)(v31 + 8) = v32;
          ExFreePoolWithTag(v6, 0);
        }
        v33 = ndisIfTypesList;
        if ( *((struct _NDIS_IF_TYPE ***)ndisIfTypesList + 1) != &ndisIfTypesList )
          __fastfail(3u);
        *(_QWORD *)v28 = ndisIfTypesList;
        v6 = (struct _NDIS_IF_TYPE *)v28;
        *((_QWORD *)v28 + 1) = &ndisIfTypesList;
        *((_QWORD *)v33 + 1) = v28;
        ndisIfTypesList = (struct _NDIS_IF_TYPE *)v28;
        goto LABEL_30;
      }
      v9 = -1073741670;
    }
    v13 = a1;
LABEL_12:
    KeReleaseMutex(&ndisUsedIndicesMutex, 0);
    if ( (unsigned __int8)byte_1C009961D >= 4u )
      WPP_SF_dllL(v15, v14, v13, v4);
    return v9;
  }
  v5 = *a2;
  if ( *a2 <= 0x1000 )
    goto LABEL_5;
  if ( (unsigned __int8)byte_1C009961D >= 3u )
    WPP_SF_d(0x26u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v5);
  return 3221226224LL;
}
