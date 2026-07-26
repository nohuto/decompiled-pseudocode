/*
 * XREFs of ndisFindRootDevice @ 0x1C010B0B0
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisReferenceMiniportByHandle @ 0x1C0011418 (ndisReferenceMiniportByHandle.c)
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     WPP_SF_Zqq @ 0x1C004EC74 (WPP_SF_Zqq.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 */

void __fastcall ndisFindRootDevice(
        PCUNICODE_STRING SourceString,
        char a2,
        _UNICODE_STRING **a3,
        _UNICODE_STRING **a4,
        _NDIS_MINIPORT_BLOCK **a5)
{
  _UNICODE_STRING *p_MiniportName; // rbp
  char v6; // r12
  _UNICODE_STRING **v7; // rbx
  _UNICODE_STRING **v8; // r13
  PCUNICODE_STRING v9; // r15
  unsigned __int16 v11; // ax
  _UNICODE_STRING *p_DestinationString; // rdi
  KIRQL v13; // al
  struct _NDIS_M_DRIVER_BLOCK *v14; // rsi
  _NDIS_MINIPORT_BLOCK *i; // rbx
  _NDIS_BIND_PATHS *BindPaths; // rdx
  unsigned int Number; // r13d
  _UNICODE_STRING *Paths; // r12
  char v19; // [rsp+30h] [rbp-68h]
  unsigned int v20; // [rsp+34h] [rbp-64h]
  wchar_t *P; // [rsp+38h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  KIRQL v27; // [rsp+C0h] [rbp+28h]

  v20 = 1;
  p_MiniportName = 0LL;
  v19 = 0;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  v9 = SourceString;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_Z(0x2Fu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, &SourceString->Length);
  DestinationString.Length = v9->Length;
  v11 = DestinationString.Length + 2;
  *v8 = 0LL;
  *v7 = 0LL;
  *a5 = 0LL;
  DestinationString.MaximumLength = v11;
  P = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x7473444Eu);
  DestinationString.Buffer = P;
  if ( P )
  {
    RtlUpcaseUnicodeString(&DestinationString, v9, 0);
    p_DestinationString = &DestinationString;
    ndisReferencePackage((__int64)&ndisPkgs);
    v13 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v14 = ndisMiniDriverList;
    v27 = v13;
    if ( ndisMiniDriverList )
    {
      do
      {
        KeAcquireSpinLockAtDpcLevel(&v14->Ref.SpinLock);
        for ( i = v14->MiniportQueue; i; i = i->NextMiniport )
        {
          if ( a2 )
          {
            if ( p_DestinationString->Length == i->MiniportName.Length
              && !memcmp(p_DestinationString->Buffer, i->MiniportName.Buffer, p_DestinationString->Length) )
            {
              p_MiniportName = &i->MiniportName;
              *a5 = i;
              v6 = 1;
              p_DestinationString = &i->MiniportName;
              v19 = 1;
              break;
            }
          }
          else
          {
            BindPaths = i->BindPaths;
            Number = BindPaths->Number;
            if ( BindPaths->Number >= v20 )
            {
              Paths = BindPaths->Paths;
              if ( DestinationString.Length == BindPaths->Paths[0].Length
                && !memcmp(DestinationString.Buffer, BindPaths->Paths[0].Buffer, DestinationString.Length) )
              {
                p_MiniportName = Paths;
                *a5 = i;
                v6 = 1;
                p_DestinationString = &i->MiniportName;
                v19 = 1;
                v20 = Number;
              }
              else
              {
                v6 = v19;
              }
            }
          }
        }
        KeReleaseSpinLockFromDpcLevel(&v14->Ref.SpinLock);
        if ( a2 && v6 )
          break;
        v14 = v14->NextDriver;
      }
      while ( v14 );
      v9 = SourceString;
      v7 = a4;
      v8 = a3;
      v13 = v27;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v13);
    ndisDereferencePackage((__int64)&ndisPkgs);
    ExFreePoolWithTag(P, 0);
    if ( v6 && *a5 )
    {
      if ( ndisReferenceMiniportByHandle(*a5, 1) )
      {
        *v8 = p_DestinationString;
        *v7 = p_MiniportName;
      }
      else
      {
        *a5 = 0LL;
      }
    }
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
      WPP_SF_Zqq(
        0x30u,
        &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids,
        &v9->Length,
        p_DestinationString,
        p_MiniportName);
  }
}
