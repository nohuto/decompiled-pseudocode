/*
 * XREFs of PnpDiagRundownParentDevNodeForEachDevice @ 0x140694E60
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagRundownParentDevNodeForEachDevice(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+48h] [rbp-30h]
  int v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+54h] [rbp-24h]
  __int64 v7; // [rsp+80h] [rbp+8h] BYREF

  v7 = a1;
  v3.Ptr = (ULONGLONG)&v7;
  v3.Reserved = 0;
  v3.Size = 8;
  v2 = *(_QWORD *)(a1 + 16);
  v4 = &v2;
  v6 = 0;
  v5 = 8;
  EtwWrite(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentDevNode, 0LL, 2u, &v3);
  return 0LL;
}
