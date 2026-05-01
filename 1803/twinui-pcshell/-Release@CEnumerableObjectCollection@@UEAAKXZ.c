/*
 * XREFs of ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x180080E30
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1800432E0 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18008071C (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??_GCImmersiveAppArray@@UEAAPEAXI@Z @ 0x180080AC0 (--_GCImmersiveAppArray@@UEAAPEAXI@Z.c)
 *     ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180080B40 (-GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@CEnumerableObjectCollection@@W7EAAKXZ @ 0x1800A2EE0 (-Release@CEnumerableObjectCollection@@W7EAAKXZ.c)
 *     ?Release@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x1800A2EF0 (-Release@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_ECEnumerableObjectCollection@@MEAAPEAXI@Z @ 0x180080E80 (--_ECEnumerableObjectCollection@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Release(CEnumerableObjectCollection *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CEnumerableObjectCollection *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(CEnumerableObjectCollection *__hidden, unsigned int))(*(_QWORD *)this + 72LL);
    if ( v3 == CEnumerableObjectCollection::`vector deleting destructor' )
      CEnumerableObjectCollection::`vector deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return v1;
}
