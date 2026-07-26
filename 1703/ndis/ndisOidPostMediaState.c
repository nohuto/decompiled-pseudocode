/*
 * XREFs of ndisOidPostMediaState @ 0x1C0048560
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001C410 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostMediaState(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // edx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+28h] [rbp-49h] BYREF
  _DWORD v7[4]; // [rsp+98h] [rbp+27h] BYREF
  __int64 v8; // [rsp+A8h] [rbp+37h]
  __int64 v9; // [rsp+B0h] [rbp+3Fh]
  int v10; // [rsp+B8h] [rbp+47h]
  int v11; // [rsp+BCh] [rbp+4Bh]

  v1 = a1[4];
  v3 = *a1;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x4Fu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, v1);
  v4 = 0;
  if ( *a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v3 + 32) < 6u )
  {
    v5 = **(_DWORD **)(v1 + 40);
    LOBYTE(v4) = v5 == 0;
    if ( v4 != ((*(_DWORD *)(v3 + 120) >> 29) & 1) )
    {
      v7[0] = 2621824;
      v7[1] = (v5 != 0) + 1;
      v9 = *(_QWORD *)(v3 + 2776);
      v8 = *(_QWORD *)(v3 + 2768);
      v7[2] = *(_DWORD *)(v3 + 348);
      v10 = *(_DWORD *)(v3 + 808);
      v11 = *(_DWORD *)(v3 + 468);
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = v7;
      StatusIndication.SourceHandle = (void *)v3;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v3, &StatusIndication);
    }
    **(_DWORD **)(v1 + 40) = (*(_DWORD *)(v3 + 120) & 0x20000000) == 0;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x50u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, v1);
}
