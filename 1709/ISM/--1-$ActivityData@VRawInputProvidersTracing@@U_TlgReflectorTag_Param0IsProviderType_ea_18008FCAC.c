/*
 * XREFs of ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FCAC
 * Callers:
 *     ??1DeviceRemoved@RawInputProvidersTracing@@QEAA@XZ @ 0x18008E2E8 (--1DeviceRemoved@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ??1OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAA@XZ @ 0x18008EA58 (--1OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAA@XZ.c)
 *     _lambda_f0fb12180c22145fe0b52491eb1f97bd_::operator() @ 0x180093BA4 (_lambda_f0fb12180c22145fe0b52491eb1f97bd_--operator().c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     ?Destroy@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180096594 (-Destroy@-$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvider.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180098694 (--$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v4; // rax
  struct RawInputProvidersTracing *v5; // rax

  v2 = *(volatile signed __int32 **)(a1 + 224);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 224));
    }
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 64) )
  {
    v4 = GetProcessHeap();
    HeapFree(v4, 0, *(LPVOID *)(a1 + 56));
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v5 = RawInputProvidersTracing::Instance();
    _TlgWriteActivityAutoStop<0,4>(*((_QWORD *)v5 + 1), a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
