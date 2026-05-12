/*
 * XREFs of RaidSelectDeviceDumpCollectionMode @ 0x1C0014CDC
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013810 (RaidBusEnumeratorGetLunListFromTarget.c)
 * Callees:
 *     RaidRegGetDeviceDumpCustomGPLogPage @ 0x1C0014D94 (RaidRegGetDeviceDumpCustomGPLogPage.c)
 *     RaidRegGetDeviceDumpSupportLevel @ 0x1C0014DF4 (RaidRegGetDeviceDumpSupportLevel.c)
 *     RaidRegGetDeviceDumpMaxSize @ 0x1C0014E68 (RaidRegGetDeviceDumpMaxSize.c)
 *     WPP_SF_ddsd @ 0x1C004731C (WPP_SF_ddsd.c)
 */

__int64 __fastcall RaidSelectDeviceDumpCollectionMode(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r8
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  v1 = 90112;
  v8 = 0;
  *(_DWORD *)(a1 + 4992) = 90112;
  *(_BYTE *)(a1 + 4990) = 2;
  if ( (int)RaidRegGetDeviceDumpMaxSize(a1, &v6) >= 0 )
  {
    if ( v6 )
    {
      if ( v6 < 0x16000 )
        v1 = v6;
      *(_DWORD *)(a1 + 4992) = v1;
    }
    else
    {
      *(_DWORD *)(a1 + 4992) = 0;
      *(_BYTE *)(a1 + 4990) = 0;
    }
  }
  if ( (int)RaidRegGetDeviceDumpSupportLevel(v3, &v7) >= 0 )
    *(_BYTE *)(a1 + 4990) = v7;
  *(_BYTE *)(a1 + 4991) = 0;
  result = RaidRegGetDeviceDumpCustomGPLogPage(a1, &v8);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 4991) = v8;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    return WPP_SF_ddsd(
             WPP_GLOBAL_Control->AttachedDevice,
             &WPP_GLOBAL_Control,
             v5,
             *(unsigned __int8 *)(a1 + 4990),
             *(_DWORD *)(a1 + 4992));
  }
  return result;
}
