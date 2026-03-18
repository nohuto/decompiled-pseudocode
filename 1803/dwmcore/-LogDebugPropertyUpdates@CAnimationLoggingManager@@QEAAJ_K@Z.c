/*
 * XREFs of ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180180D24
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x18018003C (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 */

__int64 __fastcall CAnimationLoggingManager::LogDebugPropertyUpdates(CAnimationLoggingManager *this, __int64 a2)
{
  __int64 v4; // rsi
  struct CResource *ResourceWithoutType; // rax
  __int64 v6; // r10
  int v7; // eax
  unsigned int v8; // edi
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rcx
  _BYTE v12[64]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int8 *v13; // [rsp+90h] [rbp-38h]
  unsigned int v14; // [rsp+98h] [rbp-30h]
  char v15; // [rsp+9Ch] [rbp-2Ch]

  memset_0(v12, 0, sizeof(v12));
  v13 = 0LL;
  v4 = 0LL;
  v14 = 18;
  v15 = 0;
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_8:
    *((_DWORD *)this + 20) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 0xCu);
    v8 = 0;
    goto LABEL_9;
  }
  while ( 1 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                            *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4));
    if ( ResourceWithoutType )
      break;
LABEL_7:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
      goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(*(_QWORD *)ResourceWithoutType + 96LL))(
         ResourceWithoutType,
         *(unsigned int *)(v6 + 12 * v4 + 4),
         v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v12;
    if ( v14 == 11 )
      v9 = v13;
    CAnimationLoggingManager::LogDebugPropertyUpdate(
      (LPCWSTR *)this,
      a2,
      *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4 + 8),
      *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4),
      *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4 + 4),
      0LL,
      v14,
      L"Direct API property set",
      v9);
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x15Cu);
LABEL_9:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
