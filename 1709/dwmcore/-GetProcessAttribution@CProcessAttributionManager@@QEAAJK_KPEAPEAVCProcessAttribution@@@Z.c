/*
 * XREFs of ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180007F80
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180009EA0 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x18009C7CC (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 * Callees:
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180007DA8 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@0AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180009E0C (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Insert_n@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@2@_KAEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@Z @ 0x1800BD4A8 (-_Insert_n@-$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V-$allocator@PEAUPr.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CProcessAttributionManager::GetProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        __int64 a3,
        struct CProcessAttribution **a4)
{
  unsigned int v8; // esi
  const struct CProcessAttributionManager::ProcessAttributionRecord **v9; // rbx
  const struct CProcessAttributionManager::ProcessAttributionRecord *v10; // rdi
  volatile signed __int32 *v11; // rax
  int ProcessAttribution; // eax
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // rcx
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  unsigned int v22; // [rsp+20h] [rbp-79h]
  const struct CProcessAttributionManager::ProcessAttributionRecord **v23; // [rsp+30h] [rbp-69h] BYREF
  __int128 v24; // [rsp+38h] [rbp-61h]
  _BYTE v25[16]; // [rsp+50h] [rbp-49h] BYREF
  _OWORD v26[5]; // [rsp+60h] [rbp-39h] BYREF
  int v27; // [rsp+B0h] [rbp+17h]
  __int64 v28; // [rsp+110h] [rbp+77h] BYREF

  v28 = a3;
  v8 = 0;
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &v23,
    *(_QWORD *)this,
    *((_QWORD *)this + 1),
    &v28);
  v9 = v23;
  if ( v23 == *((const struct CProcessAttributionManager::ProcessAttributionRecord ***)this + 1)
    || (v10 = *v23, *(_QWORD *)*v23 != a3) )
  {
    v13 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    v14 = v13;
    if ( v13 )
    {
      v15 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
      *((_QWORD *)v13 + 14) = 0LL;
      *((_DWORD *)v13 + 31) = v15 >> 3;
      v24 = 0uLL;
      *((_DWORD *)v13 + 30) = a2;
      *(_OWORD *)(v13 + 8) = 0uLL;
      *((_DWORD *)v13 + 6) = 0;
      memset_0(v26, 0, 0x54uLL);
      v16 = v26[1];
      v17 = v27;
      *(_OWORD *)(v14 + 28) = v26[0];
      *(_QWORD *)v14 = a3;
      v18 = v26[2];
      *(_OWORD *)(v14 + 44) = v16;
      v19 = v26[3];
      *(_OWORD *)(v14 + 60) = v18;
      v20 = v26[4];
      *(_OWORD *)(v14 + 76) = v19;
      *(_OWORD *)(v14 + 92) = v20;
      *((_DWORD *)v14 + 27) = v17;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v14 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xE4u);
      return v8;
    }
    std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Insert_n(this, v25, v9);
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                           this,
                           a2,
                           (const struct CProcessAttributionManager::ProcessAttributionRecord *)v14,
                           1,
                           a4);
    v8 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *((_QWORD *)v14 + 14) = *a4;
      *((_DWORD *)v14 + 31) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v22 = 235;
    goto LABEL_16;
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)v10 + 14);
  if ( !v11 )
  {
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(this, a2, v10, 1, a4);
    v8 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *((_QWORD *)v10 + 14) = *a4;
      *((_DWORD *)v10 + 31) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v22 = 216;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProcessAttribution, v22);
    return v8;
  }
  *a4 = (struct CProcessAttribution *)v11;
  _InterlockedIncrement(v11 + 2);
  return v8;
}
