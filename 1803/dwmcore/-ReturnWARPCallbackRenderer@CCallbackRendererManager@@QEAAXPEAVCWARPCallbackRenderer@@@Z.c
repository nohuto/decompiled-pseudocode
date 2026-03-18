/*
 * XREFs of ?ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z @ 0x180218854
 * Callers:
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x18021B550 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x18013F854 (-UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@.c)
 */

void __fastcall CCallbackRendererManager::ReturnWARPCallbackRenderer(
        CCallbackRendererManager *this,
        struct CWARPCallbackRenderer *a2)
{
  unsigned int v2; // eax
  struct ID2D1PrivateCompositorRenderer *v4; // rdx
  int v5; // ebx
  int v6; // eax
  struct CWARPCallbackRenderer *v7; // rax
  struct CWARPCallbackRenderer *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 22);
  v4 = (struct ID2D1PrivateCompositorRenderer *)(v2 + 1);
  v5 = (unsigned int)v4 < v2 ? 0x80070216 : 0;
  if ( (unsigned int)v4 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( (unsigned int)v4 > *((_DWORD *)this + 21) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v2) = v8;
    *((_DWORD *)this + 22) = (_DWORD)v4;
  }
  if ( v5 >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
  CCallbackRendererManager::UnlockDrawlistEntryRange(this, v4, *((_DWORD *)v8 + 10), *((_DWORD *)v8 + 11));
  v7 = v8;
  *((_DWORD *)v8 + 10) = -1;
  *((_DWORD *)v7 + 11) = -1;
}
