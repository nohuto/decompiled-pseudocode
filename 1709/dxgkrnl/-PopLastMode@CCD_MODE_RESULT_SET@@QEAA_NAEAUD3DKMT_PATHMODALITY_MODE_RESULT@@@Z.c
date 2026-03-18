/*
 * XREFs of ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C01F77D0
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C01C2A90 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002D2A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall CCD_MODE_RESULT_SET::PopLastMode(CCD_MODE_RESULT_SET *this, struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx

  if ( !*((_DWORD *)this + 12) )
    return 0;
  if ( *((CCD_MODE_RESULT_SET **)this + 2) == (CCD_MODE_RESULT_SET *)((char *)this + 16) )
  {
    v5 = 0LL;
LABEL_6:
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
    goto LABEL_7;
  }
  v5 = *((_QWORD *)this + 3) - 8LL;
  if ( *((_QWORD *)this + 3) == 8LL )
    goto LABEL_6;
LABEL_7:
  v7 = *((_DWORD *)this + 12) - 1;
  *((_DWORD *)this + 12) = v7;
  v8 = 96LL * (v7 % 0x32);
  *(_OWORD *)a2 = *(_OWORD *)(v8 + v5 + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v8 + v5 + 40);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(v8 + v5 + 56);
  *((_OWORD *)a2 + 3) = *(_OWORD *)(v8 + v5 + 72);
  *((_OWORD *)a2 + 4) = *(_OWORD *)(v8 + v5 + 88);
  *((_OWORD *)a2 + 5) = *(_OWORD *)(v8 + v5 + 104);
  if ( *((_DWORD *)this + 12) == 50 * (*((_DWORD *)this + 12) / 0x32u) )
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)this,
           v5) )
    {
      v9 = (_QWORD *)(v5 + 8);
      v10 = *(_QWORD *)(v5 + 8);
      if ( *(_QWORD *)(v10 + 8) != v5 + 8 || (v11 = *(_QWORD **)(v5 + 16), (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v9 = 0LL;
      *(_QWORD *)(v5 + 16) = 0LL;
      --*((_QWORD *)this + 4);
    }
    if ( v5 )
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  }
  return 1;
}
