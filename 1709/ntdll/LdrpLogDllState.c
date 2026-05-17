/*
 * XREFs of LdrpLogDllState @ 0x180031CA8
 * Callers:
 *     LdrpAllocatePlaceHolder @ 0x1800204C0 (LdrpAllocatePlaceHolder.c)
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 *     LdrpSendPostSnapNotifications @ 0x180020F14 (LdrpSendPostSnapNotifications.c)
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x180022BE8 (LdrpProcessMappedModule.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpLoadDll @ 0x1800317B0 (LdrpLoadDll.c)
 *     LdrpApplyFileNameRedirection @ 0x180031AA8 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadKnownDll @ 0x180035B64 (LdrpLoadKnownDll.c)
 *     LdrpInitializeNode @ 0x180072C90 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 *     ApiSetQueryApiSetPresence @ 0x18007BD70 (ApiSetQueryApiSetPresence.c)
 *     LdrpCorProcessImports @ 0x1800877D4 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 */

struct _PEB *__fastcall LdrpLogDllState(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *result; // rax
  int v6; // esi
  _DWORD *SharedData; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = NtCurrentPeb();
  v6 = a1;
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v8 = (__int64)result->SharedData + 554;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(a1, a2);
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v9 = (__int64)result->SharedData + 555;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (struct _PEB *)LdrpLogEtwEvent(a3, v6, 0, 0, a2, 0LL);
    }
  }
  return result;
}
