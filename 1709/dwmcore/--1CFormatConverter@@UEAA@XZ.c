/*
 * XREFs of ??1CFormatConverter@@UEAA@XZ @ 0x1801C55AC
 * Callers:
 *     ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x1801C5680 (--_ECFormatConverter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x1801C5604 (--1CScanPipeline@@UEAA@XZ.c)
 */

void __fastcall CFormatConverter::~CFormatConverter(CFormatConverter *this)
{
  *(_QWORD *)this = &CFormatConverter::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `IBitmapSource'};
  ReleaseInterface<IBitmapLock>((__int64 *)this + 8);
  WPF::ProcessHeapImpl::Free(*((void **)this + 97));
  CScanPipeline::~CScanPipeline((CFormatConverter *)((char *)this + 112));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
