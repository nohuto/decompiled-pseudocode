/*
 * XREFs of ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00BB984
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C26E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z @ 0x1C00B6E7C (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00BA960 (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 *     KRegKey::QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___ @ 0x1C00BAAB0 (KRegKey--QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___.c)
 */

bool __fastcall Ndis::BindStack::ReadV2InterfaceBindings(Ndis::BindStack *this, const struct _GUID *a2)
{
  __int64 v3; // rdx
  bool v4; // bl
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v4 = (int)Ndis::BindStack::OpenV2InterfaceKey(a2, (__int64)a2, (struct KRegKey *)&Handle) >= 0
    && (int)KRegKey::QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___(&Handle, v3, (__int64)this) >= 0
    && (int)KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___(
              &Handle,
              (_UNICODE_STRING *)&Ndis::ProtocolListValueName,
              (__int64)this,
              this) >= 0;
  if ( Handle )
    ZwClose(Handle);
  return v4;
}
