/*
 * XREFs of sub_180001280 @ 0x180001280
 * Callers:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001840 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     RmpBindToRmRpcServer @ 0x180004120 (RmpBindToRmRpcServer.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180004250 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180007C40 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_180001280()
{
  _QWORD *v0; // rsi
  ExecutionModel::_ResourceSetInfo *v1; // rbx
  __int64 v2; // rdi
  int v3; // ebx

  v0 = operator new(0x53D8uLL);
  if ( v0 )
  {
    *v0 = &ResourceManagerProxy::`vftable';
    v1 = (ExecutionModel::_ResourceSetInfo *)(v0 + 4);
    v0[2] = 0LL;
    v2 = 57LL;
    do
    {
      ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(v1);
      v1 = (ExecutionModel::_ResourceSetInfo *)((char *)v1 + 376);
      --v2;
    }
    while ( v2 );
  }
  else
  {
    v0 = 0LL;
  }
  qword_1800186E8 = (__int64)v0;
  if ( !v0 )
    return 2147942414LL;
  v3 = RmpBindToRmRpcServer(&unk_18000F790);
  if ( v3 >= 0 )
  {
    RtlInitializeSRWLock(v0 + 1);
    v3 = 0;
  }
  if ( v3 >= 0 )
    return 0LL;
  if ( qword_1800186E8 )
  {
    (**(void (__fastcall ***)(__int64, __int64))qword_1800186E8)(qword_1800186E8, 1LL);
    qword_1800186E8 = 0LL;
  }
  return (unsigned int)v3;
}
