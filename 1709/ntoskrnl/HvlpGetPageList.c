/*
 * XREFs of HvlpGetPageList @ 0x1401F10AC
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401EEB70 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401EF6E0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EFD6C (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1401F1288 (HvlpInvokeGetPageListHypercall.c)
 */

__int64 __fastcall HvlpGetPageList(int a1, __int64 *a2, _DWORD *a3)
{
  int *v3; // rbx
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned __int64 v10; // rcx

  v3 = &HvlpIteratorCrashdump;
  *a2 = 0LL;
  *a3 = 0;
  if ( !a1 )
    v3 = &HvlpIteratorHibernate;
  if ( !*((_BYTE *)v3 + 2) )
    return 0LL;
  v7 = *((_QWORD *)v3 + 1);
  v8 = 261;
  if ( *(_WORD *)v3 < *(_WORD *)(v7 + 8) )
  {
LABEL_8:
    v9 = *(unsigned __int16 *)v3;
    v10 = *(_QWORD *)(v7 + 8 * v9 + 16);
    *a2 = v10 & 0xFFFFFFFFFFLL;
    *a3 = (v10 >> 40) + 1;
    *(_WORD *)v3 = v9 + 1;
  }
  else
  {
    while ( *(_QWORD *)v7 != -1LL )
    {
      HvlpInvokeGetPageListHypercall(v3);
      *(_WORD *)v3 = 0;
      if ( *(_WORD *)(v7 + 8) )
        goto LABEL_8;
    }
    return 0;
  }
  return v8;
}
