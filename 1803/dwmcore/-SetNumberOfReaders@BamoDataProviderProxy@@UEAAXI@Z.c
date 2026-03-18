/*
 * XREFs of ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x180169F50
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168884 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoDataProviderProxy::SetNumberOfReaders(BamoDataProviderProxy *this, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // r8
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Microsoft::BamoImpl::BamoConnectionImpl *v10; // [rsp+60h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v10,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  v4 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 10) = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  if ( *(_QWORD *)(v5 + 40) )
  {
    v8[0] = *(unsigned int *)(v4 + 36);
    v8[1] = *((unsigned int *)this + 8);
    v6 = CoreUICallSend(*(_QWORD *)(v5 + 48), v8, 2LL, 0LL, 4, &unk_180277D35);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x326, v7, (const char *)v6);
      __debugbreak();
    }
  }
  if ( v10 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v10);
}
