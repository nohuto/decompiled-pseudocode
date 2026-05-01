/*
 * XREFs of ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x18000DFD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007FF4 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18000A2D4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::ResetExternalResourcePriorities(ResourceSetClientProxy *this)
{
  unsigned int v2; // r8d
  int *v3; // r10
  char *v4; // r9
  int v5; // eax
  char v7[1088]; // [rsp+20h] [rbp-458h] BYREF

  `vector constructor iterator'(
    v7,
    24LL,
    45LL,
    (void (__fastcall *)(char *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  memset_0(v7, 0, 0x438uLL);
  v2 = 3;
  v3 = (int *)((char *)this + 212);
  v4 = v7;
  do
  {
    v5 = *v3++;
    *(_DWORD *)v4 = v2++;
    *((_DWORD *)v4 + 4) = v5;
    v4 += 24;
  }
  while ( v2 < 0x30 );
  return (*(__int64 (__fastcall **)(ResourceSetClientProxy *, __int64, char *, char *))(*(_QWORD *)this + 112LL))(
           this,
           45LL,
           v7,
           v4);
}
