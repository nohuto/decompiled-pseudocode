/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B7034
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0012D10 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C00165F8 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B330 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfCreateFilterInterface @ 0x1C001C71C (ndisIfCreateFilterInterface.c)
 *     ndisIfCreatePersistedInterface @ 0x1C00449D0 (ndisIfCreatePersistedInterface.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00D0F00 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00D0F20 (NdisIfAllocateNetLuidIndexEx.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00D0F3C (ndisIfCreateInterfaceForiScsi.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_dllL @ 0x1C00443C4 (WPP_SF_dllL.c)
 *     WPP_SF_dL @ 0x1C0044424 (WPP_SF_dL_ea_1C0044424.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00D0A28 (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
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
  char v11; // al
  struct _NDIS_IF_TYPE *v12; // rcx
  __int64 v13; // r9
  unsigned __int16 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  char *v20; // r11
  __int64 v21; // r10
  int v22; // eax
  int v23; // edx
  int v24; // r8d
  char v25; // bp
  __int64 v26; // rbp
  int v27; // r15d
  char *PoolWithTag; // rax
  char *v29; // rbx
  __int64 v30; // rax
  char *v31; // rcx
  size_t v32; // rsi
  struct _NDIS_IF_TYPE *v33; // rax
  __int64 v34; // rcx
  struct _NDIS_IF_TYPE **v35; // rax
  char v36; // [rsp+30h] [rbp-58h]
  _BYTE *v37; // [rsp+38h] [rbp-50h]
  unsigned int *v39; // [rsp+98h] [rbp+10h]

  v39 = a2;
  v4 = 0;
  v5 = 0;
  v37 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v36 = 0;
  v11 = byte_1C009261D;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    WPP_SF_dL(0x25u, (__int64)a2, a1, a3);
    v11 = byte_1C009261D;
    a2 = v39;
  }
  if ( a3 )
  {
    *a2 = 0;
LABEL_5:
    KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
    v12 = ndisIfTypesList;
    if ( ndisIfTypesList != (struct _NDIS_IF_TYPE *)&ndisIfTypesList )
    {
      while ( *((_WORD *)v12 + 8) != a1 )
      {
        v12 = *(struct _NDIS_IF_TYPE **)v12;
        if ( v12 == (struct _NDIS_IF_TYPE *)&ndisIfTypesList )
          goto LABEL_26;
      }
      v6 = v12;
      v13 = *((_QWORD *)v12 + 6);
      v8 = *((_DWORD *)v12 + 10);
      if ( !a3 )
      {
        if ( v8 >= (v5 >> 3) + 1 )
        {
          if ( ((unsigned __int8)(1 << (v5 & 7)) & *(_BYTE *)(((unsigned __int64)v5 >> 3) + v13)) != 0 )
            goto LABEL_10;
          if ( (unsigned __int8)byte_1C009261D >= 3u )
            WPP_SF_dL(0x27u, a1, a1, v5);
        }
        v9 = -1073741072;
LABEL_10:
        v14 = a1;
        if ( !v6 )
          v9 = -1073741072;
        goto LABEL_12;
      }
      v18 = 0LL;
      if ( !v8 )
        goto LABEL_33;
      v19 = (_BYTE *)*((_QWORD *)v12 + 6);
      while ( *v19 == 0xFF )
      {
        v4 += 8;
        v18 = (unsigned int)(v18 + 1);
        ++v19;
        if ( (unsigned int)v18 >= v8 )
          goto LABEL_33;
      }
      v20 = (char *)(v18 + v13);
      v21 = (unsigned int)v18;
      v22 = *(unsigned __int8 *)(v18 + v13);
      v23 = 1;
      v24 = 0;
      while ( (v22 & v23) != 0 )
      {
        v23 *= 2;
        if ( (unsigned int)++v24 >= 8 )
          goto LABEL_33;
      }
      v36 = v24;
      v4 += v24;
      *v20 = v23 | v22;
      v7 = v20;
      if ( a4 )
      {
        *(_BYTE *)(v21 + *((_QWORD *)v12 + 7)) |= v23;
        v37 = (_BYTE *)(v21 + *((_QWORD *)v12 + 7));
      }
      if ( !v20 )
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
        v25 = v36;
        v14 = a1;
LABEL_30:
        if ( a4 && (v9 = ndisIfWriteRegistry(v6)) != 0 )
        {
          if ( v7 )
            *v7 &= ~(1 << v25);
          if ( v37 )
            *v37 &= ~(1 << v25);
        }
        else
        {
          *v39 = v4;
        }
        goto LABEL_12;
      }
      v26 = v6 != 0LL ? v8 : 0;
      v4 = 8 * (v6 != 0LL ? v8 : 0);
      v27 = v26 + 1;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * (v26 + 1) + 64), 0x6669444Eu);
      v29 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        v14 = a1;
        *((_WORD *)v29 + 8) = a1;
        *((_QWORD *)v29 + 7) = &v29[v27 + 64];
        *((_DWORD *)v29 + 10) = v27;
        *((_QWORD *)v29 + 6) = v29 + 64;
        v29[(unsigned int)v26 + 64] = 1;
        v30 = *((_QWORD *)v29 + 7);
        if ( a4 )
        {
          *(_BYTE *)((unsigned int)v26 + v30) = 1;
          v37 = (_BYTE *)((unsigned int)v26 + *((_QWORD *)v29 + 7));
        }
        else
        {
          *(_BYTE *)((unsigned int)v26 + v30) = 0;
        }
        v31 = (char *)*((_QWORD *)v29 + 6);
        v32 = (unsigned int)v26;
        v7 = &v31[v26];
        v25 = 0;
        if ( v6 )
        {
          memmove(v31, *((const void **)v6 + 6), v32);
          memmove(*((void **)v29 + 7), *((const void **)v6 + 7), v32);
          v34 = *(_QWORD *)v6;
          v35 = (struct _NDIS_IF_TYPE **)*((_QWORD *)v6 + 1);
          if ( *(struct _NDIS_IF_TYPE **)(*(_QWORD *)v6 + 8LL) != v6 || *v35 != v6 )
            __fastfail(3u);
          *v35 = (struct _NDIS_IF_TYPE *)v34;
          *(_QWORD *)(v34 + 8) = v35;
          ExFreePoolWithTag(v6, 0);
        }
        v33 = ndisIfTypesList;
        if ( *((struct _NDIS_IF_TYPE ***)ndisIfTypesList + 1) != &ndisIfTypesList )
          __fastfail(3u);
        *(_QWORD *)v29 = ndisIfTypesList;
        v6 = (struct _NDIS_IF_TYPE *)v29;
        *((_QWORD *)v29 + 1) = &ndisIfTypesList;
        *((_QWORD *)v33 + 1) = v29;
        ndisIfTypesList = (struct _NDIS_IF_TYPE *)v29;
        goto LABEL_30;
      }
      v9 = -1073741670;
    }
    v14 = a1;
LABEL_12:
    KeReleaseMutex(&ndisUsedIndicesMutex, 0);
    if ( (unsigned __int8)byte_1C009261D >= 4u )
      WPP_SF_dllL(v16, v15, v14, v4);
    return v9;
  }
  v5 = *a2;
  if ( *a2 <= 0x1000 )
    goto LABEL_5;
  if ( (unsigned __int8)v11 >= 3u )
    WPP_SF_d(0x26u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v5);
  return 3221226224LL;
}
