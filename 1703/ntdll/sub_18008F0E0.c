/*
 * XREFs of sub_18008F0E0 @ 0x18008F0E0
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x180046590 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 *     sub_1800FCB2C @ 0x1800FCB2C (sub_1800FCB2C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180045488 @ 0x180045488 (sub_180045488.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006E1E4 @ 0x18006E1E4 (sub_18006E1E4.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18008F0E0(__int64 a1, _WORD *a2, _WORD *a3)
{
  void *v5; // rsi
  void *v6; // rax
  int v7; // edi
  const WCHAR *i; // rbx
  unsigned int v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v13; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  __int128 v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+B0h] [rbp+30h] BYREF
  int v19; // [rsp+C8h] [rbp+48h] BYREF

  v11 = 0LL;
  v5 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (void *)sub_180045488(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x158uLL);
      *a2 = 0;
      v19 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v11 = 0LL;
      p_DestinationString = &DestinationString;
      v13 = 48;
      v14 = 0LL;
      v16 = 64;
      v17 = 0LL;
      v7 = ZwOpenKey(&v11, 131097LL, &v13);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        v10 = 8;
        v7 = sub_18006E1E4(v11, (__int64)&DestinationString, &v19, v5, &v10);
        if ( v7 >= 0 )
        {
          if ( v19 != 1 )
            goto LABEL_18;
          for ( i = (const WCHAR *)v5; *i; ++i )
          {
            if ( *i == 44 )
            {
              *i = 0;
              goto LABEL_20;
            }
          }
          while ( *i == 32 )
LABEL_20:
            ++i;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v5);
          if ( RtlCultureNameToLCID(&DestinationString.Length, &v18) )
          {
            *a2 = v18;
            if ( *i )
            {
              RtlInitUnicodeString(&DestinationString, i);
              if ( RtlCultureNameToLCID(&DestinationString.Length, &v18) )
              {
                *a3 = v18;
              }
              else
              {
                v7 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_18:
            v7 = -1073741823;
          }
        }
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v11 )
    ZwClose(v11);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v5);
  return (unsigned int)v7;
}
