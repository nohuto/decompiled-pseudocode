/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00F84AC
 * Callers:
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this)
{
  unsigned int v2; // edx
  unsigned int v3; // edi
  unsigned __int8 (__fastcall ***v4)(_QWORD, _QWORD); // rcx
  SIZE_T v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  unsigned int v8; // ebp
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 result; // al
  __int64 v13; // rax
  __int64 v14; // rax

  if ( *((_DWORD *)this + 5) && *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) != -16777216 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 63LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v2 = *((_DWORD *)this + 4);
  if ( g_HmgrTableSizeIncrement + v2 < v2 )
    return 0;
  v3 = g_HmgrTableSizeIncrement + v2;
  if ( g_HmgrTableSizeIncrement + v2 > 0xFFFFFF )
    return 0;
  v4 = (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 3);
  if ( v4 )
  {
    if ( !(**v4)(v4, v3) )
      return 0;
  }
  v5 = 16LL * v3;
  if ( !is_mul_ok(v3, 0x10uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x4B677844u, PagedPool);
  v7 = v6;
  if ( !v6 )
  {
    operator delete[](0LL);
    return 0;
  }
  memmove(v6, *(const void **)this, 16LL * *((unsigned int *)this + 4));
  operator delete[](*(void **)this);
  v8 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
  v9 = *((_DWORD *)this + 4);
  *(_QWORD *)this = v7;
  if ( v9 < v3 )
  {
    v10 = 16LL * v9;
    do
    {
      *(_DWORD *)(v10 + *(_QWORD *)this) = ++v9;
      v10 += 16LL;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) &= 0xFFFFFFE0;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) = *(_DWORD *)(v10 + *(_QWORD *)this - 8) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) &= 0xFFFFE07F;
    }
    while ( v9 < v3 );
    v7 = *(_DWORD **)this;
  }
  v11 = 2LL * (v9 - 1);
  v7[4 * v9 - 4] = -16777216;
  if ( *((_DWORD *)this + 5) )
  {
    v11 = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *((_DWORD *)this + 4);
  }
  else
  {
    *((_DWORD *)this + 3) = 127;
  }
  if ( v9 != v3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v14 + 24) = 130LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *((_DWORD *)this + 4) = v3;
  result = 1;
  *((_DWORD *)this + 5) = v8;
  return result;
}
