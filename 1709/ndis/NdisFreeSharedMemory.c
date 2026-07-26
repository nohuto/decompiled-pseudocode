/*
 * XREFs of NdisFreeSharedMemory @ 0x1C0001DE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __stdcall NdisFreeSharedMemory(NDIS_HANDLE NdisHandle, NDIS_HANDLE AllocationHandle)
{
  NDIS_HANDLE v4; // rbp
  int v5; // ecx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  KIRQL v8; // r9
  _QWORD *v9; // rdx
  NDIS_HANDLE *v10; // rcx
  NDIS_HANDLE *v11; // rdx
  NDIS_HANDLE *v12; // r8
  NDIS_HANDLE *v13; // rcx
  NDIS_HANDLE *v14; // rdx

  v4 = 0LL;
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_q(23LL, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, AllocationHandle);
  if ( NdisHandle )
  {
    if ( *(_BYTE *)NdisHandle == 18 )
    {
      v4 = NdisHandle;
      NdisHandle = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else if ( *(_BYTE *)NdisHandle != 17 )
    {
      goto LABEL_17;
    }
    if ( AllocationHandle )
    {
      v5 = *((_DWORD *)AllocationHandle + 12);
      if ( (v5 & 0xF) == 1 )
      {
        v6 = (_QWORD *)*((_QWORD *)NdisHandle + 63);
        if ( !v6 )
          goto LABEL_17;
        v7 = v6[3];
        if ( !v7 )
          goto LABEL_17;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(v7 + 8) + 24LL))(
          v7,
          *((unsigned int *)AllocationHandle + 36),
          *((_QWORD *)AllocationHandle + 13),
          *((_QWORD *)AllocationHandle + 19),
          1);
        ndisDereferenceDmaAdapter(v6);
        goto LABEL_11;
      }
      if ( (v5 & 0xF) == 2 )
      {
        MmFreeContiguousMemorySpecifyCache(
          *((PVOID *)AllocationHandle + 19),
          *((unsigned int *)AllocationHandle + 36),
          MmCached);
        goto LABEL_11;
      }
      if ( (v5 & 4) != 0 )
      {
        if ( v4 )
          goto LABEL_11;
      }
      else if ( (v5 & 8) == 0 )
      {
        goto LABEL_17;
      }
      (*((void (__fastcall **)(_QWORD, _QWORD))AllocationHandle + 10))(
        *((_QWORD *)AllocationHandle + 11),
        *((_QWORD *)AllocationHandle + 12));
LABEL_11:
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisHandle + 12);
      *((_QWORD *)NdisHandle + 65) = KeGetCurrentThread();
      *((_DWORD *)NdisHandle + 464) = 1836944;
      v9 = *(_QWORD **)AllocationHandle;
      if ( *(NDIS_HANDLE *)(*(_QWORD *)AllocationHandle + 8LL) != AllocationHandle
        || (v10 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 1), *v10 != AllocationHandle) )
      {
        __fastfail(3u);
      }
      *v10 = v9;
      v9[1] = v10;
      if ( v4 )
      {
        v13 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 2);
        if ( v13[1] != (char *)AllocationHandle + 16
          || (v14 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 3), *v14 != (char *)AllocationHandle + 16) )
        {
          __fastfail(3u);
        }
        *v14 = v13;
        v13[1] = v14;
      }
      v11 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 4);
      if ( v11[1] != (char *)AllocationHandle + 32
        || (v12 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 5), *v12 != (char *)AllocationHandle + 32) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      v11[1] = v12;
      *((_QWORD *)NdisHandle + 65) = 0LL;
      *((_DWORD *)NdisHandle + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisHandle + 12, v8);
      ExFreePoolWithTag(AllocationHandle, 0);
    }
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_(24LL, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids);
}
