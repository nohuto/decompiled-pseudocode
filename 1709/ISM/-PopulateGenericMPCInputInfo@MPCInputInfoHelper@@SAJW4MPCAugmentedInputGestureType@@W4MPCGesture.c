/*
 * XREFs of ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C
 * Callers:
 *     ?ProcessSourceDetectedAndLoss@MPCSixDofProcessor@@AEAAXPEAUIMPCInputTarget@@0PEAUInputInfo@@_NPEA_N@Z @ 0x18004F1B4 (-ProcessSourceDetectedAndLoss@MPCSixDofProcessor@@AEAAXPEAUIMPCInputTarget@@0PEAUInputInfo@@_NPE.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052A90 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180053140 (-OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180054C00 (-OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180055020 (-IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     _lambda_f70aa1018a3677971a6458a957cae229_::operator() @ 0x180057FE4 (_lambda_f70aa1018a3677971a6458a957cae229_--operator().c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180067A9C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180067B88 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivHandEventArgs@34567@@Z @ 0x180068310 (-OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PE.c)
 *     ?Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@EPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800685C0 (-Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@EPEAUIPerceptionTimestamp@Perception@Windows@@@Z.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800686D0 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x180068B88 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateGenericMPCInputInfo(
        LONG a1,
        DWORD a2,
        LONG a3,
        LARGE_INTEGER *a4,
        char a5)
{
  signed __int32 v9; // eax
  __int64 result; // rax
  LARGE_INTEGER v11; // [rsp+48h] [rbp+20h] BYREF

  QueryPerformanceCounter(&v11);
  if ( a5 )
    memset(a4, 0, 0xB20uLL);
  a4->LowPart = 512;
  a4->HighPart = a3;
  a4[1].LowPart = GetTickCount();
  a4[2] = v11;
  a4[5].LowPart = 2848;
  v9 = _InterlockedExchangeAdd(&MPCInputInfoHelper::m_curInputId, 1u);
  a4[101].LowPart = 0;
  a4[88].LowPart = v9;
  a4[89].LowPart = a4->HighPart;
  result = 0LL;
  a4[87].LowPart = a2;
  a4[87].HighPart = a1;
  BYTE4(a4[84].QuadPart) = 1;
  LOBYTE(a4[106].LowPart) = 0;
  LOBYTE(a4[97].LowPart) = 0;
  return result;
}
