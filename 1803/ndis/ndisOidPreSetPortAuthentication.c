/*
 * XREFs of ndisOidPreSetPortAuthentication @ 0x1C00479B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

char __fastcall ndisOidPreSetPortAuthentication(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  char v3; // r15
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rsi
  KIRQL v8; // cl
  int v9; // eax
  KIRQL v10; // cl
  int v11; // eax
  KIRQL v13; // [rsp+28h] [rbp-89h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v15[2]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-1h]
  __int64 v17; // [rsp+B8h] [rbp+7h]
  int v18; // [rsp+C0h] [rbp+Fh]
  int v19; // [rsp+C4h] [rbp+13h]
  int v20; // [rsp+C8h] [rbp+17h]
  int v21; // [rsp+CCh] [rbp+1Bh]
  int v22; // [rsp+D0h] [rbp+1Fh]

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qD(0xCFu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, *(_DWORD *)(v2 + 8));
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)(v2 + 48) >= 0x14u )
      {
        v6 = *(_DWORD **)(v2 + 40);
        if ( *(_DWORD *)(v2 + 8) )
          goto LABEL_17;
        if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
        {
          v7 = *(_QWORD *)(v1 + 16);
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
          v13 = v8;
          *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
          v9 = *(_DWORD *)(v7 + 124);
          *(_DWORD *)(v7 + 1856) = 2307904;
          if ( (v9 & 0x80u) == 0 )
          {
            *(_DWORD *)(v7 + 3336) = v6[1];
            *(_DWORD *)(v7 + 3340) = v6[2];
            *(_DWORD *)(v7 + 3344) = v6[3];
            *(_DWORD *)(v7 + 3348) = v6[4];
            ndisIfSetInterfaceState(v7, 1, v8);
            v8 = v13;
          }
          *(_QWORD *)(v7 + 520) = 0LL;
          *(_DWORD *)(v7 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v8);
        }
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        v11 = *(_DWORD *)(v1 + 124);
        *(_DWORD *)(v1 + 1856) = 2307920;
        if ( (v11 & 0x80u) != 0 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
          goto LABEL_17;
        }
        *(_DWORD *)(v1 + 3336) = v6[1];
        *(_DWORD *)(v1 + 3340) = v6[2];
        *(_DWORD *)(v1 + 3344) = v6[3];
        *(_DWORD *)(v1 + 3348) = v6[4];
        v15[0] = 3146112;
        v15[1] = *(_DWORD *)(v1 + 480);
        v16 = *(_QWORD *)(v1 + 792);
        v17 = *(_QWORD *)(v1 + 800);
        v18 = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 532LL);
        v19 = *(_DWORD *)(v1 + 3336);
        v20 = *(_DWORD *)(v1 + 3340);
        v21 = *(_DWORD *)(v1 + 3344);
        v22 = *(_DWORD *)(v1 + 3348);
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = v15;
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
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0xD0u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, *(_DWORD *)(v2 + 8));
  return v3;
}
