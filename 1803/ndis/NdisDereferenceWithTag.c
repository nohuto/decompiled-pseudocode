/*
 * XREFs of NdisDereferenceWithTag @ 0x1C000AD90
 * Callers:
 *     ndisDereferenceMiniportForNsi @ 0x1C000ABF0 (ndisDereferenceMiniportForNsi.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0019F74 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001BE18 (IFBLOCK_DECREMENT_REF.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C280 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001D500 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021158 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfDereferenceMiniport @ 0x1C0021310 (ndisIfDereferenceMiniport.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D9C8 (ndisDereferenceMiniportRef.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisDereferenceWithTag(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  ULONG_PTR v2; // r8
  __int64 v3; // rcx
  unsigned __int8 v4; // r11
  unsigned __int8 v5; // r9
  char v6; // al
  ULONG_PTR v7; // r9
  ULONG_PTR v8; // rbx
  unsigned int v9; // edx
  int v10; // ecx

  v2 = BugCheckParameter3;
  if ( BugCheckParameter3 - 2 <= 1 )
  {
    v2 = 0LL;
  }
  else if ( BugCheckParameter3 < 2 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, BugCheckParameter3, 0LL);
  }
  if ( v2 )
  {
    if ( a2 == 0xFF )
    {
      if ( (*(_BYTE *)v2 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, v2, 0xFFuLL);
      *(_BYTE *)v2 &= ~2u;
    }
    else
    {
      if ( a2 >= *(_BYTE *)(v2 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, v2, a2);
      if ( *(_BYTE *)(v2 + 1) )
      {
        if ( *(_BYTE *)(v2 + 1) == 1 )
        {
          v7 = a2;
          v8 = v2 + ((unsigned __int64)a2 << 6);
          v9 = *(_DWORD *)(v8 + 64);
          v10 = (unsigned __int16)v9 >> 1;
          if ( v9 >> 17 < 0x3FFE && v10 == (v9 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v8 + 8));
            *(_DWORD *)(v8 + 64) &= 0x10001u;
          }
          else
          {
            if ( v10 == 0 && (v9 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v2, v7);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v8 + 8), 0);
          }
        }
      }
      else
      {
        v3 = *(_QWORD *)(v2 + 8);
        if ( v3 && (v4 = *(_BYTE *)(v2 + 3), v5 = 0, v4) )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v3 + 2LL * v5) == a2 )
            {
              v6 = *(_BYTE *)(v3 + 2LL * v5 + 1);
              if ( v6 )
                break;
            }
            if ( ++v5 >= v4 )
              goto LABEL_12;
          }
          *(_BYTE *)(v3 + 2LL * v5 + 1) = v6 - 1;
        }
        else
        {
LABEL_12:
          if ( !_bittestandreset((signed __int32 *)(v2 + 16), a2) )
            ndisBugCheckEx(0x1EuLL, 0LL, v2, a2);
        }
      }
    }
  }
}
