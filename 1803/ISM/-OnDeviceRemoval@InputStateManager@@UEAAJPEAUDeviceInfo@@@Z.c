/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180006A50
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800075D0 (-OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180005D74 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKPEAPEAUIInputProcessor@@@Z @ 0x180007480 (-GetValueForKey@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKPEAPEAUIInputProcessor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceRemoval(InputStateManager *this, struct DeviceInfo *a2)
{
  signed int ValueForKey; // edi
  __int64 v5; // rbx
  char v6; // dl
  unsigned int v7; // eax
  _DWORD *v8; // rcx
  int v9; // r9d
  int v10; // r10d
  unsigned int v11; // ecx
  _DWORD *v12; // rax
  char v13; // cl
  __int64 v14; // rax
  _DWORD *v15; // r8
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  InputETW::InputStateManager::OnDeviceRemoval(a2);
  ValueForKey = FixedSizeMap<unsigned long,IInputProcessor *,256>::GetValueForKey((char *)this + 72, a2, &v17);
  v5 = v17;
  if ( ValueForKey >= 0 )
  {
    ValueForKey = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v17 + 40LL))(v17, a2);
    if ( ValueForKey >= 0 )
    {
      v6 = 0;
      v7 = 0;
      v8 = (_DWORD *)((char *)this + 72);
      while ( *v8 != *(_DWORD *)a2 )
      {
        ++v7;
        v8 += 4;
        if ( v7 >= 0x100 )
          goto LABEL_8;
      }
      *((_DWORD *)this + 4 * v7 + 18) = *((_DWORD *)this + 1042);
      v6 = 1;
LABEL_8:
      ValueForKey = v6 == 0 ? 0x80004005 : 0;
      if ( v6 )
      {
        v9 = *(_DWORD *)a2;
        v10 = *((_DWORD *)this + 2068);
        if ( *(_DWORD *)a2 == v10 )
          goto LABEL_20;
        v11 = 0;
        v12 = (_DWORD *)((char *)this + 4176);
        while ( *v12 != v9 )
        {
          ++v11;
          v12 += 4;
          if ( v11 >= 0x100 )
            goto LABEL_20;
        }
        v13 = 0;
        v14 = 0LL;
        v15 = (_DWORD *)((char *)this + 4176);
        while ( *v15 != v9 )
        {
          v14 = (unsigned int)(v14 + 1);
          v15 += 4;
          if ( (unsigned int)v14 >= 0x100 )
            goto LABEL_19;
        }
        *((_DWORD *)this + 4 * v14 + 1044) = v10;
        v13 = 1;
LABEL_19:
        ValueForKey = v13 == 0 ? 0x80004005 : 0;
        if ( v13 )
LABEL_20:
          ValueForKey = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 40LL))(
                          *((_QWORD *)this + 5),
                          a2);
      }
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)ValueForKey;
}
