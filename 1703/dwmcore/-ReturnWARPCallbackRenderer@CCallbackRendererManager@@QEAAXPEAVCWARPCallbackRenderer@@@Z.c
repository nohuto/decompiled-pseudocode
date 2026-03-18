/*
 * XREFs of ?ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z @ 0x1801BB930
 * Callers:
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x1801BF410 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x1800ABF98 (-UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@.c)
 */

void __fastcall CCallbackRendererManager::ReturnWARPCallbackRenderer(
        CCallbackRendererManager *this,
        unsigned __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // r8
  unsigned int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *((_DWORD *)this + 32);
  a2 = (unsigned int)a2;
  if ( *((_DWORD *)this + 22) < v2 )
    v2 = *((_DWORD *)this + 22);
  *((_DWORD *)this + 32) = v2;
  v4 = *((unsigned int *)this + 22);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a2 = v5;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( (unsigned int)a2 > *((_DWORD *)this + 21) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v9);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v4) = v9;
    *((_DWORD *)this + 22) = a2;
  }
  if ( v6 >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 16));
  CCallbackRendererManager::UnlockDrawlistEntryRange(
    this,
    (struct ID2D1PrivateCompositorRenderer *)a2,
    *(_DWORD *)(v9 + 40),
    *(_DWORD *)(v9 + 44));
  v8 = v9;
  *(_DWORD *)(v9 + 40) = 0;
  *(_DWORD *)(v8 + 44) = 0;
}
