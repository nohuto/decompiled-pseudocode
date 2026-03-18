/*
 * XREFs of ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180154490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::QueryInterface(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  void *v5; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4;
  if ( v4 )
    v5 = 0LL;
  else
LABEL_8:
    v5 = (void *)((unsigned __int64)this & -(__int64)(this != (Microsoft::BamoImpl::ConnectionIndirector *)16));
  *a3 = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)this - 2);
  return v5 == 0LL ? 0x80004002 : 0;
}
