/*
 * XREFs of ?Delete@DXGVAIL@@UEAAJPEAX@Z @ 0x1C01E6740
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGVAILOBJECT@@QEAA@XZ @ 0x1C01E5AC4 (--1DXGVAILOBJECT@@QEAA@XZ.c)
 */

__int64 __fastcall DXGVAIL::Delete(DXGVAIL *this, DXGVAILOBJECT *a2)
{
  if ( a2 )
    DXGVAILOBJECT::~DXGVAILOBJECT(a2);
  return 0LL;
}
