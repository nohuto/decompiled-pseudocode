/*
 * XREFs of ?GetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180070460
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18006FC40 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::GetValueForKey(
        __int64 a1,
        int *a2,
        _OWORD *a3)
{
  int v3; // r9d
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // edx
  __int64 v7; // r10
  __int64 v8; // rcx

  v3 = *a2;
  v4 = 0;
  v5 = 0;
  if ( *a2 == *(_DWORD *)(a1 + 16) || !a3 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 )
  {
    v7 = *(_QWORD *)a1;
    while ( 1 )
    {
      a1 = v4;
      if ( *(_DWORD *)(152LL * v4 + v7) == v3 )
        break;
      if ( ++v4 >= v6 )
        goto LABEL_7;
    }
    v8 = v7 + 152LL * v4;
    *a3 = *(_OWORD *)(v8 + 8);
    a3[1] = *(_OWORD *)(v8 + 24);
    a3[2] = *(_OWORD *)(v8 + 40);
    a3[3] = *(_OWORD *)(v8 + 56);
    a3[4] = *(_OWORD *)(v8 + 72);
    a3[5] = *(_OWORD *)(v8 + 88);
    a3[6] = *(_OWORD *)(v8 + 104);
    a3[7] = *(_OWORD *)(v8 + 120);
    a3[8] = *(_OWORD *)(v8 + 136);
  }
  else
  {
LABEL_7:
    v5 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 133, 5);
  }
  return v5;
}
