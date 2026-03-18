/*
 * XREFs of CiConfigQueryValue @ 0x1C000CDD4
 * Callers:
 *     CiConfigQueryTaskFromRegistry @ 0x1C000CD00 (CiConfigQueryTaskFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001160 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00011A0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0001340 (memmove.c)
 *     WPP_SF_Zd @ 0x1C0002004 (WPP_SF_Zd.c)
 *     WPP_SF_L @ 0x1C00027D0 (WPP_SF_L.c)
 */

__int64 __fastcall CiConfigQueryValue(HANDLE KeyHandle, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  __int64 Length; // [rsp+20h] [rbp-F8h]
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int Src; // [rsp+58h] [rbp-C0h]
  unsigned int Src_4; // [rsp+5Ch] [rbp-BCh] BYREF
  wchar_t Str1[32]; // [rsp+A0h] [rbp-78h] BYREF

  RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)a2);
  LODWORD(v6) = *(_DWORD *)(a2 + 8);
  v7 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x50u,
         &ResultLength);
  v10 = v7;
  if ( v7 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    {
      LODWORD(Length) = v7;
      WPP_SF_Zd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
        &DestinationString.Length,
        Length);
    }
LABEL_23:
    v10 = 0;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) == 1 )
  {
    if ( Src >= 0x40 )
    {
      v10 = -1073741562;
    }
    else
    {
      v12 = Src;
      memmove(Str1, &Src_4, Src);
      v13 = v12 >> 1;
      if ( v13 >= 32 )
        _report_rangecheckfailure();
      v14 = 0;
      Str1[v13] = 0;
      v10 = -1073741811;
      if ( *(_DWORD *)(a2 + 36) )
      {
        while ( _wcsicmp(Str1, *(const wchar_t **)(*(_QWORD *)(a2 + 16) + 16LL * v14)) )
        {
          if ( ++v14 >= *(_DWORD *)(a2 + 36) )
            goto LABEL_27;
        }
        v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL * v14 + 8);
        goto LABEL_23;
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 24) & 0x1F) != 2 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_L((__int64)WPP_GLOBAL_Control->AttachedDevice, v8, v9, *(_DWORD *)(a2 + 24) & 0x1F);
      goto LABEL_11;
    }
    if ( Src != 4 || (v11 = *(_QWORD **)(a2 + 16), LODWORD(v6) = Src_4, (unsigned __int64)Src_4 < *v11) )
    {
LABEL_11:
      v10 = -1073741811;
      goto LABEL_27;
    }
    if ( (unsigned __int64)Src_4 <= v11[1] )
    {
LABEL_24:
      *a3 = (unsigned int)v6;
      goto LABEL_30;
    }
    v10 = -1073741811;
  }
LABEL_27:
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(Length) = v10;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
      &DestinationString.Length,
      Length);
  }
LABEL_30:
  if ( v10 >= 0 && (*(_BYTE *)(a2 + 28) & 1) != 0 )
    --*a3;
  return (unsigned int)v10;
}
