/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FC60
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021B80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180021B80.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CF4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *(_DWORD *)a2 == 1847357737
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6e1c7129_61e0_5d88_9fd4_f3ce65a05719.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6e1c7129_61e0_5d88_9fd4_f3ce65a05719.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6e1c7129_61e0_5d88_9fd4_f3ce65a05719.Data4[4] )
    {
      *a3 = (void *)a1;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
      if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3) >= 0 )
        v4 = 0;
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
