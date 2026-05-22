/*
 * XREFs of ?QueryInterface@OneCoreUAPInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800044C0
 * Callers:
 *     ?QueryInterface@OneCoreUAPInputHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005220 (-QueryInterface@OneCoreUAPInputHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005260 (-QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::QueryInterface(OneCoreUAPInputHost *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 16;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data4 )
      {
        (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
        *a3 = this;
        return v3;
      }
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 8;
    }
    *a3 = v6;
    return v3;
  }
  return (unsigned int)-2147024809;
}
