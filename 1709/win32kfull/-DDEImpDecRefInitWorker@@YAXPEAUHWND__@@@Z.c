/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01E2380
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C01EDA30 (NtUserfnDDEINIT.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 Prop; // rax
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rbx
  bool v10; // zf
  TOKEN_TYPE v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rcx

  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v4 )
  {
    v5 = (unsigned __int16)atomDDEImp;
    Prop = GetProp(v4, atomDDEImp, 1);
    v9 = Prop;
    if ( Prop )
    {
      v10 = *(_WORD *)(Prop + 88) == (unsigned __int16)v7;
      *(_WORD *)(Prop + 88) -= v7;
      if ( v10 )
      {
        InternalRemoveProp(v8, v5, v7);
        if ( !*(_WORD *)(v9 + 90) )
        {
          v11 = SeTokenType(*(PACCESS_TOKEN *)(v9 + 32));
          v14 = *(void **)(v9 + 32);
          if ( v11 == TokenPrimary || v14 )
            ObfDereferenceObject(v14);
          Win32FreePool(v9, v12, v13);
        }
      }
    }
  }
}
