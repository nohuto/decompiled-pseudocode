/*
 * XREFs of sub_180094A20 @ 0x180094A20
 * Callers:
 *     sub_1800946FC @ 0x1800946FC (sub_1800946FC.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_180045488 @ 0x180045488 (sub_180045488.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 */

bool __fastcall sub_180094A20(__int64 a1, __int64 a2, char a3, __int16 a4)
{
  char v4; // r14
  WCHAR *v8; // rbp
  unsigned __int16 v9; // ax
  __int16 v12; // dx
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  WCHAR *v15; // rax
  LCID v16; // ecx
  __int64 v17; // r8
  const wchar_t *v18; // rdx
  __int64 v19; // r8
  const WCHAR *v20; // rdx
  __int64 v21; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    v9 = *(_WORD *)(a2 + 4);
    if ( v9 )
      return v9 == a4;
    if ( *(__int16 *)(a2 + 6) >= 0 )
    {
      v19 = *(_QWORD *)(a1 + 32);
      if ( v19 && *(__int16 *)(a2 + 6) < (int)*(unsigned __int16 *)(v19 + 6) )
        v20 = (const WCHAR *)(*(_QWORD *)(v19 + 24)
                            + 2LL * *(__int16 *)(*(_QWORD *)(v19 + 16) + 2LL * *(__int16 *)(a2 + 6)));
      else
        v20 = 0LL;
      if ( v20 )
      {
        RtlInitUnicodeString(&DestinationString, v20);
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
      v21 = *(_QWORD *)(a1 + 24);
      if ( a4 < (int)*(unsigned __int16 *)(v21 + 6) )
        return a2 == *(_QWORD *)(v21 + 16) + 28LL * a4;
    }
    return 0;
  }
  v12 = *(_WORD *)(a2 + 6);
  DestinationString.Buffer = 0LL;
  if ( v12 < 0 )
  {
    if ( *(_WORD *)(a2 + 4) )
    {
      v15 = (WCHAR *)sub_180045488(a1, 0x55u);
      v8 = v15;
      if ( v15 )
      {
        v16 = *(unsigned __int16 *)(a2 + 4);
        DestinationString.Buffer = v15;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( RtlLCIDToCultureName(v16, &DestinationString) )
        {
LABEL_17:
          v17 = *(_QWORD *)(a1 + 32);
          if ( v17 && a4 >= 0 && a4 < (int)*(unsigned __int16 *)(v17 + 6) )
            v18 = (const wchar_t *)(*(_QWORD *)(v17 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v17 + 16) + 2LL * a4));
          else
            v18 = 0LL;
          if ( !v18 || wcsicmp(DestinationString.Buffer, v18) )
            v4 = 0;
          if ( v8 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
          return v4;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      }
    }
    return 0;
  }
  if ( v12 != a4 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    if ( v13 && v12 < (int)*(unsigned __int16 *)(v13 + 6) )
      v14 = (const WCHAR *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2LL * v12));
    else
      v14 = 0LL;
    if ( v14 )
    {
      RtlInitUnicodeString(&DestinationString, v14);
      goto LABEL_17;
    }
    return 0;
  }
  return v4;
}
