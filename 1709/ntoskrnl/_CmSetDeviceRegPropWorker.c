/*
 * XREFs of _CmSetDeviceRegPropWorker @ 0x140551408
 * Callers:
 *     _CmSetDeviceRegProp @ 0x140551244 (_CmSetDeviceRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     _CmDevicePropertyRead @ 0x1400DED50 (_CmDevicePropertyRead.c)
 *     _MapCmDevicePropertyToRegValue @ 0x1400DEDF0 (_MapCmDevicePropertyToRegValue.c)
 *     _MapCmDevicePropertyToRegType @ 0x1400FB574 (_MapCmDevicePropertyToRegType.c)
 *     _CmDevicePropertyWrite @ 0x1400FB5F4 (_CmDevicePropertyWrite.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140474530 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C0030 (RtlLengthSecurityDescriptor.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _CmIsRootDevice @ 0x140551BE8 (_CmIsRootDevice.c)
 *     _CmRaisePropertyChangeEvent @ 0x140551F84 (_CmRaisePropertyChangeEvent.c)
 *     _RegRtlSetValue @ 0x14058E7F0 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetDeviceRegPropWorker(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        int a5,
        _DWORD *SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int inited; // ebx
  _DWORD *v13; // rbp
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  HANDLE v19; // rcx
  int v20; // eax
  int v21; // r9d
  HANDLE v23; // rsi
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  inited = 0;
  Handle = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v13 = SecurityDescriptorInput;
    if ( !SecurityDescriptorInput )
      return (unsigned int)-1073741811;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmDevicePropertyRead(a1, a4) )
    goto LABEL_55;
  if ( !CmDevicePropertyWrite(v15, v14) )
    return (unsigned int)-1073741790;
  v16 = MapCmDevicePropertyToRegType(a4);
  if ( !v16 )
    return (unsigned int)-1073741264;
  if ( a5 != v16 )
    return (unsigned int)-1073741811;
  if ( a4 == 11 )
  {
    if ( !SecurityDescriptorLength )
      goto LABEL_12;
    if ( v13 && SecurityDescriptorLength == 4 )
    {
      if ( *v13 && (unsigned __int8)CmIsRootDevice(a2) )
        return (unsigned int)-1073741808;
      goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_12;
    return (unsigned int)-1073741811;
  }
  if ( a4 == 24
    && SecurityDescriptorLength
    && (!RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
     || RtlLengthSecurityDescriptor(v13) != SecurityDescriptorLength) )
  {
    inited = -1073741811;
    goto LABEL_25;
  }
LABEL_12:
  if ( a3 || (inited = CmOpenDeviceRegKey(a1, (__int64)a2, 0x10u, 0, 33554434, 0, (__int64)&Handle, 0LL), inited >= 0) )
  {
    if ( a4 == 8 )
      goto LABEL_21;
    v18 = MapCmDevicePropertyToRegValue(v17, a4);
    if ( v18 )
    {
      if ( SecurityDescriptorLength )
      {
        v19 = Handle;
        if ( a3 )
          v19 = a3;
        v20 = RegRtlSetValue(v19, SecurityDescriptorLength);
        if ( v20 == -1073741444 )
        {
          inited = -1073741810;
          goto LABEL_25;
        }
        if ( v20 < 0 )
          inited = v20;
      }
      else
      {
        v23 = Handle;
        if ( a3 )
          v23 = a3;
        inited = RtlInitUnicodeStringEx(&DestinationString, v18);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v23, &DestinationString);
        if ( inited == -1073741772 || inited == -1073741444 )
          inited = -1073741275;
      }
LABEL_21:
      if ( inited >= 0 )
      {
        v21 = (int)Handle;
        if ( a3 )
          v21 = (int)a3;
        CmRaisePropertyChangeEvent(a1, (_DWORD)a2, 1, v21, a4);
      }
      goto LABEL_25;
    }
LABEL_55:
    inited = -1073741264;
  }
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
