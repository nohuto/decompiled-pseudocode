/*
 * XREFs of ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJI@Z @ 0x1C018DF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::DestroyVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  __int64 v18; // rax

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 3)
    || (v5 = (unsigned int)a2, !*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)a2)) )
  {
    v18 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v18 + 24) = v4;
    WdLogEvent5_WdWarning(v18);
    return 3221225485LL;
  }
  _mm_lfence();
  v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)a2);
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  v9 = Current;
  if ( *(struct DXGPROCESS **)(v6 + 80) != Current && Current && (*((_BYTE *)Current + 307) & 4) == 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  _mm_lfence();
  --*((_DWORD *)this + 4);
  v11 = *((_QWORD *)this + 3);
  v12 = *(_QWORD *)(v11 + 8 * v5) + 88LL;
  v13 = *(_QWORD *)v12;
  if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || (v14 = *(_QWORD **)(*(_QWORD *)(v11 + 8 * v5) + 96LL), *v14 != v12) )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  _mm_lfence();
  LOBYTE(v13) = 1;
  v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v5);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 8LL))(v15, v13);
  v16 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 3) + 8 * v5);
  if ( v16 )
    (**v16)(v16, 1LL);
  *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v5) = 0LL;
  return 0LL;
}
