/*
 * XREFs of CiNdisOpenDevice @ 0x1C000903C
 * Callers:
 *     CiNdisThrottleInitialize @ 0x1C000C078 (CiNdisThrottleInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00022F4 (WPP_SF_d.c)
 */

__int64 CiNdisOpenDevice()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  struct _IO_STATUS_BLOCK v3; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v4; // [rsp+40h] [rbp-38h] BYREF

  v4.Length = 48;
  v4.RootDirectory = 0LL;
  v4.Attributes = 576;
  v4.ObjectName = (PUNICODE_STRING)&CiNdisDevceName;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  v0 = ZwOpenFile(&CiNdisDeviceHandle, 0x12019Fu, &v4, &v3, 7u, 0x20u);
  v1 = v0;
  if ( v0 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_01eae20d47c6343f3bd70f9720892b24_Traceguids,
      v0);
  return v1;
}
