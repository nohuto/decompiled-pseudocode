/*
 * XREFs of ndisEnumerateInterfaces @ 0x1C00F6F00
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D34C (ndisIsCompartmentAccessibleByClient.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces(char *a1, size_t Size, _DWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // r14
  __int64 v6; // r12
  char *v7; // rsi
  char *v8; // r15
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rbp
  unsigned int v11; // r12d
  _NDIS_MINIPORT_BLOCK *i; // rbx
  unsigned int v13; // edx
  char *v14; // r15
  unsigned int Length; // eax
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  bool v19; // cf
  KIRQL v21; // [rsp+20h] [rbp-68h]
  _BYTE v23[24]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a3;
  v4 = (unsigned int)Size;
  ndisGetNsiClientInfo((__int64)v23);
  *v3 = 0;
  if ( (unsigned int)v4 < 0x30 )
    return 3221225507LL;
  v6 = (unsigned int)v4;
  memset(a1, 0, (unsigned int)v4);
  v7 = a1 + 16;
  v8 = &a1[v4];
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v21 = v9;
  if ( ndisMiniDriverList )
  {
    v11 = v4 - 48;
    do
    {
      KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
      for ( i = v10->MiniportQueue; i; i = i->NextMiniport )
      {
        if ( i->PnPDeviceState == NdisPnPDeviceStarted
          && ndisIsCompartmentAccessibleByClient((__int64)i->IfBlock->Compartment, (__int64)v23, 0) )
        {
          ++*((_DWORD *)a1 + 1);
          v13 = i->pAdapterInstanceName->Length + i->MiniportName.Length + 32;
          *((_DWORD *)a1 + 2) += v13;
          if ( v11 >= v13 )
          {
            ++*(_DWORD *)a1;
            v11 -= v13;
            v14 = &v8[-i->MiniportName.Length];
            *((_QWORD *)v7 + 1) = v14;
            Length = i->MiniportName.Length;
            *(_WORD *)v7 = Length;
            *((_WORD *)v7 + 1) = Length;
            memmove(v14, i->MiniportName.Buffer, Length);
            v16 = *((_QWORD *)v7 + 1);
            if ( v16 )
              v16 -= (__int64)a1;
            *((_QWORD *)v7 + 1) = v16;
            v8 = &v14[-i->pAdapterInstanceName->Length];
            *((_QWORD *)v7 + 3) = v8;
            v17 = i->pAdapterInstanceName->Length;
            *((_WORD *)v7 + 8) = v17;
            *((_WORD *)v7 + 9) = v17;
            memmove(v8, i->pAdapterInstanceName->Buffer, v17);
            v18 = *((_QWORD *)v7 + 3);
            if ( v18 )
              v18 -= (__int64)a1;
            *((_QWORD *)v7 + 3) = v18;
            v7 += 32;
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&v10->Ref.SpinLock);
      v10 = v10->NextDriver;
    }
    while ( v10 );
    v3 = a3;
    v6 = v4;
    v9 = v21;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  v19 = v6 - 48 < (unsigned __int64)*((unsigned int *)a1 + 2);
  *v3 = v4;
  return v19 ? 0x80000005 : 0;
}
