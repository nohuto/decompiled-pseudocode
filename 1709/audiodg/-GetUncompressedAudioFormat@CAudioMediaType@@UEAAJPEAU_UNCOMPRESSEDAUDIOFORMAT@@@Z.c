/*
 * XREFs of ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000AE70
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140006560 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x1400090F0 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x1400091F0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000B020 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000B180 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioMediaType::GetUncompressedAudioFormat(
        CAudioMediaType *this,
        struct _UNCOMPRESSEDAUDIOFORMAT *a2)
{
  __int64 v3; // r8
  float v4; // xmm1_4
  int v6; // ecx

  if ( !a2 )
    return 2147500035LL;
  v3 = *((_QWORD *)this + 2);
  if ( !v3 )
    return 2147500035LL;
  if ( *(_WORD *)v3 == 0xFFFE )
  {
    a2->guidFormatType = *(GUID *)(v3 + 24);
    a2->dwSamplesPerFrame = *(unsigned __int16 *)(v3 + 2);
    a2->dwBytesPerSampleContainer = *(unsigned __int16 *)(v3 + 14) >> 3;
    a2->dwValidBitsPerSample = *(unsigned __int16 *)(v3 + 18);
    a2->fFramesPerSecond = (float)*(int *)(v3 + 4);
    a2->dwChannelMask = *(_DWORD *)(v3 + 20);
  }
  else
  {
    a2->guidFormatType = GUID_00000000_0000_0010_8000_00aa00389b71;
    a2->guidFormatType.Data1 = **((unsigned __int16 **)this + 2);
    a2->dwSamplesPerFrame = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 2LL);
    a2->dwBytesPerSampleContainer = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 14LL) >> 3;
    a2->dwValidBitsPerSample = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 14LL);
    v6 = *(_DWORD *)(*((_QWORD *)this + 2) + 4LL);
    a2->dwChannelMask = 0;
    a2->fFramesPerSecond = (float)v6;
  }
  v4 = *((float *)this + 6);
  if ( v4 != 0.0 )
    a2->fFramesPerSecond = v4;
  return 0LL;
}
