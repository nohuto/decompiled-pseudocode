/*
 * XREFs of ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C0010C10
 * Callers:
 *     ??1DMMVIDPNSOURCE@@UEAA@XZ @ 0x1C0009EE8 (--1DMMVIDPNSOURCE@@UEAA@XZ.c)
 *     ??_G?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z @ 0x1C0045500 (--_G-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

void **__fastcall DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(_QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
  v2 = (void *)a1[4];
  if ( v2 )
  {
    operator delete[](v2);
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  a1[3] = &DoublyLinkedListElement::`vftable';
  result = &DoublyLinkedListElement::`vftable';
  *a1 = &DoublyLinkedListElement::`vftable';
  return result;
}
