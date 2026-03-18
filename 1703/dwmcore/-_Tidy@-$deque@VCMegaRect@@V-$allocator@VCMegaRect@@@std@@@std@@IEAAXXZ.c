/*
 * XREFs of ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800BE03C
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18008F094 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180130C38 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 */

int __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // r8
  void *v6; // r8
  volatile signed __int32 **v7; // rdi
  _QWORD *v8; // rsi
  volatile signed __int32 *v9; // r8
  void **v10; // rsi
  _DWORD *v11; // r14
  volatile signed __int32 *v12; // rcx
  __int64 (__fastcall ***v15)(_QWORD, __int64); // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v4 = a1[1];
    v7 = *(volatile signed __int32 ***)(v4 + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v2)));
    v8 = v7 + 4;
    if ( v7[4] )
    {
      LODWORD(v4) = CHWDrawListEntry::ReplacePrimitive(*v7, &v15, v7 + 4, v7 + 5);
      if ( v15 )
        LODWORD(v4) = (**v15)(v15, 1LL);
    }
    if ( *v8 )
      LODWORD(v4) = (**(__int64 (__fastcall ***)(_QWORD, __int64))*v8)(*v8, 1LL);
    v9 = v7[2];
    if ( v9 )
      LODWORD(v4) = HeapFree(WPF::g_processHeap, 0, (LPVOID)v9);
    v10 = (void **)v7[1];
    if ( v10 )
    {
      v11 = v10 + 1;
      if ( v10 + 1 != *v10 )
      {
        WPF::ProcessHeapImpl::Free(*v10);
        *v10 = v11;
        *v11 = 0;
      }
      LODWORD(v4) = HeapFree(WPF::g_processHeap, 0, v10);
    }
    v12 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
      LODWORD(v4) = _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF);
      if ( (_DWORD)v4 == 1 )
        LODWORD(v4) = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 16LL))(v12, 1LL);
    }
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    v4 = a1[1];
    --v3;
    v5 = *(void **)(v4 + 8 * v3);
    if ( v5 )
      LODWORD(v4) = HeapFree(WPF::g_processHeap, 0, v5);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    LODWORD(v4) = HeapFree(WPF::g_processHeap, 0, v6);
  a1[2] = 0LL;
  a1[1] = 0LL;
  return v4;
}
