/*
 * XREFs of ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000C12C
 * Callers:
 *     RmGetResourceSetInfoPolicy @ 0x18000C3E0 (RmGetResourceSetInfoPolicy.c)
 *     RmGetResourceSetTypePolicy @ 0x18000C450 (RmGetResourceSetTypePolicy.c)
 * Callees:
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180006934 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x180006A20 (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180006C40 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall ResourceManagerProxy::GetResourceSetTypeConverter(
        ResourceManagerProxy *this,
        struct ExecutionModel::ResourceSetTypeToInfoConverter **a2,
        __int64 a3)
{
  int DeviceTier; // eax
  const unsigned __int16 *DeviceTierName; // rax
  int v7; // edi

  RtlAcquireSRWLockExclusive((char *)this + 8, a2, a3);
  if ( *((_BYTE *)this + 24) )
    goto LABEL_4;
  DeviceTier = RmpGetDeviceTier();
  DeviceTierName = RmpGetDeviceTierNameEx(DeviceTier);
  v7 = ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
         (ResourceManagerProxy *)((char *)this + 32),
         DeviceTierName);
  if ( v7 >= 0 )
  {
    *((_BYTE *)this + 24) = 1;
LABEL_4:
    v7 = 0;
    *a2 = (ResourceManagerProxy *)((char *)this + 32);
  }
  RtlReleaseSRWLockExclusive((char *)this + 8);
  return (unsigned int)v7;
}
