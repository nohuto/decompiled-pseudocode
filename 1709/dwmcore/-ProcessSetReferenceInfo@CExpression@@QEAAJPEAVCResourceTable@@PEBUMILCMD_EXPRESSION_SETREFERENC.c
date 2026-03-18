/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x1800A82DC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800A80C0 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _QWORD *a4)
{
  int v4; // edx
  unsigned __int64 v8; // rcx
  SIZE_T v9; // rax
  LPVOID v10; // rax
  unsigned int i; // edx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(CExpression *); // rax
  signed int v16; // eax
  unsigned int v17; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_DWORD *)a3 + 2);
  if ( v4 && (v8 = *((unsigned int *)a3 + 3), (_DWORD)v8) && *((_DWORD *)this + 96) + v4 <= (unsigned int)v8 )
  {
    if ( !*((_QWORD *)this + 47) )
    {
      v9 = 24LL * *((unsigned int *)a3 + 3);
      if ( !is_mul_ok(v8, 0x18uLL) )
        v9 = -1LL;
      if ( !v9 )
        v9 = 1LL;
      v10 = HeapAlloc(WPF::g_processHeap, 0, v9);
      if ( !v10 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      *((_QWORD *)this + 47) = v10;
    }
    for ( i = 0; i < *((_DWORD *)a3 + 2); ++*((_DWORD *)this + 96) )
    {
      ++i;
      v12 = *(_OWORD *)a4;
      a4 += 3;
      v13 = 3LL * *((unsigned int *)this + 96);
      v14 = *((_QWORD *)this + 47);
      *(_OWORD *)(v14 + 8 * v13) = v12;
      *(_QWORD *)(v14 + 8 * v13 + 16) = *(a4 - 1);
    }
    if ( ((*((_BYTE *)this + 192) & 2) != 0 || *((_QWORD *)this + 49))
      && ((v15 = *(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)this + 200LL),
           v15 != CExpression::RegisterSourcesForOwner)
        ? (v16 = v15(this))
        : (v16 = CExpression::RegisterSourcesForOwner(this)),
          v17 = v16,
          v16 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xD3u);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v17 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0xB7u);
  }
  return v17;
}
