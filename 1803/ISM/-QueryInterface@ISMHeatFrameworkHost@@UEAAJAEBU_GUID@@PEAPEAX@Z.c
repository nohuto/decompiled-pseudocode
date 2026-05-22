/*
 * XREFs of ?QueryInterface@ISMHeatFrameworkHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039B40
 * Callers:
 *     ?QueryInterface@ISMHeatFrameworkHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A830 (-QueryInterface@ISMHeatFrameworkHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ISMHeatFrameworkHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A840 (-QueryInterface@ISMHeatFrameworkHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::QueryInterface(
        ISMHeatFrameworkHost *this,
        const struct _GUID *a2,
        ISMHeatFrameworkHost **a3)
{
  ISMHeatFrameworkHost *v4; // rbx

  v4 = this;
  if ( !a3 )
    return 2147942487LL;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(ISMHeatFrameworkHost *))(*(_QWORD *)this + 8LL))(this);
    v4 = (ISMHeatFrameworkHost *)((char *)v4 + 16);
LABEL_9:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f47b6409_b2c8_48b0_ae4a_e20d3a64299d.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f47b6409_b2c8_48b0_ae4a_e20d3a64299d.Data4 )
  {
    (*(void (__fastcall **)(ISMHeatFrameworkHost *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_9;
  }
  return 2147500034LL;
}
