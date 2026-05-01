/*
 * XREFs of ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x18004D4D0
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 */

bool __fastcall CApplicationFrameWrapper::IsEqualByProxy(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameProxy *a2)
{
  return (unsigned int)SHIsSameObject(
                         (int (__fastcall ***)(_QWORD, GUID *, __int64 *))this,
                         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) != 0;
}
