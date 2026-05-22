/*
 * XREFs of ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180097930
 * Callers:
 *     EnumerateDevices @ 0x180090968 (EnumerateDevices.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800964E0 (--1-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(__int64 a1)
{
  HSTRING *v1; // rbx
  HSTRING *v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v1 = *(HSTRING **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(HSTRING **)(a1 + 8);
    while ( v1 != v3 )
    {
      WindowsDeleteString(*v1);
      *v1++ = 0LL;
    }
    v4 = *(_QWORD *)a1;
    v5 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v5 < 0x1000 )
      {
LABEL_11:
        operator delete((void *)v4);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( (v4 & 0x1F) == 0 )
      {
        v6 = *(_QWORD *)(v4 - 8);
        if ( v6 < v4 )
        {
          v4 = v4 - v6 - 8;
          if ( v4 <= 0x1F )
          {
            v4 = v6;
            goto LABEL_11;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v4);
    JUMPOUT(0x1800979D6LL);
  }
}
