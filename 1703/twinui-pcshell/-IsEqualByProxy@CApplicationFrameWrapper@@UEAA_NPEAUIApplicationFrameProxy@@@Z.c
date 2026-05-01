/*
 * XREFs of ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x18004B000
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 */

bool __fastcall CApplicationFrameWrapper::IsEqualByProxy(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameProxy *a2)
{
  return (unsigned int)SHIsSameObject(
                         (int (__fastcall ***)(_QWORD, GUID *, __int64 *))this,
                         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) != 0;
}
