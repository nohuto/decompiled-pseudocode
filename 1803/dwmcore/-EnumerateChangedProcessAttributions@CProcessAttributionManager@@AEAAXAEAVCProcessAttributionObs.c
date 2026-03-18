/*
 * XREFs of ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180021F30
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C1668 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 * Callees:
 *     ?erase@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@@Z @ 0x18001F430 (-erase@-$vector@PEAURecord@CProcessAttributionManager@@V-$allocator@PEAURecord@CProcessAttributi.c)
 *     _lambda_365183fea5c3529ee8e4714511b90111_::_lambda_invoker_cdecl_ @ 0x180022650 (_lambda_365183fea5c3529ee8e4714511b90111_--_lambda_invoker_cdecl_.c)
 *     _lambda_1ad8a99b1a304049ee0ef5516b77aadc_::_lambda_invoker_cdecl_ @ 0x180022680 (_lambda_1ad8a99b1a304049ee0ef5516b77aadc_--_lambda_invoker_cdecl_.c)
 *     _lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ @ 0x180022760 (_lambda_bc2aba7ba829d575f491599aa9d39211_--_lambda_invoker_cdecl_.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
        void ***this,
        struct CProcessAttributionObserver *a2,
        void *a3,
        void (__high *a4)(void *, unsigned int, unsigned __int64, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))
{
  struct CProcessAttributionObserver *v4; // rsi
  void **v6; // rdi
  _QWORD *v7; // rbx
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // r12
  _DWORD *v11; // r13
  unsigned int v12; // ebp
  int v13; // r15d
  int v14; // r11d
  bool v15; // zf
  bool v16; // r14
  bool v17; // r15
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // r9d
  _BYTE *v22; // r13
  bool v23; // [rsp+30h] [rbp-F8h]
  bool v24; // [rsp+31h] [rbp-F7h]
  bool v25; // [rsp+32h] [rbp-F6h]
  bool v26; // [rsp+34h] [rbp-F4h]
  char *Src; // [rsp+48h] [rbp-E0h]
  __int64 v32; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v33[96]; // [rsp+70h] [rbp-B8h] BYREF

  v4 = a2;
  memset_0(v33, 0, 0x54uLL);
  v6 = *this;
  v7 = (_QWORD *)*((_QWORD *)v4 + 2);
  Src = (char *)(v7 + 1);
  while ( v7 != *((_QWORD **)v4 + 3) )
  {
    v8 = *v6;
    v9 = (_DWORD *)*v7;
    v10 = *(_QWORD *)*v6;
    v11 = (_DWORD *)*((_QWORD *)*v6 + 14);
    if ( *(_QWORD *)*v7 == v10 )
    {
      v12 = v8[30];
      if ( v11 )
      {
        Src += 8;
        ++v6;
        ++v7;
        v13 = v9[6];
        v14 = v11[10];
        v4 = a2;
        v26 = v9[3] != v11[7];
        v12 = v8[30];
        v23 = v9[4] != v11[8];
        v15 = v9[5] == v11[9];
        v16 = v9[2] != v11[6];
        *(_OWORD *)(v9 + 2) = *(_OWORD *)(v11 + 6);
        v24 = !v15;
        v9[6] = v11[10];
        v15 = v13 == v14;
        v17 = v26;
        v25 = !v15;
      }
      else
      {
        v16 = v9[2] != v8[2];
        v17 = v9[3] != v8[3];
        v23 = v9[4] != v8[4];
        v24 = v9[5] != v8[5];
        v25 = v9[6] != v8[6];
        operator delete(v9, 0x70uLL);
        memmove(v7, Src, *((_QWORD *)v4 + 3) - (_QWORD)Src);
        *((_QWORD *)v4 + 3) -= 8LL;
        if ( --*((_DWORD *)*v6 + 31) )
        {
          ++v6;
        }
        else
        {
          operator delete(*v6, 0x80uLL);
          v6 = (void **)*std::vector<CProcessAttributionManager::Record *>::erase((__int64)this, &v32, (__int64)v6);
        }
      }
      v18 = v16 | 2;
      if ( !v17 )
        v18 = v16;
      v19 = v18 | 4;
      if ( !v23 )
        v19 = v18;
      v20 = v19 | 8;
      if ( !v24 )
        v20 = v19;
      v21 = v20 | 0x10;
      if ( !v25 )
        v21 = v20;
      if ( v21 )
      {
        if ( v11 )
          v22 = v11 + 11;
        else
          v22 = v33;
        if ( (char *)a4 == (char *)lambda_365183fea5c3529ee8e4714511b90111_::_lambda_invoker_cdecl_ )
        {
          lambda_365183fea5c3529ee8e4714511b90111_::_lambda_invoker_cdecl_(a3, v12, v10);
        }
        else if ( (char *)a4 == (char *)lambda_1ad8a99b1a304049ee0ef5516b77aadc_::_lambda_invoker_cdecl_ )
        {
          lambda_1ad8a99b1a304049ee0ef5516b77aadc_::_lambda_invoker_cdecl_(a3, v12, v10);
        }
        else if ( (char *)a4 == (char *)lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ )
        {
          lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_((_DWORD)a3, v12, v10, v21, (__int64)v22);
        }
        else
        {
          ((void (__fastcall *)(void *, _QWORD, __int64))a4)(a3, v12, v10);
        }
      }
    }
    else
    {
      ++v6;
    }
  }
}
