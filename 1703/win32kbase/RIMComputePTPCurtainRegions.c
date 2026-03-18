/*
 * XREFs of RIMComputePTPCurtainRegions @ 0x1C0107540
 * Callers:
 *     RIMComputeVirtualHimetricSize @ 0x1C0107CA0 (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     EtwTraceTouchPadCurtainSize @ 0x1C00DA950 (EtwTraceTouchPadCurtainSize.c)
 *     RtlUnicodeStringCatString @ 0x1C010883C (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopyString @ 0x1C01088B0 (RtlUnicodeStringCopyString.c)
 */

__int64 __fastcall RIMComputePTPCurtainRegions(_DWORD *a1, const wchar_t *a2)
{
  int v2; // r14d
  int v4; // edi
  int v5; // esi
  __int32 v6; // r9d
  int v7; // r8d
  int v8; // r15d
  NTSTATUS v9; // r12d
  const wchar_t *v10; // rdx
  __m128i *p_si128; // r14
  __int64 i; // rdi
  const WCHAR *v13; // rdx
  NTSTATUS v14; // eax
  __int32 v15; // ecx
  int v16; // r11d
  int v17; // edx
  __int32 v18; // r10d
  __int32 v19; // ecx
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  ULONG v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h] BYREF
  int v28; // [rsp+A8h] [rbp-60h]
  int v29; // [rsp+ACh] [rbp-5Ch]
  PCWSTR SourceString[6]; // [rsp+B0h] [rbp-58h]
  char KeyValueInformation[4]; // [rsp+E0h] [rbp-28h] BYREF
  int v32; // [rsp+E4h] [rbp-24h]
  int v33; // [rsp+E8h] [rbp-20h]
  __int32 v34; // [rsp+ECh] [rbp-1Ch]
  char v35; // [rsp+F8h] [rbp-10h] BYREF

  SourceString[0] = L"SpaceBarOffset";
  v2 = 1500;
  v28 = 1500;
  SourceString[1] = L"HorizontalOffset";
  v4 = 1500;
  SourceString[2] = L"HorizontalOffsetIsNeg";
  v29 = 1500;
  SourceString[3] = L"AAPDisabled";
  SourceString[4] = L"AAPNonCurtainTop";
  SourceString[5] = L"AAPNonCurtainBaseWidth";
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( a1[64] )
    goto LABEL_35;
  v5 = 2;
  if ( a1[62] )
  {
    v6 = a1[59];
    v7 = a1[58];
    goto LABEL_20;
  }
  if ( (a1[65] & 0x20) != 0 )
    goto LABEL_35;
  v22[0] = 0;
  DestinationString.Buffer = (PWSTR)&v35;
  v8 = 1;
  *(_DWORD *)&DestinationString.Length = 45875200;
  v9 = 0;
  if ( RtlUnicodeStringCopyString(&DestinationString, a2) < 0 )
    goto LABEL_19;
  if ( RtlUnicodeStringCatString(&DestinationString, v10) < 0 )
    goto LABEL_19;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_19;
  p_si128 = &si128;
  for ( i = 0LL; i != 6; ++i )
  {
    v13 = SourceString[i];
    v22[0] = 0;
    RtlInitUnicodeString(&ValueName, v13);
    v14 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, v22);
    if ( v14 >= 0 && v32 == 4 && v33 == 4 )
    {
      p_si128->m128i_i32[0] = v34;
    }
    else
    {
      v8 = 0;
      v9 = v14;
    }
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  ZwClose(KeyHandle);
  if ( !v8 )
  {
    LODWORD(ResultLength) = v9;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x10u,
      (__int64)&WPP_2af9596112663d0feb47807a2bcd069c_Traceguids,
      ResultLength);
  }
  if ( si128.m128i_i32[3] )
  {
LABEL_35:
    a1[65] |= 1u;
    return EtwTraceTouchPadCurtainSize(a1[55], a1[56], a1[57], -__CFSHR__(a1[65], 2));
  }
  v4 = v29;
  v2 = v28;
LABEL_19:
  v6 = si128.m128i_i32[0];
  v7 = si128.m128i_i32[1];
LABEL_20:
  v15 = a1[51];
  v16 = (a1[53] - v15) / 2;
  if ( si128.m128i_i32[2] && v7 )
    v7 = -v7;
  v17 = a1[52];
  v18 = a1[51];
  if ( v2 + v17 - v6 > v17 )
    v17 = v2 + a1[52] - v6;
  a1[55] = v17;
  if ( v16 - v4 - v7 - v6 > v15 )
    v18 = v16 - v4 - v7 - v6;
  a1[56] = v18;
  v19 = a1[53];
  if ( v6 + v4 + v16 - v7 < v19 )
    v19 = v6 + v4 + v16 - v7;
  a1[57] = v19;
  if ( v17 == a1[52] && v18 == a1[51] && v19 == a1[53] || v7 > v4 + v6 )
    v5 = 0;
  a1[65] = v5 | a1[65] & 0xFFFFFFFD;
  return EtwTraceTouchPadCurtainSize(a1[55], a1[56], a1[57], -__CFSHR__(a1[65], 2));
}
