/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x180084BB0
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FB8E4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800FCDF0 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 LanguageList; // rax
  HANDLE Handle; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  int v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+50h] [rbp-20h]
  __int128 v18; // [rsp+58h] [rbp-18h]
  unsigned __int8 v19; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v20; // [rsp+B8h] [rbp+48h] BYREF

  Handle = 0LL;
  v4 = a2;
  v19 = 0;
  v20 = 0;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      Handle = 0LL;
      p_DestinationString = &DestinationString;
      v14 = 48;
      v15 = 0LL;
      v17 = 64;
      v18 = 0LL;
      v5 = NtOpenKey(&Handle, 131097LL, &v14);
      if ( v5 < 0 )
        goto LABEL_5;
      a1 = Handle;
      a2 = v4;
    }
    v5 = RtlpLoadPolicyLanguageSpec(a1, a2, &v19, &v20);
    if ( !v5 )
    {
      v10 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v10 + 4) < *(_WORD *)(v10 + 6) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * *(unsigned __int16 *)(*a3 + 4)) = v19;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v20;
          goto LABEL_5;
        }
        LanguageList = RtlpMuiRegGrowLanguageList(v10, v7, v8, v9);
      }
      else
      {
        LanguageList = RtlpMuiRegCreateLanguageList(1, 1, v4);
      }
      *a3 = LanguageList;
      if ( !LanguageList )
      {
        v5 = -1073741801;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_5:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
