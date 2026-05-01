/*
 * XREFs of ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180175A9C
 * Callers:
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x180176A5C (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b222f3d___ @ 0x180176FB4 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b2.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x1801759B4 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z.c)
 *     CoCreateInstance_0 @ 0x180195106 (CoCreateInstance_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::FindAllApplicationsByAppID(
        struct IUnknown *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  __int64 *ppv; // rax
  int Instance_0; // ebx
  struct IObjectArray **v7; // r9
  CallerIdentity *v8; // rcx
  CallerIdentity *v10; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v10 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v10);
  Instance_0 = CoCreateInstance_0(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)ppv);
  if ( Instance_0 >= 0 )
    Instance_0 = CallerIdentity::FindAllApplicationsByAppID(
                   (__int64 (__fastcall ***)(CallerIdentity *, GUID *, __int64 *))v10,
                   this,
                   a2,
                   v7);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(CallerIdentity *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)Instance_0;
}
