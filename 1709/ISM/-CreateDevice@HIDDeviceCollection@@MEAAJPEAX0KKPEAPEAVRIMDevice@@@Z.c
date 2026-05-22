/*
 * XREFs of ?CreateDevice@HIDDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x18009CE60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::CreateDevice(
        HIDDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  _DWORD *v10; // [rsp+38h] [rbp+10h]

  v10 = operator new(0x80uLL);
  v10[10] = a5;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 1) = a2;
  *((_QWORD *)v10 + 2) = a3;
  v10[6] = a4;
  *((_QWORD *)v10 + 6) = 0LL;
  v10[14] = 0;
  *(_QWORD *)v10 = &HIDDevice::`vftable';
  memset(v10 + 15, 0, 0x40uLL);
  *a6 = (struct RIMDevice *)v10;
  return 0LL;
}
