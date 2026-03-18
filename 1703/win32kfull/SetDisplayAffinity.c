/*
 * XREFs of SetDisplayAffinity @ 0x1C0211780
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C01E0100 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0211494 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C0211734 (GetDisplayAffinity.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // esi
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( (*((_BYTE *)a1 + 67) & 0x20) == 0 )
    ComposeWindowIfNeeded((__int64)a1, 1);
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
