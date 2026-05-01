/*
 * XREFs of Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53___ @ 0x180272DE8
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x180272FB8 (CreationThreadDispatcher--RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180092760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char **__fastcall Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53___(
        char **a1,
        _QWORD *a2)
{
  char *v4; // rax
  char *v5; // rbx
  volatile int *v6; // rdx
  __int64 v7; // rax

  *a1 = 0LL;
  v4 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    *((_QWORD *)v5 + 6) = *a2;
    *a2 = 0LL;
    v7 = a2[1];
    a2[1] = 0LL;
    *((_QWORD *)v5 + 7) = v7;
    *(_QWORD *)v5 = off_18033D040;
    *((_QWORD *)v5 + 1) = off_18032F710;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v6);
    *a1 = v5;
  }
  return a1;
}
