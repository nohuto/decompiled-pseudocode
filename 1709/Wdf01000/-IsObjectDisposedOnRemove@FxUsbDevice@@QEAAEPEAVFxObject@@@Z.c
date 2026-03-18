/*
 * XREFs of ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C0091A1C
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C009104C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C0091274 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0091810 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C0065228 (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 */

char __fastcall FxUsbDevice::IsObjectDisposedOnRemove(FxUsbDevice *this, FxDeviceBase *Object)
{
  char v3; // bp
  FxDeviceBase *v5; // rdi
  FxObject *ParentObjectReferenced; // rbx
  char *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  char v10; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v5 = Object;
  FxObject::AddRef(Object, Object, 2399, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
  if ( v5 )
  {
    while ( v5 != this->m_DeviceBase )
    {
      v9 = 4104;
      v8 = &v10;
      if ( (v5->m_Type == 4104 || v5->QueryInterface(v5, (FxQueryInterfaceParams *)&v8) >= 0) && !BYTE1(v5[1].m_Refcnt) )
        break;
      ParentObjectReferenced = FxObject::GetParentObjectReferenced(v5, Object);
      v5->Release(v5, Object, 2425, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
      v5 = (FxDeviceBase *)ParentObjectReferenced;
      if ( !ParentObjectReferenced )
        return v3;
    }
    v3 = 1;
    if ( v5 )
      v5->Release(v5, Object, 2435, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
  }
  return v3;
}
