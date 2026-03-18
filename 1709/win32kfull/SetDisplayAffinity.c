/*
 * XREFs of SetDisplayAffinity @ 0x1C0212C94
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C01EC280 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02129AC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C0212C48 (GetDisplayAffinity.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  int v5; // edi
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( (*((_BYTE *)a1 + 67) & 0x20) == 0 )
    ComposeWindowIfNeeded(a1, 1);
  if ( (unsigned int)GetDisplayAffinity((__int64)a1, &v7) )
  {
    if ( (_DWORD)v3 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v3, 5) )
        return v2;
    }
    else
    {
      InternalRemoveProp((__int64)a1, (unsigned __int16)atomDispAffinity, 1LL);
    }
    v2 = 1;
    v5 = v3 & 1;
    if ( (v7 & 1) != v5 )
    {
      v2 = ChangeWindowTreeProtection(a1, v5);
      if ( !v2 )
        InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v7, 5);
    }
  }
  return v2;
}
