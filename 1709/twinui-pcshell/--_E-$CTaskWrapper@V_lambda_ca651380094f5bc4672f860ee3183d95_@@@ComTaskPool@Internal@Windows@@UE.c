/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_ca651380094f5bc4672f860ee3183d95_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180117D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ACE30 (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AF8B0 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ca651380094f5bc4672f860ee3183d95_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  char *v2; // rbx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (char *)(Block + 11);
  Block[11] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(Block + 11);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v2);
  v5 = (void *)Block[7];
  if ( v5 )
  {
    CoTaskMemFree(v5);
    Block[7] = 0LL;
  }
  Block[8] = 0LL;
  Block[9] = 0LL;
  v6 = (void *)Block[3];
  if ( v6 )
  {
    CoTaskMemFree(v6);
    Block[3] = 0LL;
  }
  Block[4] = 0LL;
  Block[5] = 0LL;
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
