/*
 * XREFs of NtUserfnDDEINIT @ 0x1C01E1880
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01D5B90 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01D5C14 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int16 v13; // dx
  __int64 Prop; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  TOKEN_TYPE v18; // eax
  void *v19; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v24[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-30h] BYREF

  v10 = ValidateHwnd(a3);
  v11 = 0LL;
  v12 = v10;
  if ( v10 )
  {
    v13 = atomDDEImp;
    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v24;
    v24[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    Prop = GetProp(v10, v13, 1);
    if ( !Prop )
    {
      if ( *(char *)(v12 + 59) < 0 || *(char *)(v12 + 60) < 0 )
      {
LABEL_15:
        v16 = 87LL;
        goto LABEL_16;
      }
      v15 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v15;
      if ( !v15 )
      {
LABEL_6:
        v16 = 8LL;
LABEL_16:
        UserSetLastError(v16);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v15 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v15 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v17 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp(v12, v17, Prop, 1) )
      {
        v18 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v19 = *(void **)(Prop + 32);
        if ( v18 == TokenPrimary || v19 )
          ObfDereferenceObject(v19);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v12, (struct tagDDEIMP *)Prop, (struct _TL *)v25) == 1 )
    {
      v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
              a1,
              a2,
              a3,
              a4,
              a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v25[0];
      DDEImpDecRefInitWorker(*(_QWORD *)v12);
LABEL_17:
      ThreadUnlock1(v22, v21);
      return v11;
    }
    goto LABEL_15;
  }
  return v11;
}
