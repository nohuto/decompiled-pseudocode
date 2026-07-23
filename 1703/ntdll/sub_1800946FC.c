/*
 * XREFs of sub_1800946FC @ 0x1800946FC
 * Callers:
 *     sub_18008A180 @ 0x18008A180 (sub_18008A180.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_180045488 @ 0x180045488 (sub_180045488.c)
 *     sub_180045AEC @ 0x180045AEC (sub_180045AEC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180094A20 @ 0x180094A20 (sub_180094A20.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 */

char __fastcall sub_1800946FC(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5,
        __int64 *a6,
        unsigned __int16 *a7)
{
  __int64 v7; // r15
  __int16 v8; // r14
  WCHAR *v11; // r13
  bool v12; // zf
  char v13; // bl
  const wchar_t *v14; // rdx
  __int64 *v15; // rdi
  __int64 v17; // r8
  unsigned __int16 *v18; // rdi
  __int64 v19; // r8
  const WCHAR *v20; // rdx
  unsigned __int16 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r9
  WCHAR *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int16 v28; // [rsp+88h] [rbp+48h] BYREF
  DWORD Lcid; // [rsp+98h] [rbp+58h] BYREF

  v7 = 0LL;
  v8 = a3;
  v11 = 0LL;
  if ( a2 == a4 )
  {
    v12 = (_WORD)a3 == a5;
LABEL_3:
    v13 = v12;
    goto LABEL_10;
  }
  if ( !a2 || !a4 )
    goto LABEL_6;
  v18 = a7;
  if ( a7 )
    *a7 = -1;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      if ( (a3 & 0x8000u) == 0LL )
      {
        v26 = *(_QWORD *)(a1 + 24);
        if ( (__int16)a3 < (int)*(unsigned __int16 *)(v26 + 6) )
        {
          LOBYTE(a3) = a4;
          v7 = *(_QWORD *)(v26 + 16) + 28LL * v8;
          v13 = sub_180094A20(a1, v7, a3, a5);
          goto LABEL_10;
        }
      }
    }
    goto LABEL_6;
  }
  if ( a4 != 2 )
  {
    v13 = 1;
    if ( a2 == 1 )
    {
      if ( a4 == 3 )
      {
        v19 = *(_QWORD *)(a1 + 32);
        if ( v19 && (a5 & 0x8000u) == 0 && (__int16)a5 < (int)*(unsigned __int16 *)(v19 + 6) )
          v20 = (const WCHAR *)(*(_QWORD *)(v19 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v19 + 16) + 2LL * (__int16)a5));
        else
          v20 = 0LL;
        if ( v20 )
        {
          RtlInitUnicodeString(&DestinationString, v20);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            v12 = v8 == (__int16)Lcid;
            goto LABEL_3;
          }
        }
      }
    }
    else if ( a4 == 1 && a2 == 3 )
    {
      v24 = (WCHAR *)sub_180045488(a1, 0x55u);
      v11 = v24;
      if ( v24 )
      {
        DestinationString.Buffer = v24;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( RtlLCIDToCultureName((__int16)a5, &DestinationString) )
        {
          v25 = *(_QWORD *)(a1 + 32);
          if ( v25 && v8 >= 0 && v8 < (int)*(unsigned __int16 *)(v25 + 6) )
            v14 = (const wchar_t *)(*(_QWORD *)(v25 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v25 + 16) + 2LL * v8));
          else
            v14 = 0LL;
          if ( v14 && !wcsicmp(DestinationString.Buffer, v14) )
            goto LABEL_7;
        }
      }
    }
LABEL_6:
    v13 = 0;
LABEL_7:
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    v11 = 0LL;
    v7 = 0LL;
    goto LABEL_10;
  }
  if ( !a1 )
    goto LABEL_6;
  v21 = a5;
  if ( (a5 & 0x8000u) != 0 )
    goto LABEL_6;
  v22 = *(_QWORD *)(a1 + 24);
  if ( (__int16)a5 >= (int)*(unsigned __int16 *)(v22 + 6) )
    goto LABEL_6;
  v23 = (unsigned __int16)a3;
  LOBYTE(a3) = a2;
  v11 = (WCHAR *)(*(_QWORD *)(v22 + 16) + 28LL * (__int16)a5);
  v13 = sub_180094A20(a1, v11, a3, v23);
  if ( v13 && v11 && v18 )
    *v18 = v21;
  v7 = 0LL;
LABEL_10:
  v15 = a6;
  if ( a6 )
  {
    if ( v13 )
    {
      if ( v11 )
      {
        *a6 = (__int64)v11;
      }
      else if ( v7 )
      {
        *a6 = v7;
      }
      else
      {
        *a6 = 0LL;
        if ( (int)sub_180045AEC(a1, a2, (unsigned __int16)v8, &v28) >= 0 && v28 >= 0 )
        {
          v17 = *(_QWORD *)(a1 + 24);
          if ( v28 < (int)*(unsigned __int16 *)(v17 + 6) )
            *v15 = *(_QWORD *)(v17 + 16) + 28LL * v28;
        }
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return v13;
}
