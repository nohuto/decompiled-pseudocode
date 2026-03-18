/*
 * XREFs of ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x1801C5680
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CFormatConverter@@UEAA@XZ @ 0x1801C55AC (--1CFormatConverter@@UEAA@XZ.c)
 */

CFormatConverter *__fastcall CFormatConverter::`vector deleting destructor'(CFormatConverter *this, char a2)
{
  CFormatConverter::~CFormatConverter(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
