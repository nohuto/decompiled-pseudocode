/*
 * XREFs of ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0021A78
 * Callers:
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C0021824 (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003D288 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C003DBC8 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 *     WPP_SF_LqL @ 0x1C004081C (WPP_SF_LqL.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisIfCreateCompartmentBlock(
        unsigned int a1,
        struct _GUID *a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a4)
{
  int v5; // ebx
  unsigned int v8; // ebp
  char *PoolWithTag; // rax
  __int64 v10; // rdx
  char *v11; // rdi
  USHORT Size; // ax
  size_t v13; // r8
  KIRQL v14; // si
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v17; // rax
  NTSTATUS v19; // eax
  unsigned int AvailableCompartmentId; // eax
  unsigned int Flink; // ecx

  v5 = 0;
  v8 = a1;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_dq(124LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a3);
  *a4 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6D0uLL, 0x6669444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_16;
  }
  memset(PoolWithTag, 0, 0x6D0uLL);
  *((_DWORD *)v11 + 4) = v8;
  *((_QWORD *)v11 + 4) = v11 + 24;
  *((_QWORD *)v11 + 3) = v11 + 24;
  *((_QWORD *)v11 + 217) = v11 + 1728;
  *((_QWORD *)v11 + 216) = v11 + 1728;
  *(_QWORD *)(v11 + 44) = 1LL;
  if ( a3 )
  {
    Size = a3->Header.Size;
    v13 = 1640LL;
    if ( Size < 0x668u )
      v13 = Size;
    memmove(v11 + 64, a3, v13);
    goto LABEL_8;
  }
  v19 = ExUuidCreate((UUID *)v11 + 5);
  v5 = v19;
  if ( v19 >= 0 )
  {
    if ( v19 == 1073872982 )
      v5 = 0;
LABEL_8:
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( a2 )
    {
      AvailableCompartmentId = ndisIfFindAvailableCompartmentId(a2);
      if ( !AvailableCompartmentId )
      {
        v5 = -1073741270;
        goto LABEL_14;
      }
      *((_DWORD *)v11 + 4) = AvailableCompartmentId;
      v8 = AvailableCompartmentId;
      *(struct _GUID *)(v11 + 1144) = *a2;
    }
    if ( !v5 )
    {
      for ( i = ndisIfCompartmentList.Flink; i != &ndisIfCompartmentList; i = i->Flink )
      {
        Flink = (unsigned int)i[1].Flink;
        if ( Flink == v8 )
        {
          v5 = -1073741270;
          KeReleaseSpinLock(&ndisIfListLock, v14);
          goto LABEL_31;
        }
        if ( v8 < Flink )
          break;
      }
      Blink = i->Blink;
      v17 = Blink->Flink;
      if ( Blink->Flink->Blink != Blink )
        __fastfail(3u);
      *(_QWORD *)v11 = v17;
      *((_QWORD *)v11 + 1) = Blink;
      v17->Blink = (_LIST_ENTRY *)v11;
      Blink->Flink = (_LIST_ENTRY *)v11;
      _InterlockedIncrement((volatile signed __int32 *)&ndisIfCompartmentCount);
    }
LABEL_14:
    KeReleaseSpinLock(&ndisIfListLock, v14);
    if ( v5 >= 0 )
    {
      *a4 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)v11;
      goto LABEL_16;
    }
  }
LABEL_31:
  ExFreePoolWithTag(v11, 0);
  v11 = 0LL;
LABEL_16:
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_LqL(125LL, v10, v8, v11, v5);
  return (unsigned int)v5;
}
