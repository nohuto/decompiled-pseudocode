/*
 * XREFs of ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B020
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
  void *v4; // rcx

  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4 )
  {
    v4 = (void *)((unsigned __int64)this & -(__int64)(this != (Microsoft::BamoImpl::ConnectionIndirector *)16));
  }
  else
  {
    v4 = 0LL;
  }
  *a3 = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)this - 2);
  return v4 == 0LL ? 0x80004002 : 0;
}
