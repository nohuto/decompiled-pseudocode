/*
 * XREFs of ??0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z @ 0x1800B9444
 * Callers:
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800364A0 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800B932C (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 */

CZOrderedRect *__fastcall CZOrderedRect::CZOrderedRect(
        CZOrderedRect *this,
        const struct MilRectF *a2,
        int a3,
        const struct CMILMatrix *a4)
{
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = *(_DWORD *)a2;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 3);
  CZOrderedRect::UpdateDeviceRect(this, a4);
  return this;
}
