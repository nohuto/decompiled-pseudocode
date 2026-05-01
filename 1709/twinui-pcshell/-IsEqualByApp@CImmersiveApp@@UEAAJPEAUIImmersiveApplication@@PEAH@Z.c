/*
 * XREFs of ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180053D00
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 */

__int64 __fastcall CImmersiveApp::IsEqualByApp(CImmersiveApp *this, struct IImmersiveApplication *a2, int *a3)
{
  *a3 = SHIsSameObject(
          (int (__fastcall ***)(_QWORD, GUID *, __int64 *))this - 12,
          (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
  return 0LL;
}
