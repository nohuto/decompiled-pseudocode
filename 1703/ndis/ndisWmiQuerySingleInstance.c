/*
 * XREFs of ndisWmiQuerySingleInstance @ 0x1C00A69C8
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A6BB4 (ndisWMIDispatch.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisWmiGetGuid @ 0x1C0011B58 (ndisWmiGetGuid.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisQueryGuidData @ 0x1C00A651C (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00A6788 (ndisQueryGuidDataSize.c)
 *     ndisWmiFindInstanceName @ 0x1C00A7120 (ndisWmiFindInstanceName.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C0109638 (ndisDereferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        struct _NDIS_MINIPORT_BLOCK *a5)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // r12
  int InstanceName; // ebx
  PVOID v11; // r14
  _NDIS_BIND_PATHS *BindPaths; // rcx
  GUID *v13; // r8
  unsigned int v14; // r15d
  size_t v15; // rdx
  CHAR *v16; // rcx
  unsigned __int16 v17; // cx
  int v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  size_t Size; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+50h]
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v21 = a3;
  P = 0LL;
  v6 = 0LL;
  a5 = 0LL;
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  *a4 = 0;
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
  {
    v11 = 0LL;
    P = 0LL;
LABEL_11:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths);
      v6 = a5;
    }
    goto LABEL_13;
  }
  InstanceName = ndisWmiFindInstanceName(
                   &P,
                   a1,
                   *(unsigned int *)(a2 + 48) + a2 + 2,
                   *(unsigned __int16 *)(*(unsigned int *)(a2 + 48) + a2));
  if ( InstanceName < 0 )
  {
    if ( (unsigned __int8)byte_1C0092619 >= 2u )
      WPP_SF_q(0x2Cu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
    goto LABEL_7;
  }
  v11 = P;
  if ( !P )
    goto LABEL_11;
LABEL_13:
  if ( (int)ndisWmiGetGuid(&v19, (__int64)a1, (_QWORD *)(a2 + 24), 0) < 0 )
  {
    if ( (unsigned __int8)byte_1C0092619 >= 2u )
      WPP_SF_q(0x2Du, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
    InstanceName = -1073741811;
    goto LABEL_20;
  }
  InstanceName = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, v11, v13, v6);
  if ( InstanceName < 0 )
  {
    if ( (unsigned __int8)byte_1C0092619 < 2u )
      goto LABEL_20;
    v17 = 46;
LABEL_32:
    WPP_SF_q(v17, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
    goto LABEL_20;
  }
  v14 = Size + *(_DWORD *)(a2 + 56);
  if ( v14 < (unsigned int)Size )
  {
    InstanceName = -1073741823;
    goto LABEL_20;
  }
  if ( v21 < v14 )
  {
    if ( v21 < 0x38 )
    {
      InstanceName = -1073741789;
      *a4 = 4;
      goto LABEL_20;
    }
    *(_DWORD *)(a2 + 44) |= 0x20u;
    *(_DWORD *)a2 = 56;
    *(_DWORD *)(a2 + 48) = v14;
    *a4 = 56;
    goto LABEL_19;
  }
  v15 = (unsigned int)Size;
  v16 = (CHAR *)(a2 + *(unsigned int *)(a2 + 56));
  v6 = a5;
  v11 = P;
  *(_QWORD *)(a2 + 16) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)a2 = v14;
  *(_DWORD *)(a2 + 60) = v15;
  InstanceName = ndisQueryGuidData(v16, v15, a1, v11, (_QWORD *)(a2 + 24), v18, v6);
  if ( InstanceName < 0 )
  {
    if ( (unsigned __int8)byte_1C0092619 < 2u )
      goto LABEL_20;
    v17 = 47;
    goto LABEL_32;
  }
  *a4 = v14;
LABEL_19:
  InstanceName = 0;
LABEL_20:
  if ( v11 )
    ndisDereferenceVcPtr(v11);
  if ( v6 )
    ndisDereferenceMiniport((__int64)v6, 0x60u);
LABEL_7:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_qD(0x30u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1, InstanceName);
  return (unsigned int)InstanceName;
}
