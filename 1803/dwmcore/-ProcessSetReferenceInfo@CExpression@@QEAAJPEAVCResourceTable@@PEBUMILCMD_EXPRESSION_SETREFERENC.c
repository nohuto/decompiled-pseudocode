/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x180054EE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800548F0 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _QWORD *a4)
{
  int v6; // ecx
  unsigned __int64 v8; // r8
  SIZE_T v9; // rax
  LPVOID v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(CExpression *); // rax
  int v16; // eax
  unsigned int v17; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *((_DWORD *)a3 + 2);
  if ( v6 && (v8 = *((unsigned int *)a3 + 3), (_DWORD)v8) && v6 + *((_DWORD *)this + 100) <= (unsigned int)v8 )
  {
    if ( !*((_QWORD *)this + 49) )
    {
      v9 = 24 * v8;
      if ( !is_mul_ok(v8, 0x18uLL) )
        v9 = -1LL;
      if ( !v9 )
        v9 = 1LL;
      v10 = HeapAlloc(WPF::g_processHeap, 0, v9);
      if ( !v10 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      *((_QWORD *)this + 49) = v10;
      v6 = *((_DWORD *)a3 + 2);
    }
    v11 = 0LL;
    if ( v6 )
    {
      do
      {
        v11 = (unsigned int)(v11 + 1);
        v12 = *(_OWORD *)a4;
        a4 += 3;
        v13 = 3LL * *((unsigned int *)this + 100);
        v14 = *((_QWORD *)this + 49);
        *(_OWORD *)(v14 + 8 * v13) = v12;
        *(_QWORD *)(v14 + 8 * v13 + 16) = *(a4 - 1);
        ++*((_DWORD *)this + 100);
      }
      while ( (unsigned int)v11 < *((_DWORD *)a3 + 2) );
    }
    if ( ((*((_BYTE *)this + 208) & 2) != 0 || *((_QWORD *)this + 51))
      && ((v15 = *(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)this + 200LL),
           v15 != CExpression::RegisterSourcesForOwner)
        ? (v16 = ((__int64 (__fastcall *)(CExpression *, __int64))v15)(this, v11))
        : (v16 = CExpression::RegisterSourcesForOwner(this)),
          v17 = v16,
          v16 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xD5u);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v17 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xB9u);
  }
  return v17;
}
