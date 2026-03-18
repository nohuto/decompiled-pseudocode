/*
 * XREFs of ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180178204
 * Callers:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18017837C (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV-$TMil3DRect@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        _OWORD *a5)
{
  __int64 *v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCachedWindowBackgroundTreatment::`vftable';
  v8 = (__int64 *)(a1 + 16);
  *v8 = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a3 + 32);
  v9 = *a4;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a3 + 48);
  v10 = *((_QWORD *)a4 + 2);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a3 + 64);
  *(_OWORD *)(a1 + 92) = v9;
  *(_QWORD *)(a1 + 108) = v10;
  result = a1;
  *(_OWORD *)(a1 + 116) = *a5;
  return result;
}
