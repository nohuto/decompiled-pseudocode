/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B4408
 * Callers:
 *     ndisIfCreateFilterInterface @ 0x1C00043A0 (ndisIfCreateFilterInterface.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0004954 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C0020380 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00213FC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ndisIfCreatePersistedInterface @ 0x1C00414E8 (ndisIfCreatePersistedInterface.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00DB780 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00DB7A0 (NdisIfAllocateNetLuidIndexEx.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00DB7C8 (ndisIfCreateInterfaceForiScsi.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_dllL @ 0x1C0040F40 (WPP_SF_dllL.c)
 *     WPP_SF_dL @ 0x1C0040FA0 (WPP_SF_dL_ea_1C0040FA0.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00DB2BC (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(
        unsigned __int16 a1,
        unsigned int *a2,
        unsigned __int8 a3,
        char a4)
{
  unsigned int v5; // ebx
  struct _NDIS_IF_TYPE *v6; // r14
  char *v7; // r15
  unsigned int v8; // r12d
  unsigned int v9; // esi
  struct _NDIS_IF_TYPE *i; // rcx
  __int64 v12; // r9
  int v13; // r15d
  unsigned __int16 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v18; // r13d
  __int64 v19; // rax
  _BYTE *v20; // rdx
  char *v21; // r11
  __int64 v22; // r10
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  char v26; // bp
  unsigned int v27; // r13d
  unsigned int v28; // ebx
  char *PoolWithTag; // rax
  char *v30; // rdi
  __int64 v31; // rax
  char *v32; // rcx
  __int64 v33; // rcx
  struct _NDIS_IF_TYPE **v34; // rax
  struct _NDIS_IF_TYPE *v35; // rax
  int v36; // [rsp+30h] [rbp-58h]
  char v37; // [rsp+34h] [rbp-54h]
  _BYTE *v38; // [rsp+38h] [rbp-50h]
  unsigned int *v40; // [rsp+98h] [rbp+10h]

  v40 = a2;
  v36 = 0;
  v5 = 0;
  v6 = 0LL;
  v38 = 0LL;
  v7 = 0LL;
  v37 = 0;
  v8 = 0;
  v9 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_dL(0x25u, (__int64)a2, a1, a3);
    a2 = v40;
  }
  if ( a3 )
  {
    *a2 = 0;
    goto LABEL_5;
  }
  v5 = *a2;
  if ( *a2 <= 0x1000 )
  {
LABEL_5:
    KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
    for ( i = ndisIfTypesList; ; i = *(struct _NDIS_IF_TYPE **)i )
    {
      if ( i == (struct _NDIS_IF_TYPE *)&ndisIfTypesList )
        goto LABEL_27;
      if ( *((_WORD *)i + 8) == a1 )
        break;
    }
    v6 = i;
    v12 = *((_QWORD *)i + 6);
    v8 = *((_DWORD *)i + 10);
    if ( !a3 )
    {
      if ( v8 >= (v5 >> 3) + 1 )
      {
        if ( ((unsigned __int8)(1 << (v5 & 7)) & *(_BYTE *)(((unsigned __int64)v5 >> 3) + v12)) != 0 )
          goto LABEL_11;
        if ( (unsigned __int8)byte_1C009875D >= 3u )
          WPP_SF_dL(0x27u, (__int64)&ndisIfTypesList, a1, v5);
      }
      v9 = -1073741072;
LABEL_11:
      v13 = v36;
      v14 = a1;
      if ( !v6 )
        v9 = -1073741072;
LABEL_13:
      KeReleaseMutex(&ndisUsedIndicesMutex, 0);
      if ( (unsigned __int8)byte_1C009875D >= 4u )
        WPP_SF_dllL(v16, v15, v14, v13);
      return v9;
    }
    v18 = 0;
    v19 = 0LL;
    v36 = 0;
    if ( !v8 )
      goto LABEL_34;
    v20 = (_BYTE *)*((_QWORD *)i + 6);
    while ( *v20 == 0xFF )
    {
      v18 += 8;
      v19 = (unsigned int)(v19 + 1);
      ++v20;
      v36 = v18;
      if ( (unsigned int)v19 >= v8 )
        goto LABEL_34;
    }
    v21 = (char *)(v19 + v12);
    v22 = (unsigned int)v19;
    v23 = *(unsigned __int8 *)(v19 + v12);
    v24 = 1;
    v25 = 0;
    while ( (v23 & v24) != 0 )
    {
      v24 *= 2;
      if ( (unsigned int)++v25 >= 8 )
        goto LABEL_34;
    }
    v37 = v25;
    *v21 = v24 | v23;
    v7 = v21;
    v36 = v25 + v18;
    if ( a4 )
    {
      *(_BYTE *)(v22 + *((_QWORD *)i + 7)) |= v24;
      v38 = (_BYTE *)(v22 + *((_QWORD *)i + 7));
    }
    if ( !v21 )
    {
LABEL_34:
      if ( 8 * v8 + 1 >= 0x1001 )
        v9 = -1073741670;
    }
LABEL_27:
    if ( !a3 )
      goto LABEL_11;
    if ( v9 )
    {
      v13 = v36;
    }
    else
    {
      if ( v7 )
      {
        v26 = v37;
        v14 = a1;
LABEL_31:
        if ( a4 && (v9 = ndisIfWriteRegistry(v6)) != 0 )
        {
          if ( v7 )
            *v7 &= ~(1 << v26);
          v13 = v36;
          if ( v38 )
            *v38 &= ~(1 << v26);
        }
        else
        {
          v13 = v36;
          *v40 = v36;
        }
        goto LABEL_13;
      }
      v27 = v6 != 0LL ? v8 : 0;
      v13 = 8 * v27;
      v36 = 8 * v27;
      v28 = v27 + 1;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * (v27 + 1) + 64, 0x6669444Eu);
      v30 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        v14 = a1;
        *((_WORD *)v30 + 8) = a1;
        *((_QWORD *)v30 + 7) = &v30[v28 + 64];
        *((_DWORD *)v30 + 10) = v28;
        *((_QWORD *)v30 + 6) = v30 + 64;
        v30[v27 + 64] = 1;
        v31 = *((_QWORD *)v30 + 7);
        if ( a4 )
        {
          *(_BYTE *)(v27 + v31) = 1;
          v38 = (_BYTE *)(v27 + *((_QWORD *)v30 + 7));
        }
        else
        {
          *(_BYTE *)(v27 + v31) = 0;
        }
        v32 = (char *)*((_QWORD *)v30 + 6);
        v26 = 0;
        v7 = &v32[v27];
        if ( v6 )
        {
          memmove(v32, *((const void **)v6 + 6), v27);
          memmove(*((void **)v30 + 7), *((const void **)v6 + 7), v27);
          v33 = *(_QWORD *)v6;
          if ( *(struct _NDIS_IF_TYPE **)(*(_QWORD *)v6 + 8LL) != v6
            || (v34 = (struct _NDIS_IF_TYPE **)*((_QWORD *)v6 + 1), *v34 != v6) )
          {
            __fastfail(3u);
          }
          *v34 = (struct _NDIS_IF_TYPE *)v33;
          *(_QWORD *)(v33 + 8) = v34;
          ExFreePoolWithTag(v6, 0);
        }
        v35 = ndisIfTypesList;
        if ( *((struct _NDIS_IF_TYPE ***)ndisIfTypesList + 1) != &ndisIfTypesList )
          __fastfail(3u);
        *(_QWORD *)v30 = ndisIfTypesList;
        v6 = (struct _NDIS_IF_TYPE *)v30;
        *((_QWORD *)v30 + 1) = &ndisIfTypesList;
        *((_QWORD *)v35 + 1) = v30;
        ndisIfTypesList = (struct _NDIS_IF_TYPE *)v30;
        goto LABEL_31;
      }
      v9 = -1073741670;
    }
    v14 = a1;
    goto LABEL_13;
  }
  if ( (unsigned __int8)byte_1C009875D >= 3u )
    WPP_SF_d(0x26u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v5);
  return 3221226224LL;
}
