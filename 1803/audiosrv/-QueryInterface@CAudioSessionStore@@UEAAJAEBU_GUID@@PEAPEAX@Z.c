/*
 * XREFs of ?QueryInterface@CAudioSessionStore@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BCB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionStore::QueryInterface(CAudioSessionStore *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&IID_IUnknown.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&IID_IUnknown.Data1 == *(_QWORD *)&a2->Data1 )
    v3 = *(_QWORD *)IID_IUnknown.Data4 - *(_QWORD *)a2->Data4;
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_QWORD *)&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99.Data1 == *(_QWORD *)&a2->Data1 )
    v4 = *(_QWORD *)GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99.Data4 - *(_QWORD *)a2->Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_8:
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *a3 = this;
    return 0LL;
  }
}
