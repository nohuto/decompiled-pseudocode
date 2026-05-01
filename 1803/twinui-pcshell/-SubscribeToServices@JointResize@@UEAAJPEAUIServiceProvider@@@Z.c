/*
 * XREFs of ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802EA650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@Z @ 0x1802E845C (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81.c)
 *     ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x1802E961C (-IsJointResizeEnabled@JointResize@@AEAA_NXZ.c)
 */

__int64 __fastcall JointResize::SubscribeToServices(JointResize *this, struct IServiceProvider *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         (char *)this + 104);
  if ( v4 < 0 )
  {
    v5 = 129LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         (char *)this + 112);
  if ( v4 < 0 )
  {
    v5 = 130LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_6050560d_d11a_46ce_b59f_0418ada0b335,
         &GUID_6050560d_d11a_46ce_b59f_0418ada0b335,
         (char *)this + 120);
  if ( v4 < 0 )
  {
    v5 = 131LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         (char *)this + 128);
  if ( v4 < 0 )
  {
    v5 = 132LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &unk_1803B49F8,
         &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
         (char *)this + 136);
  if ( v4 < 0 )
  {
    v5 = 133LL;
    goto LABEL_3;
  }
  v4 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),JointResize *>(
         (__int64)this + 272,
         *((_QWORD *)this + 17),
         v7);
  if ( v4 < 0 )
  {
    v5 = 138LL;
    goto LABEL_3;
  }
  if ( JointResize::IsJointResizeEnabled((JointResize *)((char *)this - 24)) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 16) + 72LL))(
           *((_QWORD *)this + 16),
           ((unsigned __int64)this + 64) & -(__int64)(this != (JointResize *)24));
    if ( v4 < 0 )
    {
      v5 = 142LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
