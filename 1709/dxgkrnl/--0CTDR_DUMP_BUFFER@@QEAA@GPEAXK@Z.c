/*
 * XREFs of ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C01A5D44
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01A63F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     <none>
 */

CTDR_DUMP_BUFFER *__fastcall CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(CTDR_DUMP_BUFFER *this, __int64 a2, _DWORD *a3)
{
  unsigned __int16 v4; // r9
  int v5; // ecx
  __int64 v6; // rcx

  *(_DWORD *)this = 39;
  *((_WORD *)this + 10) = 0;
  *((_DWORD *)this + 6) = 0;
  v4 = 0;
  *((_QWORD *)this + 1) = a3;
  *((_DWORD *)this + 4) = 2488324;
  v5 = 0;
  do
  {
    v6 = (unsigned int)(2 * v5 + 2);
    ++v4;
    *(_DWORD *)(*((_QWORD *)this + 1) + 4 * v6) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 4 * v6 + 4) = 0;
    v5 = v4;
  }
  while ( (unsigned int)v4 < *(_DWORD *)this );
  if ( *((_DWORD *)this + 4) >= 4u )
    *a3 = *(_DWORD *)this;
  *((_DWORD *)this + 6) = 8 * *(_DWORD *)this + 8;
  return this;
}
