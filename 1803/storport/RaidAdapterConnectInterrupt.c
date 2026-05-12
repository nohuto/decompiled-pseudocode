/*
 * XREFs of RaidAdapterConnectInterrupt @ 0x1C0025920
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0029188 (RaidAdapterStartMiniport.c)
 * Callees:
 *     WPP_SF_ @ 0x1C002BFFC (WPP_SF_.c)
 *     RaidGetResourceListInterrupt @ 0x1C003791C (RaidGetResourceListInterrupt.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0062954 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0062AD8 (RaidAdapterConnectNonMSIInterrupt.c)
 */

__int64 __fastcall RaidAdapterConnectInterrupt(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  unsigned int ResourceListInterrupt; // edi
  int v5; // r8d
  int v6; // r9d
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // rdx
  unsigned __int8 v10; // si
  int v11; // eax
  int v12; // edx
  int v13; // [rsp+20h] [rbp-58h]
  char v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v16[48]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int8 v17; // [rsp+80h] [rbp+8h] BYREF
  char v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v19; // [rsp+90h] [rbp+18h] BYREF
  int v20; // [rsp+98h] [rbp+20h] BYREF

  v2 = (_QWORD *)(a1 + 280);
  if ( *v2 && *(_QWORD *)(a1 + 288) )
  {
    ResourceListInterrupt = RaidGetResourceListInterrupt(
                              (_DWORD)v2,
                              *(_BYTE *)(a1 + 4448),
                              (unsigned int)&v20,
                              (unsigned int)&v19,
                              (__int64)&v15,
                              (__int64)&v18,
                              (__int64)v16,
                              (__int64)&v17);
    if ( (ResourceListInterrupt & 0x80000000) == 0 )
    {
      if ( *(_BYTE *)(a1 + 4448) )
      {
        v10 = v17;
        LOBYTE(v3) = v17;
        v11 = RaidAdapterConnectMSIInterrupt(a1, v3);
      }
      else
      {
        v10 = v19;
        v12 = v20;
        LOBYTE(v6) = v19;
        LOBYTE(v5) = v19;
        v14 = v18;
        *(_BYTE *)(a1 + 4449) = 0;
        v11 = RaidAdapterConnectNonMSIInterrupt(a1, v12, v5, v6, v13, v14, (__int64)v16);
      }
      ResourceListInterrupt = v11;
      if ( v11 >= 0 )
      {
        *(_DWORD *)(a1 + 672) = v10;
        return ResourceListInterrupt;
      }
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return ResourceListInterrupt;
      }
      v8 = 21LL;
    }
    else
    {
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return ResourceListInterrupt;
      }
      v8 = 20LL;
    }
    WPP_SF_(v7->AttachedDevice, v8, &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids);
    return ResourceListInterrupt;
  }
  return 0LL;
}
