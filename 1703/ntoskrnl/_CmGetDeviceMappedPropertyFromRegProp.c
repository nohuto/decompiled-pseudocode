/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x14048873C
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1404865E0 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14073FAD4 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpParseIndirectResourceString @ 0x140428980 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1404426DC (_PnpParseIndirectInfString.c)
 *     _PnpMultiSzGetLen @ 0x140443434 (_PnpMultiSzGetLen.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
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
  __int64 v23; // rdx
  int DeviceRegProp; // ebx
  __int64 v25; // r8
  int v26; // eax
  __int64 Len; // r9
  __int64 v29; // r15
  __int64 v30; // rsi
  SIZE_T v31; // rax
  const wchar_t *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // r9d
  int v36; // r9d
  int v37; // eax
  int v38; // eax
  int v39; // [rsp+40h] [rbp-B9h] BYREF
  int v40; // [rsp+44h] [rbp-B5h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B1h]
  int v42; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A1h]
  __int64 v44; // [rsp+60h] [rbp-99h]
  int v45; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-81h] BYREF
  GUID Guid; // [rsp+88h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v10 = a6;
  v44 = a3;
  v43 = a2;
  v41 = a1;
  v40 = 0;
  v45 = 0;
  v42 = 0;
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
      goto LABEL_41;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v29 = v43;
      v39 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v41, v43, v44, 27, (__int64)&v40, (__int64)&v42, (__int64)&v39, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_26;
      if ( v40 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        *(_BYTE *)v10 = -(v42 != 0);
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
    case 37:
LABEL_41:
      v35 = *((_DWORD *)v16 + 3);
      v29 = v43;
      v39 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v41, v43, v44, v35, (__int64)&v40, (__int64)SourceString, (__int64)&v39, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_26;
      if ( v40 != *((_DWORD *)v16 + 4) )
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
  v19 = v44;
  v20 = v43;
  v21 = v41;
  *a8 = v11;
  PoolWithTag = 0LL;
  DeviceRegProp = CmGetDeviceRegProp(v21, v20, v19, v18, (__int64)&v40, (__int64)v10, (__int64)a8, a9);
  if ( DeviceRegProp && DeviceRegProp != -1073741789 )
    goto LABEL_19;
  if ( v40 != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v26 = *((_DWORD *)v16 + 2);
  *a5 = v26;
  if ( v26 == 18 )
  {
    v31 = (unsigned int)*a8;
    v39 = *a8;
    if ( DeviceRegProp )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v31, 0x52504E50u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v36 = v18;
      v29 = v43;
      v30 = v41;
      v37 = CmGetDeviceRegProp(v41, v43, v44, v36, (__int64)&v45, (__int64)PoolWithTag, (__int64)&v39, a9);
      if ( v37 < 0 )
      {
        DeviceRegProp = v37;
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_27:
        if ( DeviceRegProp == -1073741810 )
        {
          v38 = CmOpenDeviceRegKey(v30, v29, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
          DeviceRegProp = v38;
          if ( !v38 )
          {
            ZwClose(Handle);
            return (unsigned int)-1073741275;
          }
          if ( v38 != -1073741810 && v38 != -1073741632 )
            return (unsigned int)-1073741823;
        }
        return (unsigned int)DeviceRegProp;
      }
      LODWORD(v31) = v39;
      v32 = (const wchar_t *)PoolWithTag;
    }
    else
    {
      v32 = v10;
    }
    if ( v32
      && (unsigned int)v31 >= 2
      && (PnpParseIndirectInfString(v32, v23, v25) || PnpParseIndirectResourceString(v32, v33, v34)) )
    {
      *a5 = 25;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_19:
  if ( DeviceRegProp )
  {
    v29 = v43;
LABEL_26:
    v30 = v41;
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
