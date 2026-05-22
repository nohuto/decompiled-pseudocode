/*
 * XREFs of ?GetCursor@MobileCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x18002FC30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18002614C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::GetCursor(
        MobileCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        struct ICursor **a4)
{
  unsigned int v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rcx
  int ValueForKey; // eax
  __int64 v14; // rcx
  struct ICursor *v15; // rbx
  unsigned int v16[6]; // [rsp+30h] [rbp-18h] BYREF
  struct ICursor *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  if ( __PAIR64__(a3, a2) == *((_QWORD *)this + 166) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v7 = *((_DWORD *)this + 330);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *((_QWORD *)this + 164);
    while ( *(_DWORD *)(v9 + 24 * v8) != a2 || *(_DWORD *)(v9 + 24 * v8 + 4) != a3 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        goto LABEL_12;
    }
    *(_OWORD *)v16 = *(_OWORD *)(v9 + 24 * v8 + 8);
    ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((_DWORD *)this + 24, v16, &v17);
    v10 = ValueForKey;
    if ( ValueForKey >= 0 )
    {
      v15 = v17;
      (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v17 + 8LL))(v17);
      *a4 = v15;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 283, ValueForKey);
    }
  }
  else
  {
LABEL_12:
    v10 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 133, 5);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 282, 5);
    }
  }
  return v10;
}
