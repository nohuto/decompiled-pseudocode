/*
 * XREFs of ndisWmiQuerySingleInstance @ 0x1C00AD358
 * Callers:
 *     ndisWMIDispatch @ 0x1C00AD13C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C0009820 (ndisWmiGetGuid.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisQueryGuidData @ 0x1C00ACC5C (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00ACEE0 (ndisQueryGuidDataSize.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 *     ndisReferenceMiniportByName @ 0x1C01003B4 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C0114684 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C01148E4 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        struct _NDIS_MINIPORT_BLOCK *a5)
{
  signed __int32 v8; // eax
  int v9; // eax
  _LIST_ENTRY *v10; // rsi
  __int64 v11; // rax
  wchar_t *v12; // rdx
  int GuidDataSize; // ebx
  _LIST_ENTRY *v14; // r13
  _NDIS_BIND_PATHS *BindPaths; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  unsigned int v19; // r15d
  size_t v20; // rdx
  CHAR *v21; // rcx
  int v23; // eax
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *Flink; // rsi
  __int64 v26; // rdx
  unsigned __int16 v27; // cx
  int v28; // [rsp+28h] [rbp-38h]
  struct _NDIS_MINIPORT_BLOCK *v29; // [rsp+30h] [rbp-30h]
  __int64 v30; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-18h] BYREF
  size_t Size; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+50h]
  _DWORD *v34; // [rsp+B8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  a5 = 0LL;
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
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
  v9 = *(_DWORD *)(a2 + 44);
  *a4 = 0;
  v10 = 0LL;
  if ( (v9 & 0x80u) != 0 )
  {
LABEL_11:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths);
LABEL_13:
    if ( (int)ndisWmiGetGuid(&v30, (__int64)a1, (_QWORD *)(a2 + 24), 0) < 0 )
    {
      if ( (unsigned __int8)byte_1C0099619 >= 2u )
        WPP_SF_q(0x2Du, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
      v18 = (__int64)a5;
      GuidDataSize = -1073741811;
      goto LABEL_19;
    }
    v18 = (__int64)a5;
    GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, v10, (GUID *)(a2 + 24), a5);
    if ( GuidDataSize < 0 )
    {
      if ( (unsigned __int8)byte_1C0099619 < 2u )
        goto LABEL_19;
      v27 = 46;
    }
    else
    {
      v19 = Size + *(_DWORD *)(a2 + 56);
      if ( v19 < (unsigned int)Size )
      {
        GuidDataSize = -1073741823;
        goto LABEL_19;
      }
      if ( v33 < v19 )
      {
        v23 = 56;
        if ( v33 < 0x38 )
        {
          GuidDataSize = -1073741789;
          v23 = 4;
        }
        else
        {
          *(_DWORD *)(a2 + 44) |= 0x20u;
          GuidDataSize = 0;
          *(_DWORD *)a2 = 56;
          *(_DWORD *)(a2 + 48) = v19;
        }
        *v34 = v23;
        goto LABEL_19;
      }
      v20 = (unsigned int)Size;
      v21 = (CHAR *)(a2 + *(unsigned int *)(a2 + 56));
      v18 = (__int64)a5;
      v29 = a5;
      *(_QWORD *)(a2 + 16) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)a2 = v19;
      *(_DWORD *)(a2 + 60) = v20;
      GuidDataSize = ndisQueryGuidData(v21, v20, a1, v10, (_QWORD *)(a2 + 24), v28, v29);
      if ( GuidDataSize >= 0 )
      {
        GuidDataSize = 0;
        *v34 = v19;
LABEL_19:
        if ( v10 )
          ndisDereferenceVcPtr(v10);
        if ( v18 )
          ndisDereferenceMiniport(v18, 0x60u, v16, v17);
        goto LABEL_23;
      }
      if ( (unsigned __int8)byte_1C0099619 < 2u )
        goto LABEL_19;
      v27 = 47;
    }
    WPP_SF_q(v27, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
    goto LABEL_19;
  }
  v11 = *(unsigned int *)(a2 + 48);
  v12 = (wchar_t *)(v11 + a2 + 2);
  GuidDataSize = 0;
  v14 = 0LL;
  String2.Buffer = v12;
  String2.MaximumLength = *(_WORD *)(v11 + a2);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v12 && v12[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = a1->WmiEnabledVcs.Flink;
    while ( Flink != p_WmiEnabledVcs )
    {
      v14 = Flink - 20;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(&Flink[-20], v26) )
        {
          if ( (unsigned __int8)byte_1C0099619 >= 2u )
            WPP_SF_q(0xAu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
          GuidDataSize = -1073741823;
        }
        break;
      }
      Flink = Flink->Flink;
      v14 = 0LL;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
      if ( (unsigned __int8)byte_1C0099619 >= 4u )
        WPP_SF_qZ(0xBu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1, &String2.Length);
      GuidDataSize = -1073741162;
    }
    v10 = v14;
    if ( GuidDataSize < 0 )
      v10 = 0LL;
  }
  else if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
  {
    if ( (unsigned __int8)byte_1C0099619 >= 2u )
      WPP_SF_q(0xCu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
    GuidDataSize = -1073741162;
  }
  if ( GuidDataSize >= 0 )
  {
    if ( v10 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( (unsigned __int8)byte_1C0099619 >= 2u )
    WPP_SF_q(0x2Cu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
LABEL_23:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_qD(0x30u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1, GuidDataSize);
  return (unsigned int)GuidDataSize;
}
