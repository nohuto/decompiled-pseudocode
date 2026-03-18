/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00E1E4C
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D9110 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(DXGADAPTER **this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  DXGADAPTER *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v14; // rax
  _QWORD *v15; // rax

  v5 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a3 || !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 5892LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a3 && a4 && (unsigned int)v5 < *((_DWORD *)this + 20) )
  {
    v9 = this[14];
    v10 = -1073741275;
    v11 = 3760 * v5;
    v12 = *((_DWORD *)v9 + 940 * v5 + 276);
    if ( v12 != -1 && *(_DWORD *)((char *)v9 + v11 + 1108) != -1 )
    {
      *a3 = v12 == 1;
      v10 = 0;
      *a4 = *(_DWORD *)((char *)this[14] + v11 + 1108) == 1;
    }
    return v10;
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v15[4] = a4;
    v15[3] = a3;
    v15[5] = v5;
    v15[6] = *((unsigned int *)this + 20);
    v15[7] = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
}
