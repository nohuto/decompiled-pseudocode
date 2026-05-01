/*
 * XREFs of CreateResourceManagerProxy @ 0x180001090
 * Callers:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001470 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x1800041C0 (CempRpcBindToServer.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800046D0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180008070 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 CreateResourceManagerProxy()
{
  _QWORD *v0; // rsi
  ExecutionModel::_ResourceSetInfo *v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  int v4; // ebx

  v0 = operator new(0x55A0uLL);
  if ( v0 )
  {
    *v0 = &ResourceManagerProxy::`vftable';
    v1 = (ExecutionModel::_ResourceSetInfo *)(v0 + 4);
    v0[2] = 0LL;
    v2 = 57LL;
    do
    {
      ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(v1);
      v1 = (ExecutionModel::_ResourceSetInfo *)((char *)v1 + 384);
      --v2;
    }
    while ( v2 );
  }
  else
  {
    v0 = 0LL;
  }
  qword_18001B740 = (__int64)v0;
  if ( !v0 )
    return 2147942414LL;
  v3 = CempRpcBindToServer(&unk_180010900);
  v4 = v3 | 0x10000000;
  if ( v3 >= 0 )
  {
    RtlInitializeSRWLock(v0 + 1);
    v4 = 0;
  }
  if ( v4 >= 0 )
    return 0LL;
  if ( qword_18001B740 )
  {
    (**(void (__fastcall ***)(__int64, __int64))qword_18001B740)(qword_18001B740, 1LL);
    qword_18001B740 = 0LL;
  }
  return (unsigned int)v4;
}
