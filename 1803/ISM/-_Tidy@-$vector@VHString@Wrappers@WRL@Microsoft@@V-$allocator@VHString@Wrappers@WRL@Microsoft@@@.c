/*
 * XREFs of ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800AA3C4
 * Callers:
 *     ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A50D4 (-EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800A7080 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800A9D9C (--1-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(__int64 a1, __int64 a2)
{
  HSTRING *v2; // rbx
  HSTRING *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v2 = *(HSTRING **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(HSTRING **)(a1 + 8);
    if ( v2 != v4 )
    {
      do
      {
        WindowsDeleteString(*v2);
        *v2++ = 0LL;
      }
      while ( v2 != v4 );
      v2 = *(HSTRING **)a1;
    }
    v5 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3;
    if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v5 < 0x1000 )
      {
LABEL_11:
        operator delete(v2);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v6 = (unsigned __int64)*(v2 - 1);
        if ( v6 < (unsigned __int64)v2 && (unsigned __int64)v2 - v6 - 8 <= 0x1F )
        {
          v2 = (HSTRING *)*(v2 - 1);
          goto LABEL_11;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x1800AA470LL);
  }
}
