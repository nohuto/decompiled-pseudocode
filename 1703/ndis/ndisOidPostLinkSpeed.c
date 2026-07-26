/*
 * XREFs of ndisOidPostLinkSpeed @ 0x1C0048310
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001C410 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostLinkSpeed(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+28h] [rbp-49h] BYREF
  _DWORD v8[4]; // [rsp+98h] [rbp+27h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+37h]
  __int64 v10; // [rsp+B0h] [rbp+3Fh]
  int v11; // [rsp+B8h] [rbp+47h]
  int v12; // [rsp+BCh] [rbp+4Bh]

  v1 = a1[4];
  v3 = *a1;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x4Du, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, v1);
  if ( *a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v3 + 32) < 6u )
  {
    v4 = **(unsigned int **)(v1 + 40);
    v5 = 100 * v4;
    if ( 100 * v4 != *(_QWORD *)(v3 + 2768) )
    {
      v10 = 100 * v4;
      v9 = 100 * v4;
      *(_QWORD *)(v3 + 2280) = v5;
      *(_QWORD *)(v3 + 2288) = v5;
      v8[1] = *(_DWORD *)(v3 + 344);
      v8[2] = *(_DWORD *)(v3 + 348);
      v11 = *(_DWORD *)(v3 + 808);
      v12 = *(_DWORD *)(v3 + 468);
      v8[0] = 2621824;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = &ndisIntReqGeneric;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBuffer = v8;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v3, &StatusIndication);
    }
    if ( (*(_DWORD *)(v3 + 120) & 0x20000000) != 0 )
      v6 = *(_QWORD *)(v3 + 792);
    else
      v6 = *(_QWORD *)(v3 + 3032);
    **(_DWORD **)(v1 + 40) = v6 / 0x64;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x4Eu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, v1);
}
