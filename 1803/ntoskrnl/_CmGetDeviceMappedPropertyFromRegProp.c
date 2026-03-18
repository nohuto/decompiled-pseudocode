/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x140565484
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x140508A90 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1407EE714 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     _PnpParseIndirectResourceString @ 0x140552CF4 (_PnpParseIndirectResourceString.c)
 *     _PnpMultiSzGetLen @ 0x140565834 (_PnpMultiSzGetLen.c)
 *     _PnpParseIndirectInfString @ 0x14056D80C (_PnpParseIndirectInfString.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        GUID *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  GUID *v10; // r12
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
  int v25; // eax
  __int64 Len; // r9
  __int64 v28; // r15
  __int64 v29; // rsi
  SIZE_T v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // r9d
  int v35; // r9d
  int v36; // eax
  int v37; // eax
  int v38; // [rsp+40h] [rbp-B9h] BYREF
  int v39; // [rsp+44h] [rbp-B5h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B1h]
  int v41; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A1h]
  __int64 v43; // [rsp+60h] [rbp-99h]
  int v44; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-81h] BYREF
  GUID Guid; // [rsp+88h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v10 = a6;
  v43 = a3;
  v42 = a2;
  v40 = a1;
  v39 = 0;
  v44 = 0;
  v41 = 0;
  Handle = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v11 = a7;
    v10 = (GUID *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
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
      v28 = v42;
      v38 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v40, v42, v43, 27, (__int64)&v39, (__int64)&v41, (__int64)&v38, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_26;
      if ( v39 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        LOBYTE(v10->Data1) = -(v41 != 0);
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
    case 37:
LABEL_40:
      v34 = *((_DWORD *)v16 + 3);
      v28 = v42;
      v38 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v40, v42, v43, v34, (__int64)&v39, (__int64)SourceString, (__int64)&v38, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_26;
      if ( v39 != *((_DWORD *)v16 + 4) )
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
            *v10 = Guid;
        }
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
  }
  v19 = v43;
  v20 = v42;
  v21 = v40;
  *a8 = v11;
  PoolWithTag = 0LL;
  DeviceRegProp = CmGetDeviceRegProp(v21, v20, v19, v18, (__int64)&v39, (__int64)v10, (__int64)a8, a9);
  if ( DeviceRegProp && DeviceRegProp != -1073741789 )
    goto LABEL_19;
  if ( v39 != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v24 = *((_DWORD *)v16 + 2);
  *a5 = v24;
  if ( v24 == 18 )
  {
    v30 = (unsigned int)*a8;
    v38 = *a8;
    if ( DeviceRegProp )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30, 0x52504E50u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v35 = v18;
      v28 = v42;
      v29 = v40;
      v36 = CmGetDeviceRegProp(v40, v42, v43, v35, (__int64)&v44, (__int64)PoolWithTag, (__int64)&v38, a9);
      if ( v36 < 0 )
      {
        DeviceRegProp = v36;
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_27:
        if ( DeviceRegProp == -1073741810 )
        {
          v37 = CmOpenDeviceRegKey(v29, v28, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
          DeviceRegProp = v37;
          if ( !v37 )
          {
            ZwClose(Handle);
            return (unsigned int)-1073741275;
          }
          if ( v37 != -1073741810 && v37 != -1073741632 )
            return (unsigned int)-1073741823;
        }
        return (unsigned int)DeviceRegProp;
      }
      LODWORD(v30) = v38;
      v31 = (__int64)PoolWithTag;
    }
    else
    {
      v31 = (__int64)v10;
    }
    if ( v31
      && (unsigned int)v30 >= 2
      && ((unsigned __int8)PnpParseIndirectInfString(v31) || PnpParseIndirectResourceString(v31, v32, v33)) )
    {
      *a5 = 25;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_19:
  if ( DeviceRegProp )
  {
    v28 = v42;
LABEL_26:
    v29 = v40;
    goto LABEL_27;
  }
  v25 = *a5;
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
    v25 = *a5;
  }
  if ( v25 == 18 && !*a8 )
  {
    *a8 = 0;
    *a5 = 0;
    return (unsigned int)-1073741275;
  }
  return (unsigned int)DeviceRegProp;
}
