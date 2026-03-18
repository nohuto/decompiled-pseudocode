/*
 * XREFs of CiConfigQueryValue @ 0x1C000DAE0
 * Callers:
 *     CiConfigQueryTaskFromRegistry @ 0x1C000DA00 (CiConfigQueryTaskFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     memmove @ 0x1C0002F80 (memmove.c)
 *     WPP_SF_Zd @ 0x1C00047AC (WPP_SF_Zd.c)
 *     WPP_SF_L @ 0x1C0004B8C (WPP_SF_L.c)
 */

__int64 __fastcall CiConfigQueryValue(HANDLE KeyHandle, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  __int64 v9; // r8
  _QWORD *v10; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned int v14; // esi
  __int64 Length; // [rsp+20h] [rbp-F8h]
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int Src; // [rsp+58h] [rbp-C0h]
  unsigned int Src_4; // [rsp+5Ch] [rbp-BCh] BYREF
  wchar_t Str1[32]; // [rsp+A0h] [rbp-78h] BYREF

  RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)a2);
  LODWORD(v6) = *(_DWORD *)(a2 + 8);
  v8 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x50u,
         &ResultLength);
  if ( v8 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    {
      LODWORD(Length) = v8;
      WPP_SF_Zd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
        &DestinationString.Length,
        Length);
    }
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) == 1 )
  {
    if ( Src >= 0x40 )
    {
      v8 = -1073741562;
      goto LABEL_31;
    }
    v12 = Src;
    memmove(Str1, &Src_4, Src);
    v13 = v12 >> 1;
    if ( v13 >= 32 )
      __fastfail(8u);
    v14 = 0;
    Str1[v13] = 0;
    v8 = -1073741811;
    if ( !*(_DWORD *)(a2 + 36) )
      goto LABEL_31;
    while ( _wcsicmp(Str1, *(const wchar_t **)(*(_QWORD *)(a2 + 16) + 16LL * v14)) )
    {
      if ( ++v14 >= *(_DWORD *)(a2 + 36) )
        goto LABEL_31;
    }
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL * v14 + 8);
LABEL_9:
    v8 = 0;
LABEL_10:
    *a3 = (unsigned int)v6;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) != 2 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_L((__int64)WPP_GLOBAL_Control->AttachedDevice, v7, v9, *(_DWORD *)(a2 + 24) & 0x1F);
    goto LABEL_27;
  }
  if ( Src != 4 || (v10 = *(_QWORD **)(a2 + 16), LODWORD(v6) = Src_4, (unsigned __int64)Src_4 < *v10) )
  {
LABEL_27:
    v8 = -1073741811;
    goto LABEL_31;
  }
  if ( (unsigned __int64)Src_4 <= v10[1] )
    goto LABEL_10;
  v8 = -1073741811;
LABEL_31:
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(Length) = v8;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
      &DestinationString.Length,
      Length);
  }
LABEL_11:
  if ( v8 >= 0 && (*(_BYTE *)(a2 + 28) & 1) != 0 )
    --*a3;
  return (unsigned int)v8;
}
