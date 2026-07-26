/*
 * XREFs of ndisPMRejectAsync @ 0x1C00E0560
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     NdisMIndicateStatusEx @ 0x1C0011180 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisPMRejectAsync(PVOID P)
{
  void *v1; // rdi
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+20h] [rbp-98h] BYREF

  v1 = (void *)*((_QWORD *)P + 4);
  v3 = (_QWORD *)*((_QWORD *)P + 5);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x49u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)v1);
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusCode = *((_DWORD *)P + 12);
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = v4 + 5;
    StatusIndication.SourceHandle = v1;
    StatusIndication.StatusBufferSize = 4;
    NdisMIndicateStatusEx(v1, &StatusIndication);
    ExFreePoolWithTag(v4, 0);
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0xFu);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x4Au, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)v1);
}
