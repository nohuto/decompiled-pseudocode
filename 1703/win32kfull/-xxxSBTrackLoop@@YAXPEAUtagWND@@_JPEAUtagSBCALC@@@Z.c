/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C020E870
 * Callers:
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     SystoChar @ 0x1C00B8A70 (SystoChar.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     xxxTranslateMessage @ 0x1C00F8AB8 (xxxTranslateMessage.c)
 *     xxxCallMsgFilter @ 0x1C013DDF4 (xxxCallMsgFilter.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  __int64 *v8; // rdx
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  void (__fastcall *v14)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  _QWORD v15[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v6 + 48);
    if ( v7 )
    {
      if ( (*(_DWORD *)v6 & 2) != 0 )
        SetOrClrWF(1, a1, 0x620u, 1);
      if ( gpqForeground )
      {
        v8 = *(__int64 **)(gpqForeground + 80LL);
        if ( v8 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
          {
            v9 = 33;
            if ( v8[2] == gptiCurrent )
              v8 = (__int64 *)a1;
            else
              v9 = 49;
            xxxWindowEvent(0x80000004, v8, 0, 3, v9);
          }
        }
      }
      if ( (*(_DWORD *)v6 & 4) != 0 )
        v10 = -4;
      else
        v10 = ((*(_DWORD *)v6 & 2) != 0) | 0xFFFFFFFA;
      xxxWindowEvent(0x12u, (__int64 *)a1, v10, 0, 0);
      v7(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) == a1
           && (unsigned int)xxxInternalGetMessage((__int64)v15, 0LL, 0, 0, 1u, 1u) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v15, 5) )
        {
          if ( v15[0] == *(_QWORD *)a1
            && ((unsigned int)(LODWORD(v15[1]) - 512) <= 0xE || (unsigned int)(LODWORD(v15[1]) - 256) <= 9) )
          {
            v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
            if ( !v11 || !*(_QWORD *)(v11 + 48) )
              return;
            v12 = SystoChar(v15[1], v15[3]);
            v14(a1, v12, v15[2], v13, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)v15, 0);
            xxxDispatchMessage(v15);
          }
        }
      }
    }
  }
}
