/*
 * XREFs of sub_180036174 @ 0x180036174
 * Callers:
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 *     sub_1800F891C @ 0x1800F891C (sub_1800F891C.c)
 *     sub_1800FA22C @ 0x1800FA22C (sub_1800FA22C.c)
 * Callees:
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_180036174(__int64 a1, int a2, __int64 a3, __int16 *a4)
{
  unsigned int v4; // ebx
  __int16 v5; // r10
  __int64 v8; // rbp
  int v10; // ecx
  _WORD *v11; // rdx
  __int64 v12; // r8
  const WCHAR *v13; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a3;
  LOBYTE(a3) = 1;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 24);
  if ( a2 != 3 )
    goto LABEL_3;
  v10 = 0;
  if ( !*(_WORD *)(v8 + 6) )
  {
LABEL_13:
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 && v5 >= 0 && v5 < (int)*(unsigned __int16 *)(v12 + 6) )
      v13 = (const WCHAR *)(*(_QWORD *)(v12 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v12 + 16) + 2LL * v5));
    else
      v13 = 0LL;
    if ( !v13 )
      return (unsigned int)-1073741772;
    RtlInitUnicodeString(&DestinationString, v13);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return (unsigned int)-1073741772;
    v5 = Lcid;
    a2 = 1;
    LOBYTE(a3) = 0;
LABEL_3:
    if ( a2 == 1 )
      return (unsigned int)sub_1800362CC(a1, (unsigned __int16)v5, a3, a4);
    if ( a2 == 2 )
    {
      if ( v5 > 0 && v5 < (int)*(unsigned __int16 *)(v8 + 6) )
      {
        if ( a4 )
          *a4 = v5;
        return v4;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741772;
  }
  while ( 1 )
  {
    v11 = (_WORD *)(*(_QWORD *)(v8 + 16) + 28LL * v10);
    if ( (*v11 & 0x1020) == 0x20 && v11[3] == v5 && a4 )
      break;
    if ( ++v10 >= *(unsigned __int16 *)(v8 + 6) )
      goto LABEL_13;
  }
  *a4 = v10;
  return v4;
}
