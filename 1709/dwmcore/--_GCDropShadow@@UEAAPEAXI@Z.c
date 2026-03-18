/*
 * XREFs of ??_GCDropShadow@@UEAAPEAXI@Z @ 0x18015F690
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x18015F4C0 (--1CDropShadow@@UEAA@XZ.c)
 */

CDropShadow *__fastcall CDropShadow::`scalar deleting destructor'(CDropShadow *this, char a2)
{
  CDropShadow::~CDropShadow(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
