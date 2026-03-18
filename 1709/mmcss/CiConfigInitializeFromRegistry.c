/*
 * XREFs of CiConfigInitializeFromRegistry @ 0x1C000CA58
 * Callers:
 *     CiConfigInitialize @ 0x1C000C620 (CiConfigInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001130 (__security_check_cookie.c)
 *     memmove @ 0x1C0001300 (memmove.c)
 *     memset @ 0x1C0001640 (memset.c)
 *     WPP_SF_Sd @ 0x1C0001F24 (WPP_SF_Sd.c)
 *     WPP_SF_d @ 0x1C00022F4 (WPP_SF_d.c)
 *     CiTaskAllocate @ 0x1C000C344 (CiTaskAllocate.c)
 *     CiTaskDump @ 0x1C000C444 (CiTaskDump.c)
 *     CiConfigQueryTaskFromRegistry @ 0x1C000CD00 (CiConfigQueryTaskFromRegistry.c)
 *     CiConfigTaskPolicy @ 0x1C000D080 (CiConfigTaskPolicy.c)
 */

__int64 __fastcall CiConfigInitializeFromRegistry(HANDLE KeyHandle)
{
  ULONG i; // esi
  NTSTATUS v3; // ebx
  WCHAR *PoolWithTag; // rax
  WCHAR *v5; // rdi
  NTSTATUS v6; // r9d
  int TaskFromRegistry; // ebx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  void *KeyHandlea; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 *v15; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v18[15]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE KeyInformation[12]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int Src; // [rsp+114h] [rbp+Ch]
  __int64 Src_4[18]; // [rsp+118h] [rbp+10h] BYREF

  memset(&v18[7], 0, 0x40uLL);
  for ( i = 0; ; ++i )
  {
    v3 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x98u, ResultLength);
    if ( v3 < 0 )
      break;
    if ( Src < 0x80 )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag((POOL_TYPE)512, 2LL * (Src + 1), 0x74727641u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src_4, Src);
        v5[(unsigned __int64)Src >> 1] = 0;
        if ( RtlInitUnicodeStringEx(&DestinationString, v5) < 0 )
          goto LABEL_16;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandlea, 0x101u, &ObjectAttributes);
        if ( v6 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xEu,
              (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
              v6);
LABEL_16:
          ExFreePoolWithTag(v5, 0);
          continue;
        }
        TaskFromRegistry = CiConfigQueryTaskFromRegistry(KeyHandlea);
        ZwClose(KeyHandlea);
        if ( TaskFromRegistry < 0 )
          goto LABEL_16;
        CiConfigTaskPolicy(v18);
        v8 = CiTaskAllocate(v5, v18, &v15);
        if ( v8 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            Length[0] = v8;
            WPP_SF_Sd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
              0LL,
              *(_QWORD *)Length);
          }
        }
        else
        {
          CiConfigTaskPolicy(v15);
          CiTaskDump(v15, v9, v10);
        }
      }
    }
LABEL_21:
    ;
  }
  if ( v3 == -1073741789 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
        -1073741789);
    goto LABEL_21;
  }
  if ( v3 == -2147483622 )
    return 0LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
      v3);
  return (unsigned int)v3;
}
