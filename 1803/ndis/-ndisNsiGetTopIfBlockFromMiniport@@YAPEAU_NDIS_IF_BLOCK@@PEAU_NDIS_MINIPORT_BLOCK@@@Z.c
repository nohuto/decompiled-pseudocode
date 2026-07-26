/*
 * XREFs of ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021158
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000A2C0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 */

struct _NDIS_IF_BLOCK *__fastcall ndisNsiGetTopIfBlockFromMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  struct _NDIS_IF_BLOCK *result; // rax
  struct _NDIS_IF_BLOCK *v4; // rbx
  KSPIN_LOCK *v5; // r14
  __int64 v6; // rdi
  int v7; // ebp
  KIRQL v8; // r15
  unsigned __int16 v9; // cx
  __int64 v10; // rdi
  KIRQL v11; // al
  KIRQL v12; // si
  ULONG_PTR v13; // rcx
  struct _KEVENT *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  result = (struct _NDIS_IF_BLOCK *)ndisReferenceTopMiniportByNameForNsi((__int64)a1, 0, a3, 0, 2u, 0x3Cu);
  v4 = result;
  if ( result )
  {
    v5 = (KSPIN_LOCK *)&result->ifDescr.String[43];
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&result->ifDescr.String[43]);
    v6 = *(_QWORD *)&v4[1].InterfaceGuid.Data4[4];
    *(_QWORD *)&v4->ifDescr.String[255] = KeGetCurrentThread();
    *(_DWORD *)&v4[1].ifDescr.String[171] = 2234961;
    if ( !v6 )
      goto LABEL_17;
    do
    {
      v7 = 1;
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 320));
      if ( !*(_BYTE *)(v6 + 330) )
      {
        v9 = *(_WORD *)(v6 + 328);
        if ( v9 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v7 = 2;
        }
        else
        {
          *(_WORD *)(v6 + 328) = v9 + 1;
          NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v6 + 336), 0xBu);
          v7 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 320), v8);
      if ( !v7 )
        break;
      v6 = *(_QWORD *)(v6 + 112);
    }
    while ( v6 );
    if ( v6 )
      v10 = *(_QWORD *)(v6 + 840);
    else
LABEL_17:
      v10 = *(_QWORD *)&v4[2].ifAlias.String[229];
    *(_QWORD *)&v4->ifDescr.String[255] = 0LL;
    *(_DWORD *)&v4[1].ifDescr.String[171] = 0;
    KeReleaseSpinLockFromDpcLevel(v5);
    v11 = KeAcquireSpinLockRaiseToDpc(v5);
    *(_QWORD *)&v4->ifDescr.String[255] = KeGetCurrentThread();
    v12 = v11;
    v13 = *(_QWORD *)&v4[3].ifDescr.String[203];
    *(_DWORD *)&v4[1].ifDescr.String[171] = 71394;
    NdisDereferenceWithTag(v13, 2u);
    if ( (*(_DWORD *)&v4[2].ifDescr.String[57])-- == 1 )
    {
      v15 = *(struct _KEVENT **)&v4[2].ifDescr.String[63];
      if ( v15 )
        KeSetEvent(v15, 0, 0);
    }
    *(_QWORD *)&v4->ifDescr.String[255] = 0LL;
    *(_DWORD *)&v4[1].ifDescr.String[171] = 0;
    KeReleaseSpinLock(v5, v12);
    ndisDereferenceMiniport((__int64)v4, 0x3Cu, v16, v17);
    return (struct _NDIS_IF_BLOCK *)v10;
  }
  return result;
}
