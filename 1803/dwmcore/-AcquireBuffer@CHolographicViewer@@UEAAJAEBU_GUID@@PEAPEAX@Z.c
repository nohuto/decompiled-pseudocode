/*
 * XREFs of ?AcquireBuffer@CHolographicViewer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FBF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicViewer::AcquireBuffer(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // rsi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // r9d
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v14)(_QWORD, const struct _GUID *, void **); // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v3 = this + 13;
  AcquireSRWLockShared(this + 13);
  Ptr = this[9].Ptr;
  if ( !Ptr )
  {
    v8 = (int)this[12].Ptr;
    v9 = -2005270490;
    v13 = 98;
    if ( v8 != 3 )
      v9 = -2005270527;
    v10 = v9;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  v11 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 56LL))(Ptr, 0LL, &v14);
  v9 = v11;
  if ( v11 < 0 )
  {
    v13 = 101;
    goto LABEL_9;
  }
  v11 = (**v14)(v14, a2, a3);
  v9 = v11;
  if ( v11 < 0 )
  {
    v13 = 102;
LABEL_9:
    v10 = v11;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v13);
  }
  ReleaseSRWLockShared(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return v9;
}
