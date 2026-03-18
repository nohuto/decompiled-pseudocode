/*
 * XREFs of OSOpenNextSubkey @ 0x1C00A1C98
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C005CC20 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056320 (WPP_RECORDER_SF_d.c)
 *     OSOpenHandle @ 0x1C00838F8 (OSOpenHandle.c)
 */

__int64 __fastcall OSOpenNextSubkey(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4, __int64 a5)
{
  int v9; // ebx
  NTSTATUS v10; // eax
  ULONG v11; // eax
  unsigned __int16 *PoolWithTag; // rax
  int v13; // edx
  unsigned __int16 *v14; // r14
  NTSTATUS v15; // eax
  int v16; // edx
  int MaximumLength; // r15d
  struct _STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp+30h] BYREF

  if ( !KeyHandle || a4 && *a4 && !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, 0LL, 0, &ResultLength);
    v9 = v10;
    if ( v10 )
    {
      if ( v10 == -2147483643 || v10 == -1073741789 )
      {
        v11 = ResultLength;
        if ( ResultLength <= 0x18 )
          v11 = 24;
        ResultLength = v11;
        PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v11, 0x4D706341u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
          if ( v9 >= 0 )
          {
            SourceString.Buffer = v14 + 8;
            SourceString.Length = v14[6];
            SourceString.MaximumLength = v14[6] + 2;
            v15 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            v9 = v15;
            if ( v15 >= 0 )
            {
              if ( a4 )
              {
                MaximumLength = DestinationString.MaximumLength;
                if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                  v9 = -1073741789;
                else
                  memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
                *a4 = MaximumLength;
              }
              if ( v9 >= 0 && a5 )
                v9 = OSOpenHandle(DestinationString.Buffer, (__int64)KeyHandle, a5);
              RtlFreeAnsiString(&DestinationString);
            }
            else
            {
              LOBYTE(v16) = 2;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v16,
                21,
                15,
                (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
                v15);
            }
          }
          ExFreePoolWithTag(v14, 0);
        }
        else
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
            21,
            14,
            (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
            ResultLength);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v9;
}
