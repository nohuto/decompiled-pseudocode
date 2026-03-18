/*
 * XREFs of ?InitLogQMsg@@YAXXZ @ 0x1C0123028
 * Callers:
 *     InitModuleAllocations @ 0x1C0122F80 (InitModuleAllocations.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01B5138 (-EnsureQMsgLog@@YAHXZ.c)
 *     MsgQRegGetDWORD @ 0x1C01B5534 (MsgQRegGetDWORD.c)
 */

void InitLogQMsg(void)
{
  int v0; // eax
  ULONG v1; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v4; // [rsp+70h] [rbp+10h]
  void *KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  memset(&gMsgQLog, 0, 0x28uLL);
  dword_1C0326818 = 256;
  Count = 16;
  dword_1C0326820 = 1;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\USERPostMessageLog");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      gMsgQLog = v4 != 0;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
    {
      v0 = 0x2000;
      if ( v4 < 0x2000 )
        v0 = v4;
      dword_1C0326818 = v0;
    }
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 && v4 < 3 )
      dword_1C0326820 = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
    {
      v1 = 64;
      if ( v4 < 0x40 )
        v1 = v4;
      Count = v1;
    }
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      dword_1C032680C = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      dword_1C0326810 = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 && v4 < 2 )
      dword_1C0326824 = v4;
    EnsureQMsgLog();
    ZwClose(KeyHandle);
  }
}
