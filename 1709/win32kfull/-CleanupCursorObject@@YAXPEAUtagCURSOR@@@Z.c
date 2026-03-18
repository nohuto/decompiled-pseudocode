/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0099668
 * Callers:
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 * Callees:
 *     GreOnCURSINFODestroy @ 0x1C0099740 (GreOnCURSINFODestroy.c)
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0116C28 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 */

void __fastcall CleanupCursorObject(struct tagCURSOR *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(*((_QWORD *)a1 + 8), a2, a3);
    *((_DWORD *)a1 + 14) = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v4 = *((unsigned __int16 *)a1 + 36);
  if ( (_WORD)v4 )
  {
    UserDeleteAtom(v4);
    *((_WORD *)a1 + 36) = 0;
  }
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    DestroyAniIcon(a1);
  }
  else
  {
    GreOnCURSINFODestroy();
    v5 = *((_QWORD *)a1 + 11);
    if ( v5 )
    {
      GreDereferenceObject(v5, 0LL);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 11) = 0LL;
    }
    v6 = *((_QWORD *)a1 + 12);
    if ( v6 )
    {
      GreDereferenceObject(v6, 0LL);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v7 = *((_QWORD *)a1 + 16);
    if ( v7 )
    {
      GreDeleteObject(v7);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 16) = 0LL;
    }
    v8 = *((_QWORD *)a1 + 13);
    if ( v8 )
    {
      GreDeleteObject(v8);
      *((_QWORD *)a1 + 13) = 0LL;
    }
  }
}
