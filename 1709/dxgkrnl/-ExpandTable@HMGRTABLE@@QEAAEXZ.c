/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C011D8D8
 * Callers:
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0119AB0 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // edi
  SIZE_T v5; // rax
  PVOID v6; // rax
  PVOID v7; // rsi
  unsigned int v8; // r8d
  unsigned int v9; // esi
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
  v4 = g_HmgrTableSizeIncrement + v2;
  v3 = g_HmgrTableSizeIncrement + v2;
  if ( g_HmgrTableSizeIncrement + v2 > 0xFFFFFF )
    return 0;
  v5 = 16LL * v3;
  if ( !is_mul_ok(v3, 0x10uLL) )
    v5 = -1LL;
  v6 = operator new(v5, 0x4B677844u, PagedPool);
  v7 = v6;
  if ( !v6 )
    return 0;
  memmove(v6, *(const void **)this, 16LL * *((unsigned int *)this + 4));
  if ( *(_QWORD *)this )
    ExFreePoolWithTag(*(PVOID *)this, 0);
  v8 = *((_DWORD *)this + 4);
  *(_QWORD *)this = v7;
  v9 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
  if ( v8 < v4 )
  {
    v10 = 16LL * v8;
    do
    {
      *(_DWORD *)(v10 + *(_QWORD *)this) = ++v8;
      v10 += 16LL;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) &= 0xFFFFFFE0;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) = *(_DWORD *)(v10 + *(_QWORD *)this - 8) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) &= 0xFFFFE07F;
    }
    while ( v8 < v4 );
  }
  v11 = 2LL * (v8 - 1);
  *(_DWORD *)(*(_QWORD *)this + 16LL * (v8 - 1)) = -16777216;
  if ( *((_DWORD *)this + 5) )
  {
    v11 = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *((_DWORD *)this + 4);
  }
  else
  {
    *((_DWORD *)this + 3) = 127;
  }
  if ( v8 != v4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v14 + 24) = 124LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *((_DWORD *)this + 4) = v4;
  result = 1;
  *((_DWORD *)this + 5) = v9;
  return result;
}
