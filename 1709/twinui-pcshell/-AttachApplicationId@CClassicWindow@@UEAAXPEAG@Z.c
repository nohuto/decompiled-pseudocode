/*
 * XREFs of ?AttachApplicationId@CClassicWindow@@UEAAXPEAG@Z @ 0x180035290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CClassicWindow::AttachApplicationId(CClassicWindow *this, unsigned __int16 *a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    CoTaskMemFree(v4);
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 7) = -1LL;
  *((_QWORD *)this + 6) = -1LL;
}
