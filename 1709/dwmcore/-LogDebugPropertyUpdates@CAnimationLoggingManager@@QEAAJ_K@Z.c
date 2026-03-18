/*
 * XREFs of ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180157BCC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 */

__int64 __fastcall CAnimationLoggingManager::LogDebugPropertyUpdates(CAnimationLoggingManager *this, __int64 a2)
{
  __int64 v4; // rsi
  struct CResource *ResourceWithoutType; // rax
  __int64 v6; // r10
  signed int v7; // eax
  unsigned int v8; // edi
  unsigned __int8 v10[64]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v11; // [rsp+90h] [rbp-38h]
  char i; // [rsp+94h] [rbp-34h]

  memset_0(v10, 0, sizeof(v10));
  v4 = 0LL;
  v11 = 18;
  for ( i = 0; (unsigned int)v4 < *((_DWORD *)this + 20); v4 = (unsigned int)(v4 + 1) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                            *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4));
    if ( ResourceWithoutType )
    {
      v7 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, unsigned __int8 *))(*(_QWORD *)ResourceWithoutType
                                                                                    + 96LL))(
             ResourceWithoutType,
             *(unsigned int *)(v6 + 12 * v4 + 4),
             v10);
      v8 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xC2u);
        return v8;
      }
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        this,
        a2,
        *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4 + 8),
        *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4),
        *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4 + 4),
        0LL,
        v11,
        L"Direct API property set",
        v10);
    }
  }
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 0xCu);
  return 0;
}
