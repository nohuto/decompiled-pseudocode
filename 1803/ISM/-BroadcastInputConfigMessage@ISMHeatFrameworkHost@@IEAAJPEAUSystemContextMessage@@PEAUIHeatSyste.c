/*
 * XREFs of ?BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSystemContextClient@@@Z @ 0x180039F38
 * Callers:
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039C20 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?OnSystemContextNotification@ISMHeatFrameworkHost@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180039F20 (-OnSystemContextNotification@ISMHeatFrameworkHost@@UEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::BroadcastInputConfigMessage(
        ISMHeatFrameworkHost *this,
        struct SystemContextMessage *a2,
        struct IHeatSystemContextClient *a3)
{
  __int64 v3; // rax
  __int64 ***v4; // rdi
  __int64 **i; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v8) = *((_DWORD *)a2 + 2);
  v3 = *((_QWORD *)a2 + 2);
  LODWORD(v7) = 1;
  v9 = v3;
  if ( a3 )
  {
    (**(void (__fastcall ***)(struct IHeatSystemContextClient *, __int64 *))a3)(a3, &v7);
  }
  else
  {
    v4 = (__int64 ***)*((_QWORD *)this + 8);
    for ( i = *v4; i != (__int64 **)v4; i = (__int64 **)*i )
      (*(void (__fastcall **)(__int64 *, __int64 *))*i[2])(i[2], &v7);
  }
  return 0LL;
}
