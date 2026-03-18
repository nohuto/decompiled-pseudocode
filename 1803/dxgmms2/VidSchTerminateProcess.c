/*
 * XREFs of VidSchTerminateProcess @ 0x1C00748B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0005AF4 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0005B14 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VidSchTerminateProcess(PVOID *P, __int64 a2)
{
  unsigned int v3; // edi
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v5; // rax
  __int64 v7; // rax

  if ( P )
  {
    v3 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        ++v3;
        v5 = DXGGLOBAL::GetGlobal();
      }
      while ( v3 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v5) );
    }
    ExFreePoolWithTag(P[3], 0);
    ExFreePoolWithTag(P[327], 0);
    if ( (PVOID *)g_pVidSchSystemProcess == P )
      g_pVidSchSystemProcess = 0LL;
    ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
