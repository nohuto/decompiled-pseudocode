/*
 * XREFs of ndisOidPostIovCreateNicSwitch @ 0x1C006C840
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisIovFinalizeNicSwitch @ 0x1C006BEF0 (ndisIovFinalizeNicSwitch.c)
 *     ndisIovInitializeNicSwitch @ 0x1C006C2B4 (ndisIovInitializeNicSwitch.c)
 */

void __fastcall ndisOidPostIovCreateNicSwitch(__int64 a1)
{
  __int64 v1; // r13
  void *v2; // rdi
  __int64 v3; // r15
  void *v4; // r14
  _QWORD *v5; // rsi
  _OWORD *v7; // r12
  int v8; // eax
  void *v9; // [rsp+70h] [rbp+40h] BYREF
  void *v10; // [rsp+78h] [rbp+48h] BYREF
  _QWORD *v11; // [rsp+80h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v3 = *(_QWORD *)a1;
  v4 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0xEu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
  if ( *(_QWORD *)a1 )
  {
    if ( ndisIovNicSwitchWithoutIovSupported(v3) )
    {
      if ( (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric && !*(_DWORD *)(a1 + 40) )
      {
        v7 = *(_OWORD **)(v1 + 40);
        v8 = ndisIovInitializeNicSwitch(v3, (__int64)v7, &v9, &v10, &v11);
        v5 = v11;
        v4 = v10;
        v2 = v9;
        *(_DWORD *)(a1 + 40) = v8;
        if ( !v8 )
          *(_DWORD *)(a1 + 40) = ndisIovFinalizeNicSwitch(v3, v7, (__int64)v2, (__int64)v4, v5);
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
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0xFu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
}
