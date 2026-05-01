/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18017F1D0
 * Callers:
 *     ??1?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D7C0 (--1-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?Destroy@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18017EC30 (-Destroy@-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180003728 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180026224 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18017D164 (-Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi
  HANDLE ProcessHeap; // rax
  const struct _TlgProvider_t *v5; // rax

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)(v3 + 22));
        if ( *((_BYTE *)v3 + 72) )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, *((LPVOID *)v3 + 8));
          *((_BYTE *)v3 + 72) = 0;
        }
        *((_QWORD *)v3 + 8) = 0LL;
        if ( *((_DWORD *)v3 + 2) == 1 )
        {
          *((_DWORD *)v3 + 2) = 2;
          v5 = ImmersiveIconsLogging::Provider();
          _TlgWriteActivityAutoStop<0,5>(v5, (const GUID *)v3 + 1);
        }
        *((_DWORD *)v3 + 2) = 3;
        operator delete((void *)v3);
      }
    }
    *a1 = 0LL;
  }
}
