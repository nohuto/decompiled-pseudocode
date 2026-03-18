/*
 * XREFs of ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x1800B3EAC
 * Callers:
 *     ?SetTargetObjectHandle@CBaseExpression@@QEAAXI@Z @ 0x1800A1830 (-SetTargetObjectHandle@CBaseExpression@@QEAAXI@Z.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800A25F8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::FindSlotForData(char **this, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  int v6; // ebp
  char *v7; // r8
  __int64 v8; // r11
  char *v9; // rbx
  unsigned __int64 v10; // r10
  int v11; // edx
  int v12; // ecx
  struct CSparseStorage::DataInfo *result; // rax
  __int64 v14; // r14
  signed __int64 v15; // rbx
  signed __int64 v16; // rbp
  char *v17; // rax
  unsigned int v18; // r15d
  SIZE_T v19; // r8
  char *v20; // rax
  char *v21; // rbx
  SIZE_T v22; // r8
  char *v23; // rax

  v4 = a3;
  v6 = *((_DWORD *)*this + 1) & __ROR4__(1, a2);
  if ( *this == (char *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v18 = a3 + 40;
    v19 = a3 + 40;
    if ( (_DWORD)v4 == -40 )
      v19 = 1LL;
    v20 = (char *)HeapAlloc(WPF::g_processHeap, 0, v19);
    v21 = v20;
    if ( v20 )
      memset_0(v20, 0, v18);
    else
      RaiseFailFastException(0LL, 0LL, 0);
    *(_DWORD *)v21 = v18;
    *this = v21;
  }
  v7 = *this;
  v8 = *(unsigned int *)*this;
  v9 = *this + 12;
  v10 = (unsigned __int64)&(*this)[v8];
  if ( (unsigned __int64)(*this + 16) > v10 )
  {
LABEL_12:
    v14 = *(unsigned int *)v7;
    v15 = v9 - v7;
    v16 = v15 + v4 + 28;
    if ( v7 )
    {
      v17 = (char *)HeapReAlloc(WPF::g_processHeap, 0, v7, v15 + v4 + 28);
      if ( v17 )
      {
        *this = v17;
LABEL_15:
        memset_0(&(*this)[v14], 0, v16 - v14);
        *(_DWORD *)*this = v16;
        result = (struct CSparseStorage::DataInfo *)&(*this)[v15];
        *(_DWORD *)result &= 0xFF000000;
        *(_DWORD *)result |= v4 & 0xFFFFFF;
        return result;
      }
    }
    else
    {
      v22 = v15 + v4 + 28;
      if ( !v16 )
        v22 = 1LL;
      v23 = (char *)HeapAlloc(WPF::g_processHeap, 0, v22);
      *this = v23;
      if ( v23 )
        goto LABEL_15;
    }
    RaiseFailFastException(0LL, 0LL, 0);
    goto LABEL_15;
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)v9;
    v12 = HIBYTE(*(_DWORD *)v9) & 0x7F;
    if ( v12 == a2 )
      return (struct CSparseStorage::DataInfo *)v9;
    if ( !v12 )
    {
      if ( (unsigned __int64)&v9[v4 + 4] > v10 )
        goto LABEL_12;
      *(_DWORD *)v9 = v11 ^ (v4 ^ v11) & 0xFFFFFF;
      return (struct CSparseStorage::DataInfo *)v9;
    }
    if ( !v6 && (v11 & 0xFFFFFF) == (_DWORD)v4 && (__ROR4__(1, v12) & *((_DWORD *)v7 + 1)) == 0 )
      return (struct CSparseStorage::DataInfo *)v9;
    v9 += (*(_DWORD *)v9 & 0xFFFFFF) + 4;
    if ( v9 + 4 > &v7[v8] )
      goto LABEL_12;
  }
}
