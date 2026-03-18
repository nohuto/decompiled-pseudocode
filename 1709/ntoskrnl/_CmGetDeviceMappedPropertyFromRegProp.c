/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x140571004
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1405248F0 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140783CA4 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     _PnpParseIndirectResourceString @ 0x140566914 (_PnpParseIndirectResourceString.c)
 *     _PnpMultiSzGetLen @ 0x1405713AC (_PnpMultiSzGetLen.c)
 *     _PnpParseIndirectInfString @ 0x14057D4DC (_PnpParseIndirectInfString.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  wchar_t *v10; // r12
  unsigned int v11; // r13d
  int v12; // r11d
  DEVPROPKEY **v13; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID PoolWithTag; // r13
  int DeviceRegProp; // ebx
  int v24; // eax
  __int64 Len; // r9
  __int64 v27; // r15
  __int64 v28; // rsi
  SIZE_T v29; // rax
  const wchar_t *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // r9d
  int v34; // r9d
  int v35; // eax
  int v36; // eax
  int v37; // [rsp+40h] [rbp-B9h] BYREF
  int v38; // [rsp+44h] [rbp-B5h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B1h]
  int v40; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A1h]
  __int64 v42; // [rsp+60h] [rbp-99h]
  int v43; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-81h] BYREF
  GUID Guid; // [rsp+88h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v10 = a6;
  v42 = a3;
  v41 = a2;
  v39 = a1;
  v38 = 0;
  v43 = 0;
  v40 = 0;
  Handle = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v11 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a4 + 16);
  v13 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v15 = *v13;
    v16 = v13;
    if ( v12 == (*v13)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v13 += 3;
    v16 = 0LL;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 3);
  switch ( v18 )
  {
    case 9:
      goto LABEL_40;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v27 = v41;
      v37 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v39, v41, v42, 27, (__int64)&v38, (__int64)&v40, (__int64)&v37, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_26;
      if ( v38 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        *(_BYTE *)v10 = -(v40 != 0);
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
    case 37:
LABEL_40:
      v33 = *((_DWORD *)v16 + 3);
      v27 = v41;
      v37 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v39, v41, v42, v33, (__int64)&v38, (__int64)SourceString, (__int64)&v37, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_26;
      if ( v38 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 16;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        SourceString[38] = 0;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlGUIDFromString(&DestinationString, &Guid);
          if ( DeviceRegProp >= 0 )
            *(GUID *)v10 = Guid;
        }
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
  }
  v19 = v42;
  v20 = v41;
  v21 = v39;
  *a8 = v11;
  PoolWithTag = 0LL;
  DeviceRegProp = CmGetDeviceRegProp(v21, v20, v19, v18, (__int64)&v38, (__int64)v10, (__int64)a8, a9);
  if ( DeviceRegProp && DeviceRegProp != -1073741789 )
    goto LABEL_19;
  if ( v38 != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v24 = *((_DWORD *)v16 + 2);
  *a5 = v24;
  if ( v24 == 18 )
  {
    v29 = (unsigned int)*a8;
    v37 = *a8;
    if ( DeviceRegProp )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x52504E50u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v34 = v18;
      v27 = v41;
      v28 = v39;
      v35 = CmGetDeviceRegProp(v39, v41, v42, v34, (__int64)&v43, (__int64)PoolWithTag, (__int64)&v37, a9);
      if ( v35 < 0 )
      {
        DeviceRegProp = v35;
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_27:
        if ( DeviceRegProp == -1073741810 )
        {
          v36 = CmOpenDeviceRegKey(v28, v27, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
          DeviceRegProp = v36;
          if ( !v36 )
          {
            ZwClose(Handle);
            return (unsigned int)-1073741275;
          }
          if ( v36 != -1073741810 && v36 != -1073741632 )
            return (unsigned int)-1073741823;
        }
        return (unsigned int)DeviceRegProp;
      }
      LODWORD(v29) = v37;
      v30 = (const wchar_t *)PoolWithTag;
    }
    else
    {
      v30 = v10;
    }
    if ( v30
      && (unsigned int)v29 >= 2
      && ((unsigned __int8)PnpParseIndirectInfString(v30) || PnpParseIndirectResourceString(v30, v31, v32)) )
    {
      *a5 = 25;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_19:
  if ( DeviceRegProp )
  {
    v27 = v41;
LABEL_26:
    v28 = v39;
    goto LABEL_27;
  }
  if ( *a5 == 8210 )
  {
    Len = (unsigned int)PnpMultiSzGetLen(v10);
    if ( 2 * Len > (unsigned __int64)(unsigned int)*a8 )
    {
      DeviceRegProp = -1073741595;
      *a8 = 0;
      return (unsigned int)DeviceRegProp;
    }
    *a8 = 2 * Len;
  }
  if ( *a5 == 18 && !*a8 )
  {
    *a8 = 0;
    *a5 = 0;
    return (unsigned int)-1073741275;
  }
  return (unsigned int)DeviceRegProp;
}
