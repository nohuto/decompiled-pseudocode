/*
 * XREFs of NtUserfnDDEINIT @ 0x1C01EDA30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01E2380 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01E2414 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 Prop; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  TOKEN_TYPE v19; // eax
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD v31[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v32[3]; // [rsp+48h] [rbp-30h] BYREF

  v10 = 0LL;
  v11 = ValidateHwnd(a3);
  if ( v11 )
  {
    v31[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v31;
    v31[1] = v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    Prop = GetProp(v11, atomDDEImp, 1);
    if ( !Prop )
    {
      if ( *(char *)(v11 + 59) < 0 || *(char *)(v11 + 60) < 0 )
      {
LABEL_15:
        v15 = 87LL;
        goto LABEL_16;
      }
      v14 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v14;
      if ( !v14 )
      {
LABEL_6:
        v15 = 8LL;
LABEL_16:
        UserSetLastError(v15, v12);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v14 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v14 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop, v16, v17);
        goto LABEL_6;
      }
      v18 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp(v11, v18, Prop, 1) )
      {
        v19 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v20 = *(void **)(Prop + 32);
        if ( v19 == TokenPrimary || v20 )
          ObfDereferenceObject(v20);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v11, (struct tagDDEIMP *)Prop, (struct _TL *)v32) == 1 )
    {
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
              a1,
              a2,
              a3,
              a4,
              a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
      *(_QWORD *)(ThreadWin32Thread + 16) = v32[0];
      DDEImpDecRefInitWorker(*(_QWORD *)v11, v25, v26, v27);
LABEL_17:
      ThreadUnlock1(v29, v28);
      return v10;
    }
    goto LABEL_15;
  }
  return v10;
}
