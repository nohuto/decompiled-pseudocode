/*
 * XREFs of _PnpValidatePropertyData @ 0x1404DBC98
 * Callers:
 *     PiSwValidatePropertyArray @ 0x140460BAC (PiSwValidatePropertyArray.c)
 *     _PnpGetObjectPropertyWorker @ 0x140485C8C (_PnpGetObjectPropertyWorker.c)
 *     PiDqQueryValidateQueryData @ 0x1404BDB84 (PiDqQueryValidateQueryData.c)
 *     _PnpSetObjectPropertyWorker @ 0x1404DB9FC (_PnpSetObjectPropertyWorker.c)
 *     ValidFilter @ 0x1404DBBC0 (ValidFilter.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     _GetBaseTypeSize @ 0x140080FF4 (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x14008109C (_IsFixedSizeType.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404BFE50 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14050E880 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall PnpValidatePropertyData(__int64 *SecurityDescriptor, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  unsigned int v6; // r8d
  int BaseTypeSize; // eax
  unsigned int v8; // r8d
  __int16 v9; // r9
  int v10; // r10d
  int v11; // r11d
  bool v12; // zf
  unsigned int v14; // ecx
  size_t v15; // r11
  __int64 v16; // r11
  size_t v17; // rax
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v20; // r11d
  bool v21; // zf
  size_t pcbLength; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = SecurityDescriptorLength;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(v6);
  v10 = v9 & 0xF000;
  if ( !BaseTypeSize )
    goto LABEL_9;
  if ( v10 == 4096 )
  {
    if ( v8 <= 1 || !IsFixedSizeType(v9) || (unsigned int)v4 < v20 )
      return (unsigned int)-1073741811;
    v21 = (unsigned int)v4 % v20 == 0;
  }
  else
  {
    if ( v10 != 0x2000 )
    {
      if ( (v9 & 0xF000) != 0 || IsFixedSizeType(v9) && (_DWORD)v4 != v11 )
        return (unsigned int)-1073741811;
      goto LABEL_9;
    }
    if ( v8 == 18 )
      goto LABEL_9;
    v21 = v8 == 20;
  }
  if ( !v21 )
    return (unsigned int)-1073741811;
LABEL_9:
  if ( v8 <= 1 )
  {
    v12 = (_DWORD)v4 == 0;
LABEL_22:
    if ( v12 )
      return v3;
    return (unsigned int)-1073741811;
  }
  switch ( v8 )
  {
    case 0x12u:
      goto LABEL_16;
    case 0x11u:
      if ( SecurityDescriptor )
      {
        v14 = 0;
        if ( !(_DWORD)v4 )
          return v3;
        while ( *(_BYTE *)SecurityDescriptor == 0xFF || *(_BYTE *)SecurityDescriptor == 0 )
        {
          ++v14;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 1);
          if ( v14 >= (unsigned int)v4 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x10u:
      if ( SecurityDescriptor )
      {
        v18 = (unsigned int)v4 >> 3;
        v19 = 0;
        if ( !v18 )
          return v3;
        while ( *SecurityDescriptor >= 0 )
        {
          ++v19;
          ++SecurityDescriptor;
          if ( v19 >= v18 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x19u:
      goto LABEL_16;
    case 0x13u:
      if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
        return (unsigned int)-1073741811;
      v12 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
      goto LABEL_22;
    case 0x14u:
LABEL_16:
      if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
        return (unsigned int)-1073741811;
      if ( (v10 & 0x2000) != 0 )
      {
        v15 = 0LL;
        while ( *(_WORD *)SecurityDescriptor )
        {
          if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4 - v15, &pcbLength) < 0 )
            return (unsigned int)-1073741811;
          if ( (pcbLength & 1) != 0 )
            return (unsigned int)-1073741811;
          v17 = pcbLength + 2;
          pcbLength = v17;
          if ( v17 > 0xFFFE )
            return (unsigned int)-1073741811;
          v15 = v17 + v16;
          if ( v15 > v4 )
            return (unsigned int)-1073741811;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 2 * (v17 >> 1));
        }
        v12 = v15 + 2 == v4;
      }
      else
      {
        pcbLength = 0LL;
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4, &pcbLength) < 0 || pcbLength + 2 > 0xFFFE )
          return (unsigned int)-1073741811;
        v12 = pcbLength + 2 == v4;
      }
      goto LABEL_22;
  }
  return v3;
}
