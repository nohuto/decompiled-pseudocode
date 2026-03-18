/*
 * XREFs of _CmSetInstallerClassRegPropWorker @ 0x1407E943C
 * Callers:
 *     _CmSetInstallerClassRegProp @ 0x1407E92D8 (_CmSetInstallerClassRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     _MapCmClassPropertyToRegValue @ 0x140146578 (_MapCmClassPropertyToRegValue.c)
 *     _CmClassPropertyRead @ 0x1401465E8 (_CmClassPropertyRead.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     _CmClassPropertyWrite @ 0x1402C7ED0 (_CmClassPropertyWrite.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     _PnpOpenPropertiesKey @ 0x14050421C (_PnpOpenPropertiesKey.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140517160 (RtlValidRelativeSecurityDescriptor.c)
 *     _CmOpenInstallerClassRegKey @ 0x14056B408 (_CmOpenInstallerClassRegKey.c)
 *     _CmRaisePropertyChangeEvent @ 0x1405CF920 (_CmRaisePropertyChangeEvent.c)
 *     _RegRtlSetValue @ 0x1405E2DB0 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        ULONG a5,
        __int64 a6,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int inited; // ebx
  void *v12; // r12
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // edx
  HANDLE v20; // rsi
  const wchar_t *v21; // rax
  int v22; // eax
  HANDLE v23; // r9
  __int64 v25; // [rsp+28h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  inited = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( a8 || SecurityDescriptorLength && !a6 )
    return (unsigned int)-1073741811;
  v12 = (void *)(a6 & -(__int64)(SecurityDescriptorLength != 0));
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    goto LABEL_54;
  if ( !CmClassPropertyWrite(v13) )
    return (unsigned int)-1073741790;
  if ( a4 == 8 || a4 == 13 )
  {
    v18 = 1;
  }
  else
  {
    if ( a4 <= 17 )
      return (unsigned int)-1073741264;
    if ( a4 <= 19 )
    {
      v18 = 7;
    }
    else
    {
      if ( a4 != 24 )
      {
        if ( (unsigned int)(v17 - 26) <= 2 )
        {
          v18 = 4;
          goto LABEL_20;
        }
        return (unsigned int)-1073741264;
      }
      v18 = 3;
    }
  }
LABEL_20:
  if ( a5 != v18 )
    return (unsigned int)-1073741811;
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_30;
    return (unsigned int)-1073741811;
  }
  if ( a4 != 24 || !SecurityDescriptorLength )
  {
LABEL_30:
    if ( !a3 )
    {
      inited = CmOpenInstallerClassRegKey(a1, v14, v16, v17, 33554438, 0, (__int64)&Handle, 0LL);
      if ( inited < 0 )
        goto LABEL_55;
    }
    if ( a4 < 20 )
    {
      v20 = a3;
      if ( !a3 )
        v20 = Handle;
    }
    else
    {
      v19 = (int)Handle;
      if ( a3 )
        v19 = (int)a3;
      inited = PnpOpenPropertiesKey(a1, v19, 0LL, 2, 1, v25, &KeyHandle);
      if ( inited < 0 )
        goto LABEL_55;
      v20 = KeyHandle;
    }
    v21 = MapCmClassPropertyToRegValue(v15, a4);
    if ( v21 )
    {
      if ( SecurityDescriptorLength )
      {
        v22 = RegRtlSetValue(v20, v21, a5, v12, SecurityDescriptorLength);
        if ( v22 == -1073741444 )
        {
          inited = -1073741772;
          goto LABEL_55;
        }
        if ( v22 < 0 )
          inited = v22;
      }
      else
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v21);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v20, &DestinationString);
        if ( inited == -1073741772 || inited == -1073741444 )
          inited = -1073741275;
      }
      if ( inited >= 0 )
      {
        v23 = Handle;
        if ( a3 )
          v23 = a3;
        CmRaisePropertyChangeEvent(a1, a2, 2u, (__int64)v23, a4);
      }
      goto LABEL_55;
    }
LABEL_54:
    inited = -1073741264;
    goto LABEL_55;
  }
  if ( RtlValidRelativeSecurityDescriptor(v12, SecurityDescriptorLength, 0)
    && RtlLengthSecurityDescriptor(v12) == SecurityDescriptorLength )
  {
    v14 = a2;
    goto LABEL_30;
  }
  inited = -1073741811;
LABEL_55:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
