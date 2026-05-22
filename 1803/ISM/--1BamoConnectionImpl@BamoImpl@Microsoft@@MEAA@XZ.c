/*
 * XREFs of ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18001A5B4
 * Callers:
 *     ??_GBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x18001A580 (--_GBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 *     ??_GdataproviderBamoConnection@@UEAAPEAXI@Z @ 0x18001BE60 (--_GdataproviderBamoConnection@@UEAAPEAXI@Z.c)
 *     ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x18001EB90 (--_GInputSystemServerConnection@@UEAAPEAXI@Z.c)
 *     ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x180027470 (--_GMPCManagerClientConnection@@UEAAPEAXI@Z.c)
 *     ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x180052C40 (--_EMPCManagerConnection@@UEAAPEAXI@Z.c)
 *     ??_GAnimationDataProviderConnection@@UEAAPEAXI@Z @ 0x18008F690 (--_GAnimationDataProviderConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoConnectionImpl::~BamoConnectionImpl(
        Microsoft::BamoImpl::BamoConnectionImpl *this)
{
  const char *v2; // r9
  void *v3; // rdi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &Microsoft::BamoImpl::BamoConnectionImpl::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    v6 = _InterlockedDecrement(v5 + 2);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        v2);
      JUMPOUT(0x18001A68ELL);
    }
    if ( !v6 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
