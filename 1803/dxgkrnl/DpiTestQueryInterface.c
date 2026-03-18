/*
 * XREFs of DpiTestQueryInterface @ 0x1C020EE10
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C009E8D0 (DpiPdoDispatchPnp.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpiTestQueryInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  int RegistryValues; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD v13[14]; // [rsp+30h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = -1073741637;
  if ( RtlCompareMemory(*(const void **)a2, &GUID_DEVINTERFACE_BRIGHTNESS, 0x10uLL) == 16
    && *(_WORD *)(a2 + 10) == 1
    && *(_WORD *)(a2 + 8) == 56 )
  {
    v5 = *(_QWORD **)(a2 + 16);
    memset(v13, 0, sizeof(v13));
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
    v13[3] = 0LL;
    LODWORD(v13[4]) = 0;
    v13[5] = 0LL;
    LODWORD(v13[6]) = 0;
    v13[0] = DpiTestProcessRegKey;
    v13[2] = L"TestBrightnessLevels";
    LODWORD(v13[1]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, *(_QWORD *)(v6 + 536), v13, 0LL, 0LL);
    v10 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      memset(v5, 0, 0x38uLL);
      v4 = 0;
      v5[2] = DxgkCddInterfaceDereference;
      v5[3] = DxgkCddInterfaceDereference;
      v5[4] = DpiTestGetPossibleBrightness;
      v5[5] = DpiTestSetBrightness;
      v5[6] = DpiTestGetBrightness;
    }
    else
    {
      v11 = WdLogNewEntry5_WdEvent(v9, v8);
      *(_QWORD *)(v11 + 24) = v10;
      WdLogEvent5_WdEvent(v11);
    }
  }
  return v4;
}
