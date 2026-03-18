/*
 * XREFs of ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18004F4E8
 * Callers:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18008601C (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180086270 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::FindSlotForData(char **this, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  int v6; // r14d
  char *v7; // r8
  char *i; // rbx
  int v9; // edx
  int v10; // ecx
  struct CSparseStorage::DataInfo *result; // rax
  unsigned int v12; // ebp
  char *v13; // rbx
  __int64 v14; // r14
  signed __int64 v15; // rbx
  signed __int64 v16; // rbp
  char *v17; // rax
  SIZE_T v18; // r8
  char *v19; // rax

  v4 = a3;
  v6 = *((_DWORD *)*this + 1) & __ROR4__(1, a2);
  if ( *this == (char *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v12 = a3 + 40;
    v13 = (char *)WPF::ProcessHeapImpl::AllocClear(a3 + 40);
    if ( !v13 )
      RaiseFailFastException(0LL, 0LL, 0);
    *(_DWORD *)v13 = v12;
    *this = v13;
  }
  v7 = *this;
  for ( i = *this + 12; i + 4 <= &v7[*(unsigned int *)v7]; i += (*(_QWORD *)&v9 & 0xFFFFFFLL) + 4 )
  {
    v9 = *(_DWORD *)i;
    v10 = HIBYTE(*(_DWORD *)i) & 0x7F;
    if ( v10 == a2 )
      return (struct CSparseStorage::DataInfo *)i;
    if ( (v9 & 0x7F000000) == 0 )
    {
      if ( &i[v4 + 4] <= &v7[*(unsigned int *)v7] )
      {
        *(_DWORD *)i &= 0xFF000000;
        *(_DWORD *)i |= v4 & 0xFFFFFF;
        return (struct CSparseStorage::DataInfo *)i;
      }
      break;
    }
    if ( !v6 && (v9 & 0xFFFFFF) == (_DWORD)v4 && (__ROR4__(1, v10) & *((_DWORD *)v7 + 1)) == 0 )
      return (struct CSparseStorage::DataInfo *)i;
  }
  v14 = *(unsigned int *)v7;
  v15 = i - v7;
  v16 = v15 + v4 + 28;
  if ( !v7 )
  {
    v18 = v15 + v4 + 28;
    if ( !v16 )
      v18 = 1LL;
    v19 = (char *)HeapAlloc(WPF::g_processHeap, 0, v18);
    *this = v19;
    if ( v19 )
      goto LABEL_19;
    goto LABEL_23;
  }
  v17 = (char *)HeapReAlloc(WPF::g_processHeap, 0, v7, v15 + v4 + 28);
  if ( !v17 )
  {
LABEL_23:
    RaiseFailFastException(0LL, 0LL, 0);
    goto LABEL_19;
  }
  *this = v17;
LABEL_19:
  memset_0(&(*this)[v14], 0, v16 - v14);
  *(_DWORD *)*this = v16;
  result = (struct CSparseStorage::DataInfo *)&(*this)[v15];
  *(_DWORD *)result &= 0xFF000000;
  *(_DWORD *)result |= v4 & 0xFFFFFF;
  return result;
}
