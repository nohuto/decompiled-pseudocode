/*
 * XREFs of ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C016E9F0
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::QueryNodeMetadata(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_NODEMETADATA *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rbp
  unsigned int v8; // eax
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int16 *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax

  v5 = WORD1(a2);
  v6 = 1;
  v7 = (unsigned __int16)a2;
  if ( *((int *)this + 486) < 0x2000 )
    v8 = 1;
  else
    v8 = *((_DWORD *)this + 62);
  if ( (unsigned int)v5 >= v8 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v9[3] = this;
    v9[4] = (unsigned int)v5;
    if ( *((int *)this + 486) >= 0x2000 )
      v6 = *((_DWORD *)this + 62);
    v10 = v9;
    v9[5] = v6;
    goto LABEL_8;
  }
  v12 = (unsigned __int16 *)(*((_QWORD *)this + 274) + 48 * v5);
  if ( (unsigned __int16)a2 >= (unsigned int)*v12 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v13[3] = this;
    v13[4] = v7;
    v13[5] = *v12;
    v10 = v13;
LABEL_8:
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  v14 = *((_QWORD *)v12 + 3);
  if ( v14 )
  {
    *a3 = *(struct _DXGK_NODEMETADATA *)(74 * v7 + v14);
    return 0LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(this, 0LL, a3, a4);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdWarning(v15);
    return 3221225659LL;
  }
}
