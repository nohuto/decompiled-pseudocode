/*
 * XREFs of ?BeginTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C007A2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        struct _MDL *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v12[3] = a2;
    v12[4] = a3;
    v12[5] = a4;
  }
  v9 = *((_QWORD *)this + 1);
  LODWORD(v10) = 0;
  if ( *(_BYTE *)(v9 + 40675) )
  {
    if ( a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
    {
      v13 = DpiMapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 192LL), a5);
      v10 = v13;
      if ( v13 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v15, v14);
        *(_QWORD *)(v16 + 24) = v10;
        WdLogEvent5_WdWarning(v16);
      }
    }
  }
  return (unsigned int)v10;
}
