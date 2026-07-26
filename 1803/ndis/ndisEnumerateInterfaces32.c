/*
 * XREFs of ndisEnumerateInterfaces32 @ 0x1C010CE40
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C002243C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C0022458 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces32(char *a1, size_t Size, _DWORD *a3)
{
  size_t v4; // rbp
  size_t v7; // r14
  char *v8; // r13
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rsi
  char *v11; // r14
  KSPIN_LOCK *p_SpinLock; // r15
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // edx
  __int64 Length; // rax
  char *v17; // r13
  __int64 v18; // rcx
  bool v19; // cf
  KIRQL v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h]
  unsigned int v22[6]; // [rsp+28h] [rbp-60h] BYREF

  v4 = (unsigned int)Size;
  ndisGetNsiClientInfo(v22);
  *a3 = 0;
  if ( (unsigned int)v4 < 0x20 )
    return 3221225507LL;
  v21 = v4 - 32;
  v7 = v4;
  memset(a1, 0, v4);
  v8 = &a1[v4];
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v20 = v9;
  if ( ndisMiniDriverList )
  {
    v11 = a1 + 16;
    do
    {
      p_SpinLock = &v10->Ref.SpinLock;
      KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
      MiniportQueue = v10->MiniportQueue;
      if ( MiniportQueue )
      {
        v14 = v21;
        do
        {
          if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient((__int64)MiniportQueue->IfBlock->Compartment, (__int64)v22, 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v15 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 16;
            *((_DWORD *)a1 + 2) += v15;
            if ( v14 >= v15 )
            {
              ++*(_DWORD *)a1;
              v14 -= v15;
              Length = MiniportQueue->MiniportName.Length;
              v17 = &v8[-Length];
              *(_WORD *)v11 = Length;
              *((_WORD *)v11 + 1) = Length;
              memmove(v17, MiniportQueue->MiniportName.Buffer, (unsigned int)Length);
              *((_DWORD *)v11 + 1) = (_DWORD)v17 - (_DWORD)a1;
              v18 = MiniportQueue->pAdapterInstanceName->Length;
              *((_WORD *)v11 + 4) = v18;
              v8 = &v17[-v18];
              *((_WORD *)v11 + 5) = v18;
              memmove(v8, MiniportQueue->pAdapterInstanceName->Buffer, (unsigned int)v18);
              *((_DWORD *)v11 + 3) = (_DWORD)v8 - (_DWORD)a1;
              v11 += 16;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v21 = v14;
        p_SpinLock = &v10->Ref.SpinLock;
      }
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      v10 = v10->NextDriver;
    }
    while ( v10 );
    v9 = v20;
    v7 = v4;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  v19 = v7 - 32 < *((unsigned int *)a1 + 2);
  *a3 = v4;
  return v19 ? 0x80000005 : 0;
}
