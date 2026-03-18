/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01D5B90
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C01E1880 (NtUserfnDDEINIT.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 Prop; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rbx
  bool v7; // zf
  TOKEN_TYPE v8; // eax
  void *v9; // rcx

  v1 = HMValidateHandleNoSecure(a1, 1);
  if ( v1 )
  {
    Prop = GetProp(v1, atomDDEImp, 1);
    v6 = Prop;
    if ( Prop )
    {
      v7 = *(_WORD *)(Prop + 88) == (unsigned __int16)v4;
      *(_WORD *)(Prop + 88) -= v4;
      if ( v7 )
      {
        InternalRemoveProp(v5, v3, v4);
        if ( !*(_WORD *)(v6 + 90) )
        {
          v8 = SeTokenType(*(PACCESS_TOKEN *)(v6 + 32));
          v9 = *(void **)(v6 + 32);
          if ( v8 == TokenPrimary || v9 )
            ObfDereferenceObject(v9);
          Win32FreePool(v6);
        }
      }
    }
  }
}
