/*
 * XREFs of ndisOidPostLinkSpeed @ 0x1C0046920
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostLinkSpeed(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+28h] [rbp-49h] BYREF
  _DWORD v9[4]; // [rsp+98h] [rbp+27h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+37h]
  __int64 v11; // [rsp+B0h] [rbp+3Fh]
  int v12; // [rsp+B8h] [rbp+47h]
  int v13; // [rsp+BCh] [rbp+4Bh]

  v1 = a1[4];
  v3 = *a1;
  v4 = *a1;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qq(0x4Du, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v1);
    v4 = *a1;
  }
  if ( v4 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v3 + 32) < 6u )
  {
    v5 = **(unsigned int **)(v1 + 40);
    v6 = 100 * v5;
    if ( 100 * v5 != *(_QWORD *)(v3 + 2768) )
    {
      v11 = 100 * v5;
      v10 = 100 * v5;
      *(_QWORD *)(v3 + 2280) = v6;
      *(_QWORD *)(v3 + 2288) = v6;
      v9[1] = *(_DWORD *)(v3 + 344);
      v9[2] = *(_DWORD *)(v3 + 348);
      v12 = *(_DWORD *)(v3 + 808);
      v13 = *(_DWORD *)(v3 + 468);
      v9[0] = 2621824;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = &ndisIntReqGeneric;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBuffer = v9;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v3, &StatusIndication);
    }
    if ( (*(_DWORD *)(v3 + 120) & 0x20000000) != 0 )
      v7 = *(_QWORD *)(v3 + 792);
    else
      v7 = *(_QWORD *)(v3 + 3032);
    **(_DWORD **)(v1 + 40) = v7 / 0x64;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x4Eu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v1);
}
