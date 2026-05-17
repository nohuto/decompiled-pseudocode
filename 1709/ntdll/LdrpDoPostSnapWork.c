/*
 * XREFs of LdrpDoPostSnapWork @ 0x18001C2FC
 * Callers:
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x180001314 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleTlsData @ 0x18001C3A8 (LdrpHandleTlsData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpDoPostSnapWork(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  int v5; // ebx
  __int64 result; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 104;
  v5 = 0;
  if ( !*(_QWORD *)(a1 + 104)
    || (result = ZwProtectVirtualMemory(-1LL, v3, a1 + 112, *(unsigned int *)(a1 + 136), &v10),
        v5 = result,
        (int)result >= 0) )
  {
    v7 = *(_QWORD **)(a1 + 152);
    if ( v7 && *v7 != *(_QWORD *)(a1 + 144) )
      __fastfail(0x13u);
    v8 = *(_QWORD *)(a1 + 56);
    if ( *(_WORD *)(v8 + 110) || (result = LdrpHandleTlsData(), v5 = result, (int)result >= 0) )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v8, v3, a3) )
      {
        v5 = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL), 0, 0);
        if ( v5 < 0 )
        {
          v9 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              492,
              (unsigned int)"LdrpDoPostSnapWork",
              0,
              "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based"
              " at 0x%p.Status = 0x%x\n",
              *(const void **)(*(_QWORD *)(a1 + 56) + 48LL),
              v5);
            v9 = LdrpDebugFlags;
          }
          if ( (v9 & 0x10) != 0 )
            __debugbreak();
        }
      }
      return (unsigned int)v5;
    }
  }
  return result;
}
