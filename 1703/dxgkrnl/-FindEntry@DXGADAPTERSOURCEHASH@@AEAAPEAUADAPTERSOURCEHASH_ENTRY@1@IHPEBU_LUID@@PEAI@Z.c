/*
 * XREFs of ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C0195864
 * Callers:
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0118290 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0195960 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C00A648C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::FindEntry(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        __int64 a3,
        const struct _LUID *a4,
        unsigned int *a5)
{
  __int64 v5; // rbx
  unsigned int ActualBufferSize; // eax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  int v10; // r11d
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rax
  _DWORD *v16; // r10
  int v17; // r8d
  _DWORD *v18; // rcx
  BOOL v19; // edx

  v5 = a2;
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40));
  v12 = *(unsigned int *)(v11 + 60);
  v13 = ActualBufferSize >> 4;
  if ( ActualBufferSize >> 4 > 1 << v12 )
    v13 = 1 << v12;
  if ( (unsigned int)v5 >= v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v7, v8, v9);
    *(_QWORD *)(v14 + 32) = v13;
    *(_QWORD *)(v14 + 24) = v5;
    WdLogEvent5_WdAssertion(v14);
    return 0LL;
  }
  v16 = (_DWORD *)*v7;
  v17 = 0;
  v18 = (_DWORD *)(*v7 + 16 * v5);
  if ( !v13 )
    return 0LL;
  while ( 1 )
  {
    v19 = (v18[3] & 1) == (v10 != 0);
    if ( v9 && (*v9 != *v18 || v9[1] != v18[1]) )
      v19 = 0;
    if ( a5 && *a5 != v18[2] )
      v19 = 0;
    if ( v19 )
      break;
    LODWORD(v5) = v5 + 1;
    v18 += 4;
    if ( (_DWORD)v5 == v13 )
    {
      LODWORD(v5) = 0;
      v18 = v16;
    }
    if ( ++v17 >= v13 )
      return 0LL;
  }
  return (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)v18;
}
