/*
 * XREFs of sub_1800F985C @ 0x1800F985C
 * Callers:
 *     sub_1800F891C @ 0x1800F891C (sub_1800F891C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     sub_180036414 @ 0x180036414 (sub_180036414.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 */

bool __fastcall sub_1800F985C(__int64 a1, __int64 a2, char a3, __int16 a4)
{
  char v4; // bp
  WCHAR *v8; // rdi
  unsigned __int16 v9; // ax
  __int16 v12; // dx
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  __int16 v15; // dx
  __int64 v16; // r8
  const WCHAR *v17; // rsi
  bool v18; // zf
  char v19; // al
  WCHAR *v20; // rax
  LCID v21; // ecx
  __int64 v22; // r8
  const wchar_t *v23; // rdx
  __int64 v24; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    v9 = *(_WORD *)(a2 + 4);
    if ( v9 )
      return v9 == a4;
    v12 = *(_WORD *)(a2 + 6);
    if ( v12 >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      if ( v13 && v12 < (int)*(unsigned __int16 *)(v13 + 6) )
        v14 = (const WCHAR *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2LL * v12));
      else
        v14 = 0LL;
      if ( v14 )
      {
        RtlInitUnicodeString(&DestinationString, v14);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          return (_WORD)Lcid == (unsigned __int16)a4;
      }
    }
    return 0;
  }
  if ( a3 != 3 )
  {
    if ( a3 == 2 && a4 >= 0 )
    {
      v24 = *(_QWORD *)(a1 + 24);
      if ( a4 < (int)*(unsigned __int16 *)(v24 + 6) )
        return a2 == *(_QWORD *)(v24 + 16) + 28LL * a4;
    }
    return 0;
  }
  v15 = *(_WORD *)(a2 + 6);
  DestinationString.Buffer = 0LL;
  if ( v15 < 0 )
  {
    if ( !*(_WORD *)(a2 + 4) )
      return 0;
    v20 = (WCHAR *)sub_180036414(a1, 0x55u);
    v8 = v20;
    if ( !v20 )
      return 0;
    v21 = *(unsigned __int16 *)(a2 + 4);
    DestinationString.Buffer = v20;
    *(_DWORD *)&DestinationString.Length = 11141120;
    v19 = RtlLCIDToCultureName(v21, &DestinationString);
  }
  else
  {
    if ( v15 == a4 )
      return v4;
    v16 = *(_QWORD *)(a1 + 32);
    if ( v16 && v15 < (int)*(unsigned __int16 *)(v16 + 6) )
      v17 = (const WCHAR *)(*(_QWORD *)(v16 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v16 + 16) + 2LL * v15));
    else
      v17 = 0LL;
    v18 = v17 == 0LL;
    if ( v17 )
    {
      RtlInitUnicodeString(&DestinationString, v17);
      v18 = v17 == 0LL;
    }
    v19 = !v18;
  }
  if ( v19 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    if ( v22 && a4 >= 0 && a4 < (int)*(unsigned __int16 *)(v22 + 6) )
      v23 = (const wchar_t *)(*(_QWORD *)(v22 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v22 + 16) + 2LL * a4));
    else
      v23 = 0LL;
    if ( !v23 || wcsicmp(DestinationString.Buffer, v23) )
      v4 = 0;
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return v4;
  }
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  return 0;
}
