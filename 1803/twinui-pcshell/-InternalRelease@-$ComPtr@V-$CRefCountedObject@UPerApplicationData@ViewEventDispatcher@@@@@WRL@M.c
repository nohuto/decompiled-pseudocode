/*
 * XREFs of ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800912CC
 * Callers:
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180031E9C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18003208C (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ??1?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAD50 (--1-$ComPtr@V-$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@QEAA.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x1801C8928 (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1801D0CF8 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 * Callees:
 *     ?Release@?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@UEAAKXZ @ 0x180091310 (-Release@-$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::InternalRelease(
        void **a1)
{
  __int64 result; // rax
  void *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CRefCountedObject<ViewEventDispatcher::PerApplicationData>::Release )
      return CRefCountedObject<ViewEventDispatcher::PerApplicationData>::Release(v3);
    else
      return v4();
  }
  return result;
}
