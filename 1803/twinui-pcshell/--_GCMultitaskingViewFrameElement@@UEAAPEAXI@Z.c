/*
 * XREFs of ??_GCMultitaskingViewFrameElement@@UEAAPEAXI@Z @ 0x180291E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewFrameElement@@UEAA@XZ @ 0x180291A68 (--1CMultitaskingViewFrameElement@@UEAA@XZ.c)
 */

CMultitaskingViewFrameElement *__fastcall CMultitaskingViewFrameElement::`scalar deleting destructor'(
        CMultitaskingViewFrameElement *this,
        char a2)
{
  CMultitaskingViewFrameElement::~CMultitaskingViewFrameElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
