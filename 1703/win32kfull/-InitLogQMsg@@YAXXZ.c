/*
 * XREFs of ?InitLogQMsg@@YAXXZ @ 0x1C0117684
 * Callers:
 *     ?InitPostMortemLogging@@YAXXZ @ 0x1C0117570 (-InitPostMortemLogging@@YAXXZ.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01B1F80 (-EnsureQMsgLog@@YAHXZ.c)
 *     MsgQRegGetDWORD @ 0x1C01B25A4 (MsgQRegGetDWORD.c)
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
  dword_1C032A820 = 256;
  Count = 16;
  dword_1C032A828 = 1;
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
      dword_1C032A820 = v0;
    }
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 && v4 < 3 )
      dword_1C032A828 = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
    {
      v1 = 64;
      if ( v4 < 0x40 )
        v1 = v4;
      Count = v1;
    }
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      dword_1C032A814 = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      dword_1C032A818 = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 && v4 < 2 )
      dword_1C032A82C = v4;
    EnsureQMsgLog();
    ZwClose(KeyHandle);
  }
}
