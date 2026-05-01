/*
 * XREFs of ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x18002D260
 * Callers:
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x18002D178 (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisibilityOverride::RuntimeClassInitialize(
        CVisibilityOverride *this,
        struct IImmersiveApplicationVisibilityOverride *a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 result; // rax
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  CVisibilityOverride::s_checkOcclusion = GetShellWindow();
  if ( *((struct IImmersiveApplicationVisibilityOverride **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplicationVisibilityOverride *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = RtlQueryWnfStateData(
         &v7,
         WNF_DX_OCCLUSION_CHANGE_NOTIFICATION,
         CVisibilityOverride::s_DXModeWNFCallback,
         this,
         0LL);
  if ( v5 >= 0 )
  {
    v5 = RtlSubscribeWnfStateChangeNotification(
           (char *)this + 56,
           WNF_DX_OCCLUSION_CHANGE_NOTIFICATION,
           v7,
           CVisibilityOverride::s_DXModeWNFCallback,
           this,
           0LL,
           0,
           1);
    if ( v5 >= 0
      && (int)RtlQueryWnfStateData(&v7, WNF_HOLO_SHELL_STATE, CVisibilityOverride::s_HoloShellWNFCallback, this, 0LL) >= 0 )
    {
      RtlSubscribeWnfStateChangeNotification(
        (char *)this + 64,
        WNF_HOLO_SHELL_STATE,
        v7,
        CVisibilityOverride::s_HoloShellWNFCallback,
        this,
        0LL,
        0,
        1);
    }
  }
  result = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    return (unsigned int)v5;
  return result;
}
