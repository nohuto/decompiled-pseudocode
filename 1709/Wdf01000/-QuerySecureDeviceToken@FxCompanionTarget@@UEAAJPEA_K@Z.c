/*
 * XREFs of ?QuerySecureDeviceToken@FxCompanionTarget@@UEAAJPEA_K@Z @ 0x1C00749C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C0063DC0 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxCompanionTarget::QuerySecureDeviceToken(FxCompanionTarget *this, unsigned __int64 *SecureToken)
{
  _LIST_ENTRY *v3; // r10
  _LIST_ENTRY *Flink; // rcx
  int v6; // edi
  unsigned __int64 v7; // rax
  void *Context; // rcx
  _LIST_ENTRY *v9; // rcx
  const void *_a1; // rdx
  __int16 v11; // ax
  _FX_DRIVER_GLOBALS *v12; // rcx
  const void *v14; // rcx
  _SDEV_IDENTIFIER_INTERFACE Interface; // [rsp+40h] [rbp-38h] BYREF

  *SecureToken = -1LL;
  Flink = this->m_ChildListHead.Flink;
  v3 = Flink;
  if ( LOWORD(Flink[40].Blink->Blink) == 4353 )
  {
    v6 = FxDeviceBase::QueryForInterface(
           (FxDeviceBase *)Flink,
           &GUID_SDEV_IDENTIFIER_INTERFACE,
           &Interface.InterfaceHeader,
           0x28u,
           1u,
           0LL,
           0LL);
    if ( v6 < 0 )
    {
      v9 = this->m_ChildListHead.Flink;
      _a1 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v11 = WORD1(v9->Blink);
      v12 = (_FX_DRIVER_GLOBALS *)v9[1].Flink;
      if ( !v11 )
        _a1 = 0LL;
      WPP_IFR_SF_q(v12, 2u, 0xCu, 0xDu, WPP_FxCompanionTarget_cpp_Traceguids, _a1);
    }
    else
    {
      v7 = Interface.GetIdentifier(Interface.InterfaceHeader.Context);
      Context = Interface.InterfaceHeader.Context;
      *SecureToken = v7;
      Interface.InterfaceHeader.InterfaceDereference(Context);
    }
    return (unsigned int)v6;
  }
  else
  {
    v14 = (const void *)((unsigned __int64)Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v3->Blink) )
      v14 = 0LL;
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)v3[1].Flink, 2u, 0xCu, 0xCu, WPP_FxCompanionTarget_cpp_Traceguids, v14);
    return 3221225659LL;
  }
}
