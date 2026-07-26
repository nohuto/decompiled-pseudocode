/*
 * XREFs of ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001EB44
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     ?ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C000CD84 (-ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

_NDIS_MINIPORT_BLOCK *__fastcall ndisNsiGetTopIfBlockFromMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  _NDIS_MINIPORT_BLOCK *result; // rax
  struct _NDIS_IF_BLOCK *v4; // rbx
  KSPIN_LOCK *p_Lock; // r14
  __int64 v6; // rdi
  int v7; // ebp
  KIRQL v8; // r15
  unsigned __int16 v9; // cx
  __int64 v10; // r8
  __int64 v11; // rdi
  KIRQL v12; // al
  KIRQL v13; // si
  ULONG_PTR v14; // rcx
  struct _KEVENT *v16; // rcx

  result = ndisReferenceTopMiniportByNameForNsi((__int64)a1, 0, a3, 0, 2u, 0x3Cu);
  v4 = (struct _NDIS_IF_BLOCK *)result;
  if ( result )
  {
    p_Lock = &result->Lock;
    KeAcquireSpinLockAtDpcLevel(&result->Lock);
    v6 = *(_QWORD *)&v4[1].InterfaceGuid.Data4[4];
    *(_QWORD *)&v4->ifDescr.String[255] = KeGetCurrentThread();
    *(_DWORD *)&v4[1].ifDescr.String[171] = 2234961;
    if ( !v6 )
      goto LABEL_22;
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
          v10 = *(_QWORD *)(v6 + 336);
          *(_WORD *)(v6 + 328) = v9 + 1;
          if ( v10 )
          {
            if ( *(_BYTE *)(v10 + 1) )
            {
              if ( *(_BYTE *)(v10 + 1) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 712), 1u);
            }
            else
            {
              ndisReferenceWithTagCompact((struct _NDIS_REFCOUNT_BLOCK *)v10, 0xBu);
            }
          }
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
      v11 = *(_QWORD *)(v6 + 840);
    else
LABEL_22:
      v11 = *(_QWORD *)&v4[2].ifAlias.String[229];
    *(_QWORD *)&v4->ifDescr.String[255] = 0LL;
    *(_DWORD *)&v4[1].ifDescr.String[171] = 0;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    v12 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    *(_QWORD *)&v4->ifDescr.String[255] = KeGetCurrentThread();
    v13 = v12;
    v14 = *(_QWORD *)&v4[3].ifDescr.String[203];
    *(_DWORD *)&v4[1].ifDescr.String[171] = 72039;
    NdisDereferenceWithTag(v14, 2u);
    if ( (*(_DWORD *)&v4[2].ifDescr.String[57])-- == 1 )
    {
      v16 = *(struct _KEVENT **)&v4[2].ifDescr.String[63];
      if ( v16 )
        KeSetEvent(v16, 0, 0);
    }
    *(_QWORD *)&v4->ifDescr.String[255] = 0LL;
    *(_DWORD *)&v4[1].ifDescr.String[171] = 0;
    KeReleaseSpinLock(p_Lock, v13);
    ndisDereferenceMiniport((__int64)v4, 0x3Cu);
    return (_NDIS_MINIPORT_BLOCK *)v11;
  }
  return result;
}
