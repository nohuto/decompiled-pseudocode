/*
 * XREFs of ndisOidPostMediaState @ 0x1C0046B70
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostMediaState(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // edx
  int *v6; // r8
  unsigned int v7; // ecx
  int v8; // r9d
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+28h] [rbp-49h] BYREF
  _DWORD v10[4]; // [rsp+98h] [rbp+27h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+37h]
  __int64 v12; // [rsp+B0h] [rbp+3Fh]
  int v13; // [rsp+B8h] [rbp+47h]
  int v14; // [rsp+BCh] [rbp+4Bh]

  v1 = a1[4];
  v3 = *a1;
  v4 = *a1;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qq(0x4Fu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v1);
    v4 = *a1;
  }
  v5 = 0;
  if ( v4 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v3 + 32) < 6u )
  {
    v6 = *(int **)(v1 + 40);
    v7 = *(_DWORD *)(v3 + 120);
    v8 = *v6;
    LOBYTE(v5) = *v6 == 0;
    if ( v5 != ((v7 >> 29) & 1) )
    {
      v10[0] = 2621824;
      v10[1] = (v8 != 0) + 1;
      v12 = *(_QWORD *)(v3 + 2776);
      v11 = *(_QWORD *)(v3 + 2768);
      v10[2] = *(_DWORD *)(v3 + 348);
      v13 = *(_DWORD *)(v3 + 808);
      v14 = *(_DWORD *)(v3 + 468);
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = v10;
      StatusIndication.SourceHandle = (void *)v3;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v3, &StatusIndication);
      v7 = *(_DWORD *)(v3 + 120);
      v6 = *(int **)(v1 + 40);
    }
    *v6 = (v7 & 0x20000000) == 0;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x50u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v1);
}
