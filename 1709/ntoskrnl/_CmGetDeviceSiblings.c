/*
 * XREFs of _CmGetDeviceSiblings @ 0x1407840B4
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceChildren @ 0x140449874 (_CmGetDeviceChildren.c)
 *     _CmGetDeviceParent @ 0x140551A88 (_CmGetDeviceParent.c)
 *     _PnpMultiSzGetLen @ 0x1405713AC (_PnpMultiSzGetLen.c)
 *     _PnpMultiSzDeleteString @ 0x140785A8C (_PnpMultiSzDeleteString.c)
 */

__int64 __fastcall CmGetDeviceSiblings(__int64 a1, WCHAR *a2, _WORD *a3, unsigned int *a4)
{
  void *v5; // r14
  int v7; // ebp
  unsigned int v8; // r12d
  int DeviceParent; // ebx
  wchar_t *PoolWithTag; // rdi
  int DeviceChildren; // eax
  unsigned int Len; // eax
  unsigned int v14[4]; // [rsp+20h] [rbp-1F8h] BYREF
  WCHAR v15[200]; // [rsp+30h] [rbp-1E8h] BYREF

  v5 = a3;
  v7 = a1;
  if ( a3 )
  {
    if ( *a4 )
      *a3 = 0;
    else
      v5 = 0LL;
  }
  else
  {
    *a4 = 0;
  }
  v8 = *a4;
  *a4 = 0;
  v14[0] = 200;
  DeviceParent = CmGetDeviceParent(a1, a2, v15, v14);
  if ( DeviceParent >= 0 )
  {
    PoolWithTag = 0LL;
    v14[0] = 0;
    while ( 1 )
    {
      DeviceChildren = CmGetDeviceChildren(v7, v15, PoolWithTag, v14);
      DeviceParent = DeviceChildren;
      if ( !DeviceChildren )
        break;
      if ( DeviceChildren != -1073741789 )
        goto LABEL_14;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v14[0], 0x52504E50u);
      if ( !PoolWithTag )
      {
        DeviceParent = -1073741801;
LABEL_14:
        if ( DeviceParent < 0 )
          goto LABEL_24;
        break;
      }
    }
    if ( !PoolWithTag )
      return (unsigned int)-1073741275;
    if ( (unsigned __int8)PnpMultiSzDeleteString(PoolWithTag, a2) )
    {
      Len = PnpMultiSzGetLen(PoolWithTag);
      if ( Len > 1 )
      {
        *a4 = Len;
        if ( v8 >= Len )
          memmove(v5, PoolWithTag, 2LL * Len);
        else
          DeviceParent = -1073741789;
      }
      else
      {
        DeviceParent = -1073741275;
      }
    }
    else
    {
      DeviceParent = -1073741595;
    }
LABEL_24:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)DeviceParent;
}
