/*
 * XREFs of PnpDiagRundownParentPdoForEachDevice @ 0x140694EF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagRundownParentPdoForEachDevice(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+48h] [rbp-30h]
  __int64 v6; // [rsp+50h] [rbp-28h]

  if ( !*(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = a1 + 32;
    v1 = *(_QWORD *)(a1 + 16);
    if ( v1 )
      v3 = *(_QWORD *)(v1 + 32);
    else
      v3 = 0LL;
    v5 = &v3;
    v6 = 8LL;
    EtwWrite(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentPdo, 0LL, 2u, &UserData);
  }
  return 0LL;
}
