/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800A1698
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180077EA0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     memcpy_0 @ 0x18004DE8A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v3; // rsi
  int v4; // edi
  unsigned __int64 v7; // r9
  int v8; // ecx

  v3 = *(void **)a1;
  v4 = 0;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
LABEL_11:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *a3 = v3;
    return (unsigned int)v4;
  }
  v3 = 0LL;
  v7 = *(unsigned int *)(a1 + 20);
  if ( *(_DWORD *)(a1 + 20) && 0xFFFFFFFFFFFFFFFFuLL / v7 > 8 )
  {
    v3 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   8LL * (unsigned int)v7);
    if ( !v3 )
      v4 = -2147024882;
  }
  else
  {
    v4 = -2147024809;
  }
  if ( v4 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 )
      memcpy_0(v3, *(const void **)a1, (unsigned int)(8 * v8));
    goto LABEL_11;
  }
  *a3 = 0LL;
  return (unsigned int)v4;
}
