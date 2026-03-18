/*
 * XREFs of ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180007BD0
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180008454 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800B74BC (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 * Callees:
 *     _lambda_1ad8a99b1a304049ee0ef5516b77aadc_::_lambda_invoker_cdecl_ @ 0x180008160 (_lambda_1ad8a99b1a304049ee0ef5516b77aadc_--_lambda_invoker_cdecl_.c)
 *     _lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ @ 0x180008240 (_lambda_bc2aba7ba829d575f491599aa9d39211_--_lambda_invoker_cdecl_.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@@Z @ 0x180124568 (-erase@-$vector@PEAURecord@CProcessAttributionManager@@V-$allocator@PEAURecord@CProcessAttributi.c)
 */

void __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
        void ***this,
        struct CProcessAttributionObserver *a2,
        void *a3,
        void (__high *a4)(void *, unsigned int, unsigned __int64, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))
{
  struct CProcessAttributionObserver *v4; // r12
  void *v5; // r15
  void (__high *v7)(void *, unsigned int, unsigned __int64, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *); // r14
  _QWORD *v8; // rdi
  void **v9; // rbx
  _DWORD *v10; // rcx
  _DWORD *v11; // r12
  __int64 v12; // rsi
  _DWORD *v13; // r13
  unsigned int v14; // ebp
  int v15; // esi
  int v16; // ebp
  int v17; // r14d
  int v18; // r15d
  int v19; // r11d
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v23; // r10d
  int v24; // ecx
  bool v25; // al
  bool v26; // zf
  bool v27; // dl
  bool v28; // r8
  bool v29; // r9
  bool v30; // r10
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // r9d
  _BYTE *v35; // r13
  bool v36; // [rsp+30h] [rbp-108h]
  bool v37; // [rsp+31h] [rbp-107h]
  bool v38; // [rsp+32h] [rbp-106h]
  bool v39; // [rsp+33h] [rbp-105h]
  bool v40; // [rsp+34h] [rbp-104h]
  unsigned int v41; // [rsp+38h] [rbp-100h]
  char *Src; // [rsp+48h] [rbp-F0h]
  __int64 v44; // [rsp+50h] [rbp-E8h]
  _BYTE v48[16]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v49[96]; // [rsp+80h] [rbp-B8h] BYREF

  v4 = a2;
  v5 = a3;
  v7 = a4;
  memset_0(v49, 0, 0x54uLL);
  v8 = (_QWORD *)*((_QWORD *)v4 + 2);
  v9 = *this;
  Src = (char *)(v8 + 1);
  while ( v8 != *((_QWORD **)v4 + 3) )
  {
    v10 = *v9;
    v11 = (_DWORD *)*v8;
    v12 = *(_QWORD *)*v9;
    v13 = (_DWORD *)*((_QWORD *)*v9 + 14);
    v44 = v12;
    if ( *(_QWORD *)*v8 == v12 )
    {
      v14 = v10[30];
      v41 = v14;
      if ( v13 )
      {
        Src += 8;
        ++v9;
        v15 = v11[3];
        ++v8;
        v16 = v11[4];
        v17 = v11[5];
        v18 = v11[6];
        v19 = v11[2];
        v20 = v13[7];
        v21 = v13[8];
        v22 = v13[9];
        v23 = v13[10];
        v24 = v13[6];
        *(_OWORD *)(v11 + 2) = *(_OWORD *)(v13 + 6);
        v11[6] = v13[10];
        v25 = v19 != v24;
        v4 = a2;
        v26 = v15 == v20;
        v12 = v44;
        v27 = !v26;
        v26 = v16 == v21;
        v14 = v41;
        v28 = !v26;
        v26 = v17 == v22;
        v7 = a4;
        v29 = !v26;
        v26 = v18 == v23;
        v5 = a3;
        v30 = !v26;
      }
      else
      {
        v36 = v11[2] != v10[2];
        v37 = v11[3] != v10[3];
        v38 = v11[4] != v10[4];
        v39 = v11[5] != v10[5];
        v40 = v11[6] != v10[6];
        WPF::ProcessHeapImpl::Free(v11);
        v4 = a2;
        memmove(v8, Src, (*((_QWORD *)a2 + 3) - (_QWORD)Src) & 0xFFFFFFFFFFFFFFF8uLL);
        *((_QWORD *)a2 + 3) -= 8LL;
        if ( --*((_DWORD *)*v9 + 31) )
        {
          ++v9;
        }
        else
        {
          WPF::ProcessHeapImpl::Free(*v9);
          v9 = *(void ***)std::vector<CProcessAttributionManager::Record *>::erase(this, v48, v9);
        }
        v30 = v40;
        v29 = v39;
        v28 = v38;
        v27 = v37;
        v25 = v36;
      }
      v31 = v25 | 2;
      if ( !v27 )
        v31 = v25;
      v32 = v31 | 4;
      if ( !v28 )
        v32 = v31;
      v33 = v32 | 8;
      if ( !v29 )
        v33 = v32;
      v34 = v33 | 0x10;
      if ( !v30 )
        v34 = v33;
      if ( v34 )
      {
        if ( v13 )
          v35 = v13 + 11;
        else
          v35 = v49;
        if ( (char *)v7 == (char *)lambda_1ad8a99b1a304049ee0ef5516b77aadc_::_lambda_invoker_cdecl_ )
        {
          lambda_1ad8a99b1a304049ee0ef5516b77aadc_::_lambda_invoker_cdecl_(v5, v14, v12);
        }
        else if ( (char *)v7 == (char *)lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ )
        {
          lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_((_DWORD)v5, v14, v12, v34, (__int64)v35);
        }
        else
        {
          ((void (__fastcall *)(void *, _QWORD, __int64))v7)(v5, v14, v12);
        }
      }
    }
    else
    {
      v4 = a2;
      ++v9;
    }
  }
}
