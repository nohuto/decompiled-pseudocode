/*
 * XREFs of ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F568
 * Callers:
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18006EB84 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ??1?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F4B4 (--1-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProv.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800722C0 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>(
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
    _TlgWriteActivityAutoStop<70368744177664,4>(*((_QWORD *)v5 + 1), a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
