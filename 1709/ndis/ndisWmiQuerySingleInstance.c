/*
 * XREFs of ndisWmiQuerySingleInstance @ 0x1C00B6DF4
 * Callers:
 *     ndisWMIDispatch @ 0x1C00B7BFC (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C000930C (ndisWmiGetGuid.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     ndisQueryGuidData @ 0x1C00B6788 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00B6A0C (ndisQueryGuidDataSize.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 *     ndisReferenceMiniportByName @ 0x1C0101EBC (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C0112648 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C01128A4 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        struct _NDIS_MINIPORT_BLOCK *a5)
{
  signed __int32 v8; // eax
  _LIST_ENTRY *v9; // r12
  __int64 v10; // rax
  wchar_t *v11; // rdx
  int GuidDataSize; // ebx
  _LIST_ENTRY *v13; // r13
  _NDIS_BIND_PATHS *BindPaths; // rcx
  __int64 v15; // r15
  unsigned int v16; // r14d
  size_t v17; // rdx
  CHAR *v18; // rcx
  unsigned int *v20; // rax
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *Flink; // r14
  __int64 v23; // rdx
  unsigned __int16 v24; // cx
  int v25; // [rsp+28h] [rbp-38h]
  struct _NDIS_MINIPORT_BLOCK *v26; // [rsp+30h] [rbp-30h]
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-18h] BYREF
  size_t Size; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+B0h] [rbp+50h]
  unsigned int *v31; // [rsp+B8h] [rbp+58h]

  v31 = a4;
  v30 = a3;
  a5 = 0LL;
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
  v8 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v8 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  *a4 = 0;
  v9 = 0LL;
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
  {
LABEL_11:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths);
LABEL_13:
    if ( (int)ndisWmiGetGuid(&v27, (__int64)a1, (_QWORD *)(a2 + 24), 0) < 0 )
    {
      if ( (unsigned __int8)byte_1C0098759 >= 2u )
        WPP_SF_q(0x2Du, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
      v15 = (__int64)a5;
      GuidDataSize = -1073741811;
      goto LABEL_20;
    }
    v15 = (__int64)a5;
    GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, v9, (GUID *)(a2 + 24), a5);
    if ( GuidDataSize < 0 )
    {
      if ( (unsigned __int8)byte_1C0098759 < 2u )
        goto LABEL_20;
      v24 = 46;
    }
    else
    {
      v16 = Size + *(_DWORD *)(a2 + 56);
      if ( v16 < (unsigned int)Size )
      {
        GuidDataSize = -1073741823;
        goto LABEL_20;
      }
      if ( v30 < v16 )
      {
        v20 = v31;
        if ( v30 < 0x38 )
        {
          GuidDataSize = -1073741789;
          *v31 = 4;
          goto LABEL_20;
        }
        *(_DWORD *)(a2 + 44) |= 0x20u;
        *(_DWORD *)a2 = 56;
        *(_DWORD *)(a2 + 48) = v16;
        *v20 = 56;
        goto LABEL_19;
      }
      v17 = (unsigned int)Size;
      v18 = (CHAR *)(a2 + *(unsigned int *)(a2 + 56));
      v15 = (__int64)a5;
      v26 = a5;
      *(_QWORD *)(a2 + 16) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)a2 = v16;
      *(_DWORD *)(a2 + 60) = v17;
      GuidDataSize = ndisQueryGuidData(v18, v17, a1, v9, (_QWORD *)(a2 + 24), v25, v26);
      if ( GuidDataSize >= 0 )
      {
        *v31 = v16;
LABEL_19:
        GuidDataSize = 0;
LABEL_20:
        if ( v9 )
          ndisDereferenceVcPtr(v9);
        if ( v15 )
          ndisDereferenceMiniport(v15, 0x60u);
        goto LABEL_24;
      }
      if ( (unsigned __int8)byte_1C0098759 < 2u )
        goto LABEL_20;
      v24 = 47;
    }
    WPP_SF_q(v24, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
    goto LABEL_20;
  }
  v10 = *(unsigned int *)(a2 + 48);
  v11 = (wchar_t *)(v10 + a2 + 2);
  GuidDataSize = 0;
  v13 = 0LL;
  String2.Buffer = v11;
  String2.MaximumLength = *(_WORD *)(v10 + a2);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v11 && v11[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = a1->WmiEnabledVcs.Flink;
    while ( Flink != p_WmiEnabledVcs )
    {
      v13 = Flink - 20;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(&Flink[-20], v23) )
        {
          if ( (unsigned __int8)byte_1C0098759 >= 2u )
            WPP_SF_q(0xAu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
          GuidDataSize = -1073741823;
        }
        break;
      }
      Flink = Flink->Flink;
      v13 = 0LL;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
      if ( (unsigned __int8)byte_1C0098759 >= 4u )
        WPP_SF_qZ(0xBu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1, &String2.Length);
      GuidDataSize = -1073741162;
    }
    if ( GuidDataSize < 0 )
      goto LABEL_30;
    v9 = v13;
  }
  else if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
  {
    if ( (unsigned __int8)byte_1C0098759 >= 2u )
      WPP_SF_q(0xCu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
    GuidDataSize = -1073741162;
  }
  if ( GuidDataSize >= 0 )
  {
    if ( v9 )
      goto LABEL_13;
    goto LABEL_11;
  }
LABEL_30:
  if ( (unsigned __int8)byte_1C0098759 >= 2u )
    WPP_SF_q(0x2Cu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
LABEL_24:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_qD(0x30u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1, GuidDataSize);
  return (unsigned int)GuidDataSize;
}
