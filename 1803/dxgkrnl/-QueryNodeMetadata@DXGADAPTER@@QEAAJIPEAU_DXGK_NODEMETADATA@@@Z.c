/*
 * XREFs of ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C014DE50
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::QueryNodeMetadata(DXGADAPTER *this, __int64 a2, struct _DXGK_NODEMETADATA *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // rbp
  unsigned int v7; // eax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int16 *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax

  v4 = WORD1(a2);
  v5 = 1;
  v6 = (unsigned __int16)a2;
  if ( *((int *)this + 526) < 0x2000 )
    v7 = 1;
  else
    v7 = *((_DWORD *)this + 62);
  if ( v4 >= v7 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v8[3] = this;
    v8[4] = v4;
    if ( *((int *)this + 526) >= 0x2000 )
      v5 = *((_DWORD *)this + 62);
    v9 = v8;
    v8[5] = v5;
    goto LABEL_8;
  }
  v11 = (unsigned __int16 *)(*((_QWORD *)this + 295) + 352LL * v4);
  if ( (unsigned __int16)a2 >= (unsigned int)*v11 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v12[3] = this;
    v12[4] = v6;
    v12[5] = *v11;
    v9 = v12;
LABEL_8:
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  v13 = *((_QWORD *)v11 + 3);
  if ( v13 )
  {
    *a3 = *(struct _DXGK_NODEMETADATA *)(74 * v6 + v13);
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(this, 0LL, a3);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdWarning(v14);
    return 3221225659LL;
  }
}
