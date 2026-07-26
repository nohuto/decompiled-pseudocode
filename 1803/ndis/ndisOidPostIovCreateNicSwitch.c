/*
 * XREFs of ndisOidPostIovCreateNicSwitch @ 0x1C006D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001A044 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisIovFinalizeNicSwitch @ 0x1C006C74C (ndisIovFinalizeNicSwitch.c)
 *     ndisIovInitializeNicSwitch @ 0x1C006CB10 (ndisIovInitializeNicSwitch.c)
 */

void __fastcall ndisOidPostIovCreateNicSwitch(__int64 a1)
{
  __int64 v1; // r13
  void *v2; // rdi
  __int64 v3; // r15
  void *v4; // r14
  _QWORD *v5; // rsi
  __int64 v7; // rax
  _OWORD *v8; // r12
  int v9; // eax
  void *v10; // [rsp+70h] [rbp+40h] BYREF
  void *v11; // [rsp+78h] [rbp+48h] BYREF
  _QWORD *v12; // [rsp+80h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v3 = *(_QWORD *)a1;
  v4 = 0LL;
  v5 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v7 = v3;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    WPP_SF_qq(0xEu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
    v7 = *(_QWORD *)a1;
  }
  if ( v7 )
  {
    if ( ndisIovNicSwitchWithoutIovSupported(v3) )
    {
      if ( (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric && !*(_DWORD *)(a1 + 40) )
      {
        v8 = *(_OWORD **)(v1 + 40);
        v9 = ndisIovInitializeNicSwitch(v3, (__int64)v8, &v10, &v11, &v12);
        v5 = v12;
        v4 = v11;
        v2 = v10;
        *(_DWORD *)(a1 + 40) = v9;
        if ( !v9 )
          *(_DWORD *)(a1 + 40) = ndisIovFinalizeNicSwitch(v3, v8, (__int64)v2, (__int64)v4, v5);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0xFu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
}
