/*
 * XREFs of ??_G?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z @ 0x1C0045500
 * Callers:
 *     ??_E?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@WBI@EAAPEAXI@Z @ 0x1C0015A00 (--_E-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C0010C10 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
