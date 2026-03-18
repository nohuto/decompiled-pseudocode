/*
 * XREFs of ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A7B00
 * Callers:
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01A7BB0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C01A8024 (TdrBugcheckOnTimeout.c)
 * Callees:
 *     <none>
 */

void __fastcall TdrUpdateDbgBuffer(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v1; // rdx
  _OWORD *v2; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm1

  if ( *((_QWORD *)a1 + 355) )
  {
    if ( *((_QWORD *)a1 + 356) )
    {
      v1 = *((_QWORD *)a1 + 359);
      if ( v1 )
      {
        if ( *(_DWORD *)v1 == 1380209782 && *(_DWORD *)(v1 + 2712) == 1380209782 )
        {
          v2 = (_OWORD *)((char *)a1 + 112);
          v3 = 21LL;
          do
          {
            *(_OWORD *)v1 = *v2;
            *(_OWORD *)(v1 + 16) = v2[1];
            *(_OWORD *)(v1 + 32) = v2[2];
            *(_OWORD *)(v1 + 48) = v2[3];
            *(_OWORD *)(v1 + 64) = v2[4];
            *(_OWORD *)(v1 + 80) = v2[5];
            *(_OWORD *)(v1 + 96) = v2[6];
            v1 += 128LL;
            v4 = v2[7];
            v2 += 8;
            *(_OWORD *)(v1 - 16) = v4;
            --v3;
          }
          while ( v3 );
          *(_OWORD *)v1 = *v2;
          *(_OWORD *)(v1 + 16) = v2[1];
        }
      }
    }
  }
}
