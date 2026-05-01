/*
 * XREFs of ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x180191DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18017675C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_Initialize(
        CImmersiveWindowFactory *this,
        IUnknown *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  HRESULT v3; // ebx
  void *v6; // rcx
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *(_OWORD *)((char *)this + 84) = *(_OWORD *)a3;
  }
  else
  {
    v8 = 0LL;
    v3 = IUnknown_QueryService(
           a2,
           (const GUID *const)&SID_SwitchController,
           &GUID_15328f88_3846_45be_ac4b_e083dca20ec2,
           &v8);
    if ( v3 >= 0 )
      v3 = (*(__int64 (__fastcall **)(void *, IUnknown *, _QWORD, _QWORD, char *))(*(_QWORD *)v8 + 56LL))(
             v8,
             a2,
             *((_QWORD *)this + 13),
             0LL,
             (char *)this + 84);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  if ( v3 >= 0 )
    *((_BYTE *)this + 112) = (int)CallerIdentity::GetManifestedOrientationPreference(
                                    *((LPCWSTR *)this + 13),
                                    (unsigned __int16 *)this + 58,
                                    a3) >= 0;
  return (unsigned int)v3;
}
