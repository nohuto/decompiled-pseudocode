/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01B9814
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0116EE0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     GetAppImeCompatFlags @ 0x1C00CE968 (GetAppImeCompatFlags.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  char v6; // [rsp+70h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(gpqForeground + 104LL) )
  {
    v4 = *((_QWORD *)a1 + 2);
    if ( (GetAppImeCompatFlags(v4, gpqForeground, a3, a4) & 0x400000) == 0 )
    {
      if ( *(_WORD *)(v4 + 608) <= 0x400u )
      {
        SetSystemInputSource(&v6);
        PostInputMessage(gpqForeground, 0LL, 0, 257LL, 229LL, 0, 0LL, 0LL, 0, &v6, 0LL, 0LL);
      }
      else
      {
        v5 = *(_QWORD *)(v4 + 752);
        if ( v5 )
        {
          if ( *(char *)(v5 + 60) >= 0 )
            PostMessage(v5, 647LL, 0x20uLL, 0LL);
        }
      }
    }
  }
}
