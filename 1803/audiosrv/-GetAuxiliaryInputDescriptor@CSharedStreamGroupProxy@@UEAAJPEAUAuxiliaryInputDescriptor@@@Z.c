/*
 * XREFs of ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18001D660
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180015514 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
        CSharedStreamGroupProxy *this,
        unsigned __int16 **a2)
{
  int v2; // ebx
  unsigned int v4; // ebp
  __int64 v5; // rsi
  const unsigned __int16 *v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)a2 = 0;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  if ( v5 && !*(_DWORD *)(v5 + 8) )
  {
    v7 = *(const unsigned __int16 **)(v5 + 16);
    if ( v7 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      v4 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, v7, v8, v9, a2 + 1);
    }
    else
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 32LL))(
             *(_QWORD *)&g_DeviceEnumerator,
             0LL,
             *(unsigned int *)(v5 + 24),
             &v10) >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 40LL))(v10, (char *)a2 + 8);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    }
    LOBYTE(v2) = a2[1] != 0LL;
    *(_DWORD *)a2 = v2;
  }
  return v4;
}
