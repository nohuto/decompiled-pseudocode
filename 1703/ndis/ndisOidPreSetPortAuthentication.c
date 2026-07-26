/*
 * XREFs of ndisOidPreSetPortAuthentication @ 0x1C0049360
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 *     NdisMIndicateStatusEx @ 0x1C001C410 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

char __fastcall ndisOidPreSetPortAuthentication(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // r15
  _DWORD *v5; // r13
  __int64 v6; // rsi
  KIRQL v7; // cl
  int v8; // eax
  KIRQL v9; // cl
  int v10; // eax
  KIRQL v12; // [rsp+28h] [rbp-89h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v14[2]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-1h]
  __int64 v16; // [rsp+B8h] [rbp+7h]
  int v17; // [rsp+C0h] [rbp+Fh]
  int v18; // [rsp+C4h] [rbp+13h]
  int v19; // [rsp+C8h] [rbp+17h]
  int v20; // [rsp+CCh] [rbp+1Bh]
  int v21; // [rsp+D0h] [rbp+1Fh]

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0xC0u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, *(_DWORD *)(v2 + 8));
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)(v2 + 48) >= 0x14u )
      {
        v5 = *(_DWORD **)(v2 + 40);
        if ( *(_DWORD *)(v2 + 8) )
          goto LABEL_17;
        if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
        {
          v6 = *(_QWORD *)(v1 + 16);
          v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
          v12 = v7;
          *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
          v8 = *(_DWORD *)(v6 + 124);
          *(_DWORD *)(v6 + 1856) = 2307490;
          if ( (v8 & 0x80u) == 0 )
          {
            *(_DWORD *)(v6 + 3336) = v5[1];
            *(_DWORD *)(v6 + 3340) = v5[2];
            *(_DWORD *)(v6 + 3344) = v5[3];
            *(_DWORD *)(v6 + 3348) = v5[4];
            ndisIfSetInterfaceState((const struct _TlgProvider_t *)v6, 1, v7);
            v7 = v12;
          }
          *(_QWORD *)(v6 + 520) = 0LL;
          *(_DWORD *)(v6 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v7);
        }
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        v10 = *(_DWORD *)(v1 + 124);
        *(_DWORD *)(v1 + 1856) = 2307506;
        if ( (v10 & 0x80u) != 0 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v9);
          goto LABEL_17;
        }
        *(_DWORD *)(v1 + 3336) = v5[1];
        *(_DWORD *)(v1 + 3340) = v5[2];
        *(_DWORD *)(v1 + 3344) = v5[3];
        *(_DWORD *)(v1 + 3348) = v5[4];
        v14[0] = 3146112;
        v14[1] = *(_DWORD *)(v1 + 480);
        v15 = *(_QWORD *)(v1 + 792);
        v16 = *(_QWORD *)(v1 + 800);
        v17 = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 532LL);
        v18 = *(_DWORD *)(v1 + 3336);
        v19 = *(_DWORD *)(v1 + 3340);
        v20 = *(_DWORD *)(v1 + 3344);
        v21 = *(_DWORD *)(v1 + 3348);
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v9);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = v14;
        StatusIndication.SourceHandle = (void *)v1;
        StatusIndication.StatusCode = 1073807394;
        StatusIndication.StatusBufferSize = 48;
        NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
        *(_QWORD *)(v2 + 52) = 20LL;
        *(_DWORD *)(a1 + 40) = 0;
      }
      else
      {
        *(_DWORD *)(v2 + 52) = 0;
        *(_DWORD *)(v2 + 56) = 20;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 56) = 20;
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    v3 = 1;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0xC1u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, *(_DWORD *)(v2 + 8));
  return v3;
}
