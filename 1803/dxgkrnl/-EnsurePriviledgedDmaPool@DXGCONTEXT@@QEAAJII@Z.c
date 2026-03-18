/*
 * XREFs of ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C009A53C
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00FDD94 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::EnsurePriviledgedDmaPool(DXGCONTEXT *this, int a2, int a3)
{
  int v3; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rax
  char v12; // [rsp+20h] [rbp-48h]

  v3 = 0;
  if ( !*((_QWORD *)this + 28) )
  {
    v12 = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 432LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
           *((unsigned int *)this + 90),
           *(_QWORD *)(*((_QWORD *)this + 2) + 608LL),
           this,
           v12,
           *((_DWORD *)this + 48),
           a2,
           a3,
           *((_DWORD *)this + 49),
           *((_DWORD *)this + 50));
    *((_QWORD *)this + 28) = v7;
    if ( v7 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                          + 8LL)
                                              + 440LL))(v7);
      if ( v3 < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
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
      v11 = WdLogNewEntry5_WdWarning(v8, 0LL, v9);
      v3 = -1073741801;
      *(_QWORD *)(v11 + 24) = this;
      *(_QWORD *)(v11 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v11);
    }
  }
  return (unsigned int)v3;
}
