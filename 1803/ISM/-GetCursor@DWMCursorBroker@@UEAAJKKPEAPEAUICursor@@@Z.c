/*
 * XREFs of ?GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x18008A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18008A9AC (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursor(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        struct ICursor **a4)
{
  int ValueForKey; // edi
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // r8
  struct ICursor *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  struct ICursor *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( __PAIR64__(a3, a2) == *((_QWORD *)this + 159) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return (unsigned int)-2147024809;
  }
  else
  {
    v8 = *((_DWORD *)this + 316);
    v9 = 0LL;
    if ( v8 )
    {
      v10 = *((_QWORD *)this + 157);
      while ( *(_DWORD *)(v10 + 24 * v9) != a2 || *(_DWORD *)(v10 + 24 * v9 + 4) != a3 )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v8 )
          return (unsigned int)-2147467259;
      }
      v13 = *(_OWORD *)(v10 + 24 * v9 + 8);
      ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((char *)this + 40, &v13, &v14);
      if ( ValueForKey >= 0 )
      {
        v12 = v14;
        (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v14 + 8LL))(v14);
        *a4 = v12;
      }
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  return (unsigned int)ValueForKey;
}
