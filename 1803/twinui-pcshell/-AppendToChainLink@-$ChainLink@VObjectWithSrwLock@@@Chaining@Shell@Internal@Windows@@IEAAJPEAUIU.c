/*
 * XREFs of ?AppendToChainLink@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIUnknown@@@Z @ 0x1801BEA5C
 * Callers:
 *     ?AppendToEndOf@ModalLink@@UEAAJPEAUIModalLink@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BEBE0 (-AppendToEndOf@ModalLink@@UEAAJPEAUIModalLink@Holographic@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1801B6D0C (-DeliverChainLinkEventInternal@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@.c)
 *     _lambda_980e5bf982dd22897162bb149475091f_::operator() @ 0x1801BE9C8 (_lambda_980e5bf982dd22897162bb149475091f_--operator().c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::AppendToChainLink(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  int v6; // esi
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v11[2]; // [rsp+20h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v14; // [rsp+50h] [rbp+10h] BYREF

  v4 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
  AcquireSRWLockExclusive(v4);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v5 = (**a2)(a2, &GUID_602076f4_9793_429d_a999_f951052e28e9, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL))(v14, a1);
  if ( v6 < 0 )
    goto LABEL_16;
  v11[1] = (_QWORD *)a1;
  v11[0] = &v14;
  v7 = *(_QWORD *)(a1 + 16);
  v12 = 1;
  v8 = (RTL_SRWLOCK *)(*(int *)(v7 + 4) + a1 + 16);
  AcquireSRWLockExclusive(v8);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v9 = 355LL;
LABEL_10:
    v6 = -2147024811;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)0x80070055LL);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v12 = 0;
    lambda_980e5bf982dd22897162bb149475091f_::operator()(v11);
    goto LABEL_16;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v9 = 357LL;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)(a1 + 32), &v14);
  ++*(_DWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 56) = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::DeliverChainLinkEventInternal(a1, 0);
  v6 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)v6;
}
