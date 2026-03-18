/*
 * XREFs of ?ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z @ 0x1801D5718
 * Callers:
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x1801D8220 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x180046228 (-UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CCallbackRendererManager::ReturnWARPCallbackRenderer(
        CCallbackRendererManager *this,
        unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // eax
  signed int v5; // ebx
  signed int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((unsigned int *)this + 22);
  a2 = (unsigned int)a2;
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
    a2 = v4;
  v5 = v4 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( v4 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xB5u);
  }
  else if ( (unsigned int)a2 > *((_DWORD *)this + 21) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2) = v8;
    *((_DWORD *)this + 22) = a2;
  }
  if ( v5 >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 16));
  CCallbackRendererManager::UnlockDrawlistEntryRange(
    this,
    (struct ID2D1PrivateCompositorRenderer *)a2,
    *(_DWORD *)(v8 + 40),
    *(_DWORD *)(v8 + 44));
  v7 = v8;
  *(_DWORD *)(v8 + 40) = -1;
  *(_DWORD *)(v7 + 44) = -1;
}
