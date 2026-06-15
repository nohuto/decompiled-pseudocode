/*
 * XREFs of ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18002BCF0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800826D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
        CSharedStreamGroupProxy *this,
        struct AuxiliaryInputDescriptor *a2)
{
  int v2; // ebx
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)a2 = 0;
  v4 = 0;
  v5 = *((_QWORD *)this + 7);
  if ( v5 && !*(_DWORD *)(v5 + 8) )
  {
    v7 = *(_QWORD *)(v5 + 16);
    if ( v7 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(v7 + 2 * v8) );
      v4 = _AllocStringWorker<CTCoAllocPolicy>(this, a2, v7, v8);
    }
    else
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 32LL))(
             *(_QWORD *)&g_DeviceEnumerator,
             0LL,
             *(unsigned int *)(v5 + 24),
             &v9) >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 40LL))(v9, (char *)a2 + 8);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
    }
    LOBYTE(v2) = *((_QWORD *)a2 + 1) != 0LL;
    *(_DWORD *)a2 = v2;
  }
  return v4;
}
