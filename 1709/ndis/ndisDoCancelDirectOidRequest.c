/*
 * XREFs of ndisDoCancelDirectOidRequest @ 0x1C0043720
 * Callers:
 *     NdisCancelDirectOidRequest @ 0x1C0042530 (NdisCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0058F20 (ndisFCancelDirectOidRequestInternal.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C0071374 (ndisSetBusyAsync.c)
 */

void __fastcall ndisDoCancelDirectOidRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  bool v6; // bp
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // al
  _QWORD *v10; // r13
  __int64 v11; // r14
  char v12; // bl
  _DWORD *v13; // rax
  unsigned __int8 v14; // al
  __int64 v15; // rbx
  _DWORD v16[18]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]
  _DWORD *v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  if ( a2 )
  {
    v6 = ndisReferenceRefEx((PKSPIN_LOCK)(a2 + 320), 4u, &v18);
    if ( !v6 )
      goto LABEL_27;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      if ( *(_QWORD *)(v7 + 312) )
        break;
      v8 = (KSPIN_LOCK *)(v4 + 144);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      v10 = (_QWORD *)(v4 + 152);
      v11 = *(_QWORD *)(v4 + 848);
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      NewIrql = v9;
      *(_DWORD *)(v4 + 160) = 2307633;
      v12 = *(_BYTE *)v11;
      v18 = (_DWORD *)(v4 + 160);
      ndisDereferenceRef((PKSPIN_LOCK)(v4 + 320));
      v6 = 0;
      if ( v12 == 5 )
      {
        v4 = v11;
        v6 = ndisReferenceRefEx((PKSPIN_LOCK)(v11 + 320), 4u, v16);
        if ( !v6 )
          v4 = 0LL;
      }
      else
      {
        v4 = 0LL;
        a1 = v11;
      }
      v13 = v18;
      *v10 = 0LL;
      *v13 = 0;
      KeReleaseSpinLock(v8, NewIrql);
      if ( !v4 )
        goto LABEL_14;
    }
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_q(0x88u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v4);
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 312))(*(_QWORD *)(v4 + 24), a3);
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_q(0x89u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v4);
  }
LABEL_14:
  if ( a1 )
  {
    v14 = *(_BYTE *)(a1 + 32);
    if ( (v14 > 6u || v14 == 6 && *(_BYTE *)(a1 + 33))
      && *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 256LL)
      && (!*(_QWORD *)(a1 + 4480) || (unsigned __int8)ndisSetBusyAsync(a1, 1, 51, a3, 0)) )
    {
      v15 = *(_QWORD *)(a1 + 3784);
      if ( (unsigned __int8)byte_1C0098752 >= 4u )
        WPP_SF_q(0xF6u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
      (*(void (__fastcall **)(_QWORD, __int64))(v15 + 256))(*(_QWORD *)(a1 + 24), a3);
      if ( (unsigned __int8)byte_1C0098752 >= 4u )
        WPP_SF_q(0xF7u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
      if ( *(_QWORD *)(a1 + 4480) )
        ndisClearBusy(a1, 1LL, 51LL);
    }
  }
LABEL_27:
  if ( v6 )
    ndisDereferenceRef((PKSPIN_LOCK)(v4 + 320));
}
