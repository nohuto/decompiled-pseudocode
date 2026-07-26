/*
 * XREFs of NdisDereferenceWithTag @ 0x1C0006C70
 * Callers:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0001B74 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00057B0 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D044 (ndisDereferenceMiniportRef.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisDereferenceWithTag(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  int v3; // ecx
  __int64 v4; // rcx
  unsigned __int8 v5; // r11
  unsigned __int8 v6; // r9
  char v7; // al
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // rbx
  unsigned int v10; // edx

  if ( BugCheckParameter3 )
  {
    if ( a2 == 0xFF )
    {
      *(_BYTE *)BugCheckParameter3 &= ~2u;
    }
    else
    {
      v3 = *(unsigned __int8 *)(BugCheckParameter3 + 1);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v8 = a2;
          v9 = BugCheckParameter3 + ((unsigned __int64)a2 << 6);
          v10 = *(_DWORD *)(v9 + 64);
          if ( v10 >> 17 < 0x3FFE && (unsigned __int16)v10 >> 1 == (v10 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v9 + 8));
            *(_DWORD *)(v9 + 64) &= 0x10001u;
          }
          else
          {
            if ( (v10 & 0xFFFE) == 0 && (v10 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, v8);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v9 + 8), 0);
          }
        }
      }
      else
      {
        v4 = *(_QWORD *)(BugCheckParameter3 + 8);
        if ( v4 && (v5 = *(_BYTE *)(BugCheckParameter3 + 3), v6 = 0, v5) )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v4 + 2LL * v6) == a2 )
            {
              v7 = *(_BYTE *)(v4 + 2LL * v6 + 1);
              if ( v7 )
                break;
            }
            if ( ++v6 >= v5 )
              goto LABEL_5;
          }
          *(_BYTE *)(v4 + 2LL * v6 + 1) = v7 - 1;
        }
        else
        {
LABEL_5:
          if ( !_bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), a2) )
            ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, a2);
        }
      }
    }
  }
}
