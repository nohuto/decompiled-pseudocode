/*
 * XREFs of ?GetCurrentSpatialAudioEncoderId@SpatialAudioDevicePropertyReader@@UEAAJPEAU_GUID@@@Z @ 0x1800D1A60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioEncoderId(
        SpatialAudioDevicePropertyReader *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  __int64 v8; // rcx
  int v10; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  int *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)this + 53) + 48LL))(
           *((_QWORD *)this + 53),
           a2);
    if ( v5 < 0 )
      return (unsigned int)(*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, struct _GUID *))(*(_QWORD *)this + 200LL))(
                             this,
                             a2);
    v8 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&a2->Data1 )
      v8 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)a2->Data4;
    if ( !v8 )
      return (unsigned int)(*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, struct _GUID *))(*(_QWORD *)this + 200LL))(
                             this,
                             a2);
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioEncoderId");
      v16 = 0;
      v19 = 0;
      v14 = &v10;
      v17 = &v11;
      v10 = 807;
      v15 = 4;
      v11 = -2147024809;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v6, v7, 5u, &pData);
    }
  }
  return (unsigned int)v5;
}
