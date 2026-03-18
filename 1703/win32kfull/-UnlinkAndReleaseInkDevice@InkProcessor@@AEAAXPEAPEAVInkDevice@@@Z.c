/*
 * XREFs of ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C02186F8
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C00DA2F0 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021823C (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C0217C00 (--_EInkDevice@@UEAAPEAXI@Z.c)
 */

void __fastcall InkProcessor::UnlinkAndReleaseInkDevice(InkProcessor *this, struct InkDevice **a2)
{
  InkDevice *v2; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r8

  v2 = *a2;
  v4 = (_QWORD *)((char *)*a2 + 88);
  v5 = *v4;
  v6 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  v4[1] = 0LL;
  *v4 = 0LL;
  if ( v2 )
    InkDevice::`vector deleting destructor'(v2, 1);
  *a2 = 0LL;
}
