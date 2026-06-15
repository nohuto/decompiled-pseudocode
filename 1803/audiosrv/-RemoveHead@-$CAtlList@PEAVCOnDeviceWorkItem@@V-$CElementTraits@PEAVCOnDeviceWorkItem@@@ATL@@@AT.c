/*
 * XREFs of ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18001887C
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018540 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x18009CE00 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x18001882C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  bool v5; // zf

  v1 = *a1;
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = *v1;
  v4 = v1[2];
  *a1 = (__int64 *)*v1;
  if ( v3 )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    a1[1] = 0LL;
  *v1 = (__int64)a1[4];
  v5 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  a1[4] = v1;
  if ( v5 )
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)a1);
  return v4;
}
