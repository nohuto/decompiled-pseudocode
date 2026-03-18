/*
 * XREFs of ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00BC024
 * Callers:
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B9EE0 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00BB7D4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::EnsurePriviledgedDmaPool(DXGCONTEXT *this, int a2, int a3)
{
  int v3; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rax
  char v13; // [rsp+20h] [rbp-48h]

  v3 = 0;
  if ( !*((_QWORD *)this + 28) )
  {
    v13 = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 432LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
           *((unsigned int *)this + 86),
           *(_QWORD *)(*((_QWORD *)this + 2) + 592LL),
           this,
           v13,
           *((_DWORD *)this + 48),
           a2,
           a3,
           *((_DWORD *)this + 49),
           *((_DWORD *)this + 50));
    *((_QWORD *)this + 28) = v7;
    if ( v7 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL)
                                                          + 8LL)
                                              + 440LL))(v7);
      if ( v3 < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL)
                                       + 448LL))(*((_QWORD *)this + 28));
        *((_QWORD *)this + 28) = 0LL;
      }
      else
      {
        *((_DWORD *)this + 51) = a2;
        *((_DWORD *)this + 52) = a3;
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdWarning(0LL, v8, v9, v10);
      v3 = -1073741801;
      *(_QWORD *)(v12 + 24) = this;
      *(_QWORD *)(v12 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v12);
    }
  }
  return (unsigned int)v3;
}
