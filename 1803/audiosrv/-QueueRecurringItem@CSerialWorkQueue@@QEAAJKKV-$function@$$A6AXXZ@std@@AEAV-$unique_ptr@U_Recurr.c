/*
 * XREFs of ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18002A83C
 * Callers:
 *     ?Initialize@AudioJournal@@AEAAXXZ @ 0x18002A4E8 (-Initialize@AudioJournal@@AEAAXXZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x18002A7C4 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18002A9C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Move @ 0x18002AAA0 (std--_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_--_Move.c)
 *     ?Initialize@_RecurringTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18002AACC (-Initialize@_RecurringTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800CFC44 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSerialWorkQueue::QueueRecurringItem(
        __int64 a1,
        unsigned int a2,
        DWORD a3,
        __int64 a4,
        _RecurringTask **a5)
{
  __int64 v7; // r13
  signed int v9; // edi
  struct _TP_TIMER **v10; // rax
  unsigned int v11; // edx
  struct _TP_TIMER **v12; // rsi
  _RecurringTask *v13; // rbx
  __int64 (__fastcall ***v14)(_QWORD, _BYTE *); // rcx
  __int64 (__fastcall *v15)(_QWORD, _BYTE *); // rax
  __int64 v16; // rax
  struct _TP_TIMER *ThreadpoolTimer; // r14
  _RecurringTask *v18; // rcx
  signed int LastError; // eax
  _QWORD v21[3]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v22[56]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+58h]

  v25 = a4;
  v21[1] = -2LL;
  v7 = a2;
  v9 = 0;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v9 = CSerialWorkQueue::Initialize((PTP_POOL *)a1);
    if ( v9 >= 0 )
    {
      v10 = (struct _TP_TIMER **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v10;
      v21[0] = v10;
      if ( v10 )
      {
        *v10 = 0LL;
        v10[1] = 0LL;
        v10[2] = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      v13 = (_RecurringTask *)v12;
      v21[0] = v12;
      v9 = v12 == 0LL ? 0x8007000E : 0;
      if ( v12 )
      {
        v21[2] = v22;
        v23 = 0LL;
        v14 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
        if ( v14 )
        {
          v15 = **v14;
          if ( (char *)v15 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Move )
            v16 = std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Move(v14, v22);
          else
            v16 = v15(v14, v22);
          v23 = v16;
        }
        v9 = _RecurringTask::Initialize(v12, v22, a1);
      }
      if ( v9 >= 0 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(CSerialWorkQueue::TimerCallback, v12, (PTP_CALLBACK_ENVIRON)(a1 + 8));
        if ( ThreadpoolTimer )
        {
          v9 = 0;
        }
        else
        {
          LastError = GetLastError();
          v9 = LastError;
          if ( LastError > 0 )
            v9 = (unsigned __int16)LastError | 0x80070000;
        }
        *v12 = ThreadpoolTimer;
        if ( v9 >= 0 )
        {
          pftDueTime = (struct _FILETIME)(-10000 * v7);
          SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, a3, 0);
          if ( a5 != v21 )
          {
            v13 = 0LL;
            v18 = *a5;
            *a5 = (_RecurringTask *)v12;
            if ( v18 )
              _RecurringTask::`scalar deleting destructor'(v18, v11);
          }
        }
      }
      if ( v13 )
        _RecurringTask::`scalar deleting destructor'(v13, v11);
    }
  }
  std::_Func_class<void,>::_Tidy(a4);
  return (unsigned int)v9;
}
